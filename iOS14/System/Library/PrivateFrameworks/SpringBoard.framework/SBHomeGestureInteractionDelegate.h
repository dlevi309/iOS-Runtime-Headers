/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBHomeGestureInteractionDelegate <SBSystemGestureRecognizerDelegate>
@optional
-(void)homeGestureInteractionBegan:(id)arg1;
-(void)homeGestureInteractionChanged:(id)arg1;
-(void)homeGestureInteractionCancelled:(id)arg1;
-(id)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(id)arg1;
-(BOOL)homeGestureInteraction:(id)arg1 shouldBeginGestureRecognizerOfType:(long long)arg2;
-(void)homeGestureInteractionEnded:(id)arg1;
-(BOOL)homeGestureInteraction:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
-(BOOL)homeGestureInteraction:(id)arg1 shouldReceiveTouch:(id)arg2;
-(BOOL)homeGestureInteraction:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
-(BOOL)homeGestureInteraction:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;

@required
-(unsigned long long)homeGestureInteraction:(id)arg1 systemGestureTypeForType:(long long)arg2;

@end

