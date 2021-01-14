/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/_PUOneUpSelectionIndicatorCompatibleManager.h>
#import <libobjc.A.dylib/PXUIKeyCommandNamespace.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>

@protocol PXSectionedSelectionManagerSnapshotValidator;
@class PXSectionedDataSourceManager, PXSelectionSnapshot, PXSectionedDataSource, PXMutableIndexPathSet, NSString, PXAssetSelectionTypeCounter;

@interface PXSectionedSelectionManager : PXObservable <_PUOneUpSelectionIndicatorCompatibleManager, PXUIKeyCommandNamespace, PXSectionedDataSourceManagerObserver> {

	SCD_Struct_PX38 _needsUpdateFlags;
	BOOL _selectionLimitReached;
	BOOL _disableAssetTypeCounting;
	PXSectionedDataSourceManager* _dataSourceManager;
	PXSelectionSnapshot* _selectionSnapshot;
	PXSectionedDataSource* _dataSource;
	PXMutableIndexPathSet* _selectedIndexPaths;
	id<PXSectionedSelectionManagerSnapshotValidator> _snapshotValidator;
	PXSimpleIndexPath _cursorIndexPath;
	PXSimpleIndexPath _pendingIndexPath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PXAssetSelectionTypeCounter * assetTypeCounter; 
@property (nonatomic,readonly) NSString * namespaceIdentifier; 
@property (setter=_setSelectionSnapshot:,nonatomic,retain) PXSelectionSnapshot * selectionSnapshot;                  //@synthesize selectionSnapshot=_selectionSnapshot - In the implementation block
@property (setter=_setDataSource:,nonatomic,retain) PXSectionedDataSource * dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (setter=_setSelectedIndexPaths:,nonatomic,retain) PXMutableIndexPathSet * selectedIndexPaths;              //@synthesize selectedIndexPaths=_selectedIndexPaths - In the implementation block
@property (assign,setter=_setCursorIndexPath:,nonatomic) PXSimpleIndexPath cursorIndexPath;                          //@synthesize cursorIndexPath=_cursorIndexPath - In the implementation block
@property (assign,setter=_setPendingIndexPath:,nonatomic) PXSimpleIndexPath pendingIndexPath;                        //@synthesize pendingIndexPath=_pendingIndexPath - In the implementation block
@property (assign,setter=_setSelectionLimitReached:,nonatomic) BOOL selectionLimitReached;                           //@synthesize selectionLimitReached=_selectionLimitReached - In the implementation block
@property (assign,nonatomic,__weak) id<PXSectionedSelectionManagerSnapshotValidator> snapshotValidator;              //@synthesize snapshotValidator=_snapshotValidator - In the implementation block
@property (assign,nonatomic) BOOL disableAssetTypeCounting;                                                          //@synthesize disableAssetTypeCounting=_disableAssetTypeCounting - In the implementation block
@property (nonatomic,readonly) PXSectionedDataSourceManager * dataSourceManager;                                     //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
-(BOOL)pu_isAssetReferenceSelected:(id)arg1 ;
-(void)pu_registerSelectionIndicatorObserver:(id)arg1 ;
-(void)pu_unregisterSelectionIndicatorObserver:(id)arg1 ;
-(PXSelectionSnapshot *)selectionSnapshot;
-(id)initWithDataSourceManager:(id)arg1 ;
-(PXSimpleIndexPath)pendingIndexPath;
-(id)init;
-(void)selectNonCopiedAssetsWithImportStatusManager:(id)arg1 ;
-(void)didPerformChanges;
-(void)_invalidateSelectionSnapshot;
-(PXSectionedDataSource *)dataSource;
-(void)_updateIfNeeded;
-(void)_setDataSource:(id)arg1 ;
-(BOOL)selectionLimitReached;
-(PXSectionedDataSourceManager *)dataSourceManager;
-(void)setSelectionLimitReached:(BOOL)arg1 ;
-(void)selectAllItems;
-(void)_setSelectedIndexPaths:(id)arg1 ;
-(void)_setDataSource:(id)arg1 withChangeHistory:(id)arg2 ;
-(void)_setSelectionSnapshot:(id)arg1 ;
-(void)_makeSimpleModificationToSelectedIndexPathsUsingBlock:(/*^block*/id)arg1 ;
-(id)_validatedSnapshotForSnapshot:(id)arg1 ;
-(void)setSelectedState:(BOOL)arg1 forIndexPath:(PXSimpleIndexPath)arg2 ;
-(void)setSelectedState:(BOOL)arg1 forIndexPath:(PXSimpleIndexPath)arg2 andUpdateCursorIndexPath:(BOOL)arg3 ;
-(void)setSelectedState:(BOOL)arg1 forIndexPathSet:(id)arg2 ;
-(void)setSelectedIndexPaths:(PXMutableIndexPathSet *)arg1 ;
-(void)setCursorIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)setPendingIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)_setCursorIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)_setPendingIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)_setSelectionLimitReached:(BOOL)arg1 ;
-(id<PXSectionedSelectionManagerSnapshotValidator>)snapshotValidator;
-(void)setSnapshotValidator:(id<PXSectionedSelectionManagerSnapshotValidator>)arg1 ;
-(BOOL)disableAssetTypeCounting;
-(void)setDisableAssetTypeCounting:(BOOL)arg1 ;
-(id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1 ;
-(PXAssetSelectionTypeCounter *)assetTypeCounter;
-(long long)performKeyCommand:(id)arg1 withDelegate:(id)arg2 ;
-(BOOL)_needsUpdate;
-(id)mutableChangeObject;
-(PXSimpleIndexPath)cursorIndexPath;
-(void)_updateSelectionSnapshotIfNeeded;
-(long long)_performCommand:(long long)arg1 withDelegate:(id)arg2 ;
-(void)_performSelectAll;
-(void)_performUnselectAll;
-(void)_performMoveInDirection:(unsigned long long)arg1 withDelegate:(id)arg2 ;
-(void)_performExtendInDirection:(unsigned long long)arg1 withDelegate:(id)arg2 ;
-(id)uiKeyCommandsWithDelegate:(id)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)deselectAll;
-(NSString *)namespaceIdentifier;
-(PXSimpleIndexPath)startingIndexPathForMoveInDirection:(unsigned long long)arg1 ;
-(PXSimpleIndexPath)_extendSelectionFromIndexPath:(PXSimpleIndexPath)arg1 toIndexPath:(PXSimpleIndexPath)arg2 inDirection:(unsigned long long)arg3 withDelegate:(id)arg4 ;
-(PXSimpleIndexPath)_moveSectionSelectionInDirection:(unsigned long long)arg1 withDelegate:(id)arg2 ;
-(PXSimpleIndexPath)_moveItemSelectionInDirection:(unsigned long long)arg1 withDelegate:(id)arg2 ;
-(PXSimpleIndexPath)_selectInitialSectionForMoveInDirection:(unsigned long long)arg1 withDelegate:(id)arg2 ;
-(PXSimpleIndexPath)_moveSelectionFromIndexPath:(PXSimpleIndexPath)arg1 inDirection:(unsigned long long)arg2 withDelegate:(id)arg3 ;
-(PXMutableIndexPathSet *)selectedIndexPaths;
-(void)setSelectedIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PXSimpleIndexPath)_selectInitialItemForMoveInDirection:(unsigned long long)arg1 withDelegate:(id)arg2 ;
-(PXSimpleIndexPath)_initialSectionIndexPathForMoveInDirection:(unsigned long long)arg1 ;
-(PXSimpleIndexPath)_initialItemIndexPathForMoveInDirection:(unsigned long long)arg1 ;
-(PXSimpleIndexPath)extendSelectionToItemIndexPath:(PXSimpleIndexPath)arg1 withDelegate:(id)arg2 ;
-(PXSimpleIndexPath)extendSelectionFromIndexPath:(PXSimpleIndexPath)arg1 inDirection:(unsigned long long)arg2 withDelegate:(id)arg3 ;
-(PXSimpleIndexPath)moveSelectionInDirection:(unsigned long long)arg1 withDelegate:(id)arg2 ;
@end

