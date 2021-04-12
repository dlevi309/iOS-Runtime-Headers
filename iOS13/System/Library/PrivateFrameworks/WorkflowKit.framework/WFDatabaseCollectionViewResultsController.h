/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDatabaseSectionedResultsController.h>
#import <UIKit/UICollectionViewDataSource.h>

@class NSString;

@interface WFDatabaseCollectionViewResultsController : WFDatabaseSectionedResultsController <UICollectionViewDataSource> {

	BOOL _lastChangeIsUserDriven;
	BOOL _loaded;

}

@property (assign,getter=isLoaded,nonatomic) BOOL loaded;              //@synthesize loaded=_loaded - In the implementation block
@property (assign,nonatomic) BOOL lastChangeIsUserDriven;              //@synthesize lastChangeIsUserDriven=_lastChangeIsUserDriven - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isLoaded;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setLoaded:(BOOL)arg1 ;
-(id)initWithCollections:(id)arg1 forSections:(id)arg2 database:(id)arg3 inCollectionView:(id)arg4 ;
-(void)completedBatchUpdateForSection:(unsigned long long)arg1 ;
-(id)collectionView:(id)arg1 cellForObject:(id)arg2 atIndexPath:(id)arg3 ;
-(void)updateCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)shouldScrollToInsertionAtIndexPath:(id)arg1 ;
-(BOOL)lastChangeIsUserDriven;
-(void)setLastChangeIsUserDriven:(BOOL)arg1 ;
@end

