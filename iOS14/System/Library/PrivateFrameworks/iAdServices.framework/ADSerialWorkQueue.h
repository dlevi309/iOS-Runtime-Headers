/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
*/


@interface ADSerialWorkQueue : NSObject
+(void)initialize;
+(void)addOperation:(/*^block*/id)arg1 ;
+(unsigned long long)addCancellableDelayedOperation:(double)arg1 block:(/*^block*/id)arg2 ;
+(void)cancelDelayedOperation:(unsigned long long)arg1 ;
+(void)releaseCancellableOperation:(unsigned long long)arg1 ;
+(void)addDelayedOperation:(double)arg1 block:(/*^block*/id)arg2 ;
+(id)primaryQueue;
@end

