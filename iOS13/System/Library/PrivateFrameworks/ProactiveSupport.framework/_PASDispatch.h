/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@interface _PASDispatch : NSObject
+(unsigned long long)dispatchTimeWithSecondsFromNow:(double)arg1 ;
+(void)waitForSemaphore:(id)arg1 ;
+(unsigned char)waitForSemaphore:(id)arg1 timeoutSeconds:(double)arg2 ;
+(void)waitForSemaphore:(id)arg1 timeoutSeconds:(double)arg2 onAcquire:(/*^block*/id)arg3 onTimeout:(/*^block*/id)arg4 ;
+(void)waitForGroup:(id)arg1 ;
+(unsigned char)waitForGroup:(id)arg1 timeoutSeconds:(double)arg2 ;
+(void)waitForGroup:(id)arg1 timeoutSeconds:(double)arg2 onGroupComplete:(/*^block*/id)arg3 onTimeout:(/*^block*/id)arg4 ;
+(void)waitForBlock:(/*^block*/id)arg1 ;
+(unsigned char)waitForBlock:(/*^block*/id)arg1 timeoutSeconds:(double)arg2 ;
+(void)waitForBlock:(/*^block*/id)arg1 timeoutSeconds:(double)arg2 onBlockComplete:(/*^block*/id)arg3 onTimeout:(/*^block*/id)arg4 ;
+(void)runAsyncOnQueue:(id)arg1 afterDelaySeconds:(double)arg2 block:(/*^block*/id)arg3 ;
+(void)runSyncOnMainThreadWithBlock:(/*^block*/id)arg1 ;
+(id)autoreleasingSerialQueueWithLabel:(const char*)arg1 ;
+(id)autoreleasingSerialQueueWithLabel:(const char*)arg1 qosClass:(unsigned)arg2 ;
@end

