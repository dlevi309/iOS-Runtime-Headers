/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@protocol CNComposeDragSourceDelegate <NSObject>
@optional
-(id)dragSource:(id)arg1 teamDataForDraggableItem:(id)arg2;
-(id)dragSource:(id)arg1 localObjectForDraggableItem:(id)arg2;
-(id)dragSource:(id)arg1 targetedPreviewForDraggableItem:(id)arg2;
-(id)dragSource:(id)arg1 previewForDraggableItem:(id)arg2;
-(id)dragSource:(id)arg1 suggestedNameForDraggableItem:(id)arg2;
-(void)dragSource:(id)arg1 willEndInteractionWithItems:(id)arg2 dropOperation:(unsigned long long)arg3;
-(BOOL)dragSource:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
-(BOOL)dragSource:(id)arg1 sessionIsRestrictedToMail:(id)arg2;
-(long long)dragSource:(id)arg1 dataOwnerForSession:(id)arg2;

@required
-(id)dragSource:(id)arg1 draggableItemsAtPoint:(CGPoint)arg2;

@end

