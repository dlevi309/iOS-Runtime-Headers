/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class PPEventStorage, _PASLock, PPCalendarInternPool, NSObject;

@interface PPEventCache : NSObject {

	PPEventStorage* _storage;
	_PASLock* _data;
	PPCalendarInternPool* _calendarInternPool;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	unsigned long long _memoryPressureStatus;

}
-(id)cachedEventHighlightForEvent:(id)arg1 rankingOptions:(int)arg2 ;
-(id)refreshCacheWithChanges:(id)arg1 changesContainDeletion:(BOOL*)arg2 ;
-(void)setEventHighlight:(id)arg1 ;
-(void)_handleMemoryPressureStatus;
-(void)setExtraSecondsToBackfill:(unsigned long long)arg1 ;
-(void)_refreshCachedEvent:(id)arg1 ;
-(void)evictAllEventsNotInRange:(NSRange)arg1 ;
-(void)removeAllObjects;
-(id)initWithEventStorage:(id)arg1 ;
-(id)objectForRange:(NSRange)arg1 ;
-(void)evictAllEventsNotInRanges:(id)arg1 ;
-(id)evictEventWithIdentifier:(id)arg1 ;
@end

