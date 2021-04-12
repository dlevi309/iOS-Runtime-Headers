/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGDHarvestQueue.h>

@interface SGDHarvestQueueNop : SGDHarvestQueue
-(void)popByItemId:(long long)arg1 callback:(/*^block*/id)arg2 ;
-(void)addItemWithSourceKey:(id)arg1 messageId:(id)arg2 highPriority:(BOOL)arg3 customPriorityCriteria:(unsigned char)arg4 item:(id)arg5 callback:(/*^block*/id)arg6 ;
-(void)close;
-(void)pop:(/*^block*/id)arg1 ;
-(unsigned long long)count;
-(void)countHighPriorityItems:(unsigned long long*)arg1 lowPriorityItems:(unsigned long long*)arg2 ;
-(void)popBySourceKey:(id)arg1 messageId:(id)arg2 callback:(/*^block*/id)arg3 ;
@end

