/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBHomeGestureDismissableCoverSheetViewController.h>
#import <libobjc.A.dylib/SBViewControllerTransitionContextDelegate.h>

@protocol SBUISpotlightInitiating;
@class SBSearchBackdropView, _UILegibilitySettings, UIViewController, _SBDashBoardSpotlightViewController, FBDisplayLayoutTransition, NSString;

@interface SBDashBoardSpotlightViewController : SBHomeGestureDismissableCoverSheetViewController <SBViewControllerTransitionContextDelegate> {

	SBSearchBackdropView* _backdropView;
	_UILegibilitySettings* _spotlightLegibilitySettings;
	UIViewController*<SBUISpotlightInitiating> _initiatingViewController;
	_SBDashBoardSpotlightViewController* _spotlightViewController;
	FBDisplayLayoutTransition* _displayLayoutTransition;

}

@property (nonatomic,retain) _SBDashBoardSpotlightViewController * spotlightViewController;                    //@synthesize spotlightViewController=_spotlightViewController - In the implementation block
@property (nonatomic,retain) FBDisplayLayoutTransition * displayLayoutTransition;                              //@synthesize displayLayoutTransition=_displayLayoutTransition - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * spotlightLegibilitySettings;                              //@synthesize spotlightLegibilitySettings=_spotlightLegibilitySettings - In the implementation block
@property (assign,nonatomic,__weak) id<SPUIRemoteSearchViewDelegate> spotlightDelegate; 
@property (nonatomic,retain) UIViewController*<SBUISpotlightInitiating> initiatingViewController;              //@synthesize initiatingViewController=_initiatingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)presentationStyle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)transitionDidFinish:(id)arg1 ;
-(void)transitionWillBegin:(id)arg1 ;
-(BOOL)_isTransitioning;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)handleEvent:(id)arg1 ;
-(long long)presentationType;
-(long long)presentationTransition;
-(void)transitionDidReverse:(id)arg1 ;
-(void)transitionWillFinish:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(BOOL)presentationCancelsTouches;
-(id)displayLayoutElementIdentifier;
-(void)performCustomTransitionToVisible:(BOOL)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)homeGestureParticipantIdentifier;
-(BOOL)shouldDismissForHomeGestureRecognizer:(id)arg1 ;
-(_SBDashBoardSpotlightViewController *)spotlightViewController;
-(FBDisplayLayoutTransition *)displayLayoutTransition;
-(void)setDisplayLayoutTransition:(FBDisplayLayoutTransition *)arg1 ;
-(void)setSpotlightViewController:(_SBDashBoardSpotlightViewController *)arg1 ;
-(void)setSpotlightDelegate:(id<SPUIRemoteSearchViewDelegate>)arg1 ;
-(id<SPUIRemoteSearchViewDelegate>)spotlightDelegate;
-(_UILegibilitySettings *)spotlightLegibilitySettings;
-(UIViewController*<SBUISpotlightInitiating>)initiatingViewController;
-(id)transitionContextToShowSpotlight:(BOOL)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(BOOL)_transitioningIntoSpotlight:(id)arg1 ;
-(BOOL)_initiallyTransitioningToSpotlight:(id)arg1 ;
-(BOOL)_shouldCancelInteractiveDismissGesture:(id)arg1 ;
-(void)setSpotlightLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setInitiatingViewController:(UIViewController*<SBUISpotlightInitiating>)arg1 ;
@end

