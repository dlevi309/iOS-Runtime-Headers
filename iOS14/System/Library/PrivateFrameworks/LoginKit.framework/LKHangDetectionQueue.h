/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
*/


@protocol OS_dispatch_queue;
@class NSObject, LKBacktraceLogger, NSArray;

@interface LKHangDetectionQueue : NSObject {

	NSObject*<OS_dispatch_queue> _workerQueue;
	NSObject*<OS_dispatch_queue> _logQueue;
	double _threshold;
	LKBacktraceLogger* _backtraceLogger;
	NSArray* _lastPrintedCallStack;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workerQueue;              //@synthesize workerQueue=_workerQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> logQueue;                 //@synthesize logQueue=_logQueue - In the implementation block
@property (assign,nonatomic) double threshold;                                      //@synthesize threshold=_threshold - In the implementation block
@property (nonatomic,retain) LKBacktraceLogger * backtraceLogger;                   //@synthesize backtraceLogger=_backtraceLogger - In the implementation block
@property (nonatomic,copy) NSArray * lastPrintedCallStack;                          //@synthesize lastPrintedCallStack=_lastPrintedCallStack - In the implementation block
-(double)threshold;
-(id)init;
-(void)queueBlock:(/*^block*/id)arg1 ;
-(void)setLogQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setWorkerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)logQueue;
-(NSObject*<OS_dispatch_queue>)workerQueue;
-(void)setThreshold:(double)arg1 ;
-(id)initWithQoS:(unsigned)arg1 hangThreshold:(double)arg2 ;
-(LKBacktraceLogger *)backtraceLogger;
-(NSArray *)lastPrintedCallStack;
-(void)setLastPrintedCallStack:(NSArray *)arg1 ;
-(void)setBacktraceLogger:(LKBacktraceLogger *)arg1 ;
@end

