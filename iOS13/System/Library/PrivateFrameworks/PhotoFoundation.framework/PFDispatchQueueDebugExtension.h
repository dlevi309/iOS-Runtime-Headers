/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PFDispatchQueueStatisticsExtension.h>

@class NSMutableDictionary, PFSerialQueue;

@interface PFDispatchQueueDebugExtension : PFDispatchQueueStatisticsExtension {

	NSMutableDictionary* _allBlockInfoByCallSite;
	unsigned long long _count;
	PFSerialQueue* _serializer;

}
-(id)init;
-(id)description;
-(void)installOnQueue:(id)arg1 ;
-(id)queue:(id)arg1 receivedDispatchSync:(/*^block*/id)arg2 ;
-(id)queue:(id)arg1 receivedDispatchBarrierSync:(/*^block*/id)arg2 ;
-(id)queue:(id)arg1 receivedDispatchAsync:(/*^block*/id)arg2 ;
-(id)queue:(id)arg1 receivedDispatchBarrierAsync:(/*^block*/id)arg2 ;
-(id)queue:(id)arg1 receivedDispatchAfter:(/*^block*/id)arg2 ;
-(id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 async:(/*^block*/id)arg3 ;
-(id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 notify:(/*^block*/id)arg3 ;
-(id)recordBlockInfo:(id)arg1 ;
-(Class)blockInfoClass;
-(id)_queueUsageByExecutionTimeDescription;
-(void)showQueueUsageByExecutionTime;
-(id)_queueUsageByEnqueueSiteDescription;
-(void)showQueueUsageByEnqueueSite;
@end

