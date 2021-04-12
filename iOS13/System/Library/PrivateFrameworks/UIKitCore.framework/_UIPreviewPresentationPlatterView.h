/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(UIView *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(void)setBlurRadius:(double)arg1 ;
-(double)blurRadius;
-(double)cornerRadius;
-(_UIPreviewPresentationEffectView *)contentClipView;
-(void)setDropShadowEnabled:(BOOL)arg1 ;
-(void)setContentEffectView:(_UIPreviewPresentationEffectView *)arg1 ;
-(void)setContentClipView:(_UIPreviewPresentationEffectView *)arg1 ;
-(void)setContentTransformView:(UIView *)arg1 ;
-(void)setContentShadowView:(UIView *)arg1 ;
-(UIView *)contentTransformView;
-(_UIPreviewPresentationEffectView *)contentEffectView;
-(UIView *)contentShadowView;
-(CGSize)contentClippingSize;
-(BOOL)isDropShadowEnabled;
-(void)setContentClippingSize:(CGSize)arg1 ;
-(BOOL)_shouldEnclosedScrollViewFlashIndicators:(id)arg1 ;
@end

