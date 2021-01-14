/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIDragInteractionDelegate_Private.h>
#import <UIKitCore/_UICollectionViewShadowUpdatesRebaseApplicable.h>

@protocol _UICollectionViewDragSourceControllerDelegate;
@class UICollectionView, UIDragInteraction, _UICollectionViewDragSourceControllerSessionState, _UICollectionViewDragSourceControllerDragState, NSIndexPath, NSArray, NSString;

@interface _UICollectionViewDragSourceController : NSObject <UIDragInteractionDelegate_Private, _UICollectionViewShadowUpdatesRebaseApplicable> {

	UICollectionView* _collectionView;
	UIDragInteraction* _dragInteraction;
	id<_UICollectionViewDragSourceControllerDelegate> _delegate;
	_UICollectionViewDragSourceControllerSessionState* _sessionState;
	_UICollectionViewDragSourceControllerDragState* _dragState;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;                                       //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) UIDragInteraction * dragInteraction;                                     //@synthesize dragInteraction=_dragInteraction - In the implementation block
@property (assign,nonatomic,__weak) id<_UICollectionViewDragSourceControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _UICollectionViewDragSourceControllerSessionState * sessionState;               //@synthesize sessionState=_sessionState - In the implementation block
@property (nonatomic,retain) _UICollectionViewDragSourceControllerDragState * dragState;                     //@synthesize dragState=_dragState - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL dragItemsCreatedForReordering; 
@property (nonatomic,readonly) id<UIDragSession> dragSession; 
@property (nonatomic,readonly) long long currentSessionItemCount; 
@property (nonatomic,readonly) NSIndexPath * dragFromIndexPath; 
@property (nonatomic,readonly) NSArray * dragFromIndexPaths; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controllerForCollectionView:(id)arg1 delegate:(id)arg2 ;
-(void)_configureInteraction;
-(void)setDragInteraction:(UIDragInteraction *)arg1 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3 ;
-(void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2 ;
-(void)applyingRebasingUpdatesWithUpdateMap:(id)arg1 ;
-(id)_dragDelegateProxy;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(_UICollectionViewDragSourceControllerSessionState *)sessionState;
-(id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3 ;
-(void)setSessionState:(_UICollectionViewDragSourceControllerSessionState *)arg1 ;
-(UIDragInteraction *)dragInteraction;
-(id<_UICollectionViewDragSourceControllerDelegate>)delegate;
-(id)_dragSourceDelegateActual;
-(BOOL)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2 ;
-(id)_queryForItemsFromClientForSession:(id)arg1 dataSourceIndexPath:(id)arg2 location:(CGPoint)arg3 isInitialQuery:(BOOL)arg4 ;
-(id)initWithCollectionView:(id)arg1 delegate:(id)arg2 ;
-(UICollectionView *)collectionView;
-(BOOL)isActive;
-(id)_dragAndDropController;
-(void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(BOOL)_delegateImplementsDragSourceItemsAtIndexPath;
-(void)deactivate;
-(void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3 ;
-(NSArray *)dragFromIndexPaths;
-(BOOL)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2 ;
-(void)setDelegate:(id<_UICollectionViewDragSourceControllerDelegate>)arg1 ;
-(NSString *)description;
-(id)indexPathForDragItem:(id)arg1 ;
-(id)_previewParametersForItemAtIndexPath:(id)arg1 ;
-(long long)_dataOwnerForDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)_delegateImplementsSelector:(SEL)arg1 ;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(BOOL)dragItemsCreatedForReordering;
-(long long)currentSessionItemCount;
-(void)setDragInteractionEnabled:(BOOL)arg1 ;
-(void)_addDragItemsToExistingSession:(id)arg1 forDataSourceIndexPath:(id)arg2 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4 ;
-(NSIndexPath *)dragFromIndexPath;
-(id)_dragDelegateActual;
-(id)_dragSourceDelegateProxy;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(BOOL)_dragInteraction:(id)arg1 sessionSupportsSystemDrag:(id)arg2 ;
-(BOOL)_delegateImplementsDragSourceDidAddItem;
-(id)_filterCandidateIndexPaths:(id)arg1 forUserSelectedIndexPath:(id)arg2 session:(id)arg3 ;
-(id<UIDragSession>)dragSession;
-(BOOL)_delegateImplementsDragItemsForItemAtIndexPath;
-(BOOL)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2 ;
-(void)setDragState:(_UICollectionViewDragSourceControllerDragState *)arg1 ;
-(id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(BOOL)_delegateImplementsDragItemsForItemAtIndexPathWithDefaultPreview;
-(_UICollectionViewDragSourceControllerDragState *)dragState;
-(void)dragInteraction:(id)arg1 sessionDidTransferItems:(id)arg2 ;
-(id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(void)dealloc;
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(void)_sessionWillBegin:(id)arg1 forDragInteraction:(id)arg2 ;
@end

