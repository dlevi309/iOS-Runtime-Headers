/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBFluidSwitcherViewController.h>
#import <libobjc.A.dylib/SBSwitcherAppSuggestionViewControllerDelegate.h>

@class SBSwitcherAppSuggestionViewController, NSString;

@interface SBDeckSwitcherViewController : SBFluidSwitcherViewController <SBSwitcherAppSuggestionViewControllerDelegate> {

	SBSwitcherAppSuggestionViewController* _appSuggestionController;

}

@property (nonatomic,retain) SBSwitcherAppSuggestionViewController * appSuggestionController;              //@synthesize appSuggestionController=_appSuggestionController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillLayoutSubviews;
-(id)bestAppSuggestion;
-(id)handleGestureDidBegin:(id)arg1 ;
-(void)_setBestAppSuggestion:(id)arg1 animationCompletion:(/*^block*/id)arg2 ;
-(SBSwitcherAppSuggestionViewController *)appSuggestionController;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(id)initWithRootModifier:(id)arg1 liveContentOverlayCoordinator:(id)arg2 debugName:(id)arg3 ;
-(void)performTransitionWithContext:(id)arg1 animated:(BOOL)arg2 alongsideAnimationHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setBestAppSuggestion:(id)arg1 ;
-(long long)orientationForSuggestionViewController:(id)arg1 ;
-(void)suggestionViewController:(id)arg1 activatedSuggestion:(id)arg2 ;
-(void)setAppSuggestionController:(SBSwitcherAppSuggestionViewController *)arg1 ;
@end

