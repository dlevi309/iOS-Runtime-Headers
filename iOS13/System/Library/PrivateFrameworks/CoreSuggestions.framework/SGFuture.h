/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class NSObject, NSError;

@interface SGFuture : NSObject {

	NSObject* _result;
	NSError* _error;
	opaque_pthread_mutex_t _lock;
	NSObject*<OS_dispatch_queue> _callbacks;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	BOOL _alwaysUseCallbacksQueue;
	BOOL _yoDontLeaveMeHangingBro;
	NSObject* _parentObject;
	void* _parentObjectKey;
	BOOL _isComplete;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) BOOL isComplete;                                     //@synthesize isComplete=_isComplete - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
+(id)createAfter:(id)arg1 onCreate:(/*^block*/id)arg2 ;
+(id)futureForObject:(id)arg1 withKey:(void*)arg2 onCreate:(/*^block*/id)arg3 ;
+(id)createWithImmediateResult:(id)arg1 error:(id)arg2 ;
+(id)createWithImmediateResult:(id)arg1 ;
+(id)createWithImmediateError:(id)arg1 ;
+(void)waitForFuturesToComplete:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)error;
-(id)wait;
-(id)result;
-(void)wait:(/*^block*/id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)isComplete;
-(id)waitWithTimeout:(double)arg1 ;
-(/*^block*/id)completer;
-(void)setTargetQueue:(id)arg1 useAfterCompletion:(BOOL)arg2 ;
-(void)_wait:(/*^block*/id)arg1 forSyncAPI:(BOOL)arg2 ;
-(BOOL)succeed:(id)arg1 ;
-(BOOL)fail:(id)arg1 ;
-(BOOL)completeWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)_finishWithResult:(id)arg1 orError:(id)arg2 ;
-(void)clearTimeout;
-(void)_clearTimeoutNonThreadSafe;
-(void)disassociateFromParentObject;
@end

