/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKBrowserDragControllerDelegate <NSObject>
@optional
-(void)dragManager:(id)arg1 didBeginDraggingItem:(id)arg2;
-(void)dragManager:(id)arg1 didEndDraggingItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4 wasCancelled:(BOOL*)arg5;

@required
-(BOOL)dragManager:(id)arg1 canScaleItem:(id)arg2;
-(BOOL)dragManager:(id)arg1 canRotateItem:(id)arg2;
-(BOOL)dragManager:(id)arg1 canPeelItem:(id)arg2;
-(void)dragManager:(id)arg1 didEndDraggingItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4;
-(void)dragManager:(id)arg1 didDragItem:(id)arg2 toDragTarget:(id)arg3;
-(BOOL)dragManager:(id)arg1 shouldCancelDraggingForItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4;

@end

