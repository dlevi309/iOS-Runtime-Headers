/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PSIQueryDelegate;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PSIParse, NSArray, NSMutableDictionary, NSDictionary, NSMutableSet, NSString, NSSet, PSITokenizer;

@interface PSIQuery : NSObject {

	id<PSIQueryDelegate> _delegate;
	PSIParse* _baseParse;
	BOOL _baseParseCouldHaveResults;
	NSArray* _implicitelyTokenizedParses;
	BOOL _implicitlyTokenizedParsesCouldHaveResults;
	NSArray* _datedParses;
	NSArray* _implicitlyTokenizedDatedParses;
	NSArray* _wordEmbeddingParses;
	NSArray* _identifierTokens;
	NSMutableDictionary* _groupIdsByTokenKey;
	NSDictionary* _substitutionsByStringToken;
	NSArray* _socialGroupPersonIdentifiers;
	AB _didStart;
	AB _isCanceled;
	NSMutableSet* _socialGroupExtendedAssetIds;
	NSMutableSet* _socialGroupExtendedCollectionIds;
	BOOL _usesPrefixBasedWordEmbedding;
	BOOL _calculateTokenCounts;
	BOOL _enableImplicitTokenization;
	BOOL _implicitTokenizationUsePrefixMatch;
	BOOL _implicitTokenizationLastTokenUsesPrefixMatch;
	BOOL _preventUnnecessaryImplicitTokenization;
	BOOL _exactMatchIgnoreUntokenizedCharacters;
	BOOL _lastImplicitTokenAllowsWordEmbeddings;
	BOOL _useWildcardText;
	NSArray* _queryTokens;
	NSString* _searchText;
	unsigned long long _wordEmbeddingMode;
	NSDictionary* _substitutions;
	unsigned long long _numberOfNextKeywordSuggestionToProcess;
	NSArray* _nextKeywordSuggestions;
	NSSet* _sceneIdentifiers;
	NSArray* _dedupedGroupResults;
	unsigned long long _mergeFilterTokenAssetIDsIntervalID;

}

