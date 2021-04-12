/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber, CIVector;

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
	CIVector* inputReferencePoints;
	CIVector* inputOutputPoints;

}
+(id)customAttributes;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)customAttributes;
-(id)outputImage;
-(void)setInputBoostAmount:(id)arg1 ;
@end

