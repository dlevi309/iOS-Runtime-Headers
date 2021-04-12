/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/


@protocol PLClickPresentationInteractionManagerDelegate <NSObject>
@optional
-(id)containerViewForClickPresentationInteractionManager:(id)arg1;
-(id)transitioningDelegateForClickPresentationInteractionManager:(id)arg1;
-(BOOL)clickPresentationInteractionManager:(id)arg1 shouldBeginInteractionWithTouchAtLocation:(CGPoint)arg2;
-(void)clickPresentationInteractionManager:(id)arg1 shouldFinishInteractionThatReachedForceThreshold:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3;
-(void)clickPresentationInteractionManagerWillBeginUserInteraction:(id)arg1;
-(void)clickPresentationInteractionManagerDidEndUserInteraction:(id)arg1;
-(void)clickPresentationInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;
-(void)clickPresentationInteractionManager:(id)arg1 declinedDismissingPresentedContentWithTrigger:(long long)arg2;
-(BOOL)clickPresentationInteractionManagerShouldAllowLongPressGesture:(id)arg1;

@required
-(id)presentedViewControllerForClickPresentationInteractionManager:(id)arg1;

@end

