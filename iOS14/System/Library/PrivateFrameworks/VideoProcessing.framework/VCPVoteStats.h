/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@interface VCPVoteStats : NSObject {

	long long _votes;
	long long _count;

}

@property (assign,nonatomic) long long votes;              //@synthesize votes=_votes - In the implementation block
@property (assign,nonatomic) long long count;              //@synthesize count=_count - In the implementation block
-(void)setCount:(long long)arg1 ;
-(long long)votes;
-(long long)count;
-(float)rate;
-(id)initWithVotes:(long long)arg1 andCount:(long long)arg2 ;
-(void)setVotes:(long long)arg1 ;
@end

