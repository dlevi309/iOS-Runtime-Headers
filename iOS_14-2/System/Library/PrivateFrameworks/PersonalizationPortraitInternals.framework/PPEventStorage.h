/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol OS_dispatch_queue;
#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class _PASLock, NSObject;

@interface PPEventStorage : NSObject {

	_PASLock* _lock;
	atomic_flag _pendingReset;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)defaultStorage;
-(void)clearCaches;
-(id)eventWithIdentifier:(id)arg1 ;
-(BOOL)eventKitChangeIsEvent:(id)arg1 ;
-(id)init;
-(id)resolveEventFromEKChange:(id)arg1 ;
-(void)_loadCalendars;
-(id)eventsInRange:(NSRange)arg1 ;
-(id)_predicateForRange:(NSRange)arg1 ;
-(BOOL)_isSuggestedEvent:(id)arg1 guardedData:(id)arg2 ;
-(void)resetAfterQueryWithCompletion:(/*^block*/id)arg1 ;
-(id)suggestedEventsInRange:(NSRange)arg1 ;
-(void)iterateEventsFrom:(id)arg1 to:(id)arg2 inChunks:(int)arg3 withBlock:(/*^block*/id)arg4 ;
-(void)setCalendarVisibilityChangeHandler:(/*^block*/id)arg1 ;
-(id)_init;
-(id)eventWithExternalID:(id)arg1 ;
-(BOOL)_isAllDayOrMultiDayEvent:(id)arg1 guardedData:(id)arg2 ;
-(BOOL)shouldIngestEvent:(id)arg1 ;
@end

