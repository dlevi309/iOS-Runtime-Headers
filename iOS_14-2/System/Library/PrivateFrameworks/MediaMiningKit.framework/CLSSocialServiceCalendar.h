/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSSocialService.h>

@class CNContactStore, CNContact, CLSCalendarEventsCache, NSMutableSet;

@interface CLSSocialServiceCalendar : CLSSocialService {

	CNContactStore* _contactStore;
	CNContact* _meContact;
	CLSCalendarEventsCache* _calendarEventsCache;
	NSMutableSet* _prefetchedDateIntervals;

}
+(BOOL)_isEventInMeetingRoom:(id)arg1 ;
+(id)relevantCalendars:(id)arg1 ;
+(BOOL)shouldKeepEvent:(id)arg1 withClueCollection:(id)arg2 ;
+(BOOL)_isCalendarRelevant:(id)arg1 ;
+(BOOL)eventAtLocation:(id)arg1 withAttendeeNames:(id)arg2 matchesClueCollection:(id)arg3 ;
-(id)eventsForClueCollection:(id)arg1 ;
-(id)meContact;
-(id)initWithProxyAtURL:(id)arg1 andIntent:(unsigned long long)arg2 ;
-(id)personsFromEventParticipants:(id)arg1 excludeCurrentUser:(BOOL)arg2 ;
-(void)invalidateMemoryCaches;
-(void)prefetchEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 forAssetCollectionsSortedByStartDate:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)_fullNameWithContact:(id)arg1 ;
-(id)eventsForDates:(id)arg1 ;
-(id)workCalendarEventsMatchingContactIdentifiers:(id)arg1 fromUniversalDate:(id)arg2 toUniversalDate:(id)arg3 ;
-(void)enumerateEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)eventFromProxyEvent:(id)arg1 ;
-(BOOL)_sortedAssetCollections:(id)arg1 containsEvent:(id)arg2 ;
-(BOOL)_hasAlreadyPrefetchedEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 ;
-(void)_enumerateEventsFromDate:(id)arg1 toDate:(id)arg2 fetchIfNeeded:(BOOL)arg3 usingBlock:(/*^block*/id)arg4 ;
@end

