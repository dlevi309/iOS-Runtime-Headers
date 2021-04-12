/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class PPEventStorage, _PASLock, NSObject;

@interface PPEventCache : NSObject {

	PPEventStorage* _storage;
	_PASLock* _data;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	unsigned long long _memoryPressureStatus;

}
-(void)removeAllObjects;
-(void)_handleMemoryPressureStatus;
-(id)initWithEventStorage:(id)arg1 ;
-(void)setExtraSecondsToBackfill:(unsigned long long)arg1 ;
-(id)objectForRange:(NSRange)arg1 ;
-(id)evictEventWithIdentifier:(id)arg1 ;
-(id)refreshCacheWithChanges:(id)arg1 changesContainDeletion:(BOOL*)arg2 ;
-(void)_refreshCachedEvent:(id)arg1 ;
-(void)evictAllEventsNotInRange:(NSRange)arg1 ;
-(void)evictAllEventsNotInRanges:(id)arg1 ;
-(void)setEventHighlight:(id)arg1 ;
-(id)cachedEventHighlightForEvent:(id)arg1 rankingOptions:(int)arg2 ;
@end

