/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/

#import <HelpKit/HLPRemoteDataController.h>

@class CSSearchQuery, HLPHelpBookController, NSDictionary, CSPrivateSearchableIndex, NSMutableArray, NSArray;

@interface HLPHelpSearchIndexController : HLPRemoteDataController {

	CSSearchQuery* _spotlightSearchQuery;
	BOOL _useCSSearch;
	HLPHelpBookController* _helpBookController;
	NSDictionary* _searchIndex;
	CSPrivateSearchableIndex* _privateSearchableIndex;
	NSMutableArray* _spotlightSearchScores;

}

@property (nonatomic,retain) CSPrivateSearchableIndex * privateSearchableIndex;              //@synthesize privateSearchableIndex=_privateSearchableIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * spotlightSearchScores;                         //@synthesize spotlightSearchScores=_spotlightSearchScores - In the implementation block
@property (assign,nonatomic) BOOL useCSSearch;                                               //@synthesize useCSSearch=_useCSSearch - In the implementation block
@property (nonatomic,retain) HLPHelpBookController * helpBookController;                     //@synthesize helpBookController=_helpBookController - In the implementation block
@property (nonatomic,retain) NSDictionary * searchIndex;                                     //@synthesize searchIndex=_searchIndex - In the implementation block
@property (nonatomic,readonly) NSArray * spotlightSearchResults; 
+(id)_stopwordsForLanguage:(id)arg1 ;
-(NSDictionary *)searchIndex;
-(void)setSearchIndex:(NSDictionary *)arg1 ;
-(void)dealloc;
-(void)setHelpBookController:(HLPHelpBookController *)arg1 ;
-(void)setUseCSSearch:(BOOL)arg1 ;
-(void)fetchDataWithDataType:(long long)arg1 identifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)useCSSearch;
-(id)resultsWithSearchText:(id)arg1 localeCode:(id)arg2 searchTerms:(id*)arg3 ;
-(void)cancelSpotlightSearch;
-(NSArray *)spotlightSearchResults;
-(void)CSSearchForSearchText:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HLPHelpBookController *)helpBookController;
-(void)processFileURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)processData:(id)arg1 formattedData:(id)arg2 ;
-(CSPrivateSearchableIndex *)privateSearchableIndex;
-(id)searchTermsForSearchText:(id)arg1 localeCode:(id)arg2 ;
-(id)searchTree:(id)arg1 forQueryWord:(id)arg2 withMaxDepth:(int)arg3 ;
-(id)mergeDictionary:(id)arg1 withDictionary:(id)arg2 ;
-(id)getAllIdentifiersFromTree:(id)arg1 withMaxDepth:(int)arg2 ;
-(id)_tokenizeSearchTerm:(id)arg1 ;
-(id)_strippedSearchTermFromSearchTerm:(id)arg1 ;
-(double)_relevanceScore:(double)arg1 forRankingQueries:(id)arg2 ;
-(NSMutableArray *)spotlightSearchScores;
-(id)_csQueryStringForSearchTerm:(id)arg1 ;
-(id)_rankingQueriesForSearchTerm:(id)arg1 ;
-(id)_fetchAttributesForCSSearchQuery;
-(void)_hpdResultsFromCSSearchableItems:(id)arg1 rankingQueries:(id)arg2 ;
-(void)setPrivateSearchableIndex:(CSPrivateSearchableIndex *)arg1 ;
-(void)setSpotlightSearchScores:(NSMutableArray *)arg1 ;
@end

