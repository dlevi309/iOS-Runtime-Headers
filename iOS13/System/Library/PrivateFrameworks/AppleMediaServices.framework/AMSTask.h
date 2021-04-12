/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol OS_dispatch_queue;
@class NSObject, AMSPromise;

@interface AMSTask : NSObject {

	BOOL _cancelled;
	long long _runMode;
	NSObject*<OS_dispatch_queue> _performTaskQueue;
	AMSPromise* _promise;
	NSObject*<OS_dispatch_queue> _promiseAccessQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> performTaskQueue;              //@synthesize performTaskQueue=_performTaskQueue - In the implementation block
@property (nonatomic,retain) AMSPromise * promise;                                         //@synthesize promise=_promise - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> promiseAccessQueue;              //@synthesize promiseAccessQueue=_promiseAccessQueue - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled;                          //@synthesize cancelled=_cancelled - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (assign,nonatomic) long long runMode;                                            //@synthesize runMode=_runMode - In the implementation block
+(id)taskCacheAccessQueue;
+(id)taskCache;
-(id)init;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(BOOL)isRunning;
-(AMSPromise *)promise;
-(void)setPromise:(AMSPromise *)arg1 ;
-(id)performBinaryTaskWithBlock:(/*^block*/id)arg1 ;
-(id)performTaskWithBlock:(/*^block*/id)arg1 ;
-(void)setRunMode:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)promiseAccessQueue;
-(long long)runMode;
-(NSObject*<OS_dispatch_queue>)performTaskQueue;
-(void)setPromiseAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

