/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXSectionedDataSource, PXIndexPathSet;

@interface PXSelectionSnapshot : NSObject {

	BOOL _isSelectionLimitReached;
	PXSectionedDataSource* _dataSource;
	PXIndexPathSet* _selectedIndexPaths;
	PXSimpleIndexPath _cursorIndexPath;
	PXSimpleIndexPath _pendingIndexPath;

}

@property (nonatomic,readonly) PXSectionedDataSource * dataSource;                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) PXIndexPathSet * selectedIndexPaths;                                //@synthesize selectedIndexPaths=_selectedIndexPaths - In the implementation block
@property (nonatomic,readonly) PXSimpleIndexPath cursorIndexPath;                                  //@synthesize cursorIndexPath=_cursorIndexPath - In the implementation block
@property (nonatomic,readonly) PXSimpleIndexPath pendingIndexPath;                                 //@synthesize pendingIndexPath=_pendingIndexPath - In the implementation block
@property (nonatomic,readonly) BOOL isSelectionLimitReached;                                       //@synthesize isSelectionLimitReached=_isSelectionLimitReached - In the implementation block
@property (nonatomic,readonly) PXSimpleIndexPath firstSelectedIndexPath; 
@property (nonatomic,readonly) PXSimpleIndexPath lastSelectedIndexPath; 
@property (nonatomic,readonly) PXIndexPathSet * sectionIndexPathsContainingSelection; 
@property (nonatomic,readonly) id<PXFastEnumeration> allItemsEnumerator; 
@property (nonatomic,readonly) id<PXFastEnumeration> allSectionsEnumerator; 
@property (nonatomic,readonly) id<PXFastEnumeration> allObjectsEnumerator; 
-(id<PXFastEnumeration>)allItemsEnumerator;
-(id<PXFastEnumeration>)allSectionsEnumerator;
-(PXSimpleIndexPath)pendingIndexPath;
-(id)initWithDataSource:(id)arg1 selectedIndexPaths:(id)arg2 ;
-(id)init;
-(id)initWithDataSource:(id)arg1 selectedIndexPath:(PXSimpleIndexPath)arg2 ;
-(id)initWithDataSource:(id)arg1 selectedIndexPaths:(id)arg2 cursorIndexPath:(PXSimpleIndexPath)arg3 ;
-(BOOL)isSelectionLimitReached;
-(PXSectionedDataSource *)dataSource;
-(BOOL)areAllItemsSelected;
-(BOOL)isAnySectionSelected;
-(BOOL)areAllUnsavedAssetsSelectedWithImportStatusManager:(id)arg1 ;
-(PXSimpleIndexPath)indexPathOfObjectPassingTest:(/*^block*/id)arg1 ;
-(id)description;
-(id<PXFastEnumeration>)allObjectsEnumerator;
-(PXIndexPathSet *)sectionIndexPathsContainingSelection;
-(PXSimpleIndexPath)firstSelectedIndexPath;
-(PXSimpleIndexPath)cursorIndexPath;
-(void)enumerateSelectedObjectsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isIndexPathSelected:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)lastSelectedIndexPath;
-(id)initWithDataSource:(id)arg1 selectedIndexPaths:(id)arg2 cursorIndexPath:(PXSimpleIndexPath)arg3 pendingIndexPath:(PXSimpleIndexPath)arg4 selectionLimitReached:(BOOL)arg5 ;
-(PXIndexPathSet *)selectedIndexPaths;
-(id)fetchSelectedObjects;
-(BOOL)isAnyItemSelected;
@end

