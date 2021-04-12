/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIDragInteractionDelegate_Private.h>
#import <UIKit/UIDropInteractionDelegate_Private.h>
#import <UIKitCore/_UITextPasteProgressSupport.h>
#import <UIKit/UITextPasteSessionDelegate.h>
#import <UIKit/UITextDragDropSupport.h>

@protocol UITextDraggableGeometry, UIDragSession, UIDropSession, UITextDraggableGeometrySameViewDropOperation, UITextDropPasteSession, UITextDragSupportingUITextDropSupporting;
@class UIDragInteraction, UIDropInteraction, NSArray, UITextRange, NSMapTable, NSTextStorage, _UITextDragCaretView, UIDragItem, UITargetedDragPreview, UITextDropProposal, UITextDraggableGeometrySameViewDropOperationResult, UITextPasteController, UIView, NSString;

@interface UITextDragAssistant : NSObject <UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private, _UITextPasteProgressSupport, UITextPasteSessionDelegate, UITextDragDropSupport> {

	struct {
		unsigned viewSupportsGhostedRanges : 1;
		unsigned geometrySupportsSameViewOperations : 1;
		unsigned shouldRestoreFirstResponder : 1;
		unsigned draggingOngoing : 1;
		unsigned handledCancelAnimation : 1;
		unsigned restoreNonEditableAfterDrop : 1;
		unsigned restoreSelectableAfterDrop : 1;
		unsigned wasSelectableBeforeDrop : 1;
		unsigned forceEditable : 1;
		unsigned delegateSupportsProposalForDrop : 1;
		unsigned delegateSupportsSessionDidUpdate : 1;
		unsigned delegateSupportsRangeForDrop : 1;
		unsigned delegateSupportsPositionForDrop : 1;
		unsigned delegateSupportsWillMoveCaret : 1;
		unsigned delegateSupportsDidMoveCaret : 1;
		unsigned viewSupportsTextStorage : 1;
		unsigned textStorageDidChange : 1;
		unsigned dropPerformed : 1;
		unsigned defaultDropHandling : 1;
	}  _flags;
	id<UITextDraggableGeometry> _geometry;
	id<UIDragSession> _currentDragSession;
	UIDragInteraction* _currentDragInteraction;
	NSArray* _draggedTextRanges;
	UITextRange* _initialDragSelectedRange;
	CGPoint _initialDragLocation;
	NSArray* _movedItemsInView;
	NSMapTable* _targetedPreviewProviders;
	NSMapTable* _previewProviders;
	NSTextStorage* _observingStorage;
	id<UIDropSession> _currentDropSession;
	_UITextDragCaretView* _dropCaret;
	UITextRange* _currentDropRange;
	UIDragItem* _topmostDropItem;
	UITargetedDragPreview* _topmostDropPreview;
	UITextDropProposal* _currentDropProposal;
	UITextRange* _preDropSelectionRange;
	id<UITextDraggableGeometrySameViewDropOperation> _sameViewDropOperation;
	UITextDraggableGeometrySameViewDropOperationResult* _sameViewDropOperationResult;
	UITextPasteController* _dropPasteController;
	id<UITextDropPasteSession> _dropPasteSession;
	/*^block*/id _delayedPreviewProvider;
	UIView*<UITextDragSupporting>*<UITextDropSupporting> _view;
	UIDragInteraction* _dragInteraction;
	UIDropInteraction* _dropInteraction;

}

