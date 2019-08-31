// CCG_expt_09View drawing
void translation1(CDC* pDC,int x1,int x2,int y1,int y2,int tx,int ty){
	x1=x1+tx;
	x2=x2+tx;
	y1=y1+ty;
	y2=y2+ty;
	pDC->MoveTo(x1,y1);
	pDC->LineTo(x2,y2);
}
void CCG_expt_09View::OnDraw(CDC* pDC)
{
	CCG_expt_09Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CRect r;
	int xorg, yorg;
	GetClientRect(&r);
	xorg = (r.right - r.left)/2;
	yorg = (r.bottom - r.top)/2;
	pDC->MoveTo(0,yorg);
	pDC->LineTo(r.right, yorg);
	pDC->MoveTo(xorg,0);
	pDC->LineTo(xorg, r.bottom);
	pDC->SetViewportOrg(xorg,yorg);
	pDC->SetMapMode(MM_LOMETRIC);

	//actual square
	int x1=300,x2=300,x3=450,x4=600,x5=600;
	int y1=300,y2=400,y3=600,y4=400,y5=300;

	CPoint pt[5];
	pt[0]=CPoint(x1,y1);
	pt[1]=CPoint(x2,y2);
	pt[2]=CPoint(x3,y3);
	pt[3]=CPoint(x4,y4);
	pt[4]=CPoint(x5,y5);	
	pDC->Polygon(pt,5);
	pDC->TextOutW(650,500,L"ORIGINAL",8);

	//translation
	int tx=-800,ty=-800;
	CPoint ptt[5];
	ptt[0]=CPoint(x1+tx,y1+ty);
	ptt[1]=CPoint(x2+tx,y2+ty);
	ptt[2]=CPoint(x3+tx,y3+ty);
	ptt[3]=CPoint(x4+tx,y4+ty);
	ptt[4]=CPoint(x5+tx,y5+ty);
	pDC->Polygon(ptt,5);
	pDC->TextOutW(-600,-600,L"TRANSLATION",11);

	//scaling
	float sx=0.5,sy=0.5;
	CPoint ptt1[5];
	ptt1[0]=CPoint(x1*sx,y1*sy);
	ptt1[1]=CPoint(x2*sx,y2*sy);
	ptt1[2]=CPoint(x3*sx,y3*sy);
	ptt1[3]=CPoint(x4*sx,y4*sy);
	ptt1[4]=CPoint(x5*sx,y5*sy);
	pDC->Polygon(ptt1,5);
	pDC->TextOutW(170,120,L"SCALING",7);

	//rotation
	int t=-60;
	double ra=t*(3.14285714/180);
	double	x1r=x1*cos(ra)-y1*sin(ra), y1r=x1*sin(ra)+y1*cos(ra),
			x2r=x2*cos(ra)-y2*sin(ra), y2r=x2*sin(ra)+y2*cos(ra),
			x3r=x3*cos(ra)-y3*sin(ra), y3r=x3*sin(ra)+y3*cos(ra),
			x4r=x4*cos(ra)-y4*sin(ra), y4r=x4*sin(ra)+y4*cos(ra),
			x5r=x5*cos(ra)-y5*sin(ra), y5r=x5*sin(ra)+y5*cos(ra);

	CPoint ptr[5];
	ptr[0]=CPoint(x1r,y1r);
	ptr[1]=CPoint(x2r,y2r);
	ptr[2]=CPoint(x3r,y3r);
	ptr[3]=CPoint(x4r,y4r);
	ptr[4]=CPoint(x5r,y5r);
	pDC->Polygon(ptr,5);
	pDC->TextOutW(400,-400,L"ROTATION",8);


}
