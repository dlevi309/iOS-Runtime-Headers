/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/


#import <TemplateKit/TemplateKit-Structs.h>
@interface TLKLayoutUtilities : NSObject
+(void)requireIntrinsicSizeForView:(id)arg1 ;
+(BOOL)isWideScreen;
+(BOOL)isSuperLargeAccessibilitySize;
+(double)deviceScaledRoundedValue:(double)arg1 ;
+(CGSize)idealImageSizeWithSize:(CGSize)arg1 fittingSize:(CGSize)arg2 ;
+(void)setDynamicBaselineAlignmentsForLabel:(id)arg1 top:(double)arg2 bottom:(double)arg3 ;
+(double)scaledValueForValue:(double)arg1 withFont:(id)arg2 ;
+(void)requireIntrinsicSizeForView:(id)arg1 withPriority:(float)arg2 ;
+(double)bestScaleForView:(id)arg1 ;
+(CGSize)maxThumbnailSize;
+(double)ceilingValue:(double)arg1 inView:(id)arg2 ;
+(double)flooredValue:(double)arg1 inView:(id)arg2 ;
+(double)roundedValue:(double)arg1 inView:(id)arg2 ;
+(CGRect)deviceScaledRoundedRect:(CGRect)arg1 ;
+(double)deviceScaledFlooredValue:(double)arg1 ;
+(void)applyRowBoundedSizingToImageView:(id)arg1 ;
@end

