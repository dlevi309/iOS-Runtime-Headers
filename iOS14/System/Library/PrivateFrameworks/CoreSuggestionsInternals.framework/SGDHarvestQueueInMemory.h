/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGDHarvestQueue.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, SGDHarvestQueue;

@interface SGDHarvestQueueInMemory : SGDHarvestQueue {

	unsigned long long _limit;
	double _ttl;
	long long _itemIdCounter;
	NSMutableArray* _items;
	NSObject*<OS_dispatch_queue> _queue;
	SGDHarvestQueue* _other;

}

@property (nonatomic,readonly) SGDHarvestQueue * other;              //@synthesize other=_other - In the implementation block
-(void)_sortLocked;
-(void)popByItemId:(long long)arg1 callback:(/*^block*/id)arg2 ;
-(unsigned long long)countStructuredEventCandidates;
-(void)addItemWithSourceKey:(id)arg1 messageId:(id)arg2 highPriority:(BOOL)arg3 customPriorityCriteria:(unsigned char)arg4 item:(id)arg5 callback:(/*^block*/id)arg6 ;
-(void)_popCallback:(/*^block*/id)arg1 where:(/*^block*/id)arg2 or:(/*^block*/id)arg3 ;
-(void)popInMemory:(/*^block*/id)arg1 ;
-(void)close;
-(void)_deleteWithItemId:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)countInMemory;
-(void)pop:(/*^block*/id)arg1 ;
-(unsigned long long)count;
-(long long)_indexOfItemWithIdLocked:(long long)arg1 ;
-(void)popByCustomPriorityCriteria:(unsigned char)arg1 callback:(/*^block*/id)arg2 ;
-(id)initWithLimit:(unsigned long long)arg1 ttl:(double)arg2 flushingToQueue:(id)arg3 ;
-(void)popHighPriority:(/*^block*/id)arg1 ;
-(void)deleteAllItemsDangerously;
-(void)_flushWithIndexLockedAsync:(unsigned long long)arg1 ;
-(SGDHarvestQueue *)other;
-(void)_flushWithItemIdLockedAsync:(long long)arg1 ;
-(void)countHighPriorityItems:(unsigned long long*)arg1 lowPriorityItems:(unsigned long long*)arg2 ;
-(void)popBySourceKey:(id)arg1 messageId:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)writePermafail:(id)arg1 ;
@end

