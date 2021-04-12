/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)customAttributes;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setInputExposure:(id)arg1 ;
-(id)customAttributes;
-(void)setInputBias:(id)arg1 ;
-(id)outputImage;
-(id)outputMatrix;
@end

