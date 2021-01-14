/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDropInteraction:(UIDropInteraction *)arg1 ;
-(void)_configureInteraction;
-(UIDropInteraction *)dropInteraction;
-(void)_commitCurrentDragAndDropSession;
-(void)applyingRebasingUpdatesWithUpdateMap:(id)arg1 ;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(_UIDragDestinationControllerSessionState *)sessionState;
-(id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3 ;
-(BOOL)supportsLocalSessionReordering;
-(void)setDropProposalState:(_UIDragDestinationControllerDropProposalState *)arg1 ;
-(BOOL)hasPerformedReordering;
-(id)_effectiveDropProposalForProposal:(id)arg1 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(void)setSessionState:(_UIDragDestinationControllerSessionState *)arg1 ;
-(BOOL)_isLocalInteractiveMove;
-(id<_UICollectionViewDragDestinationControllerDelegate>)delegate;
-(void)_commitCurrentInteractiveReordering;
-(void)_updateDropProposalByQueryingClientIfNeeded:(id)arg1 indicatorLayoutAttributes:(id)arg2 ;
-(id)_queryClientForPreviewParamtersForItemAtIndexPath:(id)arg1 ;
-(void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(void)dropInteraction:(id)arg1 concludeDrop:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(id)initWithCollectionView:(id)arg1 delegate:(id)arg2 ;
-(NSIndexPath *)currentIndexPath;
-(UICollectionView *)collectionView;
-(BOOL)isActive;
-(id)_dragAndDropController;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(BOOL)_isMultiItemSource;
-(void)dropWasCancelled;
-(void)setReorderDisplayLink:(CADisplayLink *)arg1 ;
-(UICollectionViewDropProposal *)currentDropProposal;
-(void)deactivate;
-(_UIDragDestinationControllerDropProposalState *)dropProposalState;
-(void)setDelegate:(id<_UICollectionViewDragDestinationControllerDelegate>)arg1 ;
-(BOOL)_shouldPerformMovementForProposal:(id)arg1 ;
-(NSString *)description;
-(void)_reorderingDisplayLinkDidTick;
-(id)_dropDelegateProxy;
-(id)_dragDestinationDelegateActual;
-(void)_endInteractiveReorderingIfNeeded;
-(void)dragSourceSelectedItemCountDidChangeWithCount:(long long)arg1 ;
-(void)_configureReorderingDisplayLinkIfNeeded;
-(CADisplayLink *)reorderDisplayLink;
-(BOOL)_shouldQueryDropActionForIndexPath:(id)arg1 ;
-(id)_dropDelegateActual;
-(void)_cancelInteractiveReorderingIfNeeded;
-(void)_pauseReorderingDisplayLink;
-(_UIDragDestinationControllerReorderingState *)reorderingState;
-(void)_cancelCurrentInteractiveReorder;
-(id)_computeNextItemAttributesStartingFromItemAttributes:(id)arg1 withCurrentDragLocation:(CGPoint)arg2 ;
-(BOOL)_hasGapLargeEnoughToRequireDropActionCallForCurrentItemAttributes:(id)arg1 proposedNextItemAttributes:(id)arg2 ;
-(id)_dragDestinationDelegateProxy;
-(void)_resumeReorderingDisplayLink;
-(void)dealloc;
-(id<UIDropSession>)currentDropSession;
-(void)setReorderingState:(_UIDragDestinationControllerReorderingState *)arg1 ;
@end

