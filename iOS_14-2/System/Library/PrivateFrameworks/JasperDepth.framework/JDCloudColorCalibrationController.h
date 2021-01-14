/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


#import <JasperDepth/JasperDepth-Structs.h>
@interface JDCloudColorCalibrationController : NSObject {

	BOOL _debugOutputEnabled;
	unsigned _numberOfValidSpotsForValidFrame;
	float _thresholdDepthValue;
	float _thresholdConfidenceValue;
	float _thresholdPrecOfValidSpot;
	float _allowedFrameCropWidthThreshold;
	float _allowedFrameCropHeightThreshold;
	float _sensorHeightFromWidthAnd4By3RatioAssumption;
	float _allowedDriftFromSymmetricCrop;
	float _allowedFrameRatio;
	float _allowedFrameRatioThreshold;

}

@property (assign,nonatomic) unsigned numberOfValidSpotsForValidFrame;                       //@synthesize numberOfValidSpotsForValidFrame=_numberOfValidSpotsForValidFrame - In the implementation block
@property (assign,nonatomic) float thresholdDepthValue;                                      //@synthesize thresholdDepthValue=_thresholdDepthValue - In the implementation block
@property (assign,nonatomic) float thresholdConfidenceValue;                                 //@synthesize thresholdConfidenceValue=_thresholdConfidenceValue - In the implementation block
@property (assign,nonatomic) float thresholdPrecOfValidSpot;                                 //@synthesize thresholdPrecOfValidSpot=_thresholdPrecOfValidSpot - In the implementation block
@property (assign,nonatomic) float allowedFrameCropWidthThreshold;                           //@synthesize allowedFrameCropWidthThreshold=_allowedFrameCropWidthThreshold - In the implementation block
@property (assign,nonatomic) float allowedFrameCropHeightThreshold;                          //@synthesize allowedFrameCropHeightThreshold=_allowedFrameCropHeightThreshold - In the implementation block
@property (assign,nonatomic) float sensorHeightFromWidthAnd4By3RatioAssumption;              //@synthesize sensorHeightFromWidthAnd4By3RatioAssumption=_sensorHeightFromWidthAnd4By3RatioAssumption - In the implementation block
@property (assign,nonatomic) float allowedDriftFromSymmetricCrop;                            //@synthesize allowedDriftFromSymmetricCrop=_allowedDriftFromSymmetricCrop - In the implementation block
@property (assign,nonatomic) float allowedFrameRatio;                                        //@synthesize allowedFrameRatio=_allowedFrameRatio - In the implementation block
@property (assign,nonatomic) float allowedFrameRatioThreshold;                               //@synthesize allowedFrameRatioThreshold=_allowedFrameRatioThreshold - In the implementation block
@property (assign,nonatomic) BOOL debugOutputEnabled;                                        //@synthesize debugOutputEnabled=_debugOutputEnabled - In the implementation block
-(id)init;
-(BOOL)debugOutputEnabled;
-(void)setDebugOutputEnabled:(BOOL)arg1 ;
-(BOOL)isFrameValidForCalibration:(CVBufferRef)arg1 imageMetadata:(id)arg2 pointCloud:(id)arg3 ;
-(BOOL)controllerLogic:(CVBufferRef)arg1 jdpc:(id)arg2 rate:(unsigned)arg3 ;
-(BOOL)isJasperFrameValid:(id)arg1 ;
-(BOOL)is:(double)arg1 around:(double)arg2 withPercentage:(float)arg3 ;
-(BOOL)is:(double)arg1 distanceFromSymmetricCroppingPoint:(double)arg2 normalizedBySensorDimention:(double)arg3 ;
-(BOOL)isInSupportedFormat:(CVBufferRef)arg1 ;
-(BOOL)isPixBufFrameValid:(CVBufferRef)arg1 withMetadata:(id)arg2 ;
-(void)rgbj_controller_log:(id)arg1 isErrorMessage:(BOOL)arg2 ;
-(unsigned)numberOfValidSpotsForValidFrame;
-(void)setNumberOfValidSpotsForValidFrame:(unsigned)arg1 ;
-(float)thresholdDepthValue;
-(void)setThresholdDepthValue:(float)arg1 ;
-(float)thresholdConfidenceValue;
-(void)setThresholdConfidenceValue:(float)arg1 ;
-(float)thresholdPrecOfValidSpot;
-(void)setThresholdPrecOfValidSpot:(float)arg1 ;
-(float)allowedFrameCropWidthThreshold;
-(void)setAllowedFrameCropWidthThreshold:(float)arg1 ;
-(float)allowedFrameCropHeightThreshold;
-(void)setAllowedFrameCropHeightThreshold:(float)arg1 ;
-(float)sensorHeightFromWidthAnd4By3RatioAssumption;
-(void)setSensorHeightFromWidthAnd4By3RatioAssumption:(float)arg1 ;
-(float)allowedDriftFromSymmetricCrop;
-(void)setAllowedDriftFromSymmetricCrop:(float)arg1 ;
-(float)allowedFrameRatio;
-(void)setAllowedFrameRatio:(float)arg1 ;
-(float)allowedFrameRatioThreshold;
-(void)setAllowedFrameRatioThreshold:(float)arg1 ;
@end

