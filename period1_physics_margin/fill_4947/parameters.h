void ApplySettings()
{
	lhc_fill = 4947;

	rps_have_margin = true;

	cut1_a = -1.009; cut1_c = -2.380; cut1_si = 0.20;
	cut2_a = -0.978; cut2_c = +0.542; cut2_si = 0.20;
	cut3_a = -1.152; cut3_c = +1.244; cut3_si = 0.15;
	cut4_a = -1.141; cut4_c = +0.107; cut4_si = 0.15;

	selectionRangesX["L_1_F"] = SelectionRange(9.8, 16.0);
	selectionRangesX["L_1_N"] = SelectionRange(7.0, 13.5);
	selectionRangesX["R_1_N"] = SelectionRange(8.0, 15.0);
	selectionRangesX["R_1_F"] = SelectionRange(7.0, 14.5);

	yAlignmentRangeX["L_1_F"] = SelectionRange(6.0, 12.0);
	yAlignmentRangeX["L_1_N"] = SelectionRange(6.0, 12.0);
	yAlignmentRangeX["R_1_N"] = SelectionRange(5.0, 11.0);
	yAlignmentRangeX["R_1_F"] = SelectionRange(5.0, 11.0);

	RelAlignmentRangeX["L_1_F"] = SelectionRange(6.0, -1.);
	RelAlignmentRangeX["L_1_N"] = SelectionRange(6.0, -1.);
	RelAlignmentRangeX["R_1_N"] = SelectionRange(5.0, -1.);
	RelAlignmentRangeX["R_1_F"] = SelectionRange(5.0, -1.);
}
