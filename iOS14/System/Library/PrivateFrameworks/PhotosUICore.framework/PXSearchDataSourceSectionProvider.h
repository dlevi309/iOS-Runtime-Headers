/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSArray;


@protocol PXSearchDataSourceSectionProvider <NSObject>
@property (nonatomic,readonly) unsigned long long type; 
@property (assign,nonatomic,__weak) id<PXSearchDataSourceSectionProviderChangeObserver> changeObserver; 
@property (nonatomic,copy,readonly) NSArray * sectionIdentifiers; 
@optional
-(void)registerClassesForSupplementaryViewReuseIdentifiers:(/*^block*/id)arg1;
-(id)supplementaryViewReuseIdentifierForKind:(id)arg1 indexPath:(id)arg2;
-(void)configureSupplementaryView:(id)arg1 kind:(id)arg2 indexPath:(id)arg3;
-(void)prefetchItemsForItemIdentifiers:(id)arg1;

@required
-(NSArray *)sectionIdentifiers;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg1;
-(void)registerClassesForCellReuseIdentifiers:(/*^block*/id)arg1;
-(id)cellReuseIdentifierForItemIdentifier:(id)arg1;
-(void)configureCell:(id)arg1 forItemIdentifier:(id)arg2;
-(id<PXSearchDataSourceSectionProviderChangeObserver>)changeObserver;
-(unsigned long long)type;
-(void)setChangeObserver:(id)arg1;
-(id)layoutForSectionIdentifier:(id)arg1 environment:(id)arg2 collectionViewLayoutMargins:(UIEdgeInsets)arg3;

@end

