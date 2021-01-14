/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/CKTransactionalComponentDataSourceListener.h>

@protocol CKSupplementaryViewDataSource;
@class CKTransactionalComponentDataSource, CKTransactionalComponentDataSourceState, CKComponentDataSourceAttachController, NSMapTable, UICollectionView, NSString;

@interface CKCollectionViewTransactionalDataSource : NSObject <UICollectionViewDataSource, CKTransactionalComponentDataSourceListener> {

	CKTransactionalComponentDataSource* _componentDataSource;
	id<CKSupplementaryViewDataSource> _supplementaryViewDataSource;
	/*function pointer*/void* _cellConfigurationFunction;
	CKTransactionalComponentDataSourceState* _currentState;
	CKComponentDataSourceAttachController* _attachController;
	NSMapTable* _cellToIndexPathMap;
	NSMapTable* _indexPathToCellMap;
	NSMapTable* _cellToItemMap;
	UICollectionView* _collectionView;

}

@property (nonatomic,readonly) UICollectionView * collectionView;                                                 //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,__weak,readonly) id<CKSupplementaryViewDataSource> supplementaryViewDataSource;              //@synthesize supplementaryViewDataSource=_supplementaryViewDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(CGSize)sizeForItemAtIndexPath:(id)arg1 ;
-(void)applyChangeset:(id)arg1 mode:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(id)modelForItemAtIndexPath:(id)arg1 ;
-(id<CKSupplementaryViewDataSource>)supplementaryViewDataSource;
-(void)announceDidEndDisplayingCell:(id)arg1 ;
-(void)announceWillDisplayCell:(id)arg1 ;
-(void)reloadWithMode:(unsigned long long)arg1 userInfo:(id)arg2 ;
-(void)updateConfiguration:(id)arg1 mode:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(id)initWithCollectionView:(id)arg1 supplementaryViewDataSource:(id)arg2 configuration:(id)arg3 cellConfigurationFunction:(/*function pointer*/void*)arg4 ;
-(void)transactionalComponentDataSource:(id)arg1 didModifyPreviousState:(id)arg2 byApplyingChanges:(id)arg3 ;
-(void)_detachComponentLayoutForRemovedItemsAtIndexPaths:(id)arg1 inState:(id)arg2 ;
@end

