// CCG_expt_06View drawing
void flood_fill(int x, int y, CDC *pDC, COLORREF n_color, COLORREF o_color){
	if(pDC -> GetPixel(x, y) == o_color){
		pDC ->SetPixel(x, y, n_color);
		flood_fill(x + 1, y, pDC, n_color, o_color);
		flood_fill(x, y + 1, pDC, n_color, o_color);
		flood_fill(x - 1, y, pDC, n_color, o_color);
		flood_fill(x, y - 1, pDC, n_color, o_color);	
	}
}
void plot_point(int x,int y,int xc,int yc,CDC* pDC,COLORREF c){
	pDC->SetPixel(xc+x,yc+y,c);
	pDC->SetPixel(xc-x,yc+y,c);
	pDC->SetPixel(xc-x,yc-y,c);
	pDC->SetPixel(xc+x,yc-y,c);
}	
void MPEllipseA(CDC* pDC,int rx,int ry,int xc,int yc,COLORREF c){
	int x0=0,y0=ry;
	plot_point(x0,y0,xc,yc,pDC,c);
	int _2ry2x=2*ry*ry*x0;
	int _2rx2y=2*rx*rx*y0;
	int p10=ry*ry-rx*rx*ry+(1/4)*rx*rx;
	while(_2ry2x<_2rx2y){
		if(p10<0){
			x0=x0+1;
			p10=p10+2*ry*ry*x0+ry*ry;
		}
		else{
			x0=x0+1;
			y0=y0-1;
			p10=p10+2*ry*ry*x0-2*rx*rx*y0+ry*ry;
		}
		plot_point(x0,y0,xc,yc,pDC,c);
		_2ry2x=2*ry*ry*x0;
		_2rx2y=2*rx*rx*y0;
	}
	//region 2
	int p20=ry*ry*(x0+(1/2))*(x0+(1/2))+rx*rx*(y0-1)*(y0-1)-rx*rx*ry*ry;
	while(y0!=0){
		if(p20>0){
			y0=y0-1;
			p20=p20-2*rx*rx*y0+rx*rx;
		}
		else{
			x0=x0+1;
			y0=y0-1;
			p20=p20+2*ry*ry*x0-2*rx*rx*y0+rx*rx;
		}
		plot_point(x0,y0,xc,yc,pDC,c);
	}
}
void CCG_expt_06View::OnDraw(CDC* pDC)
{
	CCG_expt_06Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	//body
	MPEllipseA(pDC,149,100,416,300,RGB(0,0,0));
	pDC->MoveTo(311,230);
	pDC->LineTo(351,390);
	pDC->MoveTo(338,215);
	pDC->LineTo(383,399);
	pDC->MoveTo(368,206);
	pDC->LineTo(416,400);
	pDC->MoveTo(398,201);
	pDC->LineTo(446,398);
	pDC->MoveTo(429,200);
	pDC->LineTo(476,390);
	pDC->MoveTo(461,203);
	pDC->LineTo(504,380);
	pDC->MoveTo(495,215);
	pDC->LineTo(532,363);
	pDC->MoveTo(531,236);
	pDC->LineTo(556,334);

	//wings
	MPEllipseA(pDC,26,51,416,149,RGB(0,0,0));
	flood_fill(416,149,pDC,RGB(192,192,192),RGB(255,255,255));
	MPEllipseA(pDC,23,48,430,152,RGB(0,0,0));
	flood_fill(448,152,pDC,RGB(192,192,192),RGB(255,255,255));

	//tail
	pDC->MoveTo(566,289);
	pDC->LineTo(716,299);
	pDC->LineTo(565,309);
	flood_fill(584,300,pDC,RGB(0,0,0),RGB(255,255,255));

	//eyes
	MPEllipseA(pDC,12,12,270,264,RGB(0,0,0));
	MPEllipseA(pDC,3,3,270,264,RGB(0,0,0));
	flood_fill(270,264,pDC,RGB(0,0,0),RGB(255,255,255));
	MPEllipseA(pDC,12,12,296,264,RGB(0,0,0));
	MPEllipseA(pDC,3,3,296,264,RGB(0,0,0));
	flood_fill(296,264,pDC,RGB(0,0,0),RGB(255,255,255));

	//antina
	pDC->MoveTo(293,244);
	pDC->LineTo(285,231);
	pDC->LineTo(269,218);
	pDC->LineTo(258,214);
	pDC->LineTo(250,214);
	MPEllipseA(pDC,4,4,246,215,RGB(0,0,0));
	flood_fill(246,215,pDC,RGB(0,0,0),RGB(255,255,255));

	pDC->MoveTo(311,229);
	pDC->LineTo(299,214);
	pDC->LineTo(280,201);
	pDC->LineTo(271,201);
	MPEllipseA(pDC,4,4,267,201,RGB(0,0,0));
	flood_fill(267,201,pDC,RGB(0,0,0),RGB(255,255,255));

	//smile
	pDC->MoveTo(265,297);
	pDC->LineTo(265,302);
	pDC->LineTo(269,308);
	pDC->LineTo(273,313);
	pDC->LineTo(278,316);
	pDC->LineTo(290,317);
	pDC->LineTo(298,313);
	pDC->LineTo(302,308);
	pDC->LineTo(304,303);
	pDC->LineTo(305,297);

}

