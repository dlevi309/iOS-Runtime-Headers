/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXSearchDataSourceSectionProvider.h>

@protocol PXSearchDataSourceSectionProviderChangeObserver;
@class NSDictionary, NSArray, NSString;

@interface PXSearchSuggestionsSectionProvider : NSObject <PXSearchDataSourceSectionProvider> {

	BOOL _showsSuggestedSearchesHeader;
	id<PXSearchDataSourceSectionProviderChangeObserver> changeObserver;
	NSDictionary* _identifierToSuggestionMap;
	NSArray* _sortedItemIdentifiers;

}

@property (nonatomic,copy) NSDictionary * identifierToSuggestionMap;                                                 //@synthesize identifierToSuggestionMap=_identifierToSuggestionMap - In the implementation block
@property (nonatomic,copy) NSArray * sortedItemIdentifiers;                                                          //@synthesize sortedItemIdentifiers=_sortedItemIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL showsSuggestedSearchesHeader;                                                      //@synthesize showsSuggestedSearchesHeader=_showsSuggestedSearchesHeader - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (assign,nonatomic,__weak) id<PXSearchDataSourceSectionProviderChangeObserver> changeObserver; 
@property (nonatomic,copy,readonly) NSArray * sectionIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)sectionIdentifiers;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg1 ;
-(id)init;
-(void)registerClassesForSupplementaryViewReuseIdentifiers:(/*^block*/id)arg1 ;
-(id)supplementaryViewReuseIdentifierForKind:(id)arg1 indexPath:(id)arg2 ;
-(void)configureSupplementaryView:(id)arg1 kind:(id)arg2 indexPath:(id)arg3 ;
-(void)registerClassesForCellReuseIdentifiers:(/*^block*/id)arg1 ;
-(id)cellReuseIdentifierForItemIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 forItemIdentifier:(id)arg2 ;
-(id<PXSearchDataSourceSectionProviderChangeObserver>)changeObserver;
-(void)_setSearchSuggestions:(id)arg1 showsSuggestedSearchesHeader:(BOOL)arg2 ;
-(NSDictionary *)identifierToSuggestionMap;
-(void)setIdentifierToSuggestionMap:(NSDictionary *)arg1 ;
-(NSArray *)sortedItemIdentifiers;
-(void)setSortedItemIdentifiers:(NSArray *)arg1 ;
-(BOOL)showsSuggestedSearchesHeader;
-(void)setShowsSuggestedSearchesHeader:(BOOL)arg1 ;
-(unsigned long long)type;
-(void)setChangeObserver:(id<PXSearchDataSourceSectionProviderChangeObserver>)arg1 ;
-(id)searchSuggestionForIdentifier:(id)arg1 ;
-(id)layoutForSectionIdentifier:(id)arg1 environment:(id)arg2 collectionViewLayoutMargins:(UIEdgeInsets)arg3 ;
-(void)setSearchQueryResult:(id)arg1 ;
@end

