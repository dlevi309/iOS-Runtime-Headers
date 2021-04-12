/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)block;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setBlock:(id)arg1 ;
-(void)executeWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithMaximumNumberOfAttempts:(unsigned long long)arg1 backoffRatio:(float)arg2 ;
-(double)nextBackoffTimeInterval;
@end

