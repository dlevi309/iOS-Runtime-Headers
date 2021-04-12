/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber, CIVector, NSData;

@interface RAWProfileGainTableMapFilter : RAWFilter {

	CIImage* inputImage;
	NSNumber* inputMapPointsV;
	NSNumber* inputMapPointsH;
	NSNumber* inputMapSpacingV;
	NSNumber* inputMapSpacingH;
	NSNumber* inputMapOriginV;
	NSNumber* inputMapOriginH;
	NSNumber* inputMapPointsN;
	CIVector* inputWeights;
	NSData* inputGainData;
	NSNumber* inputStrength;
	NSNumber* inputDebug;
	NSNumber* inputOrientation;
	NSNumber* inputFlip;
	CIImage* _GainImage;

}
-(id)outputImage;
-(id)gainImage;
@end

