/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGDHarvestQueueItem.h>

@class SGDHarvestQueueOnDisk;

@interface SGDHarvestQueueItemOnDisk : SGDHarvestQueueItem {

	SGDHarvestQueueOnDisk* _harvestQueue;
	int _fileId;

}
-(void)finish;
-(void)markAsFailed;
-(id)description;
-(BOOL)highPriority;
-(void)dealloc;
-(id)initWithHarvestQueue:(id)arg1 itemId:(long long)arg2 fileId:(int)arg3 item:(id)arg4 fails:(int)arg5 customPriorityCriteria:(unsigned char)arg6 ;
@end

