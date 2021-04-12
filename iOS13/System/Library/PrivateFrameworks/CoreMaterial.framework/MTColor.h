/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
*/


#import <CoreMaterial/CoreMaterial-Structs.h>
@interface MTColor : NSObject {

	CGColorRef _cachedColor;

}
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)blackColor;
+(id)whiteColor;
+(id)colorWithWhite:(double)arg1 alpha:(double)arg2 ;
+(id)pinkColor;
+(id)colorWithDescription:(id)arg1 ;
-(void)dealloc;
-(CGColorRef)CGColor;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(id)_rgbColor;
-(id)_initWithCGColor:(CGColorRef)arg1 ;
-(id)_initWithDescription:(id)arg1 ;
-(id)colorDescription;
-(id)colorWithAdditionalAlphaComponent:(double)arg1 ;
-(id)colorBlendedWithColor:(id)arg1 ;
-(CAColorMatrix)sourceOverColorMatrix;
@end

