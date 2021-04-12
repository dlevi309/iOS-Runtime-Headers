/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PFDispatchQueue.h>

@interface PFLimitedConcurrencyQueue : PFDispatchQueue {

	unsigned long long _concurrencyLimit;

}

@property (readonly) unsigned long long concurrencyLimit;              //@synthesize concurrencyLimit=_concurrencyLimit - In the implementation block
+(Class)concreteQueueClass;
+(id)_newQueueWithLabel:(id)arg1 qos:(unsigned)arg2 targetQueue:(id)arg3 ;
+(id)newQueueWithLabel:(id)arg1 qos:(unsigned)arg2 targetQueue:(id)arg3 extensions:(id)arg4 ;
+(id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2 ;
+(id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2 qos:(unsigned)arg3 ;
+(unsigned long long)defaultConcurrency;
+(id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2 qos:(unsigned)arg3 targetQueue:(id)arg4 extensions:(id)arg5 ;
-(unsigned long long)concurrencyLimit;
@end

