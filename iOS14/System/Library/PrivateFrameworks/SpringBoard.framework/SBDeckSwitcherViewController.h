/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)setBestAppSuggestion:(id)arg1 ;
-(id)bestAppSuggestion;
-(void)setAppSuggestionController:(SBSwitcherAppSuggestionViewController *)arg1 ;
-(void)suggestionViewController:(id)arg1 activatedSuggestion:(id)arg2 ;
-(void)performTransitionWithContext:(id)arg1 animated:(BOOL)arg2 alongsideAnimationHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithRootModifier:(id)arg1 liveContentOverlayCoordinator:(id)arg2 debugName:(id)arg3 ;
-(void)_setBestAppSuggestion:(id)arg1 animationCompletion:(/*^block*/id)arg2 ;
-(void)handleGestureDidBegin:(id)arg1 ;
-(long long)orientationForSuggestionViewController:(id)arg1 ;
-(SBSwitcherAppSuggestionViewController *)appSuggestionController;
@end

