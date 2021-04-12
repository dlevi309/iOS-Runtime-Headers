/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSinkConfiguration.h>

@class NSDictionary;

@interface FigCaptureVisionDataSinkConfiguration : FigCaptureSinkConfiguration {

	float _maxFrameRate;
	float _maxBurstFrameRate;
	SCD_Struct_BW2 _maxBurstDuration;
	unsigned _gaussianPyramidOctavesCount;
	float _gaussianPyramidBaseOctaveDownscalingFactor;
	unsigned _maxKeypointsCount;
	float _keypointDetectionThreshold;
	BOOL _featureBinningEnabled;
	BOOL _featureOrientationAssignmentEnabled;

}

@property (assign,nonatomic) float maxFrameRate;                                               //@synthesize maxFrameRate=_maxFrameRate - In the implementation block
@property (assign,nonatomic) float maxBurstFrameRate;                                          //@synthesize maxBurstFrameRate=_maxBurstFrameRate - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 maxBurstDuration;                                  //@synthesize maxBurstDuration=_maxBurstDuration - In the implementation block
@property (assign,nonatomic) unsigned gaussianPyramidOctavesCount;                             //@synthesize gaussianPyramidOctavesCount=_gaussianPyramidOctavesCount - In the implementation block
@property (assign,nonatomic) float gaussianPyramidBaseOctaveDownscalingFactor;                 //@synthesize gaussianPyramidBaseOctaveDownscalingFactor=_gaussianPyramidBaseOctaveDownscalingFactor - In the implementation block
@property (assign,nonatomic) unsigned maxKeypointsCount;                                       //@synthesize maxKeypointsCount=_maxKeypointsCount - In the implementation block
@property (assign,nonatomic) float keypointDetectionThreshold;                                 //@synthesize keypointDetectionThreshold=_keypointDetectionThreshold - In the implementation block
@property (assign,nonatomic) BOOL featureBinningEnabled;                                       //@synthesize featureBinningEnabled=_featureBinningEnabled - In the implementation block
@property (assign,nonatomic) BOOL featureOrientationAssignmentEnabled;                         //@synthesize featureOrientationAssignmentEnabled=_featureOrientationAssignmentEnabled - In the implementation block
@property (nonatomic,readonly) NSDictionary * embeddedCaptureDeviceConfiguration; 
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)maxFrameRate;
-(void)setMaxFrameRate:(float)arg1 ;
-(void)setMaxBurstFrameRate:(float)arg1 ;
-(SCD_Struct_BW2)maxBurstDuration;
-(void)setMaxBurstDuration:(SCD_Struct_BW2)arg1 ;
-(unsigned)gaussianPyramidOctavesCount;
-(void)setGaussianPyramidOctavesCount:(unsigned)arg1 ;
-(float)gaussianPyramidBaseOctaveDownscalingFactor;
-(void)setGaussianPyramidBaseOctaveDownscalingFactor:(float)arg1 ;
-(unsigned)maxKeypointsCount;
-(void)setMaxKeypointsCount:(unsigned)arg1 ;
-(float)keypointDetectionThreshold;
-(void)setKeypointDetectionThreshold:(float)arg1 ;
-(void)setFeatureBinningEnabled:(BOOL)arg1 ;
-(void)setFeatureOrientationAssignmentEnabled:(BOOL)arg1 ;
-(float)maxBurstFrameRate;
-(BOOL)featureBinningEnabled;
-(BOOL)featureOrientationAssignmentEnabled;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)sinkType;
-(NSDictionary *)embeddedCaptureDeviceConfiguration;
@end

