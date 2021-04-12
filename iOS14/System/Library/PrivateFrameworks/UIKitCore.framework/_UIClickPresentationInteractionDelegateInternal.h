/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIClickPresentationInteractionDelegateInternal <_UIClickPresentationInteractionDelegate>
@optional
-(BOOL)_clickPresentationInteractionShouldAllowRapidRestart:(id)arg1;
-(BOOL)_clickPresentationInteractionShouldAllowDragAfterDismiss:(id)arg1;
-(id)_clickPresentationInteraction:(id)arg1 previewForCancellingDragItem:(id)arg2;
-(BOOL)_clickPresentationInteractionShouldPlayFeedback:(id)arg1;
-(void)_clickPresentationInteractionEnded:(id)arg1 forPresentation:(id)arg2 reason:(unsigned long long)arg3;
-(void)_clickPresentationInteraction:(id)arg1 item:(id)arg2 willAnimateDragCancelWithAnimator:(id)arg3;
-(void)_clickPresentationInteraction:(id)arg1 dragSessionDidEndForItems:(id)arg2;
-(id)_clickPresentationInteraction:(id)arg1 interactionEffectForTargetedPreview:(id)arg2;
-(id)_clickPresentationInteraction:(id)arg1 liveDragPreviewForPresentation:(id)arg2;
-(void)_clickPresentationInteraction:(id)arg1 shouldBegin:(/*^block*/id)arg2;

@end

