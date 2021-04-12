/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class __UIDiffableDataSource, NSArray;

@interface _UIDiffableDataSource : NSObject {

	__UIDiffableDataSource* _dsImpl;

}

@property (nonatomic,readonly) long long numberOfItems; 
@property (nonatomic,readonly) long long numberOfSections; 
@property (nonatomic,readonly) NSArray * sectionIdentifiers; 
@property (nonatomic,readonly) NSArray * itemIdentifiers; 
-(id)init;
-(id)_impl;
-(id)snapshot;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(id)arg1 ;
-(long long)numberOfItems;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg1 ;
-(NSArray *)sectionIdentifiers;
-(NSArray *)itemIdentifiers;
-(id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1 ;
-(long long)indexOfItemIdentifier:(id)arg1 ;
-(long long)indexOfSectionIdentifier:(id)arg1 ;
-(void)appendItemsWithIdentifiers:(id)arg1 ;
-(void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2 ;
-(void)insertItemsWithIdentifiers:(id)arg1 beforeItemWithIdentifier:(id)arg2 ;
-(void)insertItemsWithIdentifiers:(id)arg1 afterItemWithIdentifier:(id)arg2 ;
-(void)deleteItemsWithIdentifiers:(id)arg1 ;
-(void)deleteAllItems;
-(void)moveItemWithIdentifier:(id)arg1 beforeItemWithIdentifier:(id)arg2 ;
-(void)moveItemWithIdentifier:(id)arg1 afterItemWithIdentifier:(id)arg2 ;
-(void)reloadItemsWithIdentifiers:(id)arg1 ;
-(void)appendSectionsWithIdentifiers:(id)arg1 ;
-(void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2 ;
-(void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2 ;
-(void)deleteSectionsWithIdentifiers:(id)arg1 ;
-(void)moveSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2 ;
-(void)moveSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2 ;
-(void)reloadSectionsWithIdentifiers:(id)arg1 ;
-(id)initWithCollectionView:(id)arg1 cellProvider:(/*^block*/id)arg2 ;
-(id)itemIdentifierForIndexPath:(id)arg1 ;
-(id)indexPathForItemIdentifier:(id)arg1 ;
-(id)initWithViewUpdatesSink:(id)arg1 ;
-(id)initWithTableView:(id)arg1 cellProvider:(/*^block*/id)arg2 ;
-(long long)defaultRowAnimation;
-(void)setDefaultRowAnimation:(long long)arg1 ;
-(void)applyDifferencesFromSnapshot:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reloadFromSnapshot:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reloadFromSnapshot:(id)arg1 ;
-(id)initWithCollectionView:(id)arg1 reuseIdentifierProvider:(/*^block*/id)arg2 cellConfigurationHandler:(/*^block*/id)arg3 ;
-(id)initWithTableView:(id)arg1 reuseIdentifierProvider:(/*^block*/id)arg2 cellConfigurationHandler:(/*^block*/id)arg3 ;
-(void)appendSectionWithIdentifier:(id)arg1 ;
-(void)insertSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2 ;
-(void)insertSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2 ;
-(id)emptySnapshot;
-(void)applyDifferencesFromSnapshot:(id)arg1 ;
-(void)applySnapshot:(id)arg1 ;
-(id)initWithDiffableDataSource:(id)arg1 ;
-(id)dsImpl;
@end

