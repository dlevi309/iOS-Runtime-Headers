/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


#import <TVMLKit/TVMLKit-Structs.h>
@interface TVMLUtilities : NSObject
+(id)randomColor;
+(id)fontFromTextStyle:(id)arg1 fontWeight:(id)arg2 fontSize:(double)arg3 symbolicTraits:(unsigned)arg4 ;
+(double)uiFontWeightFromCSSFontWeight:(id)arg1 ;
+(BOOL)_cornerRadiiFromElement:(id)arg1 cornerRadii:(TVCornerRadii*)arg2 circle:(BOOL*)arg3 ;
+(BOOL)_cornerRadiiWithBorderRadius:(id)arg1 cornerRadii:(TVCornerRadii*)arg2 imageWidth:(double)arg3 imageTreatmentValue:(id)arg4 circle:(BOOL*)arg5 ;
+(double)focusedSizeIncreaseForSize:(CGSize)arg1 upscaleFactor:(double)arg2 useInSearchPartial:(BOOL)arg3 ;
+(id)rowSpacingMetricsForRowMetrics:(id)arg1 forShowcase:(BOOL)arg2 ;
+(id)_placeholderImageForViewElement:(id)arg1 ;
+(id)_placeholderImageForViewElement:(id)arg1 withCornerRadii:(TVCornerRadii)arg2 andScaledSize:(CGSize)arg3 ;
+(CGPathRef)shadowPathWithCornerRadii:(TVCornerRadii)arg1 andScaledSize:(CGSize)arg2 ;
+(long long)_interfaceStyleForElement:(id)arg1 ;
+(long long)_overrideInterfaceStyleForElement:(id)arg1 ;
+(BOOL)_cornerRadiiFromImgTreatmentValue:(id)arg1 width:(double)arg2 cornerRadii:(TVCornerRadii*)arg3 circle:(BOOL*)arg4 ;
+(id)_placeholderImageForValue:(id)arg1 userInterfaceStyle:(long long)arg2 withCornerRadii:(TVCornerRadii)arg3 andScaledSize:(CGSize)arg4 ;
+(id)TVMLKitBundle;
+(long long)interfaceStyleForTemplateElement:(id)arg1 ;
+(id)_placeholderImageForValue:(id)arg1 userInterfaceStyle:(long long)arg2 ;
+(id)_defaultPlaceholderImageForUserInterfaceStyle:(long long)arg1 ;
+(id)_placeholderImageForViewElement:(id)arg1 imageLayout:(id)arg2 ;
+(id)_defaultPlaceholderImageForUserInterfaceStyle:(long long)arg1 withCornerRadii:(TVCornerRadii)arg2 andSize:(CGSize)arg3 ;
+(id)_placeholderImageForViewElement:(id)arg1 withImageLayout:(id)arg2 cornerRadii:(TVCornerRadii)arg3 andScaledSize:(CGSize)arg4 ;
+(void)disassociateIKViewElementsRecursivelyFromView:(id)arg1 ;
+(id)TVUIKitBundle;
+(id)TVKitBundle;
+(id)fontFromStyle:(id)arg1 ;
+(BOOL)cornerRadiiFromElement:(id)arg1 cornerRadii:(TVCornerRadii*)arg2 circle:(BOOL*)arg3 ;
+(BOOL)_cornerRadiiFromImageLayout:(id)arg1 cornerRadii:(TVCornerRadii*)arg2 circle:(BOOL*)arg3 ;
+(double)focusedSizeIncreaseForSize:(CGSize)arg1 upscaleFactor:(double)arg2 ;
+(CGRect)centerRect:(CGRect)arg1 inRect:(CGRect)arg2 ;
+(void)getValuesFromTransform:(CGAffineTransform)arg1 translation:(CGPoint*)arg2 rotation:(CGPoint*)arg3 ;
+(id)indexPathForFirstItemAttributeValue:(id)arg1 ;
+(id)rowSpacingMetricsForRowMetrics:(id)arg1 ;
+(id)imageWithRadialGradientOverlayFromImage:(id)arg1 ;
+(id)placeholderImageForViewElement:(id)arg1 ;
+(id)placeholderImageForViewElement:(id)arg1 withCornerRadii:(TVCornerRadii)arg2 andScaledSize:(CGSize)arg3 ;
+(CGPathRef)shadowPathForViewElement:(id)arg1 withCornerRadii:(TVCornerRadii)arg2 andScaledSize:(CGSize)arg3 ;
+(long long)semanticContentAttributeForTemplateElement:(id)arg1 ;
+(long long)overrideInterfaceStyleForTemplateElement:(id)arg1 ;
+(id)_bgImageElementForProductTemplate:(id)arg1 ;
+(long long)semanticAlignmentForAlignment:(long long)arg1 semanticContentAttribute:(long long)arg2 ;
+(long long)semanticPositionForPosition:(long long)arg1 semanticContentAttribute:(long long)arg2 ;
+(long long)contentModeForPosition:(long long)arg1 defaultMode:(long long)arg2 ;
+(BOOL)isFlowcaseAtTopOfStackFromElement:(id)arg1 ;
+(BOOL)canHandleDecodingOnRenderThread;
+(id)_mobileGestaltStringForKey:(CFStringRef)arg1 ;
+(double)_headerFadeForShowcaseFactor:(double)arg1 ;
+(BOOL)isAXSmallEnabled:(id)arg1 ;
+(BOOL)isAXLargeEnabled:(id)arg1 ;
@end

