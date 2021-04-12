/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <Foundation/NSOperation.h>

@class NSMutableArray, NSError, ICSearchQuery, NSMutableDictionary, NSString;

@interface ICSearchQueryOperation : NSOperation {

	BOOL _shouldPerformRankingComparison;
	BOOL _modernResultsOnly;
	BOOL _useRankingQueries;
	BOOL _performNLSearch;
	BOOL _allowEmptySearchString;
	/*^block*/id _foundItemsHandler;
	NSMutableArray* _results;
	NSError* _error;
	long long _requestIndex;
	ICSearchQuery* _defaultQuery;
	ICSearchQuery* _substringQuery;
	ICSearchQuery* _nlQuery;
	ICSearchQuery* _spellingQuery;
	NSMutableArray* _relatedWordQueries;
	NSMutableDictionary* _resultsDictionary;
	NSMutableDictionary* _rankingScores;
	NSMutableDictionary* _matchedFields;
	NSMutableDictionary* _isPrefixMatch;
	NSMutableDictionary* _relevancesBitField;
	NSMutableDictionary* _modificationDateBucket;
	NSMutableDictionary* _rankComparison;
	NSString* _searchString;
	NSString* _suggestionsQueryString;
	unsigned long long _rankingStrategy;

}

@property (nonatomic,retain) ICSearchQuery * defaultQuery;                              //@synthesize defaultQuery=_defaultQuery - In the implementation block
@property (nonatomic,retain) ICSearchQuery * substringQuery;                            //@synthesize substringQuery=_substringQuery - In the implementation block
@property (nonatomic,retain) ICSearchQuery * nlQuery;                                   //@synthesize nlQuery=_nlQuery - In the implementation block
@property (nonatomic,retain) ICSearchQuery * spellingQuery;                             //@synthesize spellingQuery=_spellingQuery - In the implementation block
@property (nonatomic,retain) NSMutableArray * relatedWordQueries;                       //@synthesize relatedWordQueries=_relatedWordQueries - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * resultsDictionary;                   //@synthesize resultsDictionary=_resultsDictionary - In the implementation block
@property (nonatomic,retain) NSMutableArray * results;                                  //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * rankingScores;                       //@synthesize rankingScores=_rankingScores - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * matchedFields;                       //@synthesize matchedFields=_matchedFields - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * isPrefixMatch;                       //@synthesize isPrefixMatch=_isPrefixMatch - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * relevancesBitField;                  //@synthesize relevancesBitField=_relevancesBitField - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * modificationDateBucket;              //@synthesize modificationDateBucket=_modificationDateBucket - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * rankComparison;                      //@synthesize rankComparison=_rankComparison - In the implementation block
@property (nonatomic,retain) NSString * searchString;                                   //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) NSString * suggestionsQueryString;                         //@synthesize suggestionsQueryString=_suggestionsQueryString - In the implementation block
@property (assign,nonatomic) BOOL useRankingQueries;                                    //@synthesize useRankingQueries=_useRankingQueries - In the implementation block
@property (assign,nonatomic) BOOL performNLSearch;                                      //@synthesize performNLSearch=_performNLSearch - In the implementation block
@property (nonatomic,retain) NSError * error;                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL allowEmptySearchString;                             //@synthesize allowEmptySearchString=_allowEmptySearchString - In the implementation block
@property (assign,nonatomic) BOOL modernResultsOnly;                                    //@synthesize modernResultsOnly=_modernResultsOnly - In the implementation block
@property (assign,nonatomic) unsigned long long rankingStrategy;                        //@synthesize rankingStrategy=_rankingStrategy - In the implementation block
@property (nonatomic,copy) id foundItemsHandler;                                        //@synthesize foundItemsHandler=_foundItemsHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldPerformRankingComparison;                       //@synthesize shouldPerformRankingComparison=_shouldPerformRankingComparison - In the implementation block
@property (assign,nonatomic) long long requestIndex;                                    //@synthesize requestIndex=_requestIndex - In the implementation block
+(void)initialize;
+(id)prefixMatchingQueryStringForSearchString:(id)arg1 ;
+(id)substringMatchingQueryStringForSearchString:(id)arg1 ;
+(id)queryStringForSearchString:(id)arg1 queryFields:(id)arg2 matchType:(unsigned char)arg3 ;
+(void)nlSearchQueryWithSearchString:(id)arg1 queryString:(id*)arg2 rankingQueries:(id*)arg3 highlightString:(id*)arg4 ;
+(id)queryFields;
+(id)nlpSerialQueue;
+(void*)nlpParser;
+(id)highlightStringForAttributedInputs:(id)arg1 ;
+(id)exactMatchingQueryStringForTitleSearchString:(id)arg1 ;
-(id)init;
-(NSError *)error;
-(void)cancel;
-(NSMutableArray *)results;
-(void)main;
-(void)setError:(NSError *)arg1 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setResults:(NSMutableArray *)arg1 ;
-(void)setFoundItemsHandler:(id)arg1 ;
-(long long)requestIndex;
-(NSMutableDictionary *)resultsDictionary;
-(id)foundItemsHandler;
-(NSMutableDictionary *)isPrefixMatch;
-(void)setIsPrefixMatch:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)modificationDateBucket;
-(void)setModificationDateBucket:(NSMutableDictionary *)arg1 ;
-(void)setModernResultsOnly:(BOOL)arg1 ;
-(BOOL)modernResultsOnly;
-(id)initWithUserInput:(id)arg1 useRankingQueries:(BOOL)arg2 performNLSearch:(BOOL)arg3 modernResultsOnly:(BOOL)arg4 ;
-(id)initWithSearchString:(id)arg1 useRankingQueries:(BOOL)arg2 performNLSearch:(BOOL)arg3 suggestions:(id)arg4 modernResultsOnly:(BOOL)arg5 ;
-(void)setUseRankingQueries:(BOOL)arg1 ;
-(void)setPerformNLSearch:(BOOL)arg1 ;
-(id)suggestionsQueryStringFromSuggestions:(id)arg1 ;
-(void)setSuggestionsQueryString:(NSString *)arg1 ;
-(id)initWithQueryString:(id)arg1 rankingQueries:(id)arg2 modernResultsOnly:(BOOL)arg3 ;
-(void)setDefaultQuery:(ICSearchQuery *)arg1 ;
-(NSString *)suggestionsQueryString;
-(ICSearchQuery *)defaultQuery;
-(BOOL)useRankingQueries;
-(id)jointQueryWithSuggestions:(id)arg1 ;
-(void)runQuery:(id)arg1 ;
-(unsigned long long)countOfNonSpaceCharsInSearchString;
-(ICSearchQuery *)substringQuery;
-(void)setSubstringQuery:(ICSearchQuery *)arg1 ;
-(ICSearchQuery *)spellingQuery;
-(void)setSpellingQuery:(ICSearchQuery *)arg1 ;
-(void)setRelatedWordQueries:(NSMutableArray *)arg1 ;
-(NSMutableArray *)relatedWordQueries;
-(BOOL)allowEmptySearchString;
-(void)setRankingStrategy:(unsigned long long)arg1 ;
-(void)setResultsDictionary:(NSMutableDictionary *)arg1 ;
-(void)setRankingScores:(NSMutableDictionary *)arg1 ;
-(void)setMatchedFields:(NSMutableDictionary *)arg1 ;
-(void)setRelevancesBitField:(NSMutableDictionary *)arg1 ;
-(void)setRankComparison:(NSMutableDictionary *)arg1 ;
-(void)performPrefixAndSubstringQueries;
-(BOOL)performNLSearch;
-(void)setNlQuery:(ICSearchQuery *)arg1 ;
-(ICSearchQuery *)nlQuery;
-(void)performSpellingQueryIfNeeded;
-(void)performRelatedWordQueriesIfNeeded;
-(NSMutableDictionary *)rankingScores;
-(NSMutableDictionary *)relevancesBitField;
-(NSMutableDictionary *)matchedFields;
-(id)sortedSearchableItemsOfIdentifiers:(id)arg1 ;
-(unsigned long long)rankingStrategy;
-(BOOL)shouldPerformRankingComparison;
-(NSMutableDictionary *)rankComparison;
-(id)initWithUserInput:(id)arg1 useRankingQueries:(BOOL)arg2 performNLSearch:(BOOL)arg3 ;
-(id)initWithSearchString:(id)arg1 useRankingQueries:(BOOL)arg2 performNLSearch:(BOOL)arg3 suggestions:(id)arg4 ;
-(id)initWithQueryString:(id)arg1 rankingQueries:(id)arg2 ;
-(id)suggestionsQueryStringFromUserInput:(id)arg1 ;
-(double)rankingScoreForSearchableItem:(id)arg1 ;
-(unsigned long long)matchedFieldForSearchableItem:(id)arg1 ;
-(unsigned long long)relevanceBitFieldForSearchableItem:(id)arg1 ;
-(id)rankComparisonForSearchableItem:(id)arg1 ;
-(void)setShouldPerformRankingComparison:(BOOL)arg1 ;
-(void)setRequestIndex:(long long)arg1 ;
@end

