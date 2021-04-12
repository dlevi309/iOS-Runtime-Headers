/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/SDOFRenderingV3.bundle/SDOFRenderingV3
*/


#import <SDOFRenderingV3/SDOFRenderingV3-Structs.h>
@class NSDictionary;

@interface FigSDOFRenderingTuningParameters : NSObject {

	dynamic_tuning_parameters _dynamicParams;
	xhlrb_control_logic_params _xhlrbControlConfig;
	int _disparityRefinementVersion;
	disparity_refinement_params _disparityRefinementConfig;
	simple_lens_model_params _simpleLensModelConfig;
	face_mask_params _faceMaskConfig;
	segmentation_fusion_params _segmentationFusionConfig;
	NSDictionary* _noiseEstimationConfig;
	blurmap_smoothing_params _blurmapSmoothingConfig;
	rendering_config_params _renderingConfig;
	threadgroup_sizes_config _threadgroupSizesConfig;

}
-(id)init;
-(float)simulatedAperture;
-(id)encodeParametersForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithTuningDictionary:(id)arg1 ;
-(disparity_refinement_params)disparityRefinementConfig;
-(simple_lens_model_params)simpleLensModelConfig;
-(face_mask_params)faceMaskConfig;
-(segmentation_fusion_params)segmentationFusionConfig;
-(threadgroup_sizes_config)threadgroupSizesConfig;
-(rendering_config_params)renderingConfig;
-(blurmap_smoothing_params)blurmapSmoothingConfig;
-(BOOL)readDisparityRefinementConfig:(id)arg1 ;
-(BOOL)readSLMConfig:(id)arg1 ;
-(BOOL)readBlurMapSmoothingConfig:(id)arg1 ;
-(BOOL)readRenderingConfig:(id)arg1 ;
-(BOOL)readTGConfig:(id)arg1 ;
-(int)calculateDynamicTuningParamsForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)calculateXHLRBParamsForSampleBuffer:(opaqueCMSampleBufferRef)arg1 outParams:(xhlrb_control_params*)arg2 ;
-(float)minimumSimulatedAperture;
-(float)maximumSimulatedAperture;
-(xhlrb_control_logic_params)xhlrbControlConfig;
-(id)noiseEstimationConfig;
@end

