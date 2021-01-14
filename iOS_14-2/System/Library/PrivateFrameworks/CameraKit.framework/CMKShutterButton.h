/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIView, UIImageView, UIActivityIndicatorView;

@interface CMKShutterButton : UIButton {

	BOOL _pulsing;
	BOOL _spinning;
	BOOL _showDisabled;
	long long _buttonMode;
	UIView* __outerView;
	UIImageView* __outerImageView;
	UIView* __innerView;
	UIActivityIndicatorView* __progressActivityIndicatorView;
	CMKShutterButtonSpec _spec;

}

@property (assign,setter=_setSpec:,nonatomic) CMKShutterButtonSpec spec;                              //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) UIView * _outerView;                                                   //@synthesize _outerView=__outerView - In the implementation block
@property (nonatomic,readonly) UIImageView * _outerImageView;                                         //@synthesize _outerImageView=__outerImageView - In the implementation block
@property (nonatomic,readonly) UIView * _innerView;                                                   //@synthesize _innerView=__innerView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * _progressActivityIndicatorView;              //@synthesize _progressActivityIndicatorView=__progressActivityIndicatorView - In the implementation block
@property (assign,nonatomic) long long buttonMode;                                                    //@synthesize buttonMode=_buttonMode - In the implementation block
@property (assign,getter=isPulsing,nonatomic) BOOL pulsing;                                           //@synthesize pulsing=_pulsing - In the implementation block
@property (assign,getter=isSpinning,nonatomic) BOOL spinning;                                         //@synthesize spinning=_spinning - In the implementation block
@property (assign,nonatomic) BOOL showDisabled;                                                       //@synthesize showDisabled=_showDisabled - In the implementation block
+(id)shutterButton;
+(id)smallShutterButton;
+(id)tinyShutterButton;
+(id)shutterButtonWithDesiredSpec:(CMKShutterButtonSpec)arg1 ;
-(void)setPulsing:(BOOL)arg1 ;
-(double)_cornerRadiusForMode:(long long)arg1 ;
-(BOOL)isPulsing;
-(void)_performModeSwitchAnimationFromMode:(long long)arg1 toMode:(long long)arg2 animated:(BOOL)arg3 ;
-(CGSize)intrinsicContentSize;
-(void)setShowDisabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateOuterAndInnerLayers;
-(UIView *)_outerView;
-(void)setButtonMode:(long long)arg1 ;
-(CGSize)_sizeForMode:(long long)arg1 ;
-(void)_setSpec:(CMKShutterButtonSpec)arg1 ;
-(CMKShutterButtonSpec)spec;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_performHighlightAnimation;
-(void)setSpinning:(BOOL)arg1 ;
-(void)_updateSpinningAnimations;
-(id)initWithCoder:(id)arg1 ;
-(UIView *)_innerView;
-(UIImageView *)_outerImageView;
-(BOOL)showDisabled;
-(BOOL)isSpinning;
-(long long)buttonMode;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_commonCMKShutterButtonInitialization;
-(void)setButtonMode:(long long)arg1 animated:(BOOL)arg2 ;
-(double)_innerCircleDiameter;
-(id)_colorForMode:(long long)arg1 ;
-(double)_borderWidthForMode:(long long)arg1 ;
-(id)_outerImageForMode:(long long)arg1 ;
-(BOOL)_isStopMode:(long long)arg1 ;
-(BOOL)_shouldUseImageViewForMode:(long long)arg1 ;
-(BOOL)_shouldUseTimelapseOuterViewForMode:(long long)arg1 ;
-(UIActivityIndicatorView *)_progressActivityIndicatorView;
@end

