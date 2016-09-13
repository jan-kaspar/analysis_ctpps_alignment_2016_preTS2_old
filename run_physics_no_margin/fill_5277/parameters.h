void ApplySettings()
{
	lhc_fill = 5277;

	cut1_a = -1.001; cut1_c = -0.727; cut1_si = 0.20;
	cut2_a = -0.976; cut2_c = +0.514; cut2_si = 0.20;
	cut3_a = -1.155; cut3_c = +0.097; cut3_si = 0.15;
	cut4_a = -1.139; cut4_c = +0.041; cut4_si = 0.15;

	selectionRangesX["L_1_F"] = SelectionRange(10.0, 16.5);
	selectionRangesX["L_1_N"] = SelectionRange(9.0, 15.7);
	selectionRangesX["R_1_N"] = SelectionRange(8.0, 15.5);
	selectionRangesX["R_1_F"] = SelectionRange(7.8, 15.0);
}
