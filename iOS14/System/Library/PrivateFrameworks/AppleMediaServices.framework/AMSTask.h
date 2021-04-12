/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> performTaskQueue;                //@synthesize performTaskQueue=_performTaskQueue - In the implementation block
@property (nonatomic,retain) AMSPromise * promise;                                         //@synthesize promise=_promise - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> promiseAccessQueue;              //@synthesize promiseAccessQueue=_promiseAccessQueue - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled;                          //@synthesize cancelled=_cancelled - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (assign,nonatomic) long long runMode;                                            //@synthesize runMode=_runMode - In the implementation block
+(id)taskCache;
+(id)taskCacheAccessQueue;
-(id)init;
-(long long)runMode;
-(BOOL)isFinished;
-(id)performBinaryTaskWithBlock:(/*^block*/id)arg1 ;
-(AMSPromise *)promise;
-(id)performTaskWithBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)promiseAccessQueue;
-(void)setPerformTaskQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)performTaskQueue;
-(void)setPromiseAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)performTaskWithPromiseBlock:(/*^block*/id)arg1 ;
-(BOOL)isRunning;
-(void)setPromise:(AMSPromise *)arg1 ;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(void)setRunMode:(long long)arg1 ;
@end

