/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <UIKit/UIDragInteractionDelegate.h>
#import <UIKit/UIDropInteractionDelegate.h>
#import <libobjc.A.dylib/PXAssetCollectionActionPerformerDelegate.h>
#import <libobjc.A.dylib/PXLocalDragSessionDelegate.h>

@protocol PXPhotosDragControllerDelegate;
@class UIView, PXSectionedSelectionManager, PXAssetCollectionActionManager, NSSet, PXAssetReference, PXUpdater, NSMutableSet, _UIDragSnappingFeedbackGenerator, UIViewController, NSString;

@interface PXPhotosDragController : NSObject <PXChangeObserver, UIDragInteractionDelegate, UIDropInteractionDelegate, PXAssetCollectionActionPerformerDelegate, PXLocalDragSessionDelegate> {

	BOOL _isDragSessionActive;
	BOOL _isUpdatingExcludedAssets;
	BOOL _reorderFeedbackEnabled;
	UIView* _contentView;
	PXSectionedSelectionManager* _selectionManager;
	PXAssetCollectionActionManager* _assetCollectionActionManager;
	id<PXPhotosDragControllerDelegate> _delegate;
	NSSet* _draggedAssetReferences;
	PXAssetReference* _dropTargetAssetReference;
	PXUpdater* _updater;
	NSMutableSet* _localDragSessions;
	_UIDragSnappingFeedbackGenerator* _reorderFeedbackGenerator;
	NSSet* _excludedAssets;
	PXAssetReference* _hitAssetReference;

}

@property (nonatomic,readonly) PXUpdater * updater;                                                        //@synthesize updater=_updater - In the implementation block
@property (assign,nonatomic) BOOL isUpdatingExcludedAssets;                                                //@synthesize isUpdatingExcludedAssets=_isUpdatingExcludedAssets - In the implementation block
@property (nonatomic,readonly) NSMutableSet * localDragSessions;                                           //@synthesize localDragSessions=_localDragSessions - In the implementation block
@property (nonatomic,readonly) _UIDragSnappingFeedbackGenerator * reorderFeedbackGenerator;                //@synthesize reorderFeedbackGenerator=_reorderFeedbackGenerator - In the implementation block
@property (nonatomic,readonly) UIViewController * viewControllerForPresentation; 
@property (nonatomic,retain) NSSet * excludedAssets;                                                       //@synthesize excludedAssets=_excludedAssets - In the implementation block
@property (assign,nonatomic) BOOL reorderFeedbackEnabled;                                                  //@synthesize reorderFeedbackEnabled=_reorderFeedbackEnabled - In the implementation block
@property (assign,nonatomic) BOOL isDragSessionActive;                                                     //@synthesize isDragSessionActive=_isDragSessionActive - In the implementation block
@property (nonatomic,retain) NSSet * draggedAssetReferences;                                               //@synthesize draggedAssetReferences=_draggedAssetReferences - In the implementation block
@property (nonatomic,retain) PXAssetReference * dropTargetAssetReference;                                  //@synthesize dropTargetAssetReference=_dropTargetAssetReference - In the implementation block
@property (nonatomic,retain) PXAssetReference * hitAssetReference;                                         //@synthesize hitAssetReference=_hitAssetReference - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                                       //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager;                             //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,readonly) PXAssetCollectionActionManager * assetCollectionActionManager;              //@synthesize assetCollectionActionManager=_assetCollectionActionManager - In the implementation block
@property (nonatomic,__weak,readonly) id<PXPhotosDragControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXAssetReference *)dropTargetAssetReference;
-(NSSet *)draggedAssetReferences;
-(PXSectionedSelectionManager *)selectionManager;
-(PXAssetCollectionActionManager *)assetCollectionActionManager;
-(void)_updateDraggedAssetReferences;
-(void)setDropTargetAssetReference:(PXAssetReference *)arg1 ;
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setDraggedAssetReferences:(NSSet *)arg1 ;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2 ;
-(BOOL)isUpdatingExcludedAssets;
-(void)localDragSession:(id)arg1 didChangeProperty:(SEL)arg2 ;
-(id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3 ;
-(id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3 ;
-(void)_localSessionForDragSession:(id)arg1 changeBlock:(/*^block*/id)arg2 ;
-(id)initWithContentView:(id)arg1 selectionManager:(id)arg2 assetCollectionActionManager:(id)arg3 delegate:(id)arg4 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(id)init;
-(void)setHitAssetReference:(PXAssetReference *)arg1 ;
-(id<PXPhotosDragControllerDelegate>)delegate;
-(void)_updateDropTarget;
-(BOOL)canDragIn;
-(void)dropInteraction:(id)arg1 concludeDrop:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)_updateTrackedAssetReferences;
-(void)_localSessionForDropSession:(id)arg1 changeBlock:(/*^block*/id)arg2 ;
-(BOOL)canDragOut;
-(void)_removeDraggedAssetReferece:(id)arg1 fromLocalSession:(id)arg2 ;
-(NSSet *)excludedAssets;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3 ;
-(void)setExcludedAssets:(NSSet *)arg1 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(id)_createDragItemForAssetReference:(id)arg1 ;
-(_UIDragSnappingFeedbackGenerator *)reorderFeedbackGenerator;
-(void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3 ;
-(UIViewController *)viewControllerForPresentation;
-(PXUpdater *)updater;
-(id)_draggableAssetReferenceAtLocation:(CGPoint)arg1 ;
-(NSMutableSet *)localDragSessions;
-(id)_createLocalSession;
-(BOOL)reorderFeedbackEnabled;
-(id)_assetReferenceForDragItem:(id)arg1 ;
-(void)_updateExcludedAssets;
-(unsigned long long)_supportedDropOperationForSession:(id)arg1 ;
-(BOOL)isDragSessionActive;
-(id)hostViewControllerForActionPerformer:(id)arg1 ;
-(void)setReorderFeedbackEnabled:(BOOL)arg1 ;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3 ;
-(id)_actionManagerForDropSession:(id)arg1 ;
-(void)_pruneLocalSessionIfFinished:(id)arg1 ;
-(BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(void)_presentConfidentialityWarning;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4 ;
-(void)_setupWithContentView:(id)arg1 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(void)_updateIsDragSessionActive;
-(void)setIsDragSessionActive:(BOOL)arg1 ;
-(UIView *)contentView;
-(id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(void)setIsUpdatingExcludedAssets:(BOOL)arg1 ;
-(id)scrollView;
-(PXAssetReference *)hitAssetReference;
-(BOOL)_addDraggedAssetReferences:(id)arg1 toLocalSession:(id)arg2 ;
-(id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

