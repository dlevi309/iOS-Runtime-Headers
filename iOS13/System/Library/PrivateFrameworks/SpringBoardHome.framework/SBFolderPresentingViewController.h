/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SBNestingViewController.h>
#import <libobjc.A.dylib/SBFolderControllerBackgroundViewDelegate.h>

@protocol SBFolderPresentingViewControllerDelegate, UIViewControllerAnimatedTransitioning;
@class SBFolderContainerView, SBFolderController;

@interface SBFolderPresentingViewController : SBNestingViewController <SBFolderControllerBackgroundViewDelegate> {

	id<SBFolderPresentingViewControllerDelegate> _folderPresentationDelegate;
	unsigned long long _backgroundEffect;
	id<UIViewControllerAnimatedTransitioning> _currentFolderAnimator;

}

@property (nonatomic,retain) id<UIViewControllerAnimatedTransitioning> currentFolderAnimator;                             //@synthesize currentFolderAnimator=_currentFolderAnimator - In the implementation block
@property (nonatomic,readonly) SBFolderContainerView * view; 
@property (assign,nonatomic,__weak) id<SBFolderPresentingViewControllerDelegate> folderPresentationDelegate;              //@synthesize folderPresentationDelegate=_folderPresentationDelegate - In the implementation block
@property (nonatomic,readonly) SBFolderController * presentedFolderController; 
@property (assign,nonatomic) unsigned long long backgroundEffect;                                                         //@synthesize backgroundEffect=_backgroundEffect - In the implementation block
-(SBFolderContainerView *)view;
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)backgroundEffect;
-(void)setBackgroundEffect:(unsigned long long)arg1 ;
-(void)setFolderPresentationDelegate:(id<SBFolderPresentingViewControllerDelegate>)arg1 ;
-(SBFolderController *)presentedFolderController;
-(id<UIViewControllerAnimatedTransitioning>)currentFolderAnimator;
-(void)dismissPresentedFolderControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentFolderController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCurrentFolderAnimator:(id<UIViewControllerAnimatedTransitioning>)arg1 ;
-(id)nestingViewController:(id)arg1 animationControllerForOperation:(long long)arg2 onViewController:(id)arg3 animated:(BOOL)arg4 ;
-(void)nestingViewController:(id)arg1 willPerformOperation:(long long)arg2 onViewController:(id)arg3 withTransitionCoordinator:(id)arg4 ;
-(id)nestingViewController:(id)arg1 sourceViewForPresentingViewController:(id)arg2 ;
-(double)minimumHomeScreenScaleForFolderControllerBackgroundView:(id)arg1 ;
-(id)nestingViewController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(id<SBFolderPresentingViewControllerDelegate>)folderPresentationDelegate;
@end

