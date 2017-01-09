void ApplySettings()
{
	lhc_fill = 5261;

	cut1_a = -0.994; cut1_c = -0.802; cut1_si = 0.20;
	cut2_a = -0.968; cut2_c = +0.419; cut2_si = 0.20;
	cut3_a = -1.160; cut3_c = +0.088; cut3_si = 0.15;
	cut4_a = -1.147; cut4_c = +0.029; cut4_si = 0.15;

	selectionRangesX["L_1_F"] = SelectionRange(8.7, 16.5);
	selectionRangesX["L_1_N"] = SelectionRange(8.3, 15.7);
	selectionRangesX["R_1_N"] = SelectionRange(12.5, 16.0);
	selectionRangesX["R_1_F"] = SelectionRange(12.0, 15.1);
}
