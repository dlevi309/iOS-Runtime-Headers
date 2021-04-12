/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>
#import <UIKit/UIInteraction.h>

@protocol _UIContextMenuInteractionDelegate;
@class UIView, UIContextMenuInteraction, _UIContextMenuPreviewActionGroup, NSString;

@interface _UIContextMenuInteraction : NSObject <UIContextMenuInteractionDelegate, UIInteraction> {

	SCD_Struct_UI64 _delegateImplements;
	UIView* _view;
	id<_UIContextMenuInteractionDelegate> _delegate;
	UIContextMenuInteraction* _actualInteraction;
	_UIContextMenuPreviewActionGroup* _actionGroup;

}

@property (nonatomic,retain) UIContextMenuInteraction * actualInteraction;                         //@synthesize actualInteraction=_actualInteraction - In the implementation block
@property (nonatomic,retain) _UIContextMenuPreviewActionGroup * actionGroup;                       //@synthesize actionGroup=_actionGroup - In the implementation block
@property (nonatomic,__weak,readonly) id<_UIContextMenuInteractionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIView * view;                                               //@synthesize view=_view - In the implementation block
-(id<_UIContextMenuInteractionDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(UIView *)view;
-(CGPoint)locationInView:(id)arg1 ;
-(_UIContextMenuPreviewActionGroup *)actionGroup;
-(void)setActionGroup:(_UIContextMenuPreviewActionGroup *)arg1 ;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2 ;
-(id)_previewViewController;
-(void)contextMenuInteractionWillPresent:(id)arg1 ;
-(void)contextMenuInteractionDidEnd:(id)arg1 ;
-(UIContextMenuInteraction *)actualInteraction;
-(void)setActualInteraction:(UIContextMenuInteraction *)arg1 ;
-(id)_actionsWithSuggestedActions:(id)arg1 ;
-(void)contextMenuInteraction:(id)arg1 willCommitWithAnimator:(id)arg2 ;
@end

