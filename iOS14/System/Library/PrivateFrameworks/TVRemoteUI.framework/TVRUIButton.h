/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <TVRemoteUI/TVRemoteUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>

@class UILabel, UIImageView, UIViewPropertyAnimator, UIColor, _TVRButtonHaptic, NSString;

@interface TVRUIButton : UIControl <_UICursorInteractionDelegate> {

	BOOL _tapAction;
	BOOL _disableHighlightEffect;
	UILabel* _titleLabel;
	UIImageView* _imageView;
	long long _buttonType;
	UIViewPropertyAnimator* _highlightAnimator;
	UIViewPropertyAnimator* _unhighlightAnimator;
	UIColor* _defaultBackgroundColor;
	_TVRButtonHaptic* _haptic;

}

@property (nonatomic,retain) UIViewPropertyAnimator * highlightAnimator;                                //@synthesize highlightAnimator=_highlightAnimator - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * unhighlightAnimator;                              //@synthesize unhighlightAnimator=_unhighlightAnimator - In the implementation block
@property (nonatomic,retain) UIColor * defaultBackgroundColor;                                          //@synthesize defaultBackgroundColor=_defaultBackgroundColor - In the implementation block
@property (nonatomic,retain) _TVRButtonHaptic * haptic;                                                 //@synthesize haptic=_haptic - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) long long buttonType;                                                    //@synthesize buttonType=_buttonType - In the implementation block
@property (getter=hasTapAction,nonatomic,readonly) BOOL tapAction;                                      //@synthesize tapAction=_tapAction - In the implementation block
@property (assign,getter=isHighlightEffectDisabled,nonatomic) BOOL disableHighlightEffect;              //@synthesize disableHighlightEffect=_disableHighlightEffect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isValidButtonType:(long long)arg1 ;
+(BOOL)buttonTypeHasTapAction:(long long)arg1 ;
-(UILabel *)titleLabel;
-(void)setImageView:(UIImageView *)arg1 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(UIImageView *)imageView;
-(UIViewPropertyAnimator *)highlightAnimator;
-(void)setHighlightAnimator:(UIViewPropertyAnimator *)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setDefaultBackgroundColor:(UIColor *)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_touchDown:(id)arg1 ;
-(void)layoutSubviews;
-(_TVRButtonHaptic *)haptic;
-(UIColor *)defaultBackgroundColor;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(long long)buttonType;
-(BOOL)hasTapAction;
-(void)_touchUp:(id)arg1 ;
-(UIViewPropertyAnimator *)unhighlightAnimator;
-(BOOL)isHighlightEffectDisabled;
-(void)setUnhighlightAnimator:(UIViewPropertyAnimator *)arg1 ;
-(id)initWithType:(long long)arg1 hasTapAction:(BOOL)arg2 ;
-(void)setDisableHighlightEffect:(BOOL)arg1 ;
-(void)setHaptic:(_TVRButtonHaptic *)arg1 ;
@end

