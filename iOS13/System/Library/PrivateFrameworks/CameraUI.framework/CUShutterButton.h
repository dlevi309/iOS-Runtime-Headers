/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)shutterButton;
+(id)shutterButtonWithSpec:(CAMShutterButtonSpec)arg1 ;
+(id)smallShutterButton;
+(id)shutterButtonWithLayoutStyle:(long long)arg1 ;
+(id)smallShutterButtonWithLayoutStyle:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<CAMShutterButtonDelegate>)delegate;
-(void)setDelegate:(id<CAMShutterButtonDelegate>)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(void)setContentColor:(UIColor *)arg1 ;
-(UIColor *)contentColor;
-(id)_contentColor;
-(void)setSpinning:(BOOL)arg1 ;
-(void)setSpec:(CAMShutterButtonSpec)arg1 ;
-(CAMShutterButtonSpec)spec;
-(UIView *)_spinnerView;
-(void)setMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setShowDisabled:(BOOL)arg1 ;
-(BOOL)isSpinning;
-(CAMShutterButtonRingView *)_outerView;
-(UIView *)_innerView;
-(CGSize)_sizeForMode:(long long)arg1 ;
-(double)_cornerRadiusForMode:(long long)arg1 ;
-(void)_updateOuterAndInnerLayers;
-(void)_performHighlightAnimation;
-(void)_performModeSwitchAnimationFromMode:(long long)arg1 toMode:(long long)arg2 animated:(BOOL)arg3 ;
-(void)_updateSpinningAnimations;
-(BOOL)showDisabled;
-(UIImageView *)_outerImageView;
-(UIEdgeInsets)tappableEdgeInsets;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 layoutStyle:(long long)arg2 spec:(CAMShutterButtonSpec)arg3 ;
-(void)_commonCAMShutterButtonInitializationWithLayoutStyle:(long long)arg1 spec:(CAMShutterButtonSpec)arg2 ;
-(UIView *)_innerViewContrastView;
-(BOOL)_shouldShowBackgroundViewForMode:(long long)arg1 ;
-(UIView *)_stopModeBackground;
-(UIColor *)stopModeBackgroundColor;
-(id)_outerImageForMode:(long long)arg1 layoutStyle:(long long)arg2 ;
-(SCD_Struct_CU17)_timelapseRingSpecForLayoutStyle:(long long)arg1 ;
-(void)set_stopModeBackground:(UIView *)arg1 ;
-(BOOL)_shouldShowContrastBorderForMode:(long long)arg1 layoutStyle:(long long)arg2 ;
-(id)_innerCircleColorForMode:(long long)arg1 spinning:(BOOL)arg2 ;
-(CAMTimelapseShutterRingView *)_timelapseOuterView;
-(BOOL)_isSpinningSupportedForLayoutStyle:(long long)arg1 ;
-(void)set_spinnerView:(UIView *)arg1 ;
-(void)setStopModeBackgroundColor:(UIColor *)arg1 ;
@end

