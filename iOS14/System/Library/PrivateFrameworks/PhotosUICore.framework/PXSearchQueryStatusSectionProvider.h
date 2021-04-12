/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXSearchDataSourceSectionProvider.h>

@protocol PXSearchDataSourceSectionProviderChangeObserver;
@class PXSearchQuery, PXSearchQueryResult, NSArray, NSString;

@interface PXSearchQueryStatusSectionProvider : NSObject <PXSearchDataSourceSectionProvider> {

	id<PXSearchDataSourceSectionProviderChangeObserver> changeObserver;
	PXSearchQuery* _searchQuery;
	PXSearchQueryResult* _searchQueryResult;

}

@property (nonatomic,retain) PXSearchQuery * searchQuery;                                                            //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,retain) PXSearchQueryResult * searchQueryResult;                                                //@synthesize searchQueryResult=_searchQueryResult - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (assign,nonatomic,__weak) id<PXSearchDataSourceSectionProviderChangeObserver> changeObserver; 
@property (nonatomic,copy,readonly) NSArray * sectionIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)sectionIdentifiers;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg1 ;
-(void)registerClassesForSupplementaryViewReuseIdentifiers:(/*^block*/id)arg1 ;
-(id)supplementaryViewReuseIdentifierForKind:(id)arg1 indexPath:(id)arg2 ;
-(void)configureSupplementaryView:(id)arg1 kind:(id)arg2 indexPath:(id)arg3 ;
-(void)registerClassesForCellReuseIdentifiers:(/*^block*/id)arg1 ;
-(id)cellReuseIdentifierForItemIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 forItemIdentifier:(id)arg2 ;
-(id<PXSearchDataSourceSectionProviderChangeObserver>)changeObserver;
-(PXSearchQuery *)searchQuery;
-(void)setSearchQuery:(PXSearchQuery *)arg1 ;
-(unsigned long long)type;
-(void)setSearchQuery:(id)arg1 queryResult:(id)arg2 ;
-(BOOL)_showsQueryStatusFooter;
-(PXSearchQueryResult *)searchQueryResult;
-(void)setChangeObserver:(id<PXSearchDataSourceSectionProviderChangeObserver>)arg1 ;
-(id)layoutForSectionIdentifier:(id)arg1 environment:(id)arg2 collectionViewLayoutMargins:(UIEdgeInsets)arg3 ;
-(void)setSearchQueryResult:(PXSearchQueryResult *)arg1 ;
@end

