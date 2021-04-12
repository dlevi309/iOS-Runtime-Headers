/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/OccurrenceCacheDataSource.h>

@class EKOccurrenceCacheSearch, NSMutableArray;

@interface OccurrenceCacheSearchDataSource : OccurrenceCacheDataSource {

	EKOccurrenceCacheSearch* _search;
	NSMutableArray* _processingCachedDays;
	opaque_pthread_mutex_t _resultsLock;

}
-(void)dealloc;
-(void)invalidate;
-(id)_cachedDays;
-(id)initWithEventStore:(id)arg1 calendars:(id)arg2 ;
-(BOOL)supportsInvitations;
-(BOOL)supportsFakeTodaySection;
-(long long)countOfOccurrencesAtDayIndex:(long long)arg1 ;
-(void)invalidateCachedOccurrences;
-(void)searchWithTerm:(id)arg1 ;
-(void)stopSearching;
-(void)_setCachedDaysAndNotify:(id)arg1 ;
@end

