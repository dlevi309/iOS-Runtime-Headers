/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBPIPInteractionControllerDelegate <NSObject>
@optional
-(void)interactionControllerDidUpdateEdgeInsets:(id)arg1;
-(void)interactionControllerDidBeginInteraction:(id)arg1 forGestureRecognizer:(id)arg2;
-(void)interactionControllerDidEndAllInteractions:(id)arg1;

@required
-(void)interactionController:(id)arg1 didUpdateStashProgress:(double)arg2;
-(void)interactionController:(id)arg1 wantsStashTabHidden:(BOOL)arg2 left:(BOOL)arg3;
-(void)interactionControllerDidBeginSizeChange:(id)arg1 behavior:(int)arg2;
-(void)interactionControllerDidEndSizeChange:(id)arg1;
-(void)interactionController:(id)arg1 didSettleOnStashState:(BOOL)arg2;
-(void)setNeedsLayoutForInteractionController:(id)arg1 traits:(unsigned long long)arg2 withReason:(unsigned long long)arg3 behavior:(int)arg4 completion:(/*^block*/id)arg5;

@end

