void ApplySettings()
{
	lhc_fill = 5282;

	cut1_a = -0.997; cut1_c = -0.781; cut1_si = 0.20;
	cut2_a = -0.972; cut2_c = +0.460; cut2_si = 0.20;
	cut3_a = -1.161; cut3_c = +0.075; cut3_si = 0.15;
	cut4_a = -1.140; cut4_c = +0.025; cut4_si = 0.15;

	selectionRangesX["L_1_F"] = SelectionRange(10.0, 16.5);
	selectionRangesX["L_1_N"] = SelectionRange(9.0, 15.7);
	selectionRangesX["R_1_N"] = SelectionRange(8.0, 15.5);
	selectionRangesX["R_1_F"] = SelectionRange(7.8, 15.0);
}
