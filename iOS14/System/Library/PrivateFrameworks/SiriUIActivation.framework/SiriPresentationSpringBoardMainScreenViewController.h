/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUIActivation.framework/SiriUIActivation
*/

#import <SiriUIActivation/SiriUIActivation-Structs.h>
#import <SiriUIActivation/SiriPresentationViewController.h>

@interface SiriPresentationSpringBoardMainScreenViewController : SiriPresentationViewController {

	BOOL _shouldDismissForTapOutsideContent;
	BOOL _shouldDismissForTapsOutsideContent;
	BOOL _tapsOutsideContentDismissAssistant;
	BOOL _shouldPassTapsThrough;
	BOOL _shouldPassTouchesThroughToSpringBoard;
	BOOL _shouldDismissForSwipesOutsideContent;
	BOOL _shareHomeGesture;

}

@property (assign,nonatomic,__weak) id<SiriPresentationSpringBoardMainScreenViewControllerDelegate> siriPresentationControllerDelegate; 
@property (nonatomic,readonly) BOOL tapsOutsideContentDismissAssistant;                                                                              //@synthesize tapsOutsideContentDismissAssistant=_tapsOutsideContentDismissAssistant - In the implementation block
@property (nonatomic,readonly) BOOL shouldPassTapsThrough;                                                                                           //@synthesize shouldPassTapsThrough=_shouldPassTapsThrough - In the implementation block
@property (nonatomic,readonly) BOOL shouldPassTouchesThroughToSpringBoard;                                                                           //@synthesize shouldPassTouchesThroughToSpringBoard=_shouldPassTouchesThroughToSpringBoard - In the implementation block
@property (nonatomic,readonly) BOOL shouldDismissForSwipesOutsideContent;                                                                            //@synthesize shouldDismissForSwipesOutsideContent=_shouldDismissForSwipesOutsideContent - In the implementation block
@property (nonatomic,readonly) BOOL shareHomeGesture;                                                                                                //@synthesize shareHomeGesture=_shareHomeGesture - In the implementation block
-(void)setFluidDismissalState:(id)arg1 ;
-(BOOL)showAppsBehindSiri;
-(id)initWithIdentifier:(long long)arg1 hostedPresentationFrame:(CGRect)arg2 ;
-(id)init;
-(BOOL)shouldDismissForSwipesOutsideContent;
-(BOOL)tapsOutsideContentDismissAssistant;
-(void)setShareHomeGesture:(BOOL)arg1 ;
-(void)setDockFrame:(CGRect)arg1 ;
-(BOOL)shouldPassTapsThrough;
-(void)setShouldDismissForSwipesOutsideContent:(BOOL)arg1 ;
-(void)requestPasscodeUnlockWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldDismissForTapOutsideContent;
-(BOOL)shouldPassTouchesThroughToSpringBoard;
-(void)requestStatusBarVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_canShowWhileLocked;
-(void)resetGestureBehaviors;
-(void)loadView;
-(void)setShouldPassTouchesThroughToSpringBoard:(BOOL)arg1 ;
-(id)initWithIdentifier:(long long)arg1 ;
-(void)setShouldDismissForTapsOutsideContent:(BOOL)arg1 ;
-(void)updateHomeGestureSharingForSiriSetup:(BOOL)arg1 ;
-(void)hasContentAtPoint:(CGPoint)arg1 completion:(/*^block*/id)arg2 ;
-(void)setShowsStatusBar:(BOOL)arg1 ;
-(BOOL)shouldDismissForTapsOutsideContent;
-(BOOL)shareHomeGesture;
-(void)setShouldDismissForTapOutsideContent:(BOOL)arg1 ;
@end

