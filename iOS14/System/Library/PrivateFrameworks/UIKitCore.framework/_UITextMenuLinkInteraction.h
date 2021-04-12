/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(id)_contextMenuInteraction:(id)arg1 overrideSuggestedActionsForConfiguration:(id)arg2 ;
-(id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3 ;
-(id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2 ;
-(id)init;
-(void)didMoveToView:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(void)willMoveToView:(id)arg1 ;
-(BOOL)_contextMenuInteraction:(id)arg1 failedToBeginForSecondaryClickAtLocation:(CGPoint)arg2 ;
-(BOOL)_contextMenuInteraction:(id)arg1 shouldAttemptToPresentConfiguration:(id)arg2 ;
@end

