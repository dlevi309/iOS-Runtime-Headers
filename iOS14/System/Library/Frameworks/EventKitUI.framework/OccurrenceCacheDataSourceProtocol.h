/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol OccurrenceCacheDataSourceProtocol <NSObject>
@required
-(long long)sectionForCachedOccurrencesOnDate:(id)arg1;
-(long long)countOfOccurrencesAtDayIndex:(long long)arg1;
-(long long)cachedDayCount;
-(BOOL)supportsFakeTodaySection;
-(BOOL)supportsInvitations;
-(void)searchWithTerm:(id)arg1;
-(id)dateAtDayIndex:(long long)arg1;
-(id)initWithEventStore:(id)arg1 calendars:(id)arg2;
-(void)invalidateCachedOccurrences;
-(void)stopSearching;
-(void)invalidate;
-(void)fetchDaysInBackgroundStartingFromSection:(long long)arg1;
-(BOOL)cachedOccurrencesAreBeingGenerated;
-(BOOL)cachedOccurrencesAreLoaded;
-(id)cachedOccurrenceAtIndexPath:(id)arg1;

@end

