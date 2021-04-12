/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol OS_dispatch_queue;
#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class _PASLock, NSObject;

@interface PPEventStorage : NSObject {

	_PASLock* _lock;
	atomic_flag _pendingReset;
	NSObject*<OS_dispatch_queue> _resetQueue;

}
+(id)defaultStorage;
-(id)init;
-(id)_init;
-(void)clearCaches;
-(void)_loadCalendars;
-(id)eventWithIdentifier:(id)arg1 ;
-(id)eventWithExternalID:(id)arg1 ;
-(id)eventsInRange:(NSRange)arg1 ;
-(void)iterateEventsFrom:(id)arg1 to:(id)arg2 inChunks:(int)arg3 withBlock:(/*^block*/id)arg4 ;
-(id)resolveEventFromEKChange:(id)arg1 ;
-(void)setCalendarVisibilityChangeHandler:(/*^block*/id)arg1 ;
-(BOOL)eventKitChangeIsEvent:(id)arg1 ;
-(BOOL)shouldIngestEvent:(id)arg1 ;
-(void)resetAfterQueryWithCompletion:(/*^block*/id)arg1 ;
-(id)_predicateForRange:(NSRange)arg1 ;
-(BOOL)_isAllDayOrMultiDayEvent:(id)arg1 guardedData:(id)arg2 ;
@end

