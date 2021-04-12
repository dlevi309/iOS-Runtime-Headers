/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UISwitchVisualElement.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UISwitchMVEGestureTrackingSessionElement.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <UIKitCore/_UICursorInteractionDelegate.h>

@class UIView, UIImageView, UIColor, UIImage, UISwitchMVEGestureTrackingSession, UILongPressGestureRecognizer, UIPanGestureRecognizer, NSString;

@interface UISwitchModernVisualElement : UISwitchVisualElement <UIGestureRecognizerDelegate, UISwitchMVEGestureTrackingSessionElement, CAAnimationDelegate, _UICursorInteractionDelegate> {

	UIView* _switchWellView;
	UIView* _leftSwitchWellView;
	UIView* _switchWellContainerView;
	UIView* _leftSwitchWellContainerView;
	UIImageView* _switchWellImageView;
	UIView* _switchWellImageViewContainer;
	UIImageView* _switchWellOffImageView;
	UIImageView* _switchWellOnImageView;
	UIImageView* _knobView;
	UIColor* _onTintColor;
	UIColor* _tintColor;
	BOOL _on;
	BOOL _pressed;
	BOOL _isAlwaysAccessible;
	BOOL _showsOnOffLabel;
	UIColor* _thumbTintColor;
	UIImage* _onImage;
	UIImage* _offImage;
	UISwitchMVEGestureTrackingSession* _gestureTrackingSession;
	UILongPressGestureRecognizer* _longPress;
	UIPanGestureRecognizer* _pan;

}

