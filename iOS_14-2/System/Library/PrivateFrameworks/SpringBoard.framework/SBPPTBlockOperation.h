/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBPPTOperation.h>

@interface SBPPTBlockOperation : SBPPTOperation {

	double _timeoutInterval;
	/*^block*/id _timeoutBlock;
	unsigned long long _state;
	/*^block*/id _block;

}

@property (assign,nonatomic,__weak) id timeoutBlock;                //@synthesize timeoutBlock=_timeoutBlock - In the implementation block
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) id block;                       //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
+(id)keyPathsForValuesAffectingIsExecuting;
+(id)keyPathsForValuesAffectingIsFinished;
+(id)operationWithBlock:(/*^block*/id)arg1 ;
-(void)finish;
-(id)block;
-(id)timeoutBlock;
-(id)init;
-(void)start;
-(BOOL)isAsynchronous;
-(BOOL)isFinished;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(double)timeoutInterval;
-(void)main;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)isExecuting;
-(unsigned long long)state;
-(void)cancel;
-(void)cancelAndFailTestWithReason:(id)arg1 ;
-(void)setTimeoutBlock:(id)arg1 ;
@end

