/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)validateOperation;
-(BOOL)canRetryWithError:(id)arg1 retryAfter:(id*)arg2 ;
-(void)setQualityOfService:(long long)arg1 ;
-(unsigned long long)maxRetries;
-(void)resetForRetry;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)throttleGroup;
-(void)performOperation;
-(void)prepareOperation;
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(RCOnce *)startOnce;
-(unsigned long long)retryCount;
-(NSString *)operationID;
-(id)init;
-(BOOL)waitUntilFinishedWithTimeout:(double)arg1 ;
-(void)cancelChildOperations;
-(RCMutexLock *)childOperationsLock;
-(NSMutableArray *)childOperations;
-(void)setOperationStartTime:(double)arg1 ;
-(BOOL)_shouldThrottleOperationWithRetryAfter:(double*)arg1 ;
-(void)setTimedOutTest:(id)arg1 ;
-(void)_finishOperationWithError:(id)arg1 ;
-(void)_finishedPerformingOperationWithError:(id)arg1 ;
-(void)_handleThrottlingFromError:(id)arg1 delay:(double)arg2 ;
-(NSObject*<OS_dispatch_group>)finishedGroup;
-(void)_handleRetryFromError:(id)arg1 signal:(id)arg2 ;
-(id)_userDefaultsKeyForThrottleEndDate;
-(BOOL)childOperationsCancelled;
-(void)setChildOperationsCancelled:(BOOL)arg1 ;
-(void)setOperationEndTime:(double)arg1 ;
-(void)setTimeoutDuration:(double)arg1 ;
-(double)operationEndTime;
-(void)setChildOperations:(NSMutableArray *)arg1 ;
-(void)associateChildOperations:(id)arg1 ;
-(void)setChildOperationsLock:(RCMutexLock *)arg1 ;
-(void)setStartOnce:(RCOnce *)arg1 ;
-(void)setFinishedGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)start;
-(void)operationDidFinishWithError:(id)arg1 ;
-(double)timeoutDuration;
-(BOOL)hasOperationStarted;
-(BOOL)isAsynchronous;
-(BOOL)_startIfNeeded;
-(double)operationStartTime;
-(void)finishFromEarlyCancellation;
-(void)setRelativePriority:(long long)arg1 ;
-(BOOL)isFinished;
-(id)longOperationDescription;
-(long long)relativePriority;
-(BOOL)isExecuting;
-(void)associateChildOperation:(id)arg1 ;
-(void)startIfNeeded;
-(void)finishedPerformingOperationWithError:(id)arg1 ;
-(unsigned long long)propertiesInheritedByChildOperations;
-(void)_associateChildOperation:(id)arg1 ;
-(BOOL)shouldStartThrottlingWithError:(id)arg1 retryAfter:(double*)arg2 ;
-(void)cancel;
-(id)timedOutTest;
-(id)shortOperationDescription;
-(void)dealloc;
-(id)_errorUserInfo;
@end