@property (nonatomic,retain) UIColor * thumbTintColor;                                                //@synthesize thumbTintColor=_thumbTintColor - In the implementation block
@property (nonatomic,retain) UIImage * onImage;                                                       //@synthesize onImage=_onImage - In the implementation block
@property (nonatomic,retain) UIImage * offImage;                                                      //@synthesize offImage=_offImage - In the implementation block
@property (assign,nonatomic) BOOL on;                                                                 //@synthesize on=_on - In the implementation block
@property (assign,nonatomic) BOOL pressed;                                                            //@synthesize pressed=_pressed - In the implementation block
@property (assign,nonatomic) BOOL showsOnOffLabel;                                                    //@synthesize showsOnOffLabel=_showsOnOffLabel - In the implementation block
@property (nonatomic,retain) UISwitchMVEGestureTrackingSession * gestureTrackingSession;              //@synthesize gestureTrackingSession=_gestureTrackingSession - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPress;                                //@synthesize longPress=_longPress - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * pan;                                            //@synthesize pan=_pan - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)preferredContentSize;
+(id)_modernGradientImageWithOnColor:(id)arg1 traitCollection:(id)arg2 ;
+(id)_modernThumbImageWithColor:(id)arg1 mask:(unsigned long long)arg2 traitCollection:(id)arg3 ;
-(BOOL)on;
-(id)_settings;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2 ;
-(void)setTintColor:(id)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(BOOL)pressed;
-(void)tintColorDidChange;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)_orderSubviews;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setThumbTintColor:(UIColor *)arg1 ;
-(UIColor *)thumbTintColor;
-(void)setOn:(BOOL)arg1 ;
-(void)setOnTintColor:(id)arg1 ;
-(void)setOnImage:(UIImage *)arg1 ;
-(void)setOffImage:(UIImage *)arg1 ;
-(UIImage *)onImage;
-(UIImage *)offImage;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setShowsOnOffLabel:(BOOL)arg1 ;
-(BOOL)displayedOn;
-(void)interactiveChangeToDisplayedOn:(BOOL)arg1 ;
-(void)sendStateChangeActions;
-(UISwitchMVEGestureTrackingSession *)gestureTrackingSession;
-(void)_updateDisplayAnimated:(BOOL)arg1 ;
-(void)_invalidateControl;
-(void)_handleLongPress:(id)arg1 ;
-(void)setLongPress:(UILongPressGestureRecognizer *)arg1 ;
-(void)_handlePan:(id)arg1 ;
-(void)setPan:(UIPanGestureRecognizer *)arg1 ;
-(BOOL)_feedbackEnabled;
-(void)performStateChangeFeedback;
-(UILongPressGestureRecognizer *)longPress;
-(UIPanGestureRecognizer *)pan;
-(void)_handleLongPressWithGestureLocationInBounds:(CGPoint)arg1 gestureState:(long long)arg2 ;
-(void)_handlePanWithGestureLocationInBounds:(CGPoint)arg1 horizontalTranslation:(double)arg2 gestureState:(long long)arg3 resetPanTranslationBlock:(/*^block*/id)arg4 ;
-(void)_invalidateWell;
-(void)_invalidateKnob;
-(void)_invalidateOnOffImages;
-(id)_effectiveThumbImage;
-(id)_effectiveOnTintColor;
-(id)_effectiveGradientImage;
-(id)_effectiveTintColor;
-(double)_wellBorderWidthPressed:(BOOL)arg1 on:(BOOL)arg2 ;
-(void)_transitionWellViewToPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_transitionWellViewToPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_transitionWellViewToOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_transitionKnobToPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_transitionKnobToPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_transitionKnobToOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_effectiveOffImage;
-(id)_effectiveOnImage;
-(CGPoint)_offImagePosition;
-(CGPoint)_onImagePosition;
-(id)_effectiveOffImageTintColor;
-(id)_effectiveOnImageTintColor;
-(void)_transitionImagesToPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_updateDisplayWithAnimationIfNeeded;
-(CGRect)_knobBoundsPressed:(BOOL)arg1 ;
-(CGPoint)_knobPositionOn:(BOOL)arg1 pressed:(BOOL)arg2 forBounds:(CGRect)arg3 ;
-(void)_switchToStaticMode:(BOOL)arg1 ;
-(id)_switchKnobWidthSpringAnimationFromValue:(id)arg1 toValue:(id)arg2 pressed:(BOOL)arg3 ;
-(id)_switchKnobPositionSpringAnimationFromValue:(id)arg1 toValue:(id)arg2 ;
-(CGRect)_switchWellContainerBoundsOn:(BOOL)arg1 pressed:(BOOL)arg2 ;
-(CGPoint)_switchWellContainerPositionOn:(BOOL)arg1 pressed:(BOOL)arg2 ;
-(CGRect)_leftSwitchWellContainerBoundsOn:(BOOL)arg1 pressed:(BOOL)arg2 ;
-(CGPoint)_leftSwitchWellContainerPositionOn:(BOOL)arg1 pressed:(BOOL)arg2 ;
-(CGPoint)_switchWellPositionOn:(BOOL)arg1 pressed:(BOOL)arg2 ;
-(id)_switchSpringAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 pressed:(BOOL)arg4 ;
-(CGPoint)_wellPositionOn:(BOOL)arg1 forBounds:(CGRect)arg2 ;
-(id)_switchTrackPositionSpringAnimationFromValue:(id)arg1 toValue:(id)arg2 on:(BOOL)arg3 ;
-(id)_switchTrackAnimationWithFromValue:(id)arg1 toValue:(id)arg2 on:(BOOL)arg3 ;
-(CGColorRef)_wellColorOn:(BOOL)arg1 ;
-(id)_switchTrackColorAnimationWithFromValue:(id)arg1 toValue:(id)arg2 ;
-(id)_defaultOnTintColor;
-(BOOL)showsOnOffLabel;
-(id)_accessibleOnImage;
-(id)_accessibleOffImage;
-(BOOL)_shouldUseLightTintOverColor:(id)arg1 ;
-(id)_switchTrackPositionAnimationWithFromValue:(id)arg1 toValue:(id)arg2 on:(BOOL)arg3 ;
-(id)_labelOpacityAnimation;
-(id)_effectiveOffTextColor;
-(void)_setPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3 shouldAnimateLabels:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)setGestureTrackingSession:(UISwitchMVEGestureTrackingSession *)arg1 ;
@end

