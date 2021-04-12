/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/

#import <RawCamera/RawCamera-Structs.h>
#import <RawCamera/RAWFilter.h>

@class CIImage, CIVector, NSNumber;

@interface RAWDemosaicFilter : RAWFilter {

	CIImage* inputImage;
	CIVector* inputBlacks;
	NSNumber* inputRange;
	CIVector* inputFactors;
	NSNumber* inputPattern;
	NSNumber* inputDespeckle;
	CIVector* inputCropRect;
	NSNumber* inputRepresentativeNoise;
	NSNumber* inputDraftMode;
	NSNumber* inputScaleFactor;
	CIVector* inputNoiseModel;
	NSNumber* inputBaselineExposure;
	NSNumber* inputVersion;

}
-(id)range;
-(id)outputImage;
-(CGRect)regionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(id)crop;
-(id)phaseForBayer;
-(id)phaseForXtrans;
-(int)sensorType;
-(int)versionfor:(int)arg1 ;
-(id)phaseFor:(int)arg1 ;
-(int)forceVersion;
-(id)exposureFactor;
-(id)blacks;
-(id)noiseModel;
@end

