/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


#import <StereoStitchingProcessor/StereoStitchingProcessor-Structs.h>
@interface ADCTuningParameters : NSObject {

	float _keypointsDetectionThreshold;
	float _defaultFocalLengthTeleMicrometers;
	float _defaultFocalLengthTeleMaxDeviationMicrometers;
	float _defaultFocalLengthWideMicrometers;
	float _defaultFocalLengthWideMaxDeviationMicrometers;
	AdaptiveCorrectionConfig _adaptiveCorrectionConfig;

}

@property (nonatomic,readonly) float keypointsDetectionThreshold;                                //@synthesize keypointsDetectionThreshold=_keypointsDetectionThreshold - In the implementation block
@property (nonatomic,readonly) float defaultFocalLengthTeleMicrometers;                          //@synthesize defaultFocalLengthTeleMicrometers=_defaultFocalLengthTeleMicrometers - In the implementation block
@property (nonatomic,readonly) float defaultFocalLengthTeleMaxDeviationMicrometers;              //@synthesize defaultFocalLengthTeleMaxDeviationMicrometers=_defaultFocalLengthTeleMaxDeviationMicrometers - In the implementation block
@property (nonatomic,readonly) float defaultFocalLengthWideMicrometers;                          //@synthesize defaultFocalLengthWideMicrometers=_defaultFocalLengthWideMicrometers - In the implementation block
@property (nonatomic,readonly) float defaultFocalLengthWideMaxDeviationMicrometers;              //@synthesize defaultFocalLengthWideMaxDeviationMicrometers=_defaultFocalLengthWideMaxDeviationMicrometers - In the implementation block
@property (nonatomic,readonly) AdaptiveCorrectionConfig adaptiveCorrectionConfig;                //@synthesize adaptiveCorrectionConfig=_adaptiveCorrectionConfig - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(const AdaptiveCorrectionConfig*)getAdaptiveCorrectionConfigPtr;
-(float)keypointsDetectionThreshold;
-(float)defaultFocalLengthTeleMicrometers;
-(float)defaultFocalLengthTeleMaxDeviationMicrometers;
-(float)defaultFocalLengthWideMicrometers;
-(float)defaultFocalLengthWideMaxDeviationMicrometers;
-(AdaptiveCorrectionConfig)adaptiveCorrectionConfig;
-(BOOL)readAdaptiveCorrectionConfig:(id)arg1 ;
-(float)checkAndCorrectFocalLengthTele:(float)arg1 ;
-(float)checkAndCorrectFocalLengthWide:(float)arg1 ;
@end

