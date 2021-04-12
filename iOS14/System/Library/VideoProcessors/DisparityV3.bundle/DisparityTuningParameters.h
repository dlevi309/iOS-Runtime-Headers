/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DisparityV3.bundle/DisparityV3
*/


#import <DisparityV3/DisparityV3-Structs.h>
@class NSMutableDictionary, NSArray;

@interface DisparityTuningParameters : NSObject {

	NSMutableDictionary* _pixelSizeInMicronsByPortType;
	float _nearLimitDistanceMM;
	float _midLimitDistanceMM;
	float _keypointsDetectionThreshold;
	float _defaultFocalLengthTeleMicrometers;
	float _defaultFocalLengthTeleMaxDeviationMicrometers;
	float _defaultFocalLengthWideMicrometers;
	float _defaultFocalLengthWideMaxDeviationMicrometers;
	NSArray* _stereoDisparityEstimatorAllLevelsParameters;
	AdaptiveCorrectionConfig _adaptiveCorrectionConfig;

}

@property (nonatomic,readonly) float nearLimitDistanceMM;                                          //@synthesize nearLimitDistanceMM=_nearLimitDistanceMM - In the implementation block
@property (nonatomic,readonly) float midLimitDistanceMM;                                           //@synthesize midLimitDistanceMM=_midLimitDistanceMM - In the implementation block
@property (nonatomic,readonly) float keypointsDetectionThreshold;                                  //@synthesize keypointsDetectionThreshold=_keypointsDetectionThreshold - In the implementation block
@property (nonatomic,readonly) float defaultFocalLengthTeleMicrometers;                            //@synthesize defaultFocalLengthTeleMicrometers=_defaultFocalLengthTeleMicrometers - In the implementation block
@property (nonatomic,readonly) float defaultFocalLengthTeleMaxDeviationMicrometers;                //@synthesize defaultFocalLengthTeleMaxDeviationMicrometers=_defaultFocalLengthTeleMaxDeviationMicrometers - In the implementation block
@property (nonatomic,readonly) float defaultFocalLengthWideMicrometers;                            //@synthesize defaultFocalLengthWideMicrometers=_defaultFocalLengthWideMicrometers - In the implementation block
@property (nonatomic,readonly) float defaultFocalLengthWideMaxDeviationMicrometers;                //@synthesize defaultFocalLengthWideMaxDeviationMicrometers=_defaultFocalLengthWideMaxDeviationMicrometers - In the implementation block
@property (nonatomic,readonly) AdaptiveCorrectionConfig adaptiveCorrectionConfig;                  //@synthesize adaptiveCorrectionConfig=_adaptiveCorrectionConfig - In the implementation block
@property (nonatomic,readonly) NSArray * stereoDisparityEstimatorAllLevelsParameters;              //@synthesize stereoDisparityEstimatorAllLevelsParameters=_stereoDisparityEstimatorAllLevelsParameters - In the implementation block
-(id)init;
-(void)setDefaultCalibrationParameters;
-(void)setDefaultRPDParameters;
-(void)setDefaultAdaptiveCorrectionParameters;
-(void)setDefaultStereoDisparityParameters;
-(int)readCalibrationConfig:(id)arg1 ;
-(int)readAdaptiveCorrectionConfig:(id)arg1 ;
-(int)readStereoDisparityConfig:(id)arg1 ;
-(float)pixelSizeInMicronsForPortType:(id)arg1 ;
-(id)initWithTuningDictionary:(id)arg1 cameraInfoByPortType:(id)arg2 ;
-(const AdaptiveCorrectionConfig*)getAdaptiveCorrectionConfigPtr;
-(float)nearLimitDistanceMM;
-(float)midLimitDistanceMM;
-(float)keypointsDetectionThreshold;
-(float)defaultFocalLengthTeleMicrometers;
-(float)defaultFocalLengthTeleMaxDeviationMicrometers;
-(float)defaultFocalLengthWideMicrometers;
-(float)defaultFocalLengthWideMaxDeviationMicrometers;
-(AdaptiveCorrectionConfig)adaptiveCorrectionConfig;
-(NSArray *)stereoDisparityEstimatorAllLevelsParameters;
@end

