/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@protocol AVTransitionControllerDelegate <NSObject>
@required
-(void)transitionController:(id)arg1 willBeginPresentingViewController:(id)arg2;
-(void)transitionController:(id)arg1 willBeginDismissingViewController:(id)arg2;
-(id)transitionController:(id)arg1 targetViewForDismissingViewController:(id)arg2;
-(BOOL)transitionController:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
-(id)transitionControllerPresentedViewBackgroundColor:(id)arg1;
-(id)transitionControllerBackgroundViewBackgroundColor:(id)arg1;
-(BOOL)transitionControllerCanBeginInteractiveDismissalTransition:(id)arg1;
-(BOOL)transitionControllerCanBeginInteractivePresentationTransition:(id)arg1;
-(void)transitionControllerBeginInteractivePresentationTransition:(id)arg1;
-(void)transitionControllerBeginInteractiveDismissalTransition:(id)arg1;
-(void)transitionController:(id)arg1 prepareForFinishingInteractiveTransition:(/*^block*/id)arg2;
-(void)transitionController:(id)arg1 transitionWillComplete:(BOOL)arg2;
-(void)transitionController:(id)arg1 animationProgressDidChange:(float)arg2;

@end