@property (nonatomic,__weak,readonly) UIView*<UITextDragSupporting>*<UITextDropSupporting> view;              //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) id<UITextDraggableGeometry> geometry; 
@property (nonatomic,__weak,readonly) UIDragInteraction * dragInteraction;                                    //@synthesize dragInteraction=_dragInteraction - In the implementation block
@property (nonatomic,__weak,readonly) UIDropInteraction * dropInteraction;                                    //@synthesize dropInteraction=_dropInteraction - In the implementation block
@property (getter=isDragActive,nonatomic,readonly) BOOL dragActive; 
@property (getter=isDropActive,nonatomic,readonly) BOOL dropActive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView*<UITextDragSupporting>*<UITextDropSupporting>)view;
-(id)initWithView:(id)arg1 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(void)dropInteraction:(id)arg1 concludeDrop:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3 ;
-(void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(void)_dropInteraction:(id)arg1 delayedPreviewProviderForDroppingItem:(id)arg2 previewProvider:(/*^block*/id)arg3 ;
-(UIDropInteraction *)dropInteraction;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3 ;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(BOOL)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2 ;
-(void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3 ;
-(id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3 ;
-(void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3 ;
-(BOOL)_dragInteraction:(id)arg1 competingGestureRecognizerShouldDelayLift:(id)arg2 ;
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(UIDragInteraction *)dragInteraction;
-(BOOL)_dragInteractionShouldBecomeDraggingSourceDelegate:(id)arg1 ;
-(id<UITextDraggableGeometry>)geometry;
-(id)initWithView:(id)arg1 geometry:(id)arg2 ;
-(void)_applyOptionsToGeometry;
-(BOOL)_viewHasOtherDragInteraction;
-(id)_textRangeForDraggingFromPoint:(CGPoint)arg1 ;
-(id)_closestPositionToPoint:(CGPoint)arg1 ;
-(id)_itemsForDraggedRange:(id)arg1 ;
-(void)_initializeDragSession:(id)arg1 withInteraction:(id)arg2 ;
-(void)_addDraggedTextRangeForItems:(id)arg1 defaultRange:(id)arg2 ;
-(BOOL)_hasDraggedTextRange:(id)arg1 ;
-(id)_containerViewForLiftPreviews;
-(void)_ghostDraggedTextRanges:(BOOL)arg1 ;
-(void)_liftOrDrag:(long long)arg1 didEndWithOperation:(unsigned long long)arg2 ;
-(id)_containerViewForDropPreviews;
-(void)_restoreResponderIfNeededForOperation:(unsigned long long)arg1 ;
-(void)_clearDraggedTextRanges;
-(void)_textStorageDidProcessEditing;
-(void)_stopObservingTextStorage;
-(void)_forDraggedTextRangesDo:(/*^block*/id)arg1 ;
-(long long)_dataOwnerForSession:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)_accessibilityDraggableRanges;
-(id)_dropRequestWithRange:(id)arg1 inSession:(id)arg2 ;
-(BOOL)_updateCurrentDropProposalInSession:(id)arg1 usingRequest:(id)arg2 ;
-(void)_updateDropCaretToRange:(id)arg1 session:(id)arg2 ;
-(id)_positionInSession:(id)arg1 ;
-(id)_rangeInSession:(id)arg1 ;
-(void)_cleanupDrop;
-(id)_dropRequestWithRange:(id)arg1 suggestedProposal:(id)arg2 inSession:(id)arg3 ;
-(void)_prepareSameViewOperation:(unsigned long long)arg1 forItems:(id)arg2 fromRanges:(id)arg3 toRange:(id)arg4 ;
-(void)_performDropToRange:(id)arg1 inSession:(id)arg2 ;
-(id)_previewForIrrelevantItemFromPreview:(id)arg1 ;
-(void)_performSameViewOperation:(id)arg1 ;
-(id)_previewForTopmostItem:(id)arg1 ;
-(id)_shrinkingPreview:(id)arg1 toPosition:(id)arg2 ;
-(id)_suggestedProposalForRequest:(id)arg1 ;
-(long long)_textPasteRangeBehavior;
-(id)_textPasteSelectableRangeForResult:(id)arg1 fromRange:(id)arg2 ;
-(void)textPasteSessionWillBeginPasting:(id)arg1 ;
-(void)textPasteSessionDidEndPasting:(id)arg1 ;
-(void)textPasteSessionWillHidePasteResult:(id)arg1 ;
-(void)textPasteSessionDidRevealPasteResult:(id)arg1 ;
-(BOOL)accessibilityCanDrag;
-(void)notifyTextInteraction;
-(void)invalidateDropCaret;
-(BOOL)isDragActive;
-(BOOL)isDropActive;
-(id)initWithDraggableOnlyView:(id)arg1 ;
-(void)installDragInteractionIfNeeded;
-(void)installDropInteractionIfNeeded;
@end

