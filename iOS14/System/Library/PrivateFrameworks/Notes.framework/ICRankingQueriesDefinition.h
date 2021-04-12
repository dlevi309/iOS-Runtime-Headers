/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/


@class NSArray, NSString, NSMutableDictionary;

@interface ICRankingQueriesDefinition : NSObject {

	NSArray* _rankingQueryDescriptors;
	NSArray* _rankingQueries;
	NSArray* _expandedTokens;
	long long _rankingQueryType;
	NSString* _rankingQueryFlags;
	NSMutableDictionary* _matchingDescriptorsCache;

}

@property (nonatomic,retain) NSArray * expandedTokens;                                    //@synthesize expandedTokens=_expandedTokens - In the implementation block
@property (assign,nonatomic) long long rankingQueryType;                                  //@synthesize rankingQueryType=_rankingQueryType - In the implementation block
@property (nonatomic,retain) NSString * rankingQueryFlags;                                //@synthesize rankingQueryFlags=_rankingQueryFlags - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * matchingDescriptorsCache;              //@synthesize matchingDescriptorsCache=_matchingDescriptorsCache - In the implementation block
@property (nonatomic,readonly) NSArray * rankingQueryDescriptors;                         //@synthesize rankingQueryDescriptors=_rankingQueryDescriptors - In the implementation block
@property (nonatomic,readonly) NSArray * rankingQueries;                                  //@synthesize rankingQueries=_rankingQueries - In the implementation block
+(unsigned long long)maxCountOfVariantsForCountOfTokens:(unsigned long long)arg1 ;
+(unsigned long long)relevanceBitFieldForSearchableItem:(id)arg1 ;
+(unsigned long long)bucketOfTimeInterval:(double)arg1 ;
+(unsigned long long)modificationDateBucketForSearchableItem:(id)arg1 ;
-(NSArray *)rankingQueries;
-(NSArray *)expandedTokens;
-(long long)rankingQueryType;
-(NSString *)rankingQueryFlags;
-(id)initWithExpandedTokens:(id)arg1 rankingQueryType:(long long)arg2 rankingQueryFlags:(id)arg3 ;
-(NSArray *)rankingQueryDescriptors;
-(id)matchingDescriptorsForBitFields:(unsigned long long)arg1 ;
-(void)addDescriptor:(id)arg1 intoSearchResultHighlightInfoFieldElement:(id)arg2 ;
-(NSMutableDictionary *)matchingDescriptorsCache;
-(id)initWithSearchString:(id)arg1 rankingQueryType:(long long)arg2 rankingQueryFlags:(id)arg3 ;
-(id)highlightInfoForSearchableItem:(id)arg1 ;
-(double)rankingScoreForSearchableItem:(id)arg1 ;
-(void)setExpandedTokens:(NSArray *)arg1 ;
-(void)setRankingQueryType:(long long)arg1 ;
-(void)setRankingQueryFlags:(NSString *)arg1 ;
-(void)setMatchingDescriptorsCache:(NSMutableDictionary *)arg1 ;
@end

