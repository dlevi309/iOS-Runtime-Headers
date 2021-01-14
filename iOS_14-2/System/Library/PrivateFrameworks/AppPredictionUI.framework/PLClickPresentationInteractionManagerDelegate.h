/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
*/


@protocol PLClickPresentationInteractionManagerDelegate <NSObject>
@optional
-(id)transitioningDelegateForClickPresentationInteractionManager:(id)arg1;
-(id)containerViewForClickPresentationInteractionManager:(id)arg1;
-(BOOL)clickPresentationInteractionManager:(id)arg1 shouldBeginInteractionWithTouchAtLocation:(CGPoint)arg2;
-(void)clickPresentationInteractionManagerWillBeginUserInteraction:(id)arg1;
-(void)clickPresentationInteractionManagerDidEndUserInteraction:(id)arg1;
-(void)clickPresentationInteractionManager:(id)arg1 shouldFinishInteractionThatReachedForceThreshold:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3;
-(void)clickPresentationInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;
-(void)clickPresentationInteractionManager:(id)arg1 declinedDismissingPresentedContentWithTrigger:(long long)arg2;
-(BOOL)clickPresentationInteractionManagerShouldAllowLongPressGesture:(id)arg1;

@required
-(id)presentedViewControllerForClickPresentationInteractionManager:(id)arg1;

@end

