//Function in C++ using MFC
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
void CDDA_expt3_CGView::OnDraw(CDC* pDC)
{
	CDDA_expt3_CGDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	//drawMyLine(100,100,900,600,pDC);
	//horse
	//L_Ear
	COLORREF b=RGB(205,133,63);

	drawMyLine(275,33,269,63,pDC,b);
	drawMyLine(269,63,285,100,pDC,b);
	drawMyLine(285,100,298,104,pDC,b);
	
	drawMyLine(315,78,294,55,pDC,b);
	drawMyLine(294,55,275,33,pDC,b);
	drawMyLine(275,33,296,86,pDC,b);
	drawMyLine(294,55,298,104,pDC,b);

	//R_Ear
	drawMyLine(362,38,358,73,pDC,b);
	drawMyLine(358,73,370,103,pDC,b);
	drawMyLine(370,103,381,108,pDC,b);
	drawMyLine(381,108,389,104,pDC,b);
	drawMyLine(389,104,390,76,pDC,b);
	drawMyLine(390,76,384,51,pDC,b);
	drawMyLine(384,51,362,38,pDC,b);
	drawMyLine(370,43,365,87,pDC,b);
	drawMyLine(369,58,390,77,pDC,b);
	drawMyLine(383,72,383,106,pDC,b);

	//Face
	drawMyLine(298,104,273,172,pDC,b);
	drawMyLine(273,172,287,214,pDC,b);
	drawMyLine(287,214,290,306,pDC,b);
	drawMyLine(290,306,273,341,pDC,b);
	drawMyLine(273,341,281,377,pDC,b);
	drawMyLine(281,377,296,387,pDC,b);
	drawMyLine(296,387,325,389,pDC,b);
	drawMyLine(325,389,340,371,pDC,b);
	drawMyLine(340,371,343,359,pDC,b);
	drawMyLine(343,359,347,347,pDC,b);
	drawMyLine(347,347,359,331,pDC,b);
	drawMyLine(359,331,345,377,pDC,b);
	drawMyLine(345,377,325,389,pDC,b);
	drawMyLine(274,345,274,364,pDC,b);
	drawMyLine(274,364,282,374,pDC,b);
	drawMyLine(299,241,293,229,pDC,b);
	drawMyLine(293,229,292,172,pDC,b);
	drawMyLine(292,172,305,193,pDC,b);
	drawMyLine(305,193,299,241,pDC,b);
	drawMyLine(299,241,290,306,pDC,b);
	drawMyLine(343,360,334,335,pDC,b);
	drawMyLine(334,335,322,263,pDC,b);
	drawMyLine(322,263,329,192,pDC,b);
	drawMyLine(329,192,357,177,pDC,b);
	drawMyLine(357,177,342,234,pDC,b);
	drawMyLine(342,234,324,249,pDC,b);
	drawMyLine(417,152,416,184,pDC,b);
	drawMyLine(416,184,383,251,pDC,b);
	drawMyLine(383,251,327,294,pDC,b);
	drawMyLine(327,294,308,319,pDC,b);
	drawMyLine(308,319,311,354,pDC,b);
	drawMyLine(311,354,315,365,pDC,b);
	drawMyLine(316,365,323,381,pDC,b);
	drawMyLine(323,381,331,374,pDC,b);
	drawMyLine(331,374,335,349,pDC,b);
	drawMyLine(335,349,318,344,pDC,b);
	drawMyLine(318,344,311,354,pDC,b);
	drawMyLine(315,364,321,346,pDC,b);
	drawMyLine(315,364,333,362,pDC,b);
	drawMyLine(358,331,379,275,pDC,b);
	drawMyLine(379,275,429,226,pDC,b);
	drawMyLine(429,226,412,269,pDC,b);
	drawMyLine(412,269,391,285,pDC,b);
	drawMyLine(391,285,358,331,pDC,b);
	drawMyLine(386,291,399,333,pDC,b);
	drawMyLine(399,333,403,401,pDC,b);
	drawMyLine(403,401,415,414,pDC,b);
	drawMyLine(415,414,436,415,pDC,b);
	drawMyLine(436,415,526,373,pDC,b);
	drawMyLine(526,373,583,296,pDC,b);
	drawMyLine(411,270,422,292,pDC,b);
	drawMyLine(422,292,424,364,pDC,b);
	drawMyLine(424,364,415,412,pDC,b);
	drawMyLine(454,274,467,375,pDC,b);
	drawMyLine(467,375,454,406,pDC,b);

	//hair
	COLORREF b2=RGB(139,69,19);
	drawMyLine(312,74,316,71,pDC,b2);
	drawMyLine(316,71,321,75,pDC,b2);
	drawMyLine(298,104,309,93,pDC,b2);
	drawMyLine(309,93,315,78,pDC,b2);	
	drawMyLine(298,104,299,120,pDC,b2);
	drawMyLine(299,120,303,157,pDC,b2);
	drawMyLine(303,157,309,131,pDC,b2);
	drawMyLine(309,131,309,118,pDC,b2);
	drawMyLine(309,118,316,71,pDC,b2);
	drawMyLine(316,71,309,119,pDC,b2);
	drawMyLine(309,119,310,153,pDC,b2);
	drawMyLine(310,153,323,183,pDC,b2);
	drawMyLine(323,183,321,120,pDC,b2);
	drawMyLine(321,120,331,77,pDC,b2);
	drawMyLine(331,77,324,72,pDC,b2);
	drawMyLine(324,72,316,71,pDC,b2);
	drawMyLine(331,77,321,120,pDC,b2);
	drawMyLine(321,120,322,137,pDC,b2);
	drawMyLine(322,137,336,163,pDC,b2);
	drawMyLine(336,163,331,121,pDC,b2);
	drawMyLine(331,121,342,88,pDC,b2);
	drawMyLine(342,88,345,75,pDC,b2);
	drawMyLine(345,75,337,70,pDC,b2);
	drawMyLine(337,70,331,77,pDC,b2);
	drawMyLine(345,74,342,85,pDC,b2);
	drawMyLine(342,85,341,113,pDC,b2);
	drawMyLine(341,113,350,158,pDC,b2);
	drawMyLine(350,158,354,113,pDC,b2);
	drawMyLine(354,113,359,75,pDC,b2);
	drawMyLine(359,75,350,68,pDC,b2);
	drawMyLine(350,68,345,74,pDC,b2);	
	drawMyLine(359,75,354,114,pDC,b2);
	drawMyLine(354,114,360,132,pDC,b2);
	drawMyLine(360,132,370,103,pDC,b2);
	drawMyLine(370,103,359,75,pDC,b2);	
	drawMyLine(389,69,429,140,pDC,b2);
	drawMyLine(429,140,447,211,pDC,b2);
	drawMyLine(447,211,436,325,pDC,b2);
	drawMyLine(436,325,426,278,pDC,b2);
	drawMyLine(426,278,429,225,pDC,b2);
	drawMyLine(429,225,436,201,pDC,b2);
	drawMyLine(436,201,416,149,pDC,b2);
	drawMyLine(416,149,392,126,pDC,b2);
	drawMyLine(392,126,389,104,pDC,b2);	
	drawMyLine(389,69,410,66,pDC,b2);
	drawMyLine(410,66,420,74,pDC,b2);
	drawMyLine(420,74,451,139,pDC,b2);
	drawMyLine(451,139,467,225,pDC,b2);
	drawMyLine(467,225,446,298,pDC,b2);
	drawMyLine(446,298,450,223,pDC,b2);
	drawMyLine(450,223,430,140,pDC,b2);
	drawMyLine(430,140,389,69,pDC,b2);
	drawMyLine(420,74,435,75,pDC,b2);
	drawMyLine(435,75,445,85,pDC,b2);
	drawMyLine(445,85,470,157,pDC,b2);
	drawMyLine(470,157,481,234,pDC,b2);
	drawMyLine(481,234,468,297,pDC,b2);
	drawMyLine(468,297,463,239,pDC,b2);
	drawMyLine(447,90,462,90,pDC,b2);
	drawMyLine(462,90,478,110,pDC,b2);
	drawMyLine(478,110,505,238,pDC,b2);
	drawMyLine(505,238,490,315,pDC,b2);
	drawMyLine(490,315,467,344,pDC,b2);
	drawMyLine(467,344,480,300,pDC,b2);
	drawMyLine(480,300,481,225,pDC,b2);
	drawMyLine(481,225,478,215,pDC,b2);
	drawMyLine(479,111,493,112,pDC,b2);
	drawMyLine(493,112,505,122,pDC,b2);
	drawMyLine(505,122,514,160,pDC,b2);
	drawMyLine(514,160,517,207,pDC,b2);
	drawMyLine(517,207,509,298,pDC,b2);
	drawMyLine(509,298,497,342,pDC,b2);
	drawMyLine(497,342,495,293,pDC,b2);
	drawMyLine(495,293,498,274,pDC,b2);
	drawMyLine(509,136,520,135,pDC,b2);
	drawMyLine(520,135,531,149,pDC,b2);
	drawMyLine(531,149,535,187,pDC,b2);
	drawMyLine(535,187,529,281,pDC,b2);
	drawMyLine(529,281,511,333,pDC,b2);
	drawMyLine(511,333,517,286,pDC,b2);
	drawMyLine(517,286,517,207,pDC,b2);
	drawMyLine(533,164,543,165,pDC,b2);
	drawMyLine(543,165,551,183,pDC,b2);
	drawMyLine(551,183,551,259,pDC,b2);
	drawMyLine(551,259,542,301,pDC,b2);
	drawMyLine(542,301,537,261,pDC,b2);
	drawMyLine(537,261,535,187,pDC,b2);
	drawMyLine(553,199,558,196,pDC,b2);
	drawMyLine(558,196,564,209,pDC,b2);
	drawMyLine(564,209,564,267,pDC,b2);
	drawMyLine(564,267,557,319,pDC,b2);
	drawMyLine(557,319,551,256,pDC,b2);
	drawMyLine(566,232,574,228,pDC,b2);
	drawMyLine(574,228,580,236,pDC,b2);
	drawMyLine(580,236,580,268,pDC,b2);
	drawMyLine(580,268,572,304,pDC,b2);
	drawMyLine(572,304,565,269,pDC,b2);
	drawMyLine(581,248,587,245,pDC,b2);
	drawMyLine(587,245,596,252,pDC,b2);
	drawMyLine(596,252,593,281,pDC,b2);
	drawMyLine(593,281,584,305,pDC,b2);
	drawMyLine(584,305,581,270,pDC,b2);

}
