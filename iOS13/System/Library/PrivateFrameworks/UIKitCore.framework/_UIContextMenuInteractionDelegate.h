/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIContextMenuInteractionDelegate <NSObject>
@optional
-(BOOL)contextMenuInteractionShouldBegin:(id)arg1;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2;
-(id)targetedPreviewForDismissingContextMenuInteraction:(id)arg1;
-(void)contextMenuInteractionWillPresent:(id)arg1;
-(void)contextMenuInteractionDidEnd:(id)arg1;

@required
-(id)contextMenuInteraction:(id)arg1 actionsForMenuAtLocation:(CGPoint)arg2 withSuggestedActions:(id)arg3;

@end

