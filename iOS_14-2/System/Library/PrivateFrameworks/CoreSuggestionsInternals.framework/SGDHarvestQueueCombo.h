/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <CoreSuggestionsInternals/SGDHarvestQueue.h>

@class NSArray, SGDHarvestQueueOnDisk, SGDHarvestQueueLegacy, SGDHarvestQueueInMemory;

@interface SGDHarvestQueueCombo : SGDHarvestQueue {

	NSArray* _backends;
	opaque_pthread_mutex_t _lock;
	SGDHarvestQueueOnDisk* _onDisk;
	SGDHarvestQueueLegacy* _legacyHighPriority;
	SGDHarvestQueueLegacy* _legacyLowPriority;
	SGDHarvestQueueInMemory* _inMemory;

}

@property (nonatomic,readonly) SGDHarvestQueueOnDisk * onDisk;                          //@synthesize onDisk=_onDisk - In the implementation block
@property (nonatomic,readonly) SGDHarvestQueueLegacy * legacyHighPriority;              //@synthesize legacyHighPriority=_legacyHighPriority - In the implementation block
@property (nonatomic,readonly) SGDHarvestQueueLegacy * legacyLowPriority;               //@synthesize legacyLowPriority=_legacyLowPriority - In the implementation block
@property (nonatomic,readonly) SGDHarvestQueueInMemory * inMemory;                      //@synthesize inMemory=_inMemory - In the implementation block
-(void)popByItemId:(long long)arg1 callback:(/*^block*/id)arg2 ;
-(SGDHarvestQueueLegacy *)legacyHighPriority;
-(unsigned long long)countStructuredEventCandidates;
-(void)addItemWithSourceKey:(id)arg1 messageId:(id)arg2 highPriority:(BOOL)arg3 customPriorityCriteria:(unsigned char)arg4 item:(id)arg5 callback:(/*^block*/id)arg6 ;
-(void)popInMemory:(/*^block*/id)arg1 ;
-(void)close;
-(unsigned long long)countInMemory;
-(void)pop:(/*^block*/id)arg1 ;
-(unsigned long long)count;
-(id)backends;
-(SGDHarvestQueueInMemory *)inMemory;
-(void)popByCustomPriorityCriteria:(unsigned char)arg1 callback:(/*^block*/id)arg2 ;
-(void)popHighPriority:(/*^block*/id)arg1 ;
-(SGDHarvestQueueOnDisk *)onDisk;
-(id)initWithOnDiskQueue:(id)arg1 legacyHighPriority:(id)arg2 legacyLowPriority:(id)arg3 inMemoryCache:(id)arg4 ;
-(SGDHarvestQueueLegacy *)legacyLowPriority;
-(void)countHighPriorityItems:(unsigned long long*)arg1 lowPriorityItems:(unsigned long long*)arg2 ;
-(void)popBySourceKey:(id)arg1 messageId:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

