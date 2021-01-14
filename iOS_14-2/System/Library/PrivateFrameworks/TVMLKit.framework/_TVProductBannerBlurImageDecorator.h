/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class _UIBackdropViewSettings;

@interface _TVProductBannerBlurImageDecorator : NSObject {

	BOOL _lightStyle;
	_UIBackdropViewSettings* _backdropSettings;

}

@property (assign,nonatomic) BOOL lightStyle;                                         //@synthesize lightStyle=_lightStyle - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * backdropSettings;              //@synthesize backdropSettings=_backdropSettings - In the implementation block
-(BOOL)lightStyle;
-(id)decorate:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 ;
-(id)blurImageWithImage:(id)arg1 targetSize:(CGSize)arg2 scaleSize:(CGSize)arg3 ;
-(id)resizeImage:(CGImageRef)arg1 targetSize:(CGSize)arg2 shouldDither:(BOOL)arg3 ;
-(void)setLightStyle:(BOOL)arg1 ;
-(_UIBackdropViewSettings *)backdropSettings;
-(void)setBackdropSettings:(_UIBackdropViewSettings *)arg1 ;
@end

