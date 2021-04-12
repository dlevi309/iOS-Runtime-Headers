/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWAdjustColors : RAWFilter {

	CIImage* inputImage;
	NSNumber* inputVersion;
	NSNumber* inputM00;
	NSNumber* inputM01;
	NSNumber* inputM02;
	NSNumber* inputM10;
	NSNumber* inputM11;
	NSNumber* inputM12;
	NSNumber* inputM20;
	NSNumber* inputM21;
	NSNumber* inputM22;
	NSNumber* inputTRCs0;
	NSNumber* inputTRCy1;
	NSNumber* inputTRCs1;
	NSNumber* inputTRCy2;
	NSNumber* inputTRCs2;
	NSNumber* inputTRCy3;
	NSNumber* inputTRCs3;
	NSNumber* inputTRCs4;
	NSNumber* inputBoostKind;
	NSNumber* inputBoostAmount;
	NSNumber* inputBoostLuminanceAmount;
	NSNumber* inputBoostTransitionPoint;
	NSNumber* inputBoostTransitionWidth;

}
+(id)customAttributes;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)customAttributes;
-(id)outputImage;
-(void)setInputBoostAmount:(id)arg1 ;
@end

