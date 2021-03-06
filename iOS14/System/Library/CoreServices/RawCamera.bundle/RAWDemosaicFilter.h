/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)crop;
-(id)range;
-(id)blacks;
-(int)sensorType;
-(CGRect)regionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(id)outputImage;
-(id)phaseForBayer;
-(id)phaseForXtrans;
-(int)versionfor:(int)arg1 ;
-(id)phaseFor:(int)arg1 ;
-(int)forceVersion;
-(id)exposureFactor;
-(id)noiseModel;
@end

