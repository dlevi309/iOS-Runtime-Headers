/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@class NSOrderedSet, NSArray;

@interface PRSQueryRankingConfiguration : NSObject {

	BOOL _allowAnonymousDataCollection;
	NSOrderedSet* _requiredAttributes;
	NSArray* _rankingQueries;
	unsigned long long _strongRankingQueryCount;
	unsigned long long _dominantRankingQueryCount;
	unsigned long long _dominatedRankingQueryCount;
	unsigned long long _rankingBitCount;
	T _fuzzyMatchMask;
	T _fuzzyMatchCheck;

}

@property (retain) NSOrderedSet * requiredAttributes;                          //@synthesize requiredAttributes=_requiredAttributes - In the implementation block
@property (retain) NSArray * rankingQueries;                                   //@synthesize rankingQueries=_rankingQueries - In the implementation block
@property (assign) unsigned long long strongRankingQueryCount;                 //@synthesize strongRankingQueryCount=_strongRankingQueryCount - In the implementation block
@property (assign) unsigned long long dominantRankingQueryCount;               //@synthesize dominantRankingQueryCount=_dominantRankingQueryCount - In the implementation block
@property (assign) unsigned long long dominatedRankingQueryCount;              //@synthesize dominatedRankingQueryCount=_dominatedRankingQueryCount - In the implementation block
@property (assign) unsigned long long rankingBitCount;                         //@synthesize rankingBitCount=_rankingBitCount - In the implementation block
@property (assign) BOOL allowAnonymousDataCollection;                          //@synthesize allowAnonymousDataCollection=_allowAnonymousDataCollection - In the implementation block
@property (assign) T fuzzyMatchMask;                                           //@synthesize fuzzyMatchMask=_fuzzyMatchMask - In the implementation block
@property (assign) T fuzzyMatchCheck;                                          //@synthesize fuzzyMatchCheck=_fuzzyMatchCheck - In the implementation block
+(void)updateMailVIP:(id)arg1 phoneFavorites:(id)arg2 meEmailAddresses:(id)arg3 ;
-(void)setDominantRankingQueryCount:(unsigned long long)arg1 ;
-(unsigned long long)dominantRankingQueryCount;
-(NSArray *)rankingQueries;
-(NSOrderedSet *)requiredAttributes;
-(void)setDominatedRankingQueryCount:(unsigned long long)arg1 ;
-(void)setRankingQueries:(NSArray *)arg1 ;
-(unsigned long long)strongRankingQueryCount;
-(unsigned long long)dominatedRankingQueryCount;
-(void)setStrongRankingQueryCount:(unsigned long long)arg1 ;
-(void)setRequiredAttributes:(NSOrderedSet *)arg1 ;
-(unsigned long long)rankingBitCount;
-(void)setRankingBitCount:(unsigned long long)arg1 ;
-(BOOL)allowAnonymousDataCollection;
-(void)setAllowAnonymousDataCollection:(BOOL)arg1 ;
-(T)fuzzyMatchMask;
-(void)setFuzzyMatchMask:(T)arg1 ;
-(T)fuzzyMatchCheck;
-(void)setFuzzyMatchCheck:(T)arg1 ;
@end

