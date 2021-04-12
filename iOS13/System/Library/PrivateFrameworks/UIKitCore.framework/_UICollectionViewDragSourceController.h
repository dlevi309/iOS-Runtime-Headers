/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) id<UIDragSession> dragSession; 
@property (nonatomic,readonly) long long currentSessionItemCount; 
@property (nonatomic,readonly) NSIndexPath * dragFromIndexPath; 
@property (nonatomic,readonly) NSArray * dragFromIndexPaths; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controllerForCollectionView:(id)arg1 delegate:(id)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(id<_UICollectionViewDragSourceControllerDelegate>)delegate;
-(void)setDelegate:(id<_UICollectionViewDragSourceControllerDelegate>)arg1 ;
-(BOOL)isActive;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setDragInteractionEnabled:(BOOL)arg1 ;
-(id)_dragAndDropController;
-(id)_dragDelegateProxy;
-(id)_dragDelegateActual;
-(id)_dragSourceDelegateProxy;
-(id)_dragSourceDelegateActual;
-(NSArray *)dragFromIndexPaths;
-(id)indexPathForDragItem:(id)arg1 ;
-(void)setDragState:(_UICollectionViewDragSourceControllerDragState *)arg1 ;
-(_UICollectionViewDragSourceControllerDragState *)dragState;
-(void)_configureInteraction;
-(_UICollectionViewDragSourceControllerSessionState *)sessionState;
-(id)initWithCollectionView:(id)arg1 delegate:(id)arg2 ;
-(long long)currentSessionItemCount;
-(void)setSessionState:(_UICollectionViewDragSourceControllerSessionState *)arg1 ;
-(id<UIDragSession>)dragSession;
-(BOOL)_delegateImplementsSelector:(SEL)arg1 ;
-(NSIndexPath *)dragFromIndexPath;
-(void)applyingRebasingUpdatesWithUpdateMap:(id)arg1 ;
-(BOOL)_isCompatibilityMode;
-(id)_filterCandidateIndexPaths:(id)arg1 forUserSelectedIndexPath:(id)arg2 session:(id)arg3 ;
-(id)_queryForItemsFromClientForSession:(id)arg1 dataSourceIndexPath:(id)arg2 location:(CGPoint)arg3 isInitialQuery:(BOOL)arg4 ;
-(void)_addDragItemsToExistingSession:(id)arg1 forDataSourceIndexPath:(id)arg2 ;
-(id)_previewParametersForItemAtIndexPath:(id)arg1 ;
-(void)_sessionWillBegin:(id)arg1 forDragInteraction:(id)arg2 ;
-(long long)_dataOwnerForDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setDragInteraction:(UIDragInteraction *)arg1 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3 ;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(BOOL)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2 ;
-(BOOL)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2 ;
-(BOOL)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2 ;
-(void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3 ;
-(void)dragInteraction:(id)arg1 sessionDidTransferItems:(id)arg2 ;
-(id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4 ;
-(id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3 ;
-(void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3 ;
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(BOOL)_dragInteraction:(id)arg1 sessionSupportsSystemDrag:(id)arg2 ;
-(BOOL)_delegateImplementsDragSourceItemsAtIndexPath;
-(BOOL)_delegateImplementsDragItemsForItemAtIndexPath;
-(BOOL)_delegateImplementsDragItemsForItemAtIndexPathWithDefaultPreview;
-(BOOL)_delegateImplementsDragSourceDidAddItem;
-(UIDragInteraction *)dragInteraction;
@end

