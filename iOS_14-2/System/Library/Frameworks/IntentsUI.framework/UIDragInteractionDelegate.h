/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
*/


@protocol UIDragInteractionDelegate <NSObject>
@optional
-(void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
-(void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2;
-(id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
-(BOOL)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
-(void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
-(void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
-(BOOL)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
-(void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4;
-(BOOL)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
-(id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3;
-(void)dragInteraction:(id)arg1 sessionDidTransferItems:(id)arg2;
-(id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(CGPoint)arg3;

@required
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;

@end

