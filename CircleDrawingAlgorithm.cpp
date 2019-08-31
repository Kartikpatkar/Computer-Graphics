//Function in c++ using MMC
// CCG_expt_05View drawing
void plot_points(int xc,int yc,int x, int y,CDC* pDC,COLORREF b){
	pDC->SetPixel(xc+x,yc+y,b);
	pDC->SetPixel(xc-x,yc+y,b);
	pDC->SetPixel(xc-x,yc-y,b);
	pDC->SetPixel(xc+x,yc-y,b);
	pDC->SetPixel(xc+y,yc+x,b);
	pDC->SetPixel(xc-y,yc+x,b);
	pDC->SetPixel(xc-y,yc-x,b);
	pDC->SetPixel(xc+y,yc-x,b);
}
void CDA(CDC* pDC,int r,int xc,int yc,COLORREF b){
	int x=0,y=r;
	int p=1-r;
	plot_points(xc,yc,x,y,pDC,b);
	while(x<y){
		x++;
		if(p<0)
			p=p+2*(x)+1;
		else{
			y--;
			p=p+2*(x)+1-2*(y);
		}
		plot_points(xc,yc,x,y,pDC,b);
	}
}

void CCG_expt_05View::OnDraw(CDC* pDC)
{
	CCG_expt_05Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;


	//G
	COLORREF g=RGB(0,86,225);
	for(int i=9;i>=0;i--){
		CDA(pDC,i,278,163,g);
		CDA(pDC,i,202,220,g);
		CDA(pDC,i,222,244,g);
		CDA(pDC,i,279,254,g);
		CDA(pDC,i,284,228,g);
	}
	for(int i=7;i>=0;i--){
		CDA(pDC,i,259,151,g);
		CDA(pDC,i,221,156,g);
		CDA(pDC,i,201,178,g);
		CDA(pDC,i,197,191,g);
		CDA(pDC,i,196,203,g);
		CDA(pDC,i,264,220,g);
	}
	for(int i=6;i>=0;i--)
		CDA(pDC,i,240,150,g);
	for(int i=5;i>=0;i--)
		CDA(pDC,i,209,165,g);
	for(int i=10;i>=0;i--){
		CDA(pDC,i,208,235,g);
		CDA(pDC,i,247,254,g);
	}
	
	//o
	COLORREF o=RGB(234,52,49);
	for(int i=6;i>=0;i--){
		CDA(pDC,i,336,183,o);
		CDA(pDC,i,313,234,o);
	}
	for(int i=7;i>=0;i--){
		CDA(pDC,i,317,187,o);
		CDA(pDC,i,304,212,o);
		CDA(pDC,i,307,223,o);
		CDA(pDC,i,352,189,o);
	}
	for(int i=5;i>=0;i--)
		CDA(pDC,i,308,198,o);
	for(int i=9;i>=0;i--){
		CDA(pDC,i,331,246,o);
		CDA(pDC,i,354,243,o);
		CDA(pDC,i,363,205,o);
	}
	for(int i=10;i>=0;i--)
		CDA(pDC,i,364,224,o);

	//o
	COLORREF o2=RGB(255,174,10);
	for(int i=6;i>=0;i--){
		CDA(pDC,i,420,182,o2);
		CDA(pDC,i,385,210,o2);
	}
	for(int i=7;i>=0;i--){
		CDA(pDC,i,401,185,o2);
		CDA(pDC,i,390,196,o2);
	}
	for(int i=9;i>=0;i--){
		CDA(pDC,i,393,229,o2);
		CDA(pDC,i,404,244,o2);
		CDA(pDC,i,439,196,o2);
	}
	for(int i=10;i>=0;i--){
		CDA(pDC,i,433,241,o2);
		CDA(pDC,i,446,218,o2);
	}
	
	//g
	for(int i=8;i>=0;i--)
		CDA(pDC,i,484,187,g);
	for(int i=9;i>=0;i--){
		CDA(pDC,i,469,202,g);
		CDA(pDC,i,485,290,g);
		CDA(pDC,i,509,283,g);
		CDA(pDC,i,517,265,g);
	}
	for(int i=10;i>=0;i--){
		CDA(pDC,i,472,222,g);
		CDA(pDC,i,496,231,g);
		CDA(pDC,i,497,230,g);
		CDA(pDC,i,511,210,g);
		CDA(pDC,i,507,191,g);
	}
	for(int i=6;i>=0;i--){
		CDA(pDC,i,493,241,g);
		CDA(pDC,i,479,249,g);
	}
	for(int i=5;i>=0;i--){
		CDA(pDC,i,464,254,g);
		CDA(pDC,i,456,263,g);
		CDA(pDC,i,457,272,g);
	}
	for(int i=7;i>=0;i--){
		CDA(pDC,i,466,283,g);
		CDA(pDC,i,506,249,g);
		CDA(pDC,i,492,241,g);
	}
	
	//l
	COLORREF l=RGB(0,158,12);
	for(int i=10;i>=0;i--){
		CDA(pDC,i,542,156,l);
		CDA(pDC,i,543,219,l);
		CDA(pDC,i,549,242,l);
	}
	for(int i=9;i>=0;i--){
		CDA(pDC,i,541,175,l);
		CDA(pDC,i,542,196,l);
	}

	//e
	for(int i=9;i>=0;i--){
		CDA(pDC,i,595,210,o);
		CDA(pDC,i,612,197,o);
		CDA(pDC,i,575,231,o);
		CDA(pDC,i,585,243,o);
	}
	for(int i=7;i>=0;i--){
		CDA(pDC,i,597,182,o);
		CDA(pDC,i,578,186,o);
		CDA(pDC,i,569,200,o);
	}
	for(int i=6;i>=0;i--)
		CDA(pDC,i,568,214,o);
	for(int i=9;i>=0;i--)	
		CDA(pDC,i,607,247,o);
	
}
