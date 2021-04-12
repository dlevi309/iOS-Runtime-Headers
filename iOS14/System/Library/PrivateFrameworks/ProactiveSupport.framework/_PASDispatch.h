/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@interface _PASDispatch : NSObject
+(void)waitForSemaphore:(id)arg1 ;
+(unsigned char)waitForSemaphore:(id)arg1 timeoutSeconds:(double)arg2 ;
+(void)notifyGroup:(id)arg1 onQueue:(id)arg2 withTimeout:(double)arg3 block:(/*^block*/id)arg4 ;
+(unsigned char)waitForGroup:(id)arg1 timeoutSeconds:(double)arg2 ;
+(id)autoreleasingSerialQueueWithLabel:(const char*)arg1 qosClass:(unsigned)arg2 ;
+(void)waitForGroup:(id)arg1 ;
+(void)waitForBlock:(/*^block*/id)arg1 timeoutSeconds:(double)arg2 onBlockComplete:(/*^block*/id)arg3 onTimeout:(/*^block*/id)arg4 ;
+(void)runAsyncOnQueue:(id)arg1 afterDelaySeconds:(double)arg2 block:(/*^block*/id)arg3 ;
+(void)waitForGroup:(id)arg1 timeoutSeconds:(double)arg2 onGroupComplete:(/*^block*/id)arg3 onTimeout:(/*^block*/id)arg4 ;
+(void)waitForBlock:(/*^block*/id)arg1 ;
+(unsigned char)waitForBlock:(/*^block*/id)arg1 timeoutSeconds:(double)arg2 ;
+(id)autoreleasingSerialQueueWithLabel:(const char*)arg1 ;
+(void)waitForSemaphore:(id)arg1 timeoutSeconds:(double)arg2 onAcquire:(/*^block*/id)arg3 onTimeout:(/*^block*/id)arg4 ;
+(void)runSyncOnMainThreadWithBlock:(/*^block*/id)arg1 ;
+(unsigned long long)dispatchTimeWithSecondsFromNow:(double)arg1 ;
@end