@property (assign,nonatomic) unsigned long long mergeFilterTokenAssetIDsIntervalID;                  //@synthesize mergeFilterTokenAssetIDsIntervalID=_mergeFilterTokenAssetIDsIntervalID - In the implementation block
@property (nonatomic,readonly) BOOL useWildcardText;                                                 //@synthesize useWildcardText=_useWildcardText - In the implementation block
@property (nonatomic,retain) NSDictionary * substitutions;                                           //@synthesize substitutions=_substitutions - In the implementation block
@property (nonatomic,retain) NSArray * nextKeywordSuggestions;                                       //@synthesize nextKeywordSuggestions=_nextKeywordSuggestions - In the implementation block
@property (nonatomic,copy) NSSet * sceneIdentifiers;                                                 //@synthesize sceneIdentifiers=_sceneIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * dedupedGroupResults;                                            //@synthesize dedupedGroupResults=_dedupedGroupResults - In the implementation block
@property (nonatomic,copy) NSSet * socialGroupExtendedAssetIds;                                      //@synthesize socialGroupExtendedAssetIds=_socialGroupExtendedAssetIds - In the implementation block
@property (nonatomic,copy) NSSet * socialGroupExtendedCollectionIds;                                 //@synthesize socialGroupExtendedCollectionIds=_socialGroupExtendedCollectionIds - In the implementation block
@property (nonatomic,readonly) PSITokenizer * tokenizer; 
@property (nonatomic,copy,readonly) NSArray * queryTokens;                                           //@synthesize queryTokens=_queryTokens - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchText;                                           //@synthesize searchText=_searchText - In the implementation block
@property (getter=isCanceled,readonly) BOOL canceled; 
@property (assign,nonatomic) unsigned long long wordEmbeddingMode;                                   //@synthesize wordEmbeddingMode=_wordEmbeddingMode - In the implementation block
@property (assign,nonatomic) BOOL usesPrefixBasedWordEmbedding;                                      //@synthesize usesPrefixBasedWordEmbedding=_usesPrefixBasedWordEmbedding - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfNextKeywordSuggestionToProcess;              //@synthesize numberOfNextKeywordSuggestionToProcess=_numberOfNextKeywordSuggestionToProcess - In the implementation block
@property (assign,nonatomic) BOOL calculateTokenCounts;                                              //@synthesize calculateTokenCounts=_calculateTokenCounts - In the implementation block
@property (assign,nonatomic) BOOL enableImplicitTokenization;                                        //@synthesize enableImplicitTokenization=_enableImplicitTokenization - In the implementation block
@property (assign,nonatomic) BOOL implicitTokenizationUsePrefixMatch;                                //@synthesize implicitTokenizationUsePrefixMatch=_implicitTokenizationUsePrefixMatch - In the implementation block
@property (assign,nonatomic) BOOL implicitTokenizationLastTokenUsesPrefixMatch;                      //@synthesize implicitTokenizationLastTokenUsesPrefixMatch=_implicitTokenizationLastTokenUsesPrefixMatch - In the implementation block
@property (assign,nonatomic) BOOL preventUnnecessaryImplicitTokenization;                            //@synthesize preventUnnecessaryImplicitTokenization=_preventUnnecessaryImplicitTokenization - In the implementation block
@property (assign,nonatomic) BOOL exactMatchIgnoreUntokenizedCharacters;                             //@synthesize exactMatchIgnoreUntokenizedCharacters=_exactMatchIgnoreUntokenizedCharacters - In the implementation block
@property (assign,nonatomic) BOOL lastImplicitTokenAllowsWordEmbeddings;                             //@synthesize lastImplicitTokenAllowsWordEmbeddings=_lastImplicitTokenAllowsWordEmbeddings - In the implementation block
@property (nonatomic,readonly) BOOL implicitTokenizationIncludeBaseParseResults; 
+(void)_restoreAssetIdsForGroupsInGroupArrays:(id)arg1 atRemovalIndexes:(id)arg2 groupIdToOriginalAssetIdsMap:(id)arg3 searchTokens:(id)arg4 ;
+(id)_indexesToRemoveForDuplicatedFilterGroupsinGroupArrays:(id)arg1 searchTokens:(id)arg2 ;
+(void)_aggregateAssetIdsOnFilterGroupsInGroupArrays:(id)arg1 searchTokens:(id)arg2 groupIdToOriginalAssetIdsMap:(id*)arg3 ;
+(id)_indexesOfFilterTokensInSearchTokens:(id)arg1 ;
+(BOOL)_shouldApplyFilterTokensForGroupArrays:(id)arg1 searchTokens:(id)arg2 filterGroupIds:(id)arg3 ;
+(id)parsedDatesFromText:(id)arg1 ;
+(NSRange)searchTextExtendedRangeForParse:(id)arg1 ;
+(BOOL)enumerateDatedParsesWithParse:(id)arg1 currentTokenIndex:(unsigned long long)arg2 potentialComboAttributes:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
+(BOOL)tokenIsEligibleForDateParsing:(id)arg1 ;
+(id)dateAttributesFromToken:(id)arg1 ;
+(id)dateFilterWithAttributes:(id)arg1 andAttributes:(id)arg2 ;
+(id)dateFilterByCombiningDateFilter:(id)arg1 withDateFilter:(id)arg2 ;
+(id)datedParsesWithParses:(id)arg1 ;
+(id)dateFilterWithAttributes:(id)arg1 ;
+(void)bootstrap;
-(void)setEnableImplicitTokenization:(BOOL)arg1 ;
-(BOOL)isCanceled;
-(BOOL)lastImplicitTokenAllowsWordEmbeddings;
-(void)setPreventUnnecessaryImplicitTokenization:(BOOL)arg1 ;
-(void)setExactMatchIgnoreUntokenizedCharacters:(BOOL)arg1 ;
-(void)setImplicitTokenizationUsePrefixMatch:(BOOL)arg1 ;
-(NSArray *)queryTokens;
-(BOOL)enableImplicitTokenization;
-(void)setImplicitTokenizationLastTokenUsesPrefixMatch:(BOOL)arg1 ;
-(PSITokenizer *)tokenizer;
-(void)processDates;
-(id)description;
-(void)runWithResultsHandler:(/*^block*/id)arg1 ;
-(id)processParse:(id)arg1 ;
-(BOOL)implicitTokenizationIncludeBaseParseResults;
-(id)initWithQueryTokens:(id)arg1 searchText:(id)arg2 useWildcardText:(BOOL)arg3 delegate:(id)arg4 ;
-(CFSetRef)_idsOfGroupsMatchingString:(id)arg1 categories:(id)arg2 textIsSearchable:(BOOL)arg3 isFilterTypeToken:(BOOL)arg4 ;
-(void)computeSuggestions;
-(CFSetRef)_idsOfGroupsMatchingToken:(id)arg1 ;
-(void)processImplicitTokenization;
-(void)processWordEmbeddings;
-(BOOL)recursiveAddToGroupResults:(id)arg1 aggregate:(id)arg2 atIndex:(unsigned long long)arg3 outOf:(unsigned long long)arg4 inGroupArrays:(id)arg5 dateFilter:(id)arg6 datedTokens:(id)arg7 ;
-(unsigned long long)wordEmbeddingMode;
-(void)enumerateParsesWithMode:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_postProcessPersonGroupsInGroupArrays:(id)arg1 ;
-(void)setWordEmbeddingMode:(unsigned long long)arg1 ;
-(BOOL)usesPrefixBasedWordEmbedding;
-(void)setUsesPrefixBasedWordEmbedding:(BOOL)arg1 ;
-(NSDictionary *)substitutions;
-(void)setSubstitutions:(NSDictionary *)arg1 ;
-(unsigned long long)numberOfNextKeywordSuggestionToProcess;
-(void)setNumberOfNextKeywordSuggestionToProcess:(unsigned long long)arg1 ;
-(NSArray *)nextKeywordSuggestions;
-(void)setNextKeywordSuggestions:(NSArray *)arg1 ;
-(NSSet *)sceneIdentifiers;
-(void)setSceneIdentifiers:(NSSet *)arg1 ;
-(BOOL)calculateTokenCounts;
-(void)setCalculateTokenCounts:(BOOL)arg1 ;
-(NSArray *)dedupedGroupResults;
-(void)setDedupedGroupResults:(NSArray *)arg1 ;
-(NSSet *)socialGroupExtendedAssetIds;
-(void)setSocialGroupExtendedAssetIds:(NSSet *)arg1 ;
-(NSSet *)socialGroupExtendedCollectionIds;
-(BOOL)useWildcardText;
-(NSString *)searchText;
-(void)setSocialGroupExtendedCollectionIds:(NSSet *)arg1 ;
-(unsigned long long)mergeFilterTokenAssetIDsIntervalID;
-(void)setMergeFilterTokenAssetIDsIntervalID:(unsigned long long)arg1 ;
-(void)setLastImplicitTokenAllowsWordEmbeddings:(BOOL)arg1 ;
-(BOOL)implicitTokenizationLastTokenUsesPrefixMatch;
-(id)suggestionWhitelistedScenes;
-(BOOL)_enumerateImplicitlyTokenizedParsesWithBaseParse:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)implicitlyTokenizedParsesWithBaseParse:(id)arg1 ;
-(BOOL)preventUnnecessaryImplicitTokenization;
-(BOOL)implicitTokenizationUsePrefixMatch;
-(void)cancel;
-(BOOL)exactMatchIgnoreUntokenizedCharacters;
-(void)bootstrap;
@end

