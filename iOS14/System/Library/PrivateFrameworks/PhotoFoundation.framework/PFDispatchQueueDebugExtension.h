/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PFDispatchQueueStatisticsExtension.h>

@class NSMutableDictionary, PFSerialQueue;

@interface PFDispatchQueueDebugExtension : PFDispatchQueueStatisticsExtension {

	NSMutableDictionary* _allBlockInfoByCallSite;
	unsigned long long _count;
	PFSerialQueue* _serializer;

}
-(id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 notify:(/*^block*/id)arg3 ;
-(void)installOnQueue:(id)arg1 ;
-(id)init;
-(id)queue:(id)arg1 receivedDispatchSync:(/*^block*/id)arg2 ;
-(id)queue:(id)arg1 receivedDispatchAfter:(/*^block*/id)arg2 ;
-(id)queue:(id)arg1 receivedDispatchBarrierAsync:(/*^block*/id)arg2 ;
-(id)description;
-(id)queue:(id)arg1 receivedDispatchAsync:(/*^block*/id)arg2 ;
-(id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 async:(/*^block*/id)arg3 ;
-(id)queue:(id)arg1 receivedDispatchBarrierSync:(/*^block*/id)arg2 ;
-(id)recordBlockInfo:(id)arg1 ;
-(Class)blockInfoClass;
-(id)_queueUsageByExecutionTimeDescription;
-(void)showQueueUsageByExecutionTime;
-(id)_queueUsageByEnqueueSiteDescription;
-(void)showQueueUsageByEnqueueSite;
@end

