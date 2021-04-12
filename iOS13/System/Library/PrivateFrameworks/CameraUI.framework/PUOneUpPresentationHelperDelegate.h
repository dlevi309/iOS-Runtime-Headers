/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol PUOneUpPresentationHelperDelegate <NSObject>
@optional
-(id)oneUpPresentationHelperScrollView:(id)arg1;
-(long long)oneUpPresentationHelper:(id)arg1 transitionTypeWithProposedTransitionType:(long long)arg2;
-(void)oneUpPresentationHelper:(id)arg1 willPresentOneUpViewController:(id)arg2;
-(void)oneUpPresentationHelper:(id)arg1 didDismissOneUpViewController:(id)arg2;
-(id)oneUpPresentationHelperViewHostingGestureRecognizers:(id)arg1;
-(id)oneUpPresentationHelperViewHostingTilingView:(id)arg1;
-(long long)oneUpPresentationHelperPreferredBarStyle:(id)arg1;
-(BOOL)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1;
-(BOOL)oneUpPresentationHelperDisableFinalFadeoutAnimation:(id)arg1;
-(BOOL)oneUpPresentationHelperEnableFreezeLayoutOnOrientationChange:(id)arg1;
-(BOOL)oneUpPresentationHelperShouldAutoPlay:(id)arg1;
-(void)oneUpPresentationHelper:(id)arg1 previewScrubberDidBecomeAvailable:(id)arg2;
-(void)oneUpPresentationHelper:(id)arg1 willPresentOneUpPreviewViewController:(id)arg2;
-(BOOL)oneUpPresentationHelperPreventRevealInMomentAction:(id)arg1;
-(long long)oneUpPresentationHelperPreferredPresentationOrientation:(id)arg1;
-(unsigned long long)oneUpPresentationHelperAdditionalOptions:(id)arg1;

@required
-(long long)oneUpPresentationOrigin:(id)arg1;
-(id)oneUpPresentationHelperViewController:(id)arg1;

@end

