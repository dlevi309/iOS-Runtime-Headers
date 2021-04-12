/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/OccurrenceCacheDataSource.h>

@class EKSpotlightSearch, EKOccurrenceCacheSearch, NSString, NSMutableDictionary, NSArray;

@interface OccurrenceCacheSearchDataSource : OccurrenceCacheDataSource {

	EKSpotlightSearch* _narrowSearch;
	EKSpotlightSearch* _distantFutureSearch;
	EKSpotlightSearch* _distantPastSearch;
	EKOccurrenceCacheSearch* _legacySearch;
	NSString* _searchTerm;
	NSMutableDictionary* _processingCachedDays;
	opaque_pthread_mutex_t _resultsLock;
	NSArray* _sortedDays;
	int _searchSeed;

}
-(long long)countOfOccurrencesAtDayIndex:(long long)arg1 ;
-(id)_cachedDays;
-(BOOL)supportsFakeTodaySection;
-(BOOL)supportsInvitations;
-(void)searchWithTerm:(id)arg1 ;
-(void)_setCachedDaysAndNotify:(id)arg1 ;
-(id)initWithEventStore:(id)arg1 calendars:(id)arg2 ;
-(void)invalidateCachedOccurrences;
-(void)stopSearching;
-(void)invalidate;
-(void)_updateCachedDays;
-(void)dealloc;
@end

