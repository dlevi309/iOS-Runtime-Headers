/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@interface VCPVoteStats : NSObject {

	long long _votes;
	long long _count;

}

@property (assign,nonatomic) long long votes;              //@synthesize votes=_votes - In the implementation block
@property (assign,nonatomic) long long count;              //@synthesize count=_count - In the implementation block
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(float)rate;
-(id)initWithVotes:(long long)arg1 andCount:(long long)arg2 ;
-(long long)votes;
-(void)setVotes:(long long)arg1 ;
@end

