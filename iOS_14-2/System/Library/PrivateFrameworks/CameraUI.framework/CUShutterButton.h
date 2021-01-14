/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIButton.h>

@protocol CAMShutterButtonDelegate;
@class UIColor, CAMShutterButtonRingView, UIImageView, CAMTimelapseShutterRingView, UIView;

@interface CUShutterButton : UIButton {

	BOOL _spinning;
	BOOL _showDisabled;
	long long _mode;
	id<CAMShutterButtonDelegate> _delegate;
	UIColor* _contentColor;
	UIColor* _stopModeBackgroundColor;
	CAMShutterButtonRingView* __outerView;
	UIImageView* __outerImageView;
	CAMTimelapseShutterRingView* __timelapseOuterView;
	UIView* __innerView;
	UIView* __innerViewContrastView;
	UIView* __stopModeBackground;
	UIView* __spinnerView;
	long long _layoutStyle;
	UIEdgeInsets _tappableEdgeInsets;
	CAMShutterButtonSpec _spec;

}

@property (nonatomic,readonly) CAMShutterButtonRingView * _outerView;                          //@synthesize _outerView=__outerView - In the implementation block
@property (nonatomic,readonly) UIImageView * _outerImageView;                                  //@synthesize _outerImageView=__outerImageView - In the implementation block
@property (nonatomic,readonly) CAMTimelapseShutterRingView * _timelapseOuterView;              //@synthesize _timelapseOuterView=__timelapseOuterView - In the implementation block
@property (nonatomic,readonly) UIView * _innerView;                                            //@synthesize _innerView=__innerView - In the implementation block
@property (nonatomic,readonly) UIView * _innerViewContrastView;                                //@synthesize _innerViewContrastView=__innerViewContrastView - In the implementation block
@property (nonatomic,retain) UIView * _stopModeBackground;                                     //@synthesize _stopModeBackground=__stopModeBackground - In the implementation block
@property (nonatomic,retain) UIView * _spinnerView;                                            //@synthesize _spinnerView=__spinnerView - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                            //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) CAMShutterButtonSpec spec;                                        //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) long long mode;                                                   //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic,__weak) id<CAMShutterButtonDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isSpinning,nonatomic) BOOL spinning;                                  //@synthesize spinning=_spinning - In the implementation block
@property (assign,nonatomic) BOOL showDisabled;                                                //@synthesize showDisabled=_showDisabled - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                                  //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
@property (nonatomic,retain) UIColor * contentColor;                                           //@synthesize contentColor=_contentColor - In the implementation block
@property (nonatomic,retain) UIColor * stopModeBackgroundColor;                                //@synthesize stopModeBackgroundColor=_stopModeBackgroundColor - In the implementation block
+(id)shutterButtonWithSpec:(CAMShutterButtonSpec)arg1 ;
+(id)shutterButton;
+(id)smallShutterButtonWithLayoutStyle:(long long)arg1 ;
+(id)smallShutterButton;
+(id)shutterButtonWithLayoutStyle:(long long)arg1 ;
-(UIColor *)contentColor;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(double)_cornerRadiusForMode:(long long)arg1 ;
-(void)setLayoutStyle:(long long)arg1 ;
-(void)setSpec:(CAMShutterButtonSpec)arg1 ;
-(long long)mode;
-(void)_performModeSwitchAnimationFromMode:(long long)arg1 toMode:(long long)arg2 animated:(BOOL)arg3 ;
-(CGSize)intrinsicContentSize;
-(UIEdgeInsets)tappableEdgeInsets;
-(void)setShowDisabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CAMShutterButtonDelegate>)delegate;
-(UIEdgeInsets)alignmentRectInsets;
-(void)_commonCAMShutterButtonInitializationWithLayoutStyle:(long long)arg1 spec:(CAMShutterButtonSpec)arg2 ;
-(void)_updateOuterAndInnerLayers;
-(id)_innerCircleColorForMode:(long long)arg1 spinning:(BOOL)arg2 ;
-(long long)layoutStyle;
-(BOOL)_isSpinningSupportedForLayoutStyle:(long long)arg1 ;
-(UIColor *)stopModeBackgroundColor;
-(CAMShutterButtonRingView *)_outerView;
-(void)setContentColor:(UIColor *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 layoutStyle:(long long)arg2 spec:(CAMShutterButtonSpec)arg3 ;
-(CGSize)_sizeForMode:(long long)arg1 ;
-(void)setMode:(long long)arg1 ;
-(SCD_Struct_CU18)_timelapseRingSpecForLayoutStyle:(long long)arg1 ;
-(CAMShutterButtonSpec)spec;
-(void)setDelegate:(id<CAMShutterButtonDelegate>)arg1 ;
-(void)set_spinnerView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(BOOL)_shouldShowContrastBorderForMode:(long long)arg1 layoutStyle:(long long)arg2 ;
-(void)set_stopModeBackground:(UIView *)arg1 ;
-(void)setMode:(long long)arg1 animated:(BOOL)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_performHighlightAnimation;
-(void)setSpinning:(BOOL)arg1 ;
-(void)_updateSpinningAnimations;
-(id)initWithCoder:(id)arg1 ;
-(UIView *)_innerView;
-(UIImageView *)_outerImageView;
-(BOOL)showDisabled;
-(id)_contentColor;
-(BOOL)isSpinning;
-(CAMTimelapseShutterRingView *)_timelapseOuterView;
-(id)_outerImageForMode:(long long)arg1 layoutStyle:(long long)arg2 ;
-(UIView *)_innerViewContrastView;
-(UIView *)_spinnerView;
-(void)setStopModeBackgroundColor:(UIColor *)arg1 ;
-(UIView *)_stopModeBackground;
-(BOOL)_shouldShowBackgroundViewForMode:(long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

