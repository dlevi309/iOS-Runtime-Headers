/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIFloatingContentView, _TVVisualEffectView, UIView, UILabel, CALayer, UIColor, _TVImageView, IKViewElement;

@interface TVButtonLockup : UIView {

	_UIFloatingContentView* _floatingView;
	_TVVisualEffectView* _backdropView;
	UIView* _overlayView;
	UILabel* _textView;
	UILabel* _textMask;
	CALayer* _imageMask;
	UIColor* __backgroundColor;
	UIColor* _highlightColor;
	BOOL _disabled;
	long long _backdropStyle;
	long long _vibrantLabelThemeOverride;
	_TVImageView* _imageView;
	UILabel* _titleView;
	IKViewElement* _viewElement;

}

@property (nonatomic,readonly) long long backdropStyle;                        //@synthesize backdropStyle=_backdropStyle - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                  //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) long long vibrantLabelThemeOverride;              //@synthesize vibrantLabelThemeOverride=_vibrantLabelThemeOverride - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleView;                              //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,copy) UIColor * highlightColor;                           //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                      //@synthesize viewElement=_viewElement - In the implementation block
-(void)dealloc;
-(BOOL)isDisabled;
-(id)backgroundColor;
-(void)setBackgroundColor:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(_TVImageView *)imageView;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDisabled:(BOOL)arg1 ;
-(UILabel *)titleView;
-(void)setTitleView:(UILabel *)arg1 ;
-(long long)backdropStyle;
-(long long)_focusedSound;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)_selectButtonAction:(id)arg1 ;
-(void)_playButtonAction:(id)arg1 ;
-(void)_updateForAccessibilityChange;
-(void)_updateShadowForLabel:(id)arg1 inFocus:(BOOL)arg2 ;
-(void)_updateImageMask;
-(id)initWithFrame:(CGRect)arg1 blurEffectStyle:(long long)arg2 groupName:(id)arg3 ;
-(void)setVibrantLabelThemeOverride:(long long)arg1 ;
-(void)setText:(id)arg1 minimumScale:(double)arg2 maxNumberOfLines:(unsigned long long)arg3 ;
-(void)_updateForFocusStateChange;
-(void)_updateTextForAccessibilityAndFocus;
-(long long)vibrantLabelThemeOverride;
@end

