/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/

#import <StereoStitchingProcessor/StereoStitchingProcessor-Structs.h>
#import <StereoStitchingProcessor/FigPlistParser.h>

@interface FigStillStereoStitchingTuningParameters : FigPlistParser {

	SCD_Struct_Fi55 _lineBendingTuningParameters;
	SCD_Struct_Fi56 _smoothFlowTransitionTuningParameters;
	SCD_Struct_Fi57 _colorMatchingTuningParameters;
	SCD_Struct_Fi5 _shiftmapExtensionTuningParameters;
	SCD_Struct_Fi58 _horizonLineDetectorTuningParameters;
	SCD_Struct_Fi58 _lineDetectorTuningParameters;
	SCD_Struct_Fi62 _pyramidBlendingTuningParameters;
	SCD_Struct_Fi63 _planarSceneDetectionTuningParameters;
	SCD_Struct_Fi67 _qualityEstimationTuningParameters;
	SCD_Struct_Fi68 _cameraCalibrationV2Configuration;

}

@property (nonatomic,readonly) SCD_Struct_Fi5 shiftmapExtensionTuningParameters;                  //@synthesize shiftmapExtensionTuningParameters=_shiftmapExtensionTuningParameters - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi62 pyramidBlendingTuningParameters;                   //@synthesize pyramidBlendingTuningParameters=_pyramidBlendingTuningParameters - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi69 cameraCalibrationV2Configuration;                  //@synthesize cameraCalibrationV2Configuration=_cameraCalibrationV2Configuration - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi67 qualityEstimationTuningParameters;                 //@synthesize qualityEstimationTuningParameters=_qualityEstimationTuningParameters - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi58 horizonLineDetectorTuningParameters;               //@synthesize horizonLineDetectorTuningParameters=_horizonLineDetectorTuningParameters - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi58 lineDetectorTuningParameters;                      //@synthesize lineDetectorTuningParameters=_lineDetectorTuningParameters - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi55 lineBendingTuningParameters;                       //@synthesize lineBendingTuningParameters=_lineBendingTuningParameters - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi63 planarSceneDetectionTuningParameters;              //@synthesize planarSceneDetectionTuningParameters=_planarSceneDetectionTuningParameters - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi56 smoothFlowTransitionTuningParameters;              //@synthesize smoothFlowTransitionTuningParameters=_smoothFlowTransitionTuningParameters - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi57 colorMatchingTuningParameters;                     //@synthesize colorMatchingTuningParameters=_colorMatchingTuningParameters - In the implementation block
-(id)init;
-(id)initWithTuningDictionary:(id)arg1 isUpdateDict:(BOOL)arg2 ;
-(SCD_Struct_Fi69)cameraCalibrationV2Configuration;
-(SCD_Struct_Fi67)qualityEstimationTuningParameters;
-(SCD_Struct_Fi57)colorMatchingTuningParameters;
-(SCD_Struct_Fi58)lineDetectorTuningParameters;
-(SCD_Struct_Fi58)horizonLineDetectorTuningParameters;
-(SCD_Struct_Fi5)shiftmapExtensionTuningParameters;
-(SCD_Struct_Fi56)smoothFlowTransitionTuningParameters;
-(SCD_Struct_Fi63)planarSceneDetectionTuningParameters;
-(SCD_Struct_Fi62)pyramidBlendingTuningParameters;
-(SCD_Struct_Fi55)lineBendingTuningParameters;
-(int)setDefaultStillStereoStitchingTuningParameters;
-(int)readStillStereoStitchingConfig:(id)arg1 isUpdateDict:(BOOL)arg2 ;
@end

