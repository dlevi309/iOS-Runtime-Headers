/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSError *)error;
-(void)cancel;
-(void)resume;
-(void)setError:(NSError *)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSString *)taskIdentifier;
-(id)initWithState:(long long)arg1 ;
-(BOOL)_canResume;
-(BOOL)_canCancel;
-(BOOL)_canSuspend;
-(BOOL)_canComplete;
-(BOOL)_canFail;
-(void)_resumeWithTaskContext:(id)arg1 ;
-(void)resumeWithTaskContext:(id)arg1 ;
-(void)suspendWithTaskContext:(id)arg1 ;
-(void)completeWithTaskContext:(id)arg1 ;
-(void)failWithError:(id)arg1 taskContext:(id)arg2 ;
-(id)taskStatesToString:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
@end

