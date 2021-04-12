/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIDraggingSessionDelegate <NSObject>
@optional
-(unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingWithinApp:(BOOL)arg2;
-(BOOL)draggingSessionPrefersFullSizePreviews:(id)arg1;
-(BOOL)draggingSessionDynamicallyUpdatesPrefersFullSizePreviews:(id)arg1;
-(void)draggingSessionWillBegin:(id)arg1;
-(void)draggingSessionDidMove:(id)arg1;
-(void)draggingSession:(id)arg1 willAddItems:(id)arg2;
-(void)draggingSessionWillEnd:(id)arg1 withOperation:(unsigned long long)arg2;
-(void)draggingSessionDidEnd:(id)arg1 withOperation:(unsigned long long)arg2;
-(void)draggingSessionDidTransferItems:(id)arg1;
-(void)_draggingSessionHandedOffDragImage:(id)arg1;
-(void)_draggingSession:(id)arg1 handedOffDragImageForItem:(id)arg2;

@end

