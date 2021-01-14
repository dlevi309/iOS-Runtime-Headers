/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKBrowserDragControllerDelegate <NSObject>
@optional
-(void)dragManager:(id)arg1 didBeginDraggingItem:(id)arg2;

@required
-(void)dragManager:(id)arg1 didEndDraggingItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4;
-(BOOL)dragManager:(id)arg1 canScaleItem:(id)arg2;
-(BOOL)dragManager:(id)arg1 canRotateItem:(id)arg2;
-(BOOL)dragManager:(id)arg1 canPeelItem:(id)arg2;
-(void)dragManager:(id)arg1 didDragItem:(id)arg2 toDragTarget:(id)arg3;
-(BOOL)dragManager:(id)arg1 shouldCancelDraggingForItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4;

@end

