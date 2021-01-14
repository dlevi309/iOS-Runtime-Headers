/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, CIVector, NSNumber;

@interface RAWRadialLensCorrection : RAWFilter {

	CIImage* inputImage;
	CIVector* inputScales;
	id inputColorSpace;
	NSNumber* inputDraftMode;
	NSNumber* inputLDCExecuteFlags;
	NSNumber* inputVersion;
	CIImage* mapImg;

}
+(id)customAttributes;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)outputImage;
-(BOOL)makeMapImages;
@end

