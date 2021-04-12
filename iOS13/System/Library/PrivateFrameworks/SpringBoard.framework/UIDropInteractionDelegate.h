/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol UIDropInteractionDelegate <NSObject>
@optional
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2;
-(void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
-(id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
-(void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;

@end

