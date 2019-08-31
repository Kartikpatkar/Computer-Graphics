void CComputer_GrapicsView::OnDraw(CDC* pDC)
{
	CComputer_GrapicsDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//Color the text
	COLORREF c=RGB(255,0,0);
	pDC->SetTextColor(c);
	pDC->TextOutW(490,200,L"Red Cherry",14);

	//font to text
	CFont f;
	f.CreatePointFont(120,L"Algerian");
	CFont *pt=pDC->SelectObject(&f);
	pDC->SetTextColor(RGB(245,225,16));
	pDC->TextOutW(490,220,L"Welcome",14);
	pDC->SelectObject(pt);
	pt->DeleteObject();

	//circles
	CBrush b(RGB(255,0,0));
	CBrush *ptr=pDC->SelectObject(&b);
	pDC->Ellipse(241,229,291,279);
	pDC->SelectObject(ptr);

	pDC->SelectObject(&b);
	pDC->Ellipse(271,243,321,293);
	pDC->SelectObject(ptr);

	pDC->SelectObject(&b);
	pDC->Ellipse(271,205,321,255);
	pDC->SelectObject(ptr);
	
	//leaves
	pDC->MoveTo(248,237);
	CPen p;
	p.CreatePen(PS_DASH,3,RGB(0,255,0));
	pDC->SelectObject(&p);
	pDC->LineTo(229,253);
	pDC->LineTo(220,222);
	pDC->LineTo(188,236);
	pDC->LineTo(183,194);
	pDC->LineTo(153,198);
	pDC->LineTo(146,165);
	pDC->LineTo(120,169);
	pDC->LineTo(127,126);
	pDC->LineTo(102,119);
	pDC->LineTo(113,64);
	pDC->LineTo(168,65);
	pDC->LineTo(169,89);
	pDC->LineTo(197,80);
	pDC->LineTo(205,95);
	pDC->LineTo(228,73);
	pDC->LineTo(237,112);
	pDC->LineTo(256,101);
	pDC->LineTo(256,149);
	pDC->LineTo(275,146);
	pDC->LineTo(270,192);
	pDC->LineTo(292,188);
	pDC->LineTo(286,207);
	pDC->MoveTo(272,222);
	pDC->LineTo(131,86);

	//leaves2
	pDC->MoveTo(319,223);
	pDC->LineTo(327,226);
	pDC->LineTo(336,194);
	pDC->LineTo(345,206);
	pDC->LineTo(361,174);
	pDC->LineTo(366,187);
	pDC->LineTo(383,162);
	pDC->LineTo(389,182);
	pDC->LineTo(399,172);
	pDC->LineTo(407,183);
	pDC->LineTo(418,167);
	pDC->LineTo(448,178);
	pDC->LineTo(448,206);
	pDC->LineTo(434,208);
	pDC->LineTo(434,230);
	pDC->LineTo(420,230);
	pDC->LineTo(414,257);
	pDC->LineTo(399,249);
	pDC->LineTo(385,277);
	pDC->LineTo(373,258);
	pDC->LineTo(355,274);
	pDC->LineTo(344,256);
	pDC->LineTo(329,273);
	pDC->LineTo(320,268);
	pDC->MoveTo(316,253);
	pDC->LineTo(426,192);

	//leaves 3
	pDC->MoveTo(295,292);
	pDC->LineTo(301,309);
	pDC->LineTo(289,310);
	pDC->LineTo(301,330);
	pDC->LineTo(283,330);
	pDC->LineTo(295,366);
	pDC->LineTo(276,361);
	pDC->LineTo(282,392);
	pDC->LineTo(250,387);
	pDC->LineTo(250,407);
	pDC->LineTo(234,411);
	pDC->LineTo(240,428);
	pDC->LineTo(196,446);
	pDC->LineTo(159,418);
	pDC->LineTo(175,409);
	pDC->LineTo(152,367);
	pDC->LineTo(176,364);
	pDC->LineTo(175,333);
	pDC->LineTo(200,333);
	pDC->LineTo(201,297);
	pDC->LineTo(236,300);
	pDC->LineTo(231,269);
	pDC->LineTo(253,275);
	pDC->MoveTo(277,284);
	pDC->LineTo(201,420);
	
}
