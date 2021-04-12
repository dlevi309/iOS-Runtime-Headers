/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol _UIContextMenuInteractionDelegate <NSObject>
@optional
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2;
-(void)contextMenuInteractionDidEnd:(id)arg1;
-(BOOL)contextMenuInteractionShouldBegin:(id)arg1;
-(id)targetedPreviewForDismissingContextMenuInteraction:(id)arg1;
-(void)contextMenuInteractionWillPresent:(id)arg1;

@required
-(id)contextMenuInteraction:(id)arg1 actionsForMenuAtLocation:(CGPoint)arg2 withSuggestedActions:(id)arg3;

@end

