/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_modernThumbImageWithColor:(id)arg1 mask:(unsigned long long)arg2 traitCollection:(id)arg3 ;
+(UIEdgeInsets)preferredAlignmentRectInsets;
+(id)_modernGradientImageWithOnColor:(id)arg1 traitCollection:(id)arg2 ;
+(CGSize)preferredContentSize;
-(UIPanGestureRecognizer *)pan;
-(UILongPressGestureRecognizer *)longPress;
-(UIImage *)onImage;
-(void)_transitionKnobToPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(double)_wellBorderWidthPressed:(BOOL)arg1 on:(BOOL)arg2 ;
-(void)_orderSubviews;
-(UIImage *)offImage;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIColor *)thumbTintColor;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(BOOL)pressed;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)setOnImage:(UIImage *)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(void)setOffImage:(UIImage *)arg1 ;
-(void)setThumbTintColor:(UIColor *)arg1 ;
-(void)setOnTintColor:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)_switchToStaticMode:(BOOL)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)_handleLongPress:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_switchKnobPositionSpringAnimationFromValue:(id)arg1 toValue:(id)arg2 ;
-(id)_switchSpringAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 pressed:(BOOL)arg4 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(id)_switchTrackAnimationWithFromValue:(id)arg1 toValue:(id)arg2 on:(BOOL)arg3 ;
-(void)setLongPress:(UILongPressGestureRecognizer *)arg1 ;
-(CGRect)_leftSwitchWellContainerBoundsOn:(BOOL)arg1 pressed:(BOOL)arg2 ;
-(CGPoint)_switchWellPositionOn:(BOOL)arg1 pressed:(BOOL)arg2 ;
-(BOOL)showsOnOffLabel;
-(id)_effectiveGradientImage;
-(void)setOn:(BOOL)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(id)_settings;
-(void)_invalidateControl;
-(CGPoint)_onImagePosition;
-(id)_defaultOnTintColor;
-(void)_handlePan:(id)arg1 ;
-(void)_transitionWellViewToOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGPoint)_switchWellContainerPositionOn:(BOOL)arg1 pressed:(BOOL)arg2 ;
-(void)_transitionKnobToOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGRect)_knobBoundsPressed:(BOOL)arg1 ;
-(CGPoint)_wellPositionOn:(BOOL)arg1 forBounds:(CGRect)arg2 ;
-(void)_transitionImagesToPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)_feedbackEnabled;
-(BOOL)_shouldUseLightTintOverColor:(id)arg1 ;
-(void)_transitionKnobToPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UISwitchMVEGestureTrackingSession *)gestureTrackingSession;
-(void)_handlePanWithGestureLocationInBounds:(CGPoint)arg1 horizontalTranslation:(double)arg2 gestureState:(long long)arg3 resetPanTranslationBlock:(/*^block*/id)arg4 ;
-(id)_effectiveOnTintColor;
-(void)_invalidateWell;
-(CGPoint)_offImagePosition;
-(void)_invalidateKnob;
-(id)_effectiveOffImage;
-(void)performStateChangeFeedback;
-(id)_effectiveOnImageTintColor;
-(CGPoint)_knobPositionOn:(BOOL)arg1 pressed:(BOOL)arg2 forBounds:(CGRect)arg3 ;
-(id)_effectiveThumbImage;
-(id)_switchTrackPositionSpringAnimationFromValue:(id)arg1 toValue:(id)arg2 on:(BOOL)arg3 ;
-(void)_invalidateOnOffImages;
-(id)_effectiveOffTextColor;
-(id)_switchTrackColorAnimationWithFromValue:(id)arg1 toValue:(id)arg2 ;
-(id)_labelOpacityAnimation;
-(void)_transitionWellViewToPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGRect)_switchWellContainerBoundsOn:(BOOL)arg1 pressed:(BOOL)arg2 ;
-(CGPoint)_leftSwitchWellContainerPositionOn:(BOOL)arg1 pressed:(BOOL)arg2 ;
-(id)_accessibleOffImage;
-(void)_setPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3 shouldAnimateLabels:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)sendStateChangeActions;
-(void)setPan:(UIPanGestureRecognizer *)arg1 ;
-(void)_updateDisplayWithAnimationIfNeeded;
-(id)_accessibleOnImage;
-(void)setGestureTrackingSession:(UISwitchMVEGestureTrackingSession *)arg1 ;
-(CGColorRef)_wellColorOn:(BOOL)arg1 ;
-(id)_effectiveOnImage;
-(void)_handleLongPressWithGestureLocationInBounds:(CGPoint)arg1 gestureState:(long long)arg2 ;
-(BOOL)displayedOn;
-(void)setShowsOnOffLabel:(BOOL)arg1 ;
-(void)_updateDisplayAnimated:(BOOL)arg1 ;
-(void)interactiveChangeToDisplayedOn:(BOOL)arg1 ;
-(void)_transitionWellViewToPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3 ;
-(id)_effectiveOffImageTintColor;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)_switchKnobWidthSpringAnimationFromValue:(id)arg1 toValue:(id)arg2 pressed:(BOOL)arg3 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2 ;
-(BOOL)on;
-(id)_switchTrackPositionAnimationWithFromValue:(id)arg1 toValue:(id)arg2 on:(BOOL)arg3 ;
-(id)_effectiveTintColor;
@end

