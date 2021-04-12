/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITextSimpleLinkInteraction.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>

@class UIContextMenuInteraction, NSMapTable, NSString;

@interface _UITextMenuLinkInteraction : _UITextSimpleLinkInteraction <UIContextMenuInteractionDelegate> {

	UIContextMenuInteraction* _contextMenuInteraction;
	NSMapTable* _configurationItems;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3 ;
-(id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2 ;
-(BOOL)_contextMenuInteraction:(id)arg1 shouldAttemptToPresentConfiguration:(id)arg2 ;
-(id)_contextMenuInteraction:(id)arg1 overrideSuggestedActionsForConfiguration:(id)arg2 ;
-(BOOL)_contextMenuInteraction:(id)arg1 failedToBeginForSecondaryClickAtLocation:(CGPoint)arg2 ;
@end

