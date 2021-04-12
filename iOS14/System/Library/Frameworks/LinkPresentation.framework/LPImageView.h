/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>

@class LPImage, LPImagePresentationProperties, LPImageViewStyle, UIImageView, UIView;

@interface LPImageView : LPComponentView {

	LPImage* _image;
	LPImagePresentationProperties* _properties;
	LPImageViewStyle* _style;
	LPImageViewStyle* _originalStyle;
	long long _currentScalingMode;
	long long _platterReason;
	UIImageView* _imageView;
	UIView* _overlayView;
	UIView* _backgroundView;

}
-(void)layoutComponentView;
-(id)init;
-(long long)_filter;
-(id)initWithImage:(id)arg1 properties:(id)arg2 style:(id)arg3 ;
-(BOOL)shouldApplyBackground;
-(void)installDarkeningViewIfNeeded;
-(void)updateCornerRadius;
-(id)_createImageViewWithImage:(id)arg1 ;
-(void)_updateScalingMode;
-(void)updateShadowPath;
-(void)ensureImageView;
-(id)_createOverlayViewWithOpacity:(double)arg1 ;
-(CGSize)imageSizeThatFits:(CGSize)arg1 ;
-(long long)scalingModeForSize:(CGSize)arg1 ;
-(void)_setImageViewScalingMode:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

