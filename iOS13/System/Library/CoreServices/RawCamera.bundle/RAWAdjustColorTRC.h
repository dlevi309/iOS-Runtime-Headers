/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWAdjustColorTRC : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;
	NSNumber* inputTRCs0;
	NSNumber* inputTRCy1;
	NSNumber* inputTRCs1;
	NSNumber* inputTRCy2;
	NSNumber* inputTRCs2;
	NSNumber* inputTRCy3;
	NSNumber* inputTRCs3;
	NSNumber* inputTRCs4;
	NSNumber* inputBoostAmount;
	NSNumber* inputBoostShadowAmount;
	NSNumber* inputBoostPreserveHueAmount;
	NSNumber* inputBoostPreserveRYHueAmount;
	NSNumber* inputBoostPreserveYGHueAmount;
	NSNumber* inputBoostPreserveGCHueAmount;
	NSNumber* inputBoostPreserveCBHueAmount;
	NSNumber* inputBoostPreserveBMHueAmount;
	NSNumber* inputBoostPreserveMRHueAmount;
	NSNumber* inputVersion;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)customAttributes;
-(id)customAttributes;
-(id)outputImage;
-(void)setInputBoostAmount:(id)arg1 ;
@end

