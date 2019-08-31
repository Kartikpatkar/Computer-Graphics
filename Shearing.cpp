// CshearingView drawing
float xshear(int x,int y,float shx){
	float x1=x+(shx*y);
	return x1;
}
float yshear(int x,int y,float shx){
	float y1=(shx*x)+y;
	return y1;
}
float xref(int y){
	y=-y;
	return y;
}
float yref(int x){
	x=-x;
	return x;
}
CPoint lineRef(int x,int y){
	return CPoint(y,x);
}
void CshearingView::OnDraw(CDC* pDC)
{
	CshearingDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CRect r;
	GetClientRect(&r);

	int Xorigin=(r.right-r.left)/2;
	int Yorigin=(r.bottom-r.top)/2;
	pDC->MoveTo(0,Yorigin);
	pDC->LineTo(r.right,Yorigin);
	pDC->MoveTo(Xorigin,0);
	pDC->LineTo(Xorigin,r.bottom);

	pDC->SetViewportOrg(Xorigin,Yorigin);
	pDC->SetMapMode(MM_LOMETRIC);

	//original
	pDC->MoveTo(300,100);
	pDC->LineTo(600,300);
	pDC->LineTo(600,100);
	pDC->LineTo(300,100);
	pDC->TextOutW(650,200,L"ORIGINAL",8);

	//REFECTION ABOUT X-AXIS
	pDC->MoveTo(300,xref(100));
	pDC->LineTo(600,xref(300));
	pDC->LineTo(600,xref(100));
	pDC->LineTo(300,xref(100));
	pDC->TextOutW(650,-200,L"REFECTION ABOUT X-AXIS",22);

	//REFECTION ABOUT Y-AXIS
	pDC->MoveTo(yref(300),100);
	pDC->LineTo(yref(600),300);
	pDC->LineTo(yref(600),100);
	pDC->LineTo(yref(300),100);
	pDC->TextOutW(-1050,200,L"REFECTION ABOUT Y-AXIS",22);

	//REFECTION ABOUT ORIGIN
	pDC->MoveTo(yref(300),xref(100));
	pDC->LineTo(yref(600),xref(300));
	pDC->LineTo(yref(600),xref(100));
	pDC->LineTo(yref(300),xref(100));
	pDC->TextOutW(-1050,-200,L"REFECTION ABOUT ORIGIN",22);

	//REFECTION ABOUT LINE X=Y
	pDC->MoveTo(lineRef(300,100));
	pDC->LineTo(lineRef(600,300));
	pDC->LineTo(lineRef(600,100));
	pDC->LineTo(lineRef(300,100));
	pDC->TextOutW(350,500,L"REFECTION ABOUT LINE X=Y",24);
  
  }
