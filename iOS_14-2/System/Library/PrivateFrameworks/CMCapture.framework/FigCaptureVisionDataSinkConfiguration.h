/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSinkConfiguration.h>

@class NSDictionary;

@interface FigCaptureVisionDataSinkConfiguration : FigCaptureSinkConfiguration {

	float _maxFrameRate;
	float _maxBurstFrameRate;
	SCD_Struct_BW8 _maxBurstDuration;
	unsigned _gaussianPyramidOctavesCount;
	float _gaussianPyramidBaseOctaveDownscalingFactor;
	unsigned _maxKeypointsCount;
	float _keypointDetectionThreshold;
	BOOL _featureBinningEnabled;
	BOOL _featureOrientationAssignmentEnabled;

}

@property (assign,nonatomic) float maxFrameRate;                                               //@synthesize maxFrameRate=_maxFrameRate - In the implementation block
@property (assign,nonatomic) float maxBurstFrameRate;                                          //@synthesize maxBurstFrameRate=_maxBurstFrameRate - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW8 maxBurstDuration;                                  //@synthesize maxBurstDuration=_maxBurstDuration - In the implementation block
@property (assign,nonatomic) unsigned gaussianPyramidOctavesCount;                             //@synthesize gaussianPyramidOctavesCount=_gaussianPyramidOctavesCount - In the implementation block
@property (assign,nonatomic) float gaussianPyramidBaseOctaveDownscalingFactor;                 //@synthesize gaussianPyramidBaseOctaveDownscalingFactor=_gaussianPyramidBaseOctaveDownscalingFactor - In the implementation block
@property (assign,nonatomic) unsigned maxKeypointsCount;                                       //@synthesize maxKeypointsCount=_maxKeypointsCount - In the implementation block
@property (assign,nonatomic) float keypointDetectionThreshold;                                 //@synthesize keypointDetectionThreshold=_keypointDetectionThreshold - In the implementation block
@property (assign,nonatomic) BOOL featureBinningEnabled;                                       //@synthesize featureBinningEnabled=_featureBinningEnabled - In the implementation block
@property (assign,nonatomic) BOOL featureOrientationAssignmentEnabled;                         //@synthesize featureOrientationAssignmentEnabled=_featureOrientationAssignmentEnabled - In the implementation block
@property (nonatomic,readonly) NSDictionary * embeddedCaptureDeviceConfiguration; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(float)maxFrameRate;
-(void)setMaxFrameRate:(float)arg1 ;
-(NSDictionary *)embeddedCaptureDeviceConfiguration;
-(id)description;
-(float)maxBurstFrameRate;
-(void)setMaxBurstFrameRate:(float)arg1 ;
-(SCD_Struct_BW8)maxBurstDuration;
-(void)setMaxBurstDuration:(SCD_Struct_BW8)arg1 ;
-(unsigned)gaussianPyramidOctavesCount;
-(void)setGaussianPyramidOctavesCount:(unsigned)arg1 ;
-(unsigned)maxKeypointsCount;
-(float)gaussianPyramidBaseOctaveDownscalingFactor;
-(void)setGaussianPyramidBaseOctaveDownscalingFactor:(float)arg1 ;
-(void)setMaxKeypointsCount:(unsigned)arg1 ;
-(float)keypointDetectionThreshold;
-(void)setKeypointDetectionThreshold:(float)arg1 ;
-(void)setFeatureBinningEnabled:(BOOL)arg1 ;
-(void)setFeatureOrientationAssignmentEnabled:(BOOL)arg1 ;
-(BOOL)featureBinningEnabled;
-(BOOL)featureOrientationAssignmentEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)sinkType;
-(BOOL)isEqual:(id)arg1 ;
@end

