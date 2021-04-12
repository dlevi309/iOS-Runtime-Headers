/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBCoverSheetSlidingViewControllerDelegate <NSObject>
@required
-(BOOL)coverSheetSlidingViewControllerContentShouldAutoRotateWhenNotVisible:(id)arg1;
-(void)coverSheetSlidingViewController:(id)arg1 dismissGestureChangedWithProgress:(double)arg2;
-(void)coverSheetSlidingViewControllerUserPresentGestureBegan:(id)arg1;
-(void)coverSheetSlidingViewController:(id)arg1 animateForGestureActive:(BOOL)arg2 withProgress:(double)arg3 beginBlock:(/*^block*/id)arg4 endBlock:(/*^block*/id)arg5;
-(void)coverSheetSlidingViewControllerCleanupDismissalTransition:(id)arg1;
-(void)coverSheetSlidingViewController:(id)arg1 committingToEndPresented:(BOOL)arg2;
-(void)coverSheetSlidingViewControllerCleanupRubberBandedPresentationTransition:(id)arg1;
-(void)coverSheetSlidingViewController:(id)arg1 animationTickedWithProgress:(double)arg2 coverSheetFrame:(CGRect)arg3 gestureActive:(BOOL)arg4 forPresentationValue:(BOOL)arg5;
-(void)coverSheetSlidingViewControllerDidPassRubberBandThreshold:(id)arg1;
-(void)coverSheetSlidingViewControllerCleanupPresentationTransition:(id)arg1;
-(void)coverSheetSlidingViewController:(id)arg1 prepareForDismissalTransitionForReversingTransition:(BOOL)arg2 forUserGesture:(BOOL)arg3;
-(void)coverSheetSlidingViewControllerCleanupInterstitialTransition:(id)arg1;
-(BOOL)hasContentUnderCoverSheetSlidingViewController:(id)arg1;
-(void)coverSheetSlidingViewController:(id)arg1 prepareForPresentationTransitionForUserGesture:(BOOL)arg2;
-(void)coverSheetSlidingViewControllerPrepareForRubberBandedPresentationTransition:(id)arg1;

@end

