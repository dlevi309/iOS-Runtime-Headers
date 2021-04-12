/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSDBCache.h>

@interface CLSPublicEventCache : CLSDBCache
-(id)init;
-(id)dataModelName;
-(void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1 ;
-(id)predicateForTimeLocationTuple:(id)arg1 ;
-(BOOL)insertBatchesOfPublicEventsByTimeLocationIdentifier:(id)arg1 forTimeLocationTuples:(id)arg2 ;
-(void)_updateManagedEvent:(id)arg1 withEvent:(id)arg2 inContext:(id)arg3 ;
-(id)publicEventsForMuid:(unsigned long long)arg1 ;
-(id)publicEventsForTimeLocationTuple:(id)arg1 ;
-(id)publicEventFromManagedObject:(id)arg1 ;
-(BOOL)hasTimeLocationTuple:(id)arg1 ;
-(unsigned long long)numberOftimeLocationTuplesForTimeLocationTuple:(id)arg1 ;
@end

