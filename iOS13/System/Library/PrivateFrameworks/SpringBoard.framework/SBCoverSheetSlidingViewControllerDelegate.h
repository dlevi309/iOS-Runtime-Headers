/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBCoverSheetSlidingViewControllerDelegate <NSObject>
@required
-(void)coverSheetSlidingViewControllerCleanupInterstitialTransition:(id)arg1;
-(BOOL)hasContentUnderCoverSheetSlidingViewController:(id)arg1;
-(void)coverSheetSlidingViewControllerUserPresentGestureBegan:(id)arg1;
-(void)coverSheetSlidingViewControllerDidPassRubberBandThreshold:(id)arg1;
-(void)coverSheetSlidingViewController:(id)arg1 dismissGestureChangedWithProgress:(double)arg2;
-(void)coverSheetSlidingViewController:(id)arg1 committingToEndPresented:(BOOL)arg2;
-(void)coverSheetSlidingViewController:(id)arg1 animateForGestureActive:(BOOL)arg2 withProgress:(double)arg3 beginBlock:(/*^block*/id)arg4 endBlock:(/*^block*/id)arg5;
-(void)coverSheetSlidingViewController:(id)arg1 animationTickedWithProgress:(double)arg2 coverSheetFrame:(CGRect)arg3 gestureActive:(BOOL)arg4 forPresentationValue:(BOOL)arg5;
-(void)coverSheetSlidingViewControllerCleanupPresentationTransition:(id)arg1;
-(void)coverSheetSlidingViewControllerCleanupRubberBandedPresentationTransition:(id)arg1;
-(void)coverSheetSlidingViewController:(id)arg1 prepareForPresentationTransitionForUserGesture:(BOOL)arg2;
-(void)coverSheetSlidingViewControllerPrepareForRubberBandedPresentationTransition:(id)arg1;
-(void)coverSheetSlidingViewController:(id)arg1 prepareForDismissalTransitionForReversingTransition:(BOOL)arg2 forUserGesture:(BOOL)arg3;
-(void)coverSheetSlidingViewControllerCleanupDismissalTransition:(id)arg1;
-(BOOL)coverSheetSlidingViewControllerContentShouldAutoRotateWhenNotVisible:(id)arg1;

@end

