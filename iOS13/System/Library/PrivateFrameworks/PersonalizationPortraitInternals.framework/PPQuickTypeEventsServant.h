/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <libobjc.A.dylib/PPQuickTypeServantProtocol.h>

@class PPLocalEventStore;

@interface PPQuickTypeEventsServant : NSObject <PPQuickTypeServantProtocol> {

	PPLocalEventStore* _localEventStore;

}
-(id)init;
-(id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3 ;
-(void)_warmUpFormatters;
-(id)_filterEvents:(id)arg1 time:(unsigned char)arg2 people:(id)arg3 busy:(BOOL)arg4 fields:(unsigned)arg5 explanationSet:(id)arg6 ;
-(id)_fuzzyNextEvents:(id)arg1 minimumCount:(unsigned long long)arg2 ;
-(id)_quickTypeItemsForEvents:(id)arg1 fields:(unsigned)arg2 limit:(unsigned long long)arg3 formatter:(id)arg4 explanationSet:(id)arg5 ;
-(id)_quickTypeItemsForEvent:(id)arg1 fields:(unsigned)arg2 formatter:(id)arg3 ;
-(id)_labelForEvent:(id)arg1 value:(id)arg2 fields:(unsigned)arg3 formatter:(id)arg4 ;
-(id)_valuesForPrediction:(id)arg1 fields:(unsigned)arg2 formatter:(id)arg3 ;
-(BOOL)_areAllPeopleOfInterest:(id)arg1 inAttendeeList:(id)arg2 ;
-(unsigned char)_userStatusForEvent:(id)arg1 ;
-(BOOL)_userIsInvitedToEvent:(id)arg1 ;
-(BOOL)_userDidOrganizeEvent:(id)arg1 ;
-(BOOL)_shouldTreatAsUnscheduledFreeTime:(id)arg1 ;
-(BOOL)_isFreeTime:(id)arg1 ;
-(id)_busyEventsFromEvents:(id)arg1 people:(id)arg2 explanationSet:(id)arg3 ;
-(id)_nextBusyEventsFromEvents:(id)arg1 people:(id)arg2 explanationSet:(id)arg3 ;
-(id)_lastBusyEventsFromEvents:(id)arg1 people:(id)arg2 explanationSet:(id)arg3 ;
-(BOOL)_eventIsHappening:(id)arg1 ;
-(id)_unscheduledFreeTimeEventFrom:(id)arg1 to:(id)arg2 ;
-(id)_freeEventsAndGapsFromEvents:(id)arg1 explanationSet:(id)arg2 ;
-(id)_nextFreeEventsFromEvents:(id)arg1 explanationSet:(id)arg2 ;
-(id)_lastFreeEventsFromEvents:(id)arg1 explanationSet:(id)arg2 ;
-(NSRange)_dateRangeForQuery:(id)arg1 ;
@end

