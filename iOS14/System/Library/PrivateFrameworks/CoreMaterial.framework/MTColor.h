/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
*/


#import <CoreMaterial/CoreMaterial-Structs.h>
@interface MTColor : NSObject {

	CGColorRef _cachedColor;

}
+(id)colorWithDescription:(id)arg1 ;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)pinkColor;
+(id)blackColor;
+(id)colorWithWhite:(double)arg1 alpha:(double)arg2 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)whiteColor;
-(CGColorRef)CGColor;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(id)colorDescription;
-(id)_rgbColor;
-(id)_initWithDescription:(id)arg1 ;
-(id)colorBlendedWithColor:(id)arg1 ;
-(id)_initWithCGColor:(CGColorRef)arg1 ;
-(id)colorWithAdditionalAlphaComponent:(double)arg1 ;
-(CAColorMatrix)sourceOverColorMatrix;
-(void)dealloc;
@end

