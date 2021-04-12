/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <Foundation/NSOperation.h>

@class NSMutableArray, NSError, NSString, NSArray, ICSearchQuery, ICTopHitSearchQuery, NSMutableDictionary;

@interface ICSearchQueryOperation : NSOperation {

	BOOL _modernResultsOnly;
	BOOL _performTopHitSearch;
	BOOL _performNLSearch;
	BOOL _allowEmptySearchString;
	/*^block*/id _foundItemsHandler;
	NSMutableArray* _results;
	NSError* _error;
	long long _requestIndex;
	NSString* _searchString;
	NSArray* _searchSuggestions;
	ICSearchQuery* _defaultQuery;
	ICSearchQuery* _fuzzyQuery;
	ICSearchQuery* _substringQuery;
	ICSearchQuery* _nlQuery;
	ICSearchQuery* _spellingQuery;
	ICTopHitSearchQuery* _topHitQuery;
	NSMutableArray* _relatedWordQueries;
	NSMutableDictionary* _resultsDictionary;
	NSMutableDictionary* _uniqueIdentifiersOfAttachmentsFoundInNotes;
	NSString* _suggestionsQueryString;
	NSString* _keyboardLanguage;
	unsigned long long _rankingStrategy;

}

@property (nonatomic,retain) ICSearchQuery * defaultQuery;                                                  //@synthesize defaultQuery=_defaultQuery - In the implementation block
@property (nonatomic,retain) ICSearchQuery * fuzzyQuery;                                                    //@synthesize fuzzyQuery=_fuzzyQuery - In the implementation block
@property (nonatomic,retain) ICSearchQuery * substringQuery;                                                //@synthesize substringQuery=_substringQuery - In the implementation block
@property (nonatomic,retain) ICSearchQuery * nlQuery;                                                       //@synthesize nlQuery=_nlQuery - In the implementation block
@property (nonatomic,retain) ICSearchQuery * spellingQuery;                                                 //@synthesize spellingQuery=_spellingQuery - In the implementation block
@property (nonatomic,retain) ICTopHitSearchQuery * topHitQuery;                                             //@synthesize topHitQuery=_topHitQuery - In the implementation block
@property (nonatomic,retain) NSMutableArray * relatedWordQueries;                                           //@synthesize relatedWordQueries=_relatedWordQueries - In the implementation block
@property (nonatomic,retain) NSMutableArray * results;                                                      //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * resultsDictionary;                                       //@synthesize resultsDictionary=_resultsDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * uniqueIdentifiersOfAttachmentsFoundInNotes;              //@synthesize uniqueIdentifiersOfAttachmentsFoundInNotes=_uniqueIdentifiersOfAttachmentsFoundInNotes - In the implementation block
@property (nonatomic,copy) NSString * searchString;                                                         //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,copy) NSString * suggestionsQueryString;                                               //@synthesize suggestionsQueryString=_suggestionsQueryString - In the implementation block
@property (nonatomic,copy) NSString * keyboardLanguage;                                                     //@synthesize keyboardLanguage=_keyboardLanguage - In the implementation block
@property (assign,nonatomic) BOOL performTopHitSearch;                                                      //@synthesize performTopHitSearch=_performTopHitSearch - In the implementation block
@property (assign,nonatomic) BOOL performNLSearch;                                                          //@synthesize performNLSearch=_performNLSearch - In the implementation block
@property (nonatomic,retain) NSError * error;                                                               //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL allowEmptySearchString;                                                 //@synthesize allowEmptySearchString=_allowEmptySearchString - In the implementation block
@property (assign,nonatomic) BOOL modernResultsOnly;                                                        //@synthesize modernResultsOnly=_modernResultsOnly - In the implementation block
@property (assign,nonatomic) unsigned long long rankingStrategy;                                            //@synthesize rankingStrategy=_rankingStrategy - In the implementation block
@property (nonatomic,copy) id foundItemsHandler;                                                            //@synthesize foundItemsHandler=_foundItemsHandler - In the implementation block
@property (assign,nonatomic) long long requestIndex;                                                        //@synthesize requestIndex=_requestIndex - In the implementation block
@property (nonatomic,readonly) NSArray * searchSuggestions;                                                 //@synthesize searchSuggestions=_searchSuggestions - In the implementation block
+(void)initialize;
+(id)fuzzyMatchingQueryStringForSearchString:(id)arg1 ;
+(id)substringMatchingQueryStringForSearchString:(id)arg1 ;
+(void)nlSearchQueryWithSearchString:(id)arg1 queryString:(id*)arg2 rankingQueries:(id*)arg3 highlightString:(id*)arg4 ;
+(id)nlpSerialQueue;
+(void*)nlpParser;
+(id)highlightStringForAttributedInputs:(id)arg1 ;
+(id)prefixMatchingQueryStringForSearchString:(id)arg1 ;
+(id)exactMatchingQueryStringForTitleSearchString:(id)arg1 ;
+(id)newOperationQueueWithName:(id)arg1 ;
+(id)searchableItemsFromSortableItems:(id)arg1 ;
-(void)setResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)results;
-(NSString *)keyboardLanguage;
-(id)init;
-(id)foundItemsHandler;
-(void)setFoundItemsHandler:(id)arg1 ;
-(long long)requestIndex;
-(void)setKeyboardLanguage:(NSString *)arg1 ;
-(NSMutableDictionary *)resultsDictionary;
-(BOOL)modernResultsOnly;
-(void)setModernResultsOnly:(BOOL)arg1 ;
-(ICSearchQuery *)fuzzyQuery;
-(void)setError:(NSError *)arg1 ;
-(id)suggestionsQueryStringFromSuggestions:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 performNLSearch:(BOOL)arg2 performTopHitSearch:(BOOL)arg3 suggestions:(id)arg4 modernResultsOnly:(BOOL)arg5 ;
-(id)initWithQueryString:(id)arg1 rankingQueries:(id)arg2 performTopHitSearch:(BOOL)arg3 modernResultsOnly:(BOOL)arg4 ;
-(NSString *)suggestionsQueryString;
-(ICSearchQuery *)defaultQuery;
-(id)jointQueryWithSuggestions:(id)arg1 ;
-(void)setDefaultQuery:(ICSearchQuery *)arg1 ;
-(id)runICSearchQuery:(id)arg1 ;
-(unsigned long long)countOfNonSpaceCharsInSearchString;
-(void)setFuzzyQuery:(ICSearchQuery *)arg1 ;
-(ICSearchQuery *)substringQuery;
-(ICTopHitSearchQuery *)topHitQuery;
-(NSError *)error;
-(void)main;
-(void)setSubstringQuery:(ICSearchQuery *)arg1 ;
-(ICSearchQuery *)spellingQuery;
-(void)setSpellingQuery:(ICSearchQuery *)arg1 ;
-(void)setRelatedWordQueries:(NSMutableArray *)arg1 ;
-(NSMutableArray *)relatedWordQueries;
-(void)setTopHitQuery:(ICTopHitSearchQuery *)arg1 ;
-(id)retrieveNotesOfFoundAttachmentsForSearchResults:(id)arg1 ;
-(void)appendSortableSearchableItemsToResults:(id)arg1 ;
-(BOOL)allowEmptySearchString;
-(void)setRankingStrategy:(unsigned long long)arg1 ;
-(void)setResultsDictionary:(NSMutableDictionary *)arg1 ;
-(void)setUniqueIdentifiersOfAttachmentsFoundInNotes:(NSMutableDictionary *)arg1 ;
-(BOOL)performNLSearch;
-(ICSearchQuery *)nlQuery;
-(NSArray *)searchSuggestions;
-(BOOL)performTopHitSearch;
-(void)performTopHitSearchQuery;
-(void)performPrefixAndFuzzyAndSubstringQueries;
-(void)setNlQuery:(ICSearchQuery *)arg1 ;
-(void)performSpellCheckerAPIQueryIfNeeded;
-(void)performRelatedWordQueriesIfNeeded;
-(NSMutableDictionary *)uniqueIdentifiersOfAttachmentsFoundInNotes;
-(unsigned long long)rankingStrategy;
-(id)initWithUserInput:(id)arg1 performNLSearch:(BOOL)arg2 performTopHitSearch:(BOOL)arg3 modernResultsOnly:(BOOL)arg4 ;
-(id)initWithSearchString:(id)arg1 performNLSearch:(BOOL)arg2 performTopHitSearch:(BOOL)arg3 suggestions:(id)arg4 ;
-(id)initWithQueryString:(id)arg1 rankingQueries:(id)arg2 ;
-(void)setRequestIndex:(long long)arg1 ;
-(void)setSuggestionsQueryString:(NSString *)arg1 ;
-(void)setPerformTopHitSearch:(BOOL)arg1 ;
-(void)setPerformNLSearch:(BOOL)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(void)cancel;
-(NSString *)searchString;
@end

