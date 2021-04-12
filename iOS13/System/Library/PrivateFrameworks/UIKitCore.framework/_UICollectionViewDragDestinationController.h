/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIDropInteractionDelegate_Private.h>
#import <UIKitCore/_UICollectionViewShadowUpdatesRebaseApplicable.h>

@protocol _UICollectionViewDragDestinationControllerDelegate;
@class UICollectionView, UIDropInteraction, CADisplayLink, _UIDragDestinationControllerSessionState, _UIDragDestinationControllerReorderingState, _UIDragDestinationControllerDropProposalState, NSIndexPath, UICollectionViewDropProposal, NSString;

@interface _UICollectionViewDragDestinationController : NSObject <UIDropInteractionDelegate_Private, _UICollectionViewShadowUpdatesRebaseApplicable> {

	UICollectionView* _collectionView;
	UIDropInteraction* _dropInteraction;
	id<_UICollectionViewDragDestinationControllerDelegate> _delegate;
	CADisplayLink* _reorderDisplayLink;
	_UIDragDestinationControllerSessionState* _sessionState;
	_UIDragDestinationControllerReorderingState* _reorderingState;
	_UIDragDestinationControllerDropProposalState* _dropProposalState;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;                                            //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) UIDropInteraction * dropInteraction;                                          //@synthesize dropInteraction=_dropInteraction - In the implementation block
@property (assign,nonatomic,__weak) id<_UICollectionViewDragDestinationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CADisplayLink * reorderDisplayLink;                                                  //@synthesize reorderDisplayLink=_reorderDisplayLink - In the implementation block
@property (nonatomic,retain) _UIDragDestinationControllerSessionState * sessionState;                             //@synthesize sessionState=_sessionState - In the implementation block
@property (nonatomic,retain) _UIDragDestinationControllerReorderingState * reorderingState;                       //@synthesize reorderingState=_reorderingState - In the implementation block
@property (nonatomic,retain) _UIDragDestinationControllerDropProposalState * dropProposalState;                   //@synthesize dropProposalState=_dropProposalState - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL supportsLocalSessionReordering; 
@property (nonatomic,readonly) NSIndexPath * currentIndexPath; 
@property (nonatomic,readonly) UICollectionViewDropProposal * currentDropProposal; 
@property (nonatomic,readonly) id<UIDropSession> currentDropSession; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controllerForCollectionView:(id)arg1 delegate:(id)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(id<_UICollectionViewDragDestinationControllerDelegate>)delegate;
-(void)setDelegate:(id<_UICollectionViewDragDestinationControllerDelegate>)arg1 ;
-(BOOL)isActive;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)deactivate;
-(id)_dragAndDropController;
-(id)_dropDelegateProxy;
-(id)_dropDelegateActual;
-(id)_dragDestinationDelegateProxy;
-(id)_dragDestinationDelegateActual;
-(BOOL)supportsLocalSessionReordering;
-(void)dragSourceSelectedItemCountDidChangeWithCount:(long long)arg1 ;
-(void)dropWasCancelled;
-(NSIndexPath *)currentIndexPath;
-(id<UIDropSession>)currentDropSession;
-(UICollectionViewDropProposal *)currentDropProposal;
-(void)_configureInteraction;
-(_UIDragDestinationControllerSessionState *)sessionState;
-(_UIDragDestinationControllerReorderingState *)reorderingState;
-(_UIDragDestinationControllerDropProposalState *)dropProposalState;
-(id)initWithCollectionView:(id)arg1 delegate:(id)arg2 ;
-(void)_cancelCurrentInteractiveReorder;
-(void)_cancelInteractiveReorderingIfNeeded;
-(BOOL)hasPerformedReordering;
-(void)setReorderingState:(_UIDragDestinationControllerReorderingState *)arg1 ;
-(BOOL)_isLocalInteractiveMove;
-(void)setDropProposalState:(_UIDragDestinationControllerDropProposalState *)arg1 ;
-(void)_updateDropProposalByQueryingClientIfNeeded:(id)arg1 ;
-(void)_configureReorderingDisplayLinkIfNeeded;
-(void)_resumeReorderingDisplayLink;
-(id)_effectiveDropProposalForProposal:(id)arg1 ;
-(void)_pauseReorderingDisplayLink;
-(void)_commitCurrentInteractiveReordering;
-(void)_commitCurrentDragAndDropSession;
-(void)setSessionState:(_UIDragDestinationControllerSessionState *)arg1 ;
-(id)_queryClientForPreviewParamtersForItemAtIndexPath:(id)arg1 ;
-(void)setDropInteraction:(UIDropInteraction *)arg1 ;
-(CADisplayLink *)reorderDisplayLink;
-(void)_reorderingDisplayLinkDidTick;
-(void)setReorderDisplayLink:(CADisplayLink *)arg1 ;
-(BOOL)_delegateImplementsSelector:(SEL)arg1 ;
-(BOOL)_shouldPerformMovementForProposal:(id)arg1 ;
-(void)_endInteractiveReorderingIfNeeded;
-(BOOL)_shouldQueryDropActionForIndexPath:(id)arg1 ;
-(BOOL)_isMultiItemSource;
-(id)_computeNextItemAttributesStartingFromItemAttributes:(id)arg1 withCurrentDragLocation:(CGPoint)arg2 ;
-(BOOL)_hasGapLargeEnoughToRequireDropActionCallForCurrentItemAttributes:(id)arg1 proposedNextItemAttributes:(id)arg2 ;
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
-(void)applyingRebasingUpdatesWithUpdateMap:(id)arg1 ;
-(BOOL)isInteractiveReorderingDisabled;
-(BOOL)_isCompatibilityMode;
-(BOOL)_delegateImplementsPerformDropFromIndexPathsWithCoordinator;
-(BOOL)_delegateImplementsPerformDropFromIndexPathsWithAction;
-(BOOL)_delegateImplementsDropActionForIndexPath;
-(BOOL)_delegateImplementsDidExit;
-(BOOL)_delegateImplementsTargetIndexPath;
-(UIDropInteraction *)dropInteraction;
@end

