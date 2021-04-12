/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/


@interface NFLRank : NSObject {

	double _rank;
	long long _rankWeight;

}

@property (assign,nonatomic) double rank;                       //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) long long rankWeight;              //@synthesize rankWeight=_rankWeight - In the implementation block
+(id)rankWithRank:(double)arg1 rankWeight:(long long)arg2 ;
-(void)setRank:(double)arg1 ;
-(id)description;
-(void)setRankWeight:(long long)arg1 ;
-(double)rank;
-(long long)rankWeight;
@end

