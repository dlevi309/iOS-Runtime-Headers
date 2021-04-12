/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPLazySectionedCollectionDataSource.h>

@class MPMediaLibraryEntityTranslationContext, MPModelLibraryRequest, NSString;

@interface MPModelLibraryModelSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {

	MPMediaLibraryEntityTranslationContext* _itemTranslationContext;
	MPMediaLibraryEntityTranslationContext* _sectionTranslationContext;
	vector<long long, std::__1::allocator<long long> >* _allowedSectionPersistentIDs;
	map<long long, unsigned long, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, unsigned long> > >* _allowedSectionPersistentIDToSectionQueryResultsIndexMap;
	MPModelLibraryRequest* _request;
	shared_ptr<std::__1::map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult> > > > >* _itemEntityQueryResults;
	shared_ptr<mlcore::EntityQueryResult>* _sectionEntityQueryResult;

}

@property (nonatomic,readonly) shared_ptr<std::__1::map<long long itemEntityQueryResults;                    //@synthesize itemEntityQueryResults=_itemEntityQueryResults - In the implementation block
@property (nonatomic,readonly) shared_ptr<mlcore::EntityQueryResult>* sectionEntityQueryResult;              //@synthesize sectionEntityQueryResult=_sectionEntityQueryResult - In the implementation block
@property (nonatomic,readonly) MPModelLibraryRequest * request;                                              //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPModelLibraryRequest *)request;
-(unsigned long long)numberOfSections;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)identifiersForItemAtIndexPath:(id)arg1 ;
-(id)identifiersForSectionAtIndex:(long long)arg1 ;
-(id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1 ;
-(BOOL)hasSameContentAsDataSource:(id)arg1 ;
-(void)_populateIndexMap;
-(BOOL)_allowedEntityIdentifiersContainsAllPersistentIDs;
-(id)initWithRequest:(id)arg1 sectionQueryResults:(shared_ptr<mlcore::EntityQueryResult>*)arg2 itemQueryResults:(map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult> > > >*)arg3 ;
-(unsigned long long)_adjustedIndexForSectionIndex:(long long)arg1 ;
-(shared_ptr<std::__1::map<long long)itemEntityQueryResults;
-(shared_ptr<mlcore::EntityQueryResult>*)sectionEntityQueryResult;
@end

