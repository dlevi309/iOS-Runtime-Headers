/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>
#import <UIKit/UIInteraction.h>

@protocol _UIContextMenuInteractionDelegate;
@class UIView, UIContextMenuInteraction, _UIContextMenuPreviewActionGroup, NSString;

@interface _UIContextMenuInteraction : NSObject <UIContextMenuInteractionDelegate, UIInteraction> {

	SCD_Struct_UI75 _delegateImplements;
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
-(id)_previewViewController;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2 ;
-(id<_UIContextMenuInteractionDelegate>)delegate;
-(void)didMoveToView:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(void)willMoveToView:(id)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(_UIContextMenuPreviewActionGroup *)actionGroup;
-(UIView *)view;
-(id)initWithDelegate:(id)arg1 ;
-(void)setActionGroup:(_UIContextMenuPreviewActionGroup *)arg1 ;
-(void)contextMenuInteraction:(id)arg1 willCommitWithAnimator:(id)arg2 ;
-(void)contextMenuInteractionDidEnd:(id)arg1 ;
-(UIContextMenuInteraction *)actualInteraction;
-(void)setActualInteraction:(UIContextMenuInteraction *)arg1 ;
-(id)_actionsWithSuggestedActions:(id)arg1 ;
-(void)contextMenuInteractionWillPresent:(id)arg1 ;
@end

