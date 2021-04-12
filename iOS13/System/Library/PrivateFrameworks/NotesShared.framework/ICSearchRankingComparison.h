/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class NSMutableArray;

@interface ICSearchRankingComparison : NSObject {

	NSMutableArray* _rankingValues;

}

@property (nonatomic,retain) NSMutableArray * rankingValues;                               //@synthesize rankingValues=_rankingValues - In the implementation block
@property (assign,nonatomic) unsigned long long preSubBitFieldsRankingResult; 
@property (assign,nonatomic) unsigned long long preSubRecencyRankingResult; 
@property (assign,nonatomic) unsigned long long preSubBucketRankingResult; 
-(id)init;
-(id)description;
-(void)setPreSubBitFieldsRankingResult:(unsigned long long)arg1 ;
-(void)setPreSubRecencyRankingResult:(unsigned long long)arg1 ;
-(void)setPreSubBucketRankingResult:(unsigned long long)arg1 ;
-(void)setRankingValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)rankingValues;
-(BOOL)applyOffsetWithSelectedPosition:(unsigned long long)arg1 ;
-(unsigned long long)preSubBitFieldsRankingResult;
-(unsigned long long)preSubRecencyRankingResult;
-(unsigned long long)preSubBucketRankingResult;
-(void)logStrength;
-(BOOL)allRanksHigherThan:(unsigned long long)arg1 ;
-(void)logComparisonForSelectedPosition:(unsigned long long)arg1 totalResultCountInSection:(unsigned long long)arg2 ;
@end

