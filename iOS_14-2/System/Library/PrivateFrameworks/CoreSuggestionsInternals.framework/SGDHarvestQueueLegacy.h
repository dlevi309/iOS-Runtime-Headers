/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGDHarvestQueue.h>

@class SGDWorkQueue;

@interface SGDHarvestQueueLegacy : SGDHarvestQueue {

	SGDWorkQueue* _workQueue;
	BOOL _highPriority;

}
-(void)popByItemId:(long long)arg1 callback:(/*^block*/id)arg2 ;
-(void)close;
-(void)pop:(/*^block*/id)arg1 ;
-(unsigned long long)count;
-(void)addItemWithSourceKey:(id)arg1 messageId:(id)arg2 highPriority:(BOOL)arg3 item:(id)arg4 customPriorityCriteria:(unsigned char)arg5 callback:(/*^block*/id)arg6 ;
-(void)countHighPriorityItems:(unsigned long long*)arg1 lowPriorityItems:(unsigned long long*)arg2 ;
-(id)initWithDirectory:(id)arg1 highPriority:(BOOL)arg2 ;
-(void)popBySourceKey:(id)arg1 messageId:(id)arg2 callback:(/*^block*/id)arg3 ;
@end

