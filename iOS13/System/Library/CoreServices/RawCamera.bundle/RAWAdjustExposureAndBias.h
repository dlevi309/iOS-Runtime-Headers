/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWAdjustExposureAndBias : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;
	NSNumber* inputBaselineExposure;
	NSNumber* inputExposure;
	NSNumber* inputBias;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)customAttributes;
-(id)customAttributes;
-(id)outputImage;
-(void)setInputBias:(id)arg1 ;
-(void)setInputExposure:(id)arg1 ;
-(id)outputMatrix;
@end

