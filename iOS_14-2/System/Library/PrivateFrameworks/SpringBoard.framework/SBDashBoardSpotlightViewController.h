/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBHomeGestureDismissableCoverSheetViewController.h>
#import <libobjc.A.dylib/_SBDashBoardSpotlightViewControllerDelegate.h>
#import <libobjc.A.dylib/SBViewControllerTransitionContextDelegate.h>

@protocol SBUISpotlightInitiating, SBDashBoardSpotlightViewControllerDelegate;
@class SBSearchBackdropView, _UILegibilitySettings, UIViewController, _SBDashBoardSpotlightViewController, FBDisplayLayoutTransition, NSString;

@interface SBDashBoardSpotlightViewController : SBHomeGestureDismissableCoverSheetViewController <_SBDashBoardSpotlightViewControllerDelegate, SBViewControllerTransitionContextDelegate> {

	SBSearchBackdropView* _backdropView;
	_UILegibilitySettings* _spotlightLegibilitySettings;
	UIViewController*<SBUISpotlightInitiating> _initiatingViewController;
	id<SBDashBoardSpotlightViewControllerDelegate> _delegate;
	_SBDashBoardSpotlightViewController* _spotlightViewController;
	FBDisplayLayoutTransition* _displayLayoutTransition;

}

@property (nonatomic,retain) _SBDashBoardSpotlightViewController * spotlightViewController;                    //@synthesize spotlightViewController=_spotlightViewController - In the implementation block
@property (nonatomic,retain) FBDisplayLayoutTransition * displayLayoutTransition;                              //@synthesize displayLayoutTransition=_displayLayoutTransition - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * spotlightLegibilitySettings;                              //@synthesize spotlightLegibilitySettings=_spotlightLegibilitySettings - In the implementation block
@property (assign,nonatomic,__weak) id<SPUIRemoteSearchViewDelegate> spotlightDelegate; 
@property (nonatomic,retain) UIViewController*<SBUISpotlightInitiating> initiatingViewController;              //@synthesize initiatingViewController=_initiatingViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SBDashBoardSpotlightViewControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)presentationStyle;
-(void)viewWillLayoutSubviews;
-(long long)presentationTransition;
-(id)displayLayoutElementIdentifier;
-(id)init;
-(id<SBDashBoardSpotlightViewControllerDelegate>)delegate;
-(BOOL)handleEvent:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(BOOL)_isTransitioning;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)setDelegate:(id<SBDashBoardSpotlightViewControllerDelegate>)arg1 ;
-(long long)presentationType;
-(void)viewDidLoad;
-(void)transitionWillFinish:(id)arg1 ;
-(void)transitionWillBegin:(id)arg1 ;
-(void)transitionDidFinish:(id)arg1 ;
-(void)performCustomTransitionToVisible:(BOOL)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)transitionDidReverse:(id)arg1 ;
-(_SBDashBoardSpotlightViewController *)spotlightViewController;
-(long long)homeGestureParticipantIdentifier;
-(BOOL)shouldDismissForHomeGestureRecognizer:(id)arg1 ;
-(FBDisplayLayoutTransition *)displayLayoutTransition;
-(void)setDisplayLayoutTransition:(FBDisplayLayoutTransition *)arg1 ;
-(void)setSpotlightViewController:(_SBDashBoardSpotlightViewController *)arg1 ;
-(void)setSpotlightDelegate:(id<SPUIRemoteSearchViewDelegate>)arg1 ;
-(id<SPUIRemoteSearchViewDelegate>)spotlightDelegate;
-(unsigned long long)spotlightMultiplexingLevelForSpotlightViewController:(id)arg1 ;
-(unsigned long long)remoteSearchViewPresentationSourceForSpotlightViewController:(id)arg1 ;
-(_UILegibilitySettings *)spotlightLegibilitySettings;
-(UIViewController*<SBUISpotlightInitiating>)initiatingViewController;
-(id)transitionContextToShowSpotlight:(BOOL)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(BOOL)_transitioningIntoSpotlight:(id)arg1 ;
-(BOOL)_initiallyTransitioningToSpotlight:(id)arg1 ;
-(BOOL)_shouldCancelInteractiveDismissGesture:(id)arg1 ;
-(BOOL)presentationCancelsTouches;
-(void)setSpotlightLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setInitiatingViewController:(UIViewController*<SBUISpotlightInitiating>)arg1 ;
@end

