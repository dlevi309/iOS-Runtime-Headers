/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXSearchQueryControllerProtocol.h>

@class PXSearchIndexManager, PSIDatabase, PXSearchQueryExecutor, PXSearchQuery, NSString;

@interface PXSearchQueryController : NSObject <PXSearchQueryControllerProtocol> {

	BOOL _isOpeningSearchIndex;
	BOOL _requestSceneAncestryInformation;
	PXSearchIndexManager* _searchIndexManager;
	/*^block*/id _resultsHandler;
	PSIDatabase* _searchIndex;
	PXSearchQueryExecutor* _searchQueryExecutor;
	PXSearchQuery* _currentSearchQuery;

}

@property (nonatomic,readonly) PXSearchIndexManager * searchIndexManager;              //@synthesize searchIndexManager=_searchIndexManager - In the implementation block
@property (nonatomic,readonly) id resultsHandler;                                      //@synthesize resultsHandler=_resultsHandler - In the implementation block
@property (nonatomic,retain) PSIDatabase * searchIndex;                                //@synthesize searchIndex=_searchIndex - In the implementation block
@property (nonatomic,retain) PXSearchQueryExecutor * searchQueryExecutor;              //@synthesize searchQueryExecutor=_searchQueryExecutor - In the implementation block
@property (nonatomic,retain) PXSearchQuery * currentSearchQuery;                       //@synthesize currentSearchQuery=_currentSearchQuery - In the implementation block
@property (assign,nonatomic) BOOL isOpeningSearchIndex;                                //@synthesize isOpeningSearchIndex=_isOpeningSearchIndex - In the implementation block
@property (nonatomic,readonly) BOOL requestSceneAncestryInformation;                   //@synthesize requestSceneAncestryInformation=_requestSceneAncestryInformation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setCurrentSearchQuery:(PXSearchQuery *)arg1 ;
-(PXSearchQuery *)currentSearchQuery;
-(BOOL)requestSceneAncestryInformation;
-(PXSearchIndexManager *)searchIndexManager;
-(id)resultsHandler;
-(PSIDatabase *)searchIndex;
-(void)_openSearchIndex;
-(void)_performSearch:(id)arg1 retry:(BOOL)arg2 ;
-(PXSearchQueryExecutor *)searchQueryExecutor;
-(void)setSearchQueryExecutor:(PXSearchQueryExecutor *)arg1 ;
-(BOOL)isOpeningSearchIndex;
-(void)setIsOpeningSearchIndex:(BOOL)arg1 ;
-(void)setSearchIndex:(PSIDatabase *)arg1 ;
-(void)performSearch:(id)arg1 ;
-(id)initWithSearchIndexManager:(id)arg1 requestSceneAncestryInformation:(BOOL)arg2 resultsHandler:(/*^block*/id)arg3 ;
@end

