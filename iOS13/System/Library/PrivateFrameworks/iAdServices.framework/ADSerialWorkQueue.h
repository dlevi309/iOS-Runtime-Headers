/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
*/


@interface ADSerialWorkQueue : NSObject
+(void)initialize;
+(void)addOperation:(/*^block*/id)arg1 ;
+(void)addDelayedOperation:(double)arg1 block:(/*^block*/id)arg2 ;
+(unsigned long long)addCancellableDelayedOperation:(double)arg1 block:(/*^block*/id)arg2 ;
+(void)cancelDelayedOperation:(unsigned long long)arg1 ;
+(void)releaseCancellableOperation:(unsigned long long)arg1 ;
+(id)primaryQueue;
@end

