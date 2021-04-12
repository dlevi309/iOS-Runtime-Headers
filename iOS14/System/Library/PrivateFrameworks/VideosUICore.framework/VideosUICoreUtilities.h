/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/


#import <VideosUICore/VideosUICore-Structs.h>
@interface VideosUICoreUtilities : NSObject
+(id)URLForResource:(id)arg1 ;
+(id)imageForResource:(id)arg1 ;
+(double)radiusFromCornerRadii:(VUICornerRadii)arg1 ;
+(void)image:(id)arg1 didCompleteLoadingForCache:(long long)arg2 requestRecord:(id)arg3 ;
+(const CGPathRef)shadowPathWithCornerRadii:(VUICornerRadii)arg1 andScaledSize:(CGSize)arg2 ;
+(BOOL)radiiIsZero:(VUICornerRadii)arg1 ;
+(double)scaleContentSizeValue:(double)arg1 forTraitCollection:(id)arg2 ;
+(VUICornerRadii)radiiFromRadius:(double)arg1 ;
+(double)scaleContentSizeValue:(double)arg1 forTraitCollection:(id)arg2 maximumContentSizeCategory:(id)arg3 ;
+(id)VideosUIBundle;
+(BOOL)canHandleDecodingOnRenderThread;
+(id)_URLForResource:(id)arg1 inBundle:(id)arg2 ;
+(BOOL)_cornerRadiiWithBorderRadius:(id)arg1 cornerRadii:(VUICornerRadii*)arg2 imageWidth:(double)arg3 imageTreatmentValue:(id)arg4 circle:(BOOL*)arg5 ;
+(BOOL)_cornerRadiiFromImgTreatmentValue:(id)arg1 width:(double)arg2 cornerRadii:(VUICornerRadii*)arg3 circle:(BOOL*)arg4 ;
+(id)TVUIKitBundle;
+(double)focusedSizeIncreaseForSize:(CGSize)arg1 upscaleFactor:(double)arg2 ;
+(CGRect)centerRect:(CGRect)arg1 inRect:(CGRect)arg2 ;
+(const CGPathRef)createPathForRadii:(VUICornerRadii)arg1 inRect:(CGRect)arg2 isContinuous:(BOOL)arg3 ;
+(id)_getImageFromURLorBundle:(id)arg1 ;
+(id)defaultPlaceholderImageForUserInterfaceStyle:(long long)arg1 ;
+(id)VideosUICoreBundle;
+(id)_imageForResource:(id)arg1 ;
+(id)_vuiCoreResourceMap;
+(id)mobileGestaltStringForKey:(CFStringRef)arg1 ;
@end

