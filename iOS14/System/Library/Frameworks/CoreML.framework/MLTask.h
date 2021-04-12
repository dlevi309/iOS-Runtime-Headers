/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@protocol OS_dispatch_queue;
@class NSString, NSError, NSObject;

@interface MLTask : NSObject {

	NSString* _taskIdentifier;
	long long _state;
	NSError* _error;
	NSObject*<OS_dispatch_queue> _syncQueue;

}

@property (assign) long long state;                                                 //@synthesize state=_state - In the implementation block
@property (copy) NSError * error;                                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> syncQueue;              //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * taskIdentifier;                      //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
-(id)initWithState:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(BOOL)_canFail;
-(BOOL)_canResume;
-(BOOL)_canSuspend;
-(BOOL)_canComplete;
-(BOOL)_canCancel;
-(void)_resumeWithTaskContext:(id)arg1 ;
-(void)resumeWithTaskContext:(id)arg1 ;
-(void)suspendWithTaskContext:(id)arg1 ;
-(void)completeWithTaskContext:(id)arg1 ;
-(void)failWithError:(id)arg1 taskContext:(id)arg2 ;
-(id)taskStatesToString:(long long)arg1 ;
-(NSString *)taskIdentifier;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)cancel;
-(void)resume;
@end

