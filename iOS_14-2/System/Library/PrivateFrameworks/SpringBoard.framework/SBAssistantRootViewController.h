/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>
#import <libobjc.A.dylib/SBFluidGestureDismissable.h>

@class SiriPresentationSpringBoardMainScreenViewController, SBFTouchPassThroughView, SBFluidDismissalState, UIScreen, SBHomeGrabberView, SBKeyboardHomeAffordanceAssertion, SBFHomeGrabberSettings, NSString, UIView;

@interface SBAssistantRootViewController : SBFTouchPassThroughViewController <SBFluidGestureDismissable> {

	SiriPresentationSpringBoardMainScreenViewController* _assistantViewController;
	SBFTouchPassThroughView* _contentView;
	SBFTouchPassThroughView* _clippingView;
	SBFluidDismissalState* _fluidDismissalState;
	UIScreen* _screen;
	SBHomeGrabberView* _homeAffordanceView;
	SBKeyboardHomeAffordanceAssertion* _keyboardHomeAffordanceAssertion;
	SBFHomeGrabberSettings* _grabberSettings;
	BOOL _keyboardPresented;
	BOOL _keyboardStashed;
	BOOL _ownsHomeGesture;
	BOOL _showsHomeAffordance;

}

@property (nonatomic,retain) SBFluidDismissalState * fluidDismissalState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * clippingView;                                                                //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                                                 //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) SiriPresentationSpringBoardMainScreenViewController * assistantController;              //@synthesize assistantViewController=_assistantViewController - In the implementation block
@property (assign,nonatomic) BOOL ownsHomeGesture;                                                                   //@synthesize ownsHomeGesture=_ownsHomeGesture - In the implementation block
@property (assign,nonatomic) BOOL showsHomeAffordance;                                                               //@synthesize showsHomeAffordance=_showsHomeAffordance - In the implementation block
-(SiriPresentationSpringBoardMainScreenViewController *)assistantController;
-(void)setNeedsUpdateOfHomeIndicatorAutoHidden;
-(void)viewWillLayoutSubviews;
-(void)setFluidDismissalState:(SBFluidDismissalState *)arg1 ;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(BOOL)wantsFullScreenLayout;
-(BOOL)ownsHomeGesture;
-(void)_keyboardWillShowNotification:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(UIView *)clippingView;
-(void)_updateHomeAffordance;
-(BOOL)shouldAutorotate;
-(id)initWithScreen:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(SBFluidDismissalState *)fluidDismissalState;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(void)loadView;
-(UIView *)contentView;
-(void)hasContentAtPoint:(CGPoint)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAssistantController:(SiriPresentationSpringBoardMainScreenViewController *)arg1 ;
-(void)_keyboardWillHideNotification:(id)arg1 ;
-(void)setHomeGrabberPointerClickDelegate:(id)arg1 ;
-(void)setOwnsHomeGesture:(BOOL)arg1 ;
-(void)setShowsHomeAffordance:(BOOL)arg1 ;
-(void)_updateKeyboardForHomeGesture;
-(BOOL)showsHomeAffordance;
@end

