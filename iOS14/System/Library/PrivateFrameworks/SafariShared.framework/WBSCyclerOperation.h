/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@interface WBSCyclerOperation : NSObject {

	unsigned long long _numberOfRemainingAttempts;
	float _backoffRatio;
	BOOL _finished;
	BOOL _executing;
	/*^block*/id _block;
	double _nextBackoffTimeInterval;

}

@property (nonatomic,copy) id block;                                           //@synthesize block=_block - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished;                //@synthesize finished=_finished - In the implementation block
@property (getter=isExecuting,nonatomic,readonly) BOOL executing;              //@synthesize executing=_executing - In the implementation block
@property (nonatomic,readonly) double nextBackoffTimeInterval;                 //@synthesize nextBackoffTimeInterval=_nextBackoffTimeInterval - In the implementation block
-(id)block;
-(id)init;
-(id)initWithMaximumNumberOfAttempts:(unsigned long long)arg1 backoffRatio:(float)arg2 ;
-(void)executeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(double)nextBackoffTimeInterval;
@end

