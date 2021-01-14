/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol OS_dispatch_queue;
@class PXSearchQuery, PXSearchQueryResultsProcessor, PLSearchProcessor, PXSearchIndexManager, NSObject, NSDictionary;

@interface PXSearchQueryExecutor : NSObject {

	BOOL _requestSceneAncestryInformation;
	PXSearchQuery* _currentSearchQuery;
	/*^block*/id _resultsHandler;
	PXSearchQueryResultsProcessor* _searchResultsProcessor;
	PLSearchProcessor* _plSearchProcessor;
	PXSearchIndexManager* _searchIndexManager;
	NSObject*<OS_dispatch_queue> _queryQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSDictionary* _sceneAncestryInformation;

}

@property (nonatomic,copy,readonly) id resultsHandler;                                            //@synthesize resultsHandler=_resultsHandler - In the implementation block
@property (nonatomic,retain) PXSearchQueryResultsProcessor * searchResultsProcessor;              //@synthesize searchResultsProcessor=_searchResultsProcessor - In the implementation block
@property (nonatomic,readonly) PLSearchProcessor * plSearchProcessor;                             //@synthesize plSearchProcessor=_plSearchProcessor - In the implementation block
@property (nonatomic,readonly) PXSearchIndexManager * searchIndexManager;                         //@synthesize searchIndexManager=_searchIndexManager - In the implementation block
@property (nonatomic,copy) PXSearchQuery * currentSearchQuery;                                    //@synthesize currentSearchQuery=_currentSearchQuery - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queryQueue;                             //@synthesize queryQueue=_queryQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,copy) NSDictionary * sceneAncestryInformation;                               //@synthesize sceneAncestryInformation=_sceneAncestryInformation - In the implementation block
@property (nonatomic,readonly) BOOL requestSceneAncestryInformation;                              //@synthesize requestSceneAncestryInformation=_requestSceneAncestryInformation - In the implementation block
+(BOOL)_sectionIsHighlightsSection:(id)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(void)_requestSceneAncestryInformationForPhotoLibrary:(id)arg1 ;
-(void)_setupSearchResultsProcessor;
-(void)setCurrentSearchQuery:(PXSearchQuery *)arg1 ;
-(PXSearchQuery *)currentSearchQuery;
-(void)executeSearchQuery:(id)arg1 ;
-(void)_processedQueryResultsForSearchQuery:(id)arg1 psiQuery:(id)arg2 assetResults:(id)arg3 collectionResults:(id)arg4 topAssetsResult:(id)arg5 topCollectionResults:(id)arg6 ;
-(id)_backendQueryFromSearchQuery:(id)arg1 ;
-(id)_searchSuggestionsFromPSIQuery:(id)arg1 searchSections:(id)arg2 suggestionLimit:(unsigned long long)arg3 ;
-(id)_limitedSearchSuggestions:(id)arg1 limit:(unsigned long long)arg2 ;
-(PXSearchQueryResultsProcessor *)searchResultsProcessor;
-(void)setSearchResultsProcessor:(PXSearchQueryResultsProcessor *)arg1 ;
-(PLSearchProcessor *)plSearchProcessor;
-(BOOL)requestSceneAncestryInformation;
-(PXSearchIndexManager *)searchIndexManager;
-(void)setQueryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDictionary *)sceneAncestryInformation;
-(void)setSceneAncestryInformation:(NSDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queryQueue;
-(id)resultsHandler;
-(id)initWithSearchIndexManager:(id)arg1 requestSceneAncestryInformation:(BOOL)arg2 resultsHandler:(/*^block*/id)arg3 ;
@end

