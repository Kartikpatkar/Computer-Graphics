// CCG_expt_07View drawing
void drawMyLine(float x1,float y1,float x2,float y2,CDC* pDC,COLORREF c){
	float dx=x2-x1; 
	float dy=y2-y1;
	float x=x1;
	float y=y1;
	float steps;

	if(abs((long)dx)>abs((long)dy))
		steps=abs((long)dx);
	else
		steps=abs((long)dy);

	float x_in=dx/steps;
	float y_in=dy/steps;

	pDC->SetPixel(x,y,c);

	for(int k=0;k<steps;k++){
		x=x+x_in;
		y=y+y_in;
		pDC->SetPixel(x,y,c);
	}
}
void boundaryfill(CDC *pDC,int x,int y,COLORREF f_color,COLORREF b_color)
{
	if((pDC->GetPixel(x,y)!=f_color) && (pDC->GetPixel(x,y)!=b_color)){
		pDC->SetPixel(x,y,f_color);
		boundaryfill(pDC,x-1,y,f_color,b_color);
		boundaryfill(pDC,x+1,y,f_color,b_color);
		boundaryfill(pDC,x,y-1,f_color,b_color); 
		boundaryfill(pDC,x,y+1,f_color,b_color);
	}
}
void floodFill(CDC *pDC,int x,int y,COLORREF fillColor,COLORREF oldColor){
	if(pDC->GetPixel(x,y)==oldColor){
		pDC->SetPixel(x,y,fillColor);
		floodFill(pDC,x+1,y,fillColor,oldColor);
		floodFill(pDC,x-1,y,fillColor,oldColor);
		floodFill(pDC,x,y+1,fillColor,oldColor);
		floodFill(pDC,x,y-1,fillColor,oldColor);
	}
}
void CCG_expt_07View::OnDraw(CDC* pDC)
{
	CCG_expt_07Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	COLORREF b1=RGB(0,0,94);
	COLORREF b2=RGB(0,0,164);
	COLORREF b3=RGB(0,0,255);

	//Bird
	//head
	COLORREF r3=RGB(110,0,1);
	drawMyLine(513,101,544,62,pDC,r3);
	drawMyLine(544,62,578,67,pDC,r3);
	drawMyLine(578,67,567,109,pDC,r3);
	drawMyLine(567,109,513,101,pDC,r3);
	boundaryfill(pDC,552,85,r3,r3);

	COLORREF r2=RGB(209,1,1);
	drawMyLine(544,62,604,43,pDC,r2);
	drawMyLine(604,43,578,67,pDC,r2);
	drawMyLine(578,67,544,62,pDC,r2);
	boundaryfill(pDC,574,59,r2,r2);	

	drawMyLine(586,71,614,42,pDC,r2);
	drawMyLine(614,42,658,61,pDC,r2);
	drawMyLine(658,61,586,71,pDC,r2);
	boundaryfill(pDC,615,58,r2,r2);

	drawMyLine(586,71,658,61,pDC,r3);
	drawMyLine(658,61,668,78,pDC,r3);
	drawMyLine(668,78,586,71,pDC,r3);
	boundaryfill(pDC,643,69,r3,r3);

	COLORREF r4=RGB(52,1,0);
	drawMyLine(585,74,573,113,pDC,r4);
	drawMyLine(573,113,651,126,pDC,r4);
	drawMyLine(651,126,661,109,pDC,r4);
	drawMyLine(661,109,585,74,pDC,r4);
	boundaryfill(pDC,614,103,r4,r4);

	//
	drawMyLine(650,96,674,81,pDC,r2);
	drawMyLine(674,81,726,98,pDC,r2);
	drawMyLine(726,98,650,96,pDC,r2);
	boundaryfill(pDC,673,91,r2,r2);

	drawMyLine(650,96,726,98,pDC,r4);
	drawMyLine(726,98,664,105,pDC,r4);
	drawMyLine(664,105,650,96,pDC,r4);
	boundaryfill(pDC,668,100,r4,r4);	

	//eyes
	pDC->Ellipse(635,80,652,92);
	boundaryfill(pDC,644,85,RGB(0,0,0),RGB(0,0,0));

	//body
	COLORREF r1=RGB(232,0,0);
	drawMyLine(422,158,499,107,pDC,r1);
	drawMyLine(499,107,575,121,pDC,r1);
	drawMyLine(575,121,422,158,pDC,r1);
	boundaryfill(pDC,508,130,r1,r1);

	drawMyLine(588,125,547,219,pDC,r1);
	drawMyLine(547,219,261,331,pDC,r1);
	drawMyLine(515,172,547,219,pDC,r1);
	drawMyLine(261,331,588,125,pDC,r1);
	drawMyLine(425,228,427,265,pDC,r1);
	boundaryfill(pDC,341,291,r1,r1);
	boundaryfill(pDC,543,177,r1,r1);
	boundaryfill(pDC,440,239,r1,r1);

	drawMyLine(574,121,420,158,pDC,r3);
	drawMyLine(420,158,265,324,pDC,r3);
	drawMyLine(265,324,574,121,pDC,r3);
	drawMyLine(261,331,588,125,pDC,r3);
	boundaryfill(pDC,484,159,r3,r3);

	drawMyLine(596,123,643,130,pDC,r3);
	drawMyLine(643,130,562,271,pDC,r3);
	drawMyLine(562,271,552,227,pDC,r3);
	drawMyLine(552,227,596,123,pDC,r3);
	boundaryfill(pDC,599,172,r3,r3);

	drawMyLine(548,229,557,276,pDC,r4);
	drawMyLine(557,276,351,301,pDC,r4);
	drawMyLine(351,301,548,229,pDC,r4);
	drawMyLine(478,258,486,284,pDC,r4);
	boundaryfill(pDC,524,261,r4,r4);

	drawMyLine(650,130,636,234,pDC,r4);
	drawMyLine(636,234,564,282,pDC,r4);
	drawMyLine(564,282,650,130,pDC,r4);
	boundaryfill(pDC,605,240,r4,r4);

	drawMyLine(556,283,474,324,pDC,r4);
	drawMyLine(474,324,385,302,pDC,r4);
	drawMyLine(385,302,556,283,pDC,r4);
	boundaryfill(pDC,472,306,r4,r4);

	//tail
	drawMyLine(345,226,275,307,pDC,r3);
	drawMyLine(275,307,196,317,pDC,r3);
	drawMyLine(196,317,345,226,pDC,r3);
	boundaryfill(pDC,265,292,r3,r3);

	drawMyLine(117,333,255,280,pDC,r1);
	drawMyLine(255,280,194,317,pDC,r1);
	drawMyLine(194,317,117,333,pDC,r1);
	boundaryfill(pDC,187,311,r1,r1);

	drawMyLine(215,320,163,330,pDC,r4);
	drawMyLine(163,330,127,358,pDC,r4);
	drawMyLine(127,358,215,320,pDC,r4);
	boundaryfill(pDC,170,335,r4,r4);

	//legs
	drawMyLine(480,327,489,324,pDC,r3);
	drawMyLine(489,324,533,364,pDC,r3);
	drawMyLine(533,364,509,364,pDC,r3);
	drawMyLine(509,364,480,327,pDC,r3);
	boundaryfill(pDC,497,338,r3,r3);

	drawMyLine(455,389,467,370,pDC,r2);
	drawMyLine(467,370,504,369,pDC,r2);
	drawMyLine(504,369,509,381,pDC,r2);
	drawMyLine(509,381,472,377,pDC,r2);
	drawMyLine(472,377,455,389,pDC,r2);
	boundaryfill(pDC,486,374,r2,r2);

	drawMyLine(509,369,533,369,pDC,r4);
	drawMyLine(533,369,557,390,pDC,r4);
	drawMyLine(557,390,558,411,pDC,r4);
	drawMyLine(558,411,548,395,pDC,r4);
	drawMyLine(548,395,523,382,pDC,r4);
	drawMyLine(523,382,509,369,pDC,r4);
	boundaryfill(pDC,527,377,r4,r4);

	drawMyLine(537,367,555,360,pDC,r1);
	drawMyLine(555,360,570,366,pDC,r1);
	drawMyLine(570,366,537,367,pDC,r1);
	boundaryfill(pDC,557,363,r1,r1);

	drawMyLine(543,374,565,372,pDC,r2);
	drawMyLine(565,372,597,386,pDC,r2);
	drawMyLine(597,386,598,402,pDC,r2);
	drawMyLine(598,402,588,390,pDC,r2);
	drawMyLine(588,390,559,386,pDC,r2);
	drawMyLine(559,386,542,373,pDC,r2);
	boundaryfill(pDC,563,379,r2,r2);

	//flood fill
	floodFill(pDC,552,85,b2,r3);
	floodFill(pDC,574,59,b3,r2);
	floodFill(pDC,615,58,b2,r2);
	floodFill(pDC,643,69,b2,r3);
	floodFill(pDC,614,103,b1,r4);
	floodFill(pDC,673,91,b2,r2);
	floodFill(pDC,668,100,b1,r4);
	floodFill(pDC,508,130,b3,r1);
	floodFill(pDC,440,238,b3,r1);
	floodFill(pDC,484,159,b2,r3);
	floodFill(pDC,599,172,b2,r3);
	floodFill(pDC,524,261,b1,r4);
	floodFill(pDC,605,240,b1,r4);
	floodFill(pDC,472,306,b1,r4);
	floodFill(pDC,265,292,b2,r3);
	floodFill(pDC,187,311,b1,r1);
	floodFill(pDC,170,335,b1,r4);
	floodFill(pDC,497,338,b2,r3);
	floodFill(pDC,486,374,b2,r2);
	floodFill(pDC,527,377,b1,r4);
	floodFill(pDC,557,363,b1,r1);
	floodFill(pDC,563,379,b3,r2);
}

