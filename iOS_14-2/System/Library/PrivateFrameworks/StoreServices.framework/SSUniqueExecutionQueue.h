/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class NSObject, SSPromise;

@interface SSUniqueExecutionQueue : NSObject {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _callBlockQueue;
	NSObject*<OS_dispatch_queue> _executeBlockQueue;
	SSPromise* _promise;
	NSObject*<OS_dispatch_queue> _promiseAccessQueue;

}

@property (nonatomic,copy) id block;                                                         //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callBlockQueue;                    //@synthesize callBlockQueue=_callBlockQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> executeBlockQueue;                 //@synthesize executeBlockQueue=_executeBlockQueue - In the implementation block
@property (nonatomic,retain) SSPromise * promise;                                            //@synthesize promise=_promise - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> promiseAccessQueue;              //@synthesize promiseAccessQueue=_promiseAccessQueue - In the implementation block
-(id)block;
-(void)setBlock:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callBlockQueue;
-(void)setCallBlockQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(SSPromise *)promise;
-(NSObject*<OS_dispatch_queue>)promiseAccessQueue;
-(NSObject*<OS_dispatch_queue>)executeBlockQueue;
-(void)setExecuteBlockQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)setPromise:(SSPromise *)arg1 ;
@end

