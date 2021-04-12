/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, CIVector, NSNumber;

@interface RAWTemperatureAdjust : RAWFilter {

	CIImage* inputImage;
	CIVector* inputWhitePoint;
	NSNumber* inputExposure;
	NSNumber* inputVersion;
	CIVector* defaultWhitePoint;

}
+(id)customAttributes;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setInputExposure:(id)arg1 ;
-(id)customAttributes;
-(id)outputImage;
-(id)outputMatrix;
-(void)setInputWhitePoint:(id)arg1 ;
@end

