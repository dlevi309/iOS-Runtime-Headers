/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSDBCache.h>

@interface CLSPublicEventCache : CLSDBCache
-(void)_updateManagedEvent:(id)arg1 withEvent:(id)arg2 inContext:(id)arg3 ;
-(BOOL)insertBatchesOfPublicEventsByTimeLocationIdentifier:(id)arg1 forTimeLocationTuples:(id)arg2 ;
-(id)init;
-(id)publicEventsForTimeLocationTuple:(id)arg1 ;
-(void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1 ;
-(id)dataModelName;
-(BOOL)hasTimeLocationTuple:(id)arg1 ;
-(id)publicEventsForMuid:(unsigned long long)arg1 ;
-(id)publicEventFromManagedObject:(id)arg1 ;
-(unsigned long long)numberOftimeLocationTuplesForTimeLocationTuple:(id)arg1 ;
-(id)predicateForTimeLocationTuple:(id)arg1 ;
@end

