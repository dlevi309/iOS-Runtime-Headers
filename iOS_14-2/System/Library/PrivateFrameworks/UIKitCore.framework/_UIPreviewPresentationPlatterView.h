/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, _UIPreviewPresentationEffectView;

@interface _UIPreviewPresentationPlatterView : UIView {

	BOOL _dropShadowEnabled;
	UIView* _contentView;
	_UIPreviewPresentationEffectView* _contentEffectView;
	_UIPreviewPresentationEffectView* _contentClipView;
	UIView* _contentTransformView;
	UIView* _contentShadowView;
	CGSize _contentSize;
	CGSize _contentClippingSize;

}

@property (nonatomic,retain) UIView * contentView;                                              //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) _UIPreviewPresentationEffectView * contentEffectView;              //@synthesize contentEffectView=_contentEffectView - In the implementation block
@property (nonatomic,retain) _UIPreviewPresentationEffectView * contentClipView;                //@synthesize contentClipView=_contentClipView - In the implementation block
@property (nonatomic,retain) UIView * contentTransformView;                                     //@synthesize contentTransformView=_contentTransformView - In the implementation block
@property (nonatomic,retain) UIView * contentShadowView;                                        //@synthesize contentShadowView=_contentShadowView - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) CGSize contentClippingSize;                                        //@synthesize contentClippingSize=_contentClippingSize - In the implementation block
@property (assign,nonatomic) double blurRadius; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,getter=isDropShadowEnabled,nonatomic) BOOL dropShadowEnabled;                 //@synthesize dropShadowEnabled=_dropShadowEnabled - In the implementation block
-(void)setBlurRadius:(double)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(double)blurRadius;
-(CGSize)contentSize;
-(id)initWithContentView:(id)arg1 ;
-(double)cornerRadius;
-(void)layoutSubviews;
-(void)setContentView:(UIView *)arg1 ;
-(_UIPreviewPresentationEffectView *)contentClipView;
-(void)setDropShadowEnabled:(BOOL)arg1 ;
-(_UIPreviewPresentationEffectView *)contentEffectView;
-(void)setContentEffectView:(_UIPreviewPresentationEffectView *)arg1 ;
-(void)setContentClipView:(_UIPreviewPresentationEffectView *)arg1 ;
-(void)setContentTransformView:(UIView *)arg1 ;
-(void)setContentShadowView:(UIView *)arg1 ;
-(UIView *)contentTransformView;
-(UIView *)contentShadowView;
-(CGSize)contentClippingSize;
-(BOOL)isDropShadowEnabled;
-(void)setContentClippingSize:(CGSize)arg1 ;
-(BOOL)_shouldEnclosedScrollViewFlashIndicators:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(UIView *)contentView;
@end

