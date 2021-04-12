/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/


@interface NFLRank : NSObject {

	double _rank;
	long long _rankWeight;

}

@property (assign,nonatomic) double rank;                       //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) long long rankWeight;              //@synthesize rankWeight=_rankWeight - In the implementation block
+(id)rankWithRank:(double)arg1 rankWeight:(long long)arg2 ;
-(id)description;
-(void)setRank:(double)arg1 ;
-(double)rank;
-(void)setRankWeight:(long long)arg1 ;
-(long long)rankWeight;
@end

