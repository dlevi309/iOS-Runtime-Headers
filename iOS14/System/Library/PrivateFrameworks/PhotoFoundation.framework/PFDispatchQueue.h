/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@interface PFDispatchQueue : NSObject
+(void)initialize;
+(id)_newQueueWithLabel:(id)arg1 qos:(unsigned)arg2 targetQueue:(id)arg3 ;
+(id)mainQueue;
+(id)newQueueWithLabel:(id)arg1 ;
+(id)newQueueWithLabel:(id)arg1 qos:(unsigned)arg2 ;
+(id)injectedExtensions;
+(id)newQueueWithLabel:(id)arg1 qos:(unsigned)arg2 targetQueue:(id)arg3 extensions:(id)arg4 ;
+(id)newSerialQueueWithLabel:(id)arg1 qos:(unsigned)arg2 targetQueue:(id)arg3 extensions:(id)arg4 ;
+(id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2 ;
+(id)newConcurrentQueueWithLabel:(id)arg1 qos:(unsigned)arg2 targetQueue:(id)arg3 extensions:(id)arg4 ;
+(id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2 qos:(unsigned)arg3 ;
+(id)globalUserInteractiveQOSQueue;
+(id)globalUserInitiatedQOSQueue;
+(id)globalDefaultQOSQueue;
+(id)globalUtilityQOSQueue;
+(id)globalBackgroundQOSQueue;
+(id)globalQOSQueue:(unsigned)arg1 ;
+(id)globalCurrentQOSQueue;
+(void)dispatchApply:(unsigned long long)arg1 ofBlock:(/*^block*/id)arg2 ;
+(void)dispatchApply:(unsigned long long)arg1 withConcurrencyLimit:(unsigned long long)arg2 canceler:(id)arg3 ofBlock:(/*^block*/id)arg4 ;
+(Class)concreteQueueClass;
+(id)newSerialQueueWithLabel:(id)arg1 qos:(unsigned)arg2 ;
+(id)newSerialQueueWithLabel:(id)arg1 ;
+(id)newConcurrentQueueWithLabel:(id)arg1 ;
+(id)newConcurrentQueueWithLabel:(id)arg1 qos:(unsigned)arg2 ;
-(void)dispatchAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchAsyncWithCurrentQOS:(/*^block*/id)arg1 ;
-(void)dispatchBarrierAsyncWithCurrentQOS:(/*^block*/id)arg1 ;
-(void)dispatchBarrierAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(id)_init;
@end

