/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


#import <VideosUI/VideosUI-Structs.h>
@interface VUIUtilities : NSObject
+(BOOL)isTVApp;
+(id)randomColor;
+(long long)textAlignmentWithSemanticContentAttribute:(long long)arg1 ;
+(id)placeholderImageResourceName:(long long)arg1 ;
+(TVCornerRadii)imageCornerRadiiWithStyle:(long long)arg1 ;
+(double)imageCornerRadiusWithStyle:(long long)arg1 ;
+(BOOL)contentSizeCategoryIsAccessibility:(id)arg1 ;
+(BOOL)isAXLargeEnabled:(id)arg1 ;
+(BOOL)shouldInvalidateLayoutWithPreviousTraitCollection:(id)arg1 newTraitCollection:(id)arg2 ;
+(double)scaleContentSizeValue:(double)arg1 forTraitCollection:(id)arg2 ;
+(CGSize)imageSizeWithAspectRatio:(double)arg1 scaleToSize:(CGSize)arg2 ;
+(BOOL)isIpadLayout;
+(BOOL)isAXSmallEnabled:(id)arg1 ;
+(double)scaleContentSizeValue:(double)arg1 forTraitCollection:(id)arg2 maximumContentSizeCategory:(id)arg3 ;
+(id)colorFromRGBStr:(id)arg1 ;
+(long long)interfaceStyleFromTheme:(id)arg1 defaultInterfaceStyle:(long long)arg2 ;
+(id)VideosUIBundle;
+(double)libraryCategoryListWidth;
+(double)libraryCategoryListWidthForWindowWidth:(double)arg1 ;
+(id)createImageProxyForResourceObject:(id)arg1 imageSize:(CGSize)arg2 ;
+(unsigned long long)minimumNumberOfItemsToEnableSeeAllButton;
+(BOOL)isInFullscreenOrPipPlayback;
+(void)gradientConfigForCollection:(id)arg1 gradientMask:(long long)arg2 properties:(id)arg3 configuration:(SCD_Struct_VU9*)arg4 ;
+(double)libraryListMarginToGrid;
+(id)colorFromHexStr:(id)arg1 ;
+(id)gradientLayerLocationsFromSpacings:(id)arg1 height:(double)arg2 ;
@end

