/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/RCOperationCanceling.h>
#import <libobjc.A.dylib/RCOperationIdentifying.h>
#import <libobjc.A.dylib/RCOperationPrioritizing.h>

@protocol OS_dispatch_group;
@class NSString, NSMutableArray, RCMutexLock, RCOnce, NSObject;

@interface RCOperation : NSOperation <RCOperationCanceling, RCOperationIdentifying, RCOperationPrioritizing> {

	BOOL _executing;
	BOOL _finished;
	BOOL _childOperationsCancelled;
	long long _relativePriority;
	unsigned long long _retryCount;
	double _timeoutDuration;
	NSString* _operationID;
	double _operationStartTime;
	double _operationEndTime;
	/*^block*/id _timedOutTest;
	NSMutableArray* _childOperations;
	RCMutexLock* _childOperationsLock;
	RCOnce* _startOnce;
	NSObject*<OS_dispatch_group> _finishedGroup;

}

@property (nonatomic,copy) id timedOutTest;                                           //@synthesize timedOutTest=_timedOutTest - In the implementation block
@property (nonatomic,retain) NSMutableArray * childOperations;                        //@synthesize childOperations=_childOperations - In the implementation block
@property (assign,nonatomic) BOOL childOperationsCancelled;                           //@synthesize childOperationsCancelled=_childOperationsCancelled - In the implementation block
@property (nonatomic,retain) RCMutexLock * childOperationsLock;                       //@synthesize childOperationsLock=_childOperationsLock - In the implementation block
@property (nonatomic,retain) RCOnce * startOnce;                                      //@synthesize startOnce=_startOnce - In the implementation block
@property (assign,nonatomic) double operationStartTime;                               //@synthesize operationStartTime=_operationStartTime - In the implementation block
@property (assign,nonatomic) double operationEndTime;                                 //@synthesize operationEndTime=_operationEndTime - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;                           //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> finishedGroup;              //@synthesize finishedGroup=_finishedGroup - In the implementation block
@property (assign,nonatomic) double timeoutDuration;                                  //@synthesize timeoutDuration=_timeoutDuration - In the implementation block
@property (nonatomic,copy,readonly) NSString * operationID;                           //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,readonly) BOOL hasOperationStarted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long relativePriority;                              //@synthesize relativePriority=_relativePriority - In the implementation block
-(id)init;
-(void)dealloc;
-(void)cancel;
-(void)start;
-(void)setQualityOfService:(long long)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(unsigned long long)retryCount;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
-(void)setTimeoutDuration:(double)arg1 ;
-(double)timeoutDuration;
-(NSString *)operationID;
-(long long)relativePriority;
-(void)setRelativePriority:(long long)arg1 ;
-(BOOL)_startIfNeeded;
-(BOOL)waitUntilFinishedWithTimeout:(double)arg1 ;
-(void)performOperation;
-(unsigned long long)maxRetries;
-(double)operationStartTime;
-(void)setOperationStartTime:(double)arg1 ;
-(id)shortOperationDescription;
-(void)finishedPerformingOperationWithError:(id)arg1 ;
-(void)associateChildOperation:(id)arg1 ;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)cancelChildOperations;
-(unsigned long long)propertiesInheritedByChildOperations;
-(RCMutexLock *)childOperationsLock;
-(NSMutableArray *)childOperations;
-(RCOnce *)startOnce;
-(BOOL)_shouldThrottleOperationWithRetryAfter:(double*)arg1 ;
-(id)_errorUserInfo;
-(void)_finishOperationWithError:(id)arg1 ;
-(void)finishFromEarlyCancellation;
-(id)longOperationDescription;
-(void)_finishedPerformingOperationWithError:(id)arg1 ;
-(void)setTimedOutTest:(id)arg1 ;
-(void)prepareOperation;
-(id)timedOutTest;
-(BOOL)shouldStartThrottlingWithError:(id)arg1 retryAfter:(double*)arg2 ;
-(void)_handleThrottlingFromError:(id)arg1 delay:(double)arg2 ;
-(BOOL)canRetryWithError:(id)arg1 retryAfter:(id*)arg2 ;
-(void)_handleRetryFromError:(id)arg1 signal:(id)arg2 ;
-(id)throttleGroup;
-(id)_userDefaultsKeyForThrottleEndDate;
-(void)resetForRetry;
-(void)_associateChildOperation:(id)arg1 ;
-(BOOL)childOperationsCancelled;
-(void)setChildOperationsCancelled:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_group>)finishedGroup;
-(void)setOperationEndTime:(double)arg1 ;
-(double)operationEndTime;
-(void)setChildOperations:(NSMutableArray *)arg1 ;
-(void)operationDidFinishWithError:(id)arg1 ;
-(void)startIfNeeded;
-(void)associateChildOperations:(id)arg1 ;
-(BOOL)hasOperationStarted;
-(void)setChildOperationsLock:(RCMutexLock *)arg1 ;
-(void)setStartOnce:(RCOnce *)arg1 ;
-(void)setFinishedGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

