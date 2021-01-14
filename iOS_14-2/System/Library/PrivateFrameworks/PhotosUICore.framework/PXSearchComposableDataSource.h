/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKit/UICollectionViewDataSourcePrefetching.h>
#import <libobjc.A.dylib/PXSearchDataSourceSectionProviderChangeObserver.h>

@class NSArray, UICollectionViewDiffableDataSource, NSString;

@interface PXSearchComposableDataSource : NSObject <UICollectionViewDataSourcePrefetching, PXSearchDataSourceSectionProviderChangeObserver> {

	NSArray* _sectionProviders;
	UICollectionViewDiffableDataSource* _diffableDataSource;

}

@property (nonatomic,retain) UICollectionViewDiffableDataSource * diffableDataSource;              //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (nonatomic,copy) NSArray * sectionProviders;                                             //@synthesize sectionProviders=_sectionProviders - In the implementation block
@property (nonatomic,readonly) long long numberOfItems; 
@property (nonatomic,readonly) long long numberOfSections; 
@property (nonatomic,copy,readonly) NSArray * sectionIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * itemIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1 ;
-(NSArray *)sectionIdentifiers;
-(void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2 ;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg1 ;
-(NSArray *)itemIdentifiers;
-(long long)numberOfItems;
-(long long)numberOfItemsInSection:(id)arg1 ;
-(id)itemIdentifierForIndexPath:(id)arg1 ;
-(long long)numberOfSections;
-(id)indexPathForItemIdentifier:(id)arg1 ;
-(void)searchDataSourceSectionProviderDidChange:(id)arg1 animateChanges:(BOOL)arg2 ;
-(void)searchDataSourceSectionProviderDidChange:(id)arg1 reloadItemIdentifiers:(id)arg2 animateChanges:(BOOL)arg3 ;
-(void)_registerClassesForCollectionView:(id)arg1 withPXSearchDataSourceSectionProviders:(id)arg2 ;
-(void)_reloadDataAnimated:(BOOL)arg1 reloadItemIdentifiers:(id)arg2 ;
-(NSArray *)sectionProviders;
-(id)searchDataSourceSectionProviderForIndexPath:(id)arg1 ;
-(id)searchDataSourceSectionProviderForSectionIdentifier:(id)arg1 ;
-(id)_convertIndexPath:(id)arg1 toPXSearchDataSourceSectionProvider:(id)arg2 ;
-(void)setSectionProviders:(NSArray *)arg1 ;
-(id)_configuredCellForCollectionView:(id)arg1 indexPath:(id)arg2 itemIdentifier:(id)arg3 ;
-(id)_configuredSupplementaryViewForCollectionView:(id)arg1 kind:(id)arg2 indexPath:(id)arg3 ;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(id)searchDataSourceSectionProviderForItemIdentifier:(id)arg1 ;
-(id)searchDataSourceSectionProviderForSection:(long long)arg1 ;
-(id)initWithCollectionView:(id)arg1 searchDataSourceSectionProviders:(id)arg2 ;
@end

