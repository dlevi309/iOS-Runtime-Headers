/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPLazySectionedCollectionDataSource.h>

@class MPMediaLibraryEntityTranslationContext, MPModelLibraryRequest, NSDictionary, NSString;

@interface MPModelLibraryDefaultSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {

	MPMediaLibraryEntityTranslationContext* _entityTranslationContext;
	vector<long long, std::__1::allocator<long long> >* _allowedItemPersistentIDs;
	map<long long, unsigned long, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, unsigned long> > >* _allowedItemPersistentIDToItemQueryResultsIndexMap;
	MPModelLibraryRequest* _request;
	NSDictionary* _indexPathToContainerUniqueIDMap;
	shared_ptr<std::__1::vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > >* _itemIdentifierQueryResults;
	shared_ptr<mlcore::EntityQueryResult>* _itemQueryResults;

}

@property (nonatomic,retain) NSDictionary * indexPathToContainerUniqueIDMap;                                                             //@synthesize indexPathToContainerUniqueIDMap=_indexPathToContainerUniqueIDMap - In the implementation block
@property (nonatomic,readonly) shared_ptr<std::__1::vector<std::__1::shared_ptr<mlcore::Entity> itemIdentifierQueryResults;              //@synthesize itemIdentifierQueryResults=_itemIdentifierQueryResults - In the implementation block
@property (nonatomic,readonly) shared_ptr<mlcore::EntityQueryResult>* itemQueryResults;                                                  //@synthesize itemQueryResults=_itemQueryResults - In the implementation block
@property (nonatomic,readonly) MPModelLibraryRequest * request;                                                                          //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(id)identifiersForSectionAtIndex:(long long)arg1 ;
-(id)identifiersForItemAtIndexPath:(id)arg1 ;
-(BOOL)hasSameContentAsDataSource:(id)arg1 ;
-(shared_ptr<std::__1::vector<std::__1::shared_ptr<mlcore::Entity>)itemIdentifierQueryResults;
-(void)_populateIndexMap;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfSections;
-(id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1 ;
-(NSRange)optionalSectionIndexTitlesRange;
-(MPModelLibraryRequest *)request;
-(void)setIndexPathToContainerUniqueIDMap:(NSDictionary *)arg1 ;
-(BOOL)_allowedEntityIdentifiersContainsAllPersistentIDs;
-(id)initWithRequest:(id)arg1 itemQueryResults:(shared_ptr<mlcore::EntityQueryResult>*)arg2 itemIdentifierQueryResults:(shared_ptr<std::__1::vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > >*)arg3 ;
-(id)sectionIndexTitles;
-(long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)arg1 ;
-(unsigned long long)_adjustedGlobalIndexForIndexPath:(id)arg1 ;
-(BOOL)_usesSections;
-(NSDictionary *)indexPathToContainerUniqueIDMap;
-(shared_ptr<mlcore::EntityQueryResult>*)itemQueryResults;
-(id)_buildIndexPathToContainerUniqueIDMapFromItemQueryResults:(shared_ptr<mlcore::EntityQueryResult>*)arg1 ;
@end

