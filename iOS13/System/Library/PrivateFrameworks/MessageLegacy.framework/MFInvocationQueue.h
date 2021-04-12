/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

#import <libobjc.A.dylib/MFDiagnosticsGenerator.h>

@class NSConditionLock, NSMutableArray, NSString;

@interface MFInvocationQueue : NSObject <MFDiagnosticsGenerator> {

	NSConditionLock* _lock;
	NSMutableArray* _items;
	unsigned long long _numThreads;
	unsigned long long _maxThreads;
	int _threadPriorityTrigger;
	double _threadRecycleTimeout;

}

@property (assign,nonatomic) unsigned long long maxThreadCount; 
@property (assign,nonatomic) int threadPriorityTrigger;                         //@synthesize threadPriorityTrigger=_threadPriorityTrigger - In the implementation block
@property (assign,nonatomic) double threadRecycleTimeout;                       //@synthesize threadRecycleTimeout=_threadRecycleTimeout - In the implementation block
@property (nonatomic,readonly) unsigned long long invocationCount; 
@property (nonatomic,readonly) unsigned long long threadCount;                  //@synthesize numThreads=_numThreads - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInvocationQueue;
+(void)flushAllInvocationQueues;
-(id)init;
-(void)dealloc;
-(void)removeAllItems;
-(id)copyDiagnosticInformation;
-(void)addInvocation:(id)arg1 ;
-(void)didCancel:(id)arg1 ;
-(id)initWithMaxThreadCount:(unsigned long long)arg1 ;
-(void)setThreadRecycleTimeout:(double)arg1 ;
-(void)_drainQueue:(id)arg1 ;
-(void)setMaxThreadCount:(unsigned long long)arg1 ;
-(unsigned long long)maxThreadCount;
-(unsigned long long)invocationCount;
-(unsigned long long)threadCount;
-(int)threadPriorityTrigger;
-(void)setThreadPriorityTrigger:(int)arg1 ;
-(double)threadRecycleTimeout;
@end

