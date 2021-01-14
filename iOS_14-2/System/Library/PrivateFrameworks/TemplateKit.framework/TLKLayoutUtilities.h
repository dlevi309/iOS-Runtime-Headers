/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/


#import <TemplateKit/TemplateKit-Structs.h>
@interface TLKLayoutUtilities : NSObject
+(id)controlsInView:(id)arg1 ;
+(BOOL)isWideScreen;
+(BOOL)isSuperLargeAccessibilitySize;
+(BOOL)widthIsCompact:(double)arg1 ;
+(void)setDynamicBaselineAlignmentsForLabel:(id)arg1 top:(double)arg2 bottom:(double)arg3 ;
+(void)applyRowBoundedSizingToImageView:(id)arg1 isCompactWidth:(BOOL)arg2 ;
+(CGSize)idealImageSizeWithSize:(CGSize)arg1 fittingSize:(CGSize)arg2 ;
+(double)flooredValue:(double)arg1 inView:(id)arg2 ;
+(double)deviceScaledFlooredValue:(double)arg1 ;
+(void)requireIntrinsicSizeForView:(id)arg1 ;
+(UIEdgeInsets)deviceScaledRoundedInsets:(UIEdgeInsets)arg1 ;
+(double)scaledValueForValue:(double)arg1 withFont:(id)arg2 ;
+(void)applyMinimumSizeTouchInsetsForControlsInView:(id)arg1 ;
+(double)roundedValue:(double)arg1 inView:(id)arg2 ;
+(CGSize)maxThumbnailSize;
+(double)deviceScaledRoundedValue:(double)arg1 ;
+(CGRect)deviceScaledRoundedRect:(CGRect)arg1 ;
+(double)contentHeightOfTableView:(id)arg1 forWidth:(double)arg2 maxHeight:(double)arg3 ;
+(CGSize)maxThumbnailSizeIsCompactWidth:(BOOL)arg1 ;
+(CGSize)minimumButtonSize;
+(void)requireIntrinsicSizeForView:(id)arg1 withPriority:(float)arg2 ;
+(double)ceilingValue:(double)arg1 inView:(id)arg2 ;
@end

