/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UICollectionViewDataSource.h>

@class UIView, UITableView, UICollectionView, NSString;

@interface SSBaseDataSource : NSObject <UITableViewDataSource, UICollectionViewDataSource> {

	Class _cellClass;
	/*^block*/id _cellConfigureBlock;
	/*^block*/id _cellCreationBlock;
	UIView* _emptyView;
	UITableView* _tableView;
	long long _rowAnimation;
	/*^block*/id _tableActionBlock;
	/*^block*/id _tableDeletionBlock;
	/*^block*/id _tableMoveBlock;
	UICollectionView* _collectionView;
	Class _collectionViewSupplementaryElementClass;
	/*^block*/id _collectionSupplementaryCreationBlock;
	/*^block*/id _collectionSupplementaryConfigureBlock;
	long long _cachedSeparatorStyle;

}

@property (assign,nonatomic) long long cachedSeparatorStyle;                                    //@synthesize cachedSeparatorStyle=_cachedSeparatorStyle - In the implementation block
@property (assign,nonatomic,__weak) Class cellClass;                                            //@synthesize cellClass=_cellClass - In the implementation block
@property (nonatomic,copy) id cellConfigureBlock;                                               //@synthesize cellConfigureBlock=_cellConfigureBlock - In the implementation block
@property (nonatomic,copy) id cellCreationBlock;                                                //@synthesize cellCreationBlock=_cellCreationBlock - In the implementation block
@property (nonatomic,retain) UIView * emptyView;                                                //@synthesize emptyView=_emptyView - In the implementation block
@property (assign,nonatomic,__weak) UITableView * tableView;                                    //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) long long rowAnimation;                                            //@synthesize rowAnimation=_rowAnimation - In the implementation block
@property (nonatomic,copy) id tableActionBlock;                                                 //@synthesize tableActionBlock=_tableActionBlock - In the implementation block
@property (nonatomic,copy) id tableDeletionBlock;                                               //@synthesize tableDeletionBlock=_tableDeletionBlock - In the implementation block
@property (nonatomic,copy) id tableMoveBlock;                                                   //@synthesize tableMoveBlock=_tableMoveBlock - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * collectionView;                          //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) Class collectionViewSupplementaryElementClass;              //@synthesize collectionViewSupplementaryElementClass=_collectionViewSupplementaryElementClass - In the implementation block
@property (nonatomic,copy) id collectionSupplementaryCreationBlock;                             //@synthesize collectionSupplementaryCreationBlock=_collectionSupplementaryCreationBlock - In the implementation block
@property (nonatomic,copy) id collectionSupplementaryConfigureBlock;                            //@synthesize collectionSupplementaryConfigureBlock=_collectionSupplementaryConfigureBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)indexPathArrayWithIndexSet:(id)arg1 inSection:(long long)arg2 ;
+(id)indexPathArrayWithRange:(NSRange)arg1 inSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)init;
-(unsigned long long)numberOfItems;
-(UITableView *)tableView;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(unsigned long long)numberOfItemsInSection:(long long)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)indexPathForItem:(id)arg1 ;
-(unsigned long long)numberOfSections;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(Class)cellClass;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)reloadData;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)moveSectionAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)setCellClass:(Class)arg1 ;
-(void)setRowAnimation:(long long)arg1 ;
-(void)setCellConfigureBlock:(id)arg1 ;
-(void)_updateEmptyView;
-(UIView *)emptyView;
-(void)setEmptyView:(UIView *)arg1 ;
-(void)insertSectionsAtIndexes:(id)arg1 ;
-(void)deleteSectionsAtIndexes:(id)arg1 ;
-(id)cellConfigureBlock;
-(long long)rowAnimation;
-(void)configureCell:(id)arg1 forItem:(id)arg2 parentView:(id)arg3 indexPath:(id)arg4 ;
-(void)insertCellsAtIndexPaths:(id)arg1 ;
-(void)deleteCellsAtIndexPaths:(id)arg1 ;
-(void)reloadCellsAtIndexPaths:(id)arg1 ;
-(void)moveCellAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)reloadSectionsAtIndexes:(id)arg1 ;
-(id)cellCreationBlock;
-(void)setCellCreationBlock:(id)arg1 ;
-(id)tableActionBlock;
-(void)setTableActionBlock:(id)arg1 ;
-(id)tableDeletionBlock;
-(void)setTableDeletionBlock:(id)arg1 ;
-(id)tableMoveBlock;
-(void)setTableMoveBlock:(id)arg1 ;
-(Class)collectionViewSupplementaryElementClass;
-(void)setCollectionViewSupplementaryElementClass:(Class)arg1 ;
-(id)collectionSupplementaryCreationBlock;
-(void)setCollectionSupplementaryCreationBlock:(id)arg1 ;
-(id)collectionSupplementaryConfigureBlock;
-(void)setCollectionSupplementaryConfigureBlock:(id)arg1 ;
-(long long)cachedSeparatorStyle;
-(void)setCachedSeparatorStyle:(long long)arg1 ;
@end

