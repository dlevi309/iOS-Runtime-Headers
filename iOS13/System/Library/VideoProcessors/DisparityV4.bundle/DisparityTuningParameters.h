/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/DisparityV4.bundle/DisparityV4
*/


#import <DisparityV4/DisparityV4-Structs.h>
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
	int _stereoDisparityEstimatorLevels;
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
@property (nonatomic,readonly) int stereoDisparityEstimatorLevels;                                 //@synthesize stereoDisparityEstimatorLevels=_stereoDisparityEstimatorLevels - In the implementation block
@property (nonatomic,readonly) NSArray * stereoDisparityEstimatorAllLevelsParameters;              //@synthesize stereoDisparityEstimatorAllLevelsParameters=_stereoDisparityEstimatorAllLevelsParameters - In the implementation block
-(id)init;
-(void)setDefaultCalibrationParameters;
-(void)setDefaultRPDParameters;
-(void)setDefaultAdaptiveCorrectionParameters;
-(int)readCalibrationConfig:(id)arg1 isUpdating:(BOOL)arg2 ;
-(int)readAdaptiveCorrectionConfig:(id)arg1 isUpdating:(BOOL)arg2 ;
-(float)pixelSizeInMicronsForPortType:(id)arg1 ;
-(id)initWithTuningDictionary:(id)arg1 cameraInfoByPortType:(id)arg2 ;
-(const AdaptiveCorrectionConfig*)getAdaptiveCorrectionConfigPtr;
-(int)updateTuningParametersWith:(id)arg1 ;
-(float)nearLimitDistanceMM;
-(float)midLimitDistanceMM;
-(float)keypointsDetectionThreshold;
-(float)defaultFocalLengthTeleMicrometers;
-(float)defaultFocalLengthTeleMaxDeviationMicrometers;
-(float)defaultFocalLengthWideMicrometers;
-(float)defaultFocalLengthWideMaxDeviationMicrometers;
-(AdaptiveCorrectionConfig)adaptiveCorrectionConfig;
-(void)setDefaultStereoDisparityParameters;
-(NSArray *)stereoDisparityEstimatorAllLevelsParameters;
-(int)readStereoDisparityConfig:(id)arg1 isUpdating:(BOOL)arg2 ;
-(int)stereoDisparityEstimatorLevels;
@end

