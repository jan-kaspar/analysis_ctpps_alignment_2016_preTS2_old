void ApplySettings()
{
	lhc_fill = 4990;

	cut1_a = -1.009; cut1_c = -2.074; cut1_si = 0.20;
	cut2_a = -0.976; cut2_c = +0.513; cut2_si = 0.20;
	cut3_a = -1.159; cut3_c = +1.096; cut3_si = 0.15;
	cut4_a = -1.144; cut4_c = +0.036; cut4_si = 0.15;

	selectionRangesX["L_1_F"] = SelectionRange(11.0, 16.5);
	selectionRangesX["L_1_N"] = SelectionRange(8.5, 14.5);
	selectionRangesX["R_1_N"] = SelectionRange(8.5, 15.5);
	selectionRangesX["R_1_F"] = SelectionRange(8.0, 14.5);

	yAlignmentRangeX["L_1_F"] = SelectionRange(6.5, 11.0);
	yAlignmentRangeX["L_1_N"] = SelectionRange(6.0, 10.0);
	yAlignmentRangeX["R_1_N"] = SelectionRange(5.0, 10.0);
	yAlignmentRangeX["R_1_F"] = SelectionRange(4.0, 9.0);

	RelAlignmentRangeX["L_1_F"] = SelectionRange(6.5, -1.);
	RelAlignmentRangeX["L_1_N"] = SelectionRange(6.0, -1.);
	RelAlignmentRangeX["R_1_N"] = SelectionRange(5.0, -1.);
	RelAlignmentRangeX["R_1_F"] = SelectionRange(4.0, -1.);
}
