/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGDHarvestQueueItem.h>

@class SGDWorkQueueItem;

@interface SGDHarvestQueueItemLegacy : SGDHarvestQueueItem {

	SGDWorkQueueItem* _workQueueItem;
	BOOL _highPriority;

}
-(void)finish;
-(void)markAsFailed;
-(id)description;
-(BOOL)highPriority;
-(void)dealloc;
-(id)initWithWorkQueueItem:(id)arg1 item:(id)arg2 highPriority:(BOOL)arg3 customPriorityCritera:(unsigned char)arg4 ;
@end

