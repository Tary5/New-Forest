SIMISA@@@@@@@@@@JINX0s1t______
 
shape (
	shape_header ( 00000000 00000000 )
	volumes ( 1
		vol_sphere (
			vector ( 3.477186E-03 2.742992 6.106076 ) 0.6184663
		)
	)
	shader_names ( 1
		named_shader ( BlendATexDiff )
	)
	texture_filter_names ( 1
		named_filter_mode ( MipLinear )
	)
	points ( 4
		point ( -0.5965233 2.592993 6.106077 )
		point ( -0.5965233 2.892992 6.106077 )
		point ( 0.6034777 2.892992 6.106074 )
		point ( 0.6034777 2.592993 6.106074 )
	)
	uv_points ( 13
		uv_point ( 0 0 )
		uv_point ( -0.9839 -0.5126 )
		uv_point ( -0.9839 -0.7606 )
		uv_point ( -0.1809 -0.7606 )
		uv_point ( -0.1809 -0.5126 )
		uv_point ( -0.9248 -0.6715 )
		uv_point ( -0.9248 -0.7305 )
		uv_point ( -0.7692 -0.7305 )
		uv_point ( -0.7692 -0.6715 )
		uv_point ( -0.9893 -0.5115001 )
		uv_point ( -0.9893 -0.7563 )
		uv_point ( -0.1776 -0.7562999 )
		uv_point ( -0.1776 -0.5115 )
	)
	normals ( 2
		vector ( -2.317956E-06 0 -1 )
		vector ( 2.317956E-06 0 1 )
	)
	sort_vectors ( 0
	)
	colours ( 0 )
	matrices ( 1
		matrix MAIN ( 1 0 0 0 1 0 0 0 1 0 0 0 )
	)
	images ( 1
		image ( Headboards.ace )
	)
	textures ( 1
		texture ( 0 0 -3 ff000000 )
	)
	light_materials ( 0 )
	light_model_cfgs ( 1
		light_model_cfg ( 00000000
			uv_ops ( 1
				uv_op_copy ( 1 0 )
			)
		)
	)
	vtx_states ( 1
		vtx_state ( 00000000 0 -5 0 00000002 )
	)
	prim_states ( 1
		prim_state ( 00000000 0
			tex_idxs ( 1 0 ) 0 0 1 0 1
		)
	)
	lod_controls ( 1
		lod_control (
			distance_levels_header ( 0 )
			distance_levels ( 1
				distance_level (
					distance_level_header (
						dlevel_selection ( 2000 )
						hierarchy ( 1 -1 )
					)
					sub_objects ( 1
						sub_object (
							sub_object_header ( 00000400 -1 -1 000001d2 000001c4
								geometry_info ( 4 1 0 12 0 0 1 0 0 0
									geometry_nodes ( 1
										geometry_node ( 1 0 0 0 0
											cullable_prims ( 1 4 12 )
										)
									)
									geometry_node_map ( 1 0 )
								)
								subobject_shaders ( 1 0 )
								subobject_light_cfgs ( 1 0 ) 0
							)
							vertices ( 8
								vertex ( 00000000 0 0 ffffffff ff000000
									vertex_uvs ( 1 9 )
								)
								vertex ( 00000000 1 0 ffffffff ff000000
									vertex_uvs ( 1 10 )
								)
								vertex ( 00000000 2 0 ffffffff ff000000
									vertex_uvs ( 1 11 )
								)
								vertex ( 00000000 3 0 ffffffff ff000000
									vertex_uvs ( 1 12 )
								)
								vertex ( 00000000 3 1 ffffffff ff000000
									vertex_uvs ( 1 9 )
								)
								vertex ( 00000000 2 1 ffffffff ff000000
									vertex_uvs ( 1 10 )
								)
								vertex ( 00000000 1 1 ffffffff ff000000
									vertex_uvs ( 1 11 )
								)
								vertex ( 00000000 0 1 ffffffff ff000000
									vertex_uvs ( 1 12 )
								)
							)
							vertex_sets ( 1
								vertex_set ( 0 0 8 )
							)
							primitives ( 2
								prim_state_idx ( 0 )
								indexed_trilist ( 
									vertex_idxs ( 12 0 1 2 0 2 3 4 5 6 4 6 7 )
									normal_idxs ( 4 0 3 0 3 1 3 1 3 )
									flags ( 4 00000000 00000000 00000000 00000000 )
								)
							)
						)
					)
				)
			)
		)
	)
)
