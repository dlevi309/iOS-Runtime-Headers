/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <libobjc.A.dylib/OccurrenceCacheDataSourceProtocol.h>

@class EKEventStore, NSSet, NSArray, NSString;

@interface OccurrenceCacheDataSource : NSObject <OccurrenceCacheDataSourceProtocol> {

	EKEventStore* _eventStore;
	NSSet* _calendars;
	NSArray* _cachedDays;
	int _cachedDaysSeed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id)_cachedDays;
-(long long)cachedDayCount;
-(id)initWithEventStore:(id)arg1 calendars:(id)arg2 ;
-(BOOL)supportsInvitations;
-(BOOL)supportsFakeTodaySection;
-(BOOL)cachedOccurrencesAreLoaded;
-(BOOL)cachedOccurrencesAreBeingGenerated;
-(long long)countOfOccurrencesAtDayIndex:(long long)arg1 ;
-(id)dateAtDayIndex:(long long)arg1 ;
-(id)cachedOccurrenceAtIndexPath:(id)arg1 ;
-(long long)sectionForCachedOccurrencesOnDate:(id)arg1 ;
-(void)invalidateCachedOccurrences;
-(void)fetchDaysInBackgroundStartingFromSection:(long long)arg1 ;
-(void)searchWithTerm:(id)arg1 ;
-(void)stopSearching;
@end

