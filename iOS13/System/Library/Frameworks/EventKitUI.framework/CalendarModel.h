/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <libobjc.A.dylib/CalendarEventLoaderDelegate.h>

@protocol OccurrenceCacheDataSourceProtocol;
@class EKEventStore, CalendarEventLoader, NSLock, NSArray, _EKNotificationMonitor, NSMutableDictionary, EKCalendarDate, CalendarModelSceneState, NSSet, NSString, NSCalendar, EKEvent, EKSource;

@interface CalendarModel : NSObject <CalendarEventLoaderDelegate> {

	BOOL _modelLocked;
	BOOL _notificationMonitorSetUp;
	EKEventStore* _eventStore;
	CalendarEventLoader* _eventLoader;
	NSLock* _filterLock;
	NSArray* _visibleCalendars;
	long long _readWriteCalendarCount;
	NSArray* _delegateSources;
	long long _invitationBearingStoresExist;
	_EKNotificationMonitor* _notificationMonitor;
	id<OccurrenceCacheDataSourceProtocol> _occurrenceCacheDataSource;
	id<OccurrenceCacheDataSourceProtocol> _occurrenceCacheFilteredDataSource;
	long long _cachedFakeTodayIndex;
	NSMutableDictionary* _displayableAccountErrorCounts;
	long long _initialAccountSyncCount;
	BOOL _suspendSelectedDateChanges;
	EKCalendarDate* _suspendedSelectedDate;
	CalendarModelSceneState* _persistedSceneState;
	BOOL _autoStartNotificationMonitor;
	NSSet* _selectedCalendars;
	NSString* _searchString;
	NSCalendar* _calendar;
	EKCalendarDate* _selectedDate;
	unsigned long long _firstVisibleSecond;
	EKEvent* _selectedOccurrence;
	EKSource* _sourceForSelectedIdentity;
	NSArray* _sortedEnabledDelegates;
	NSString* _sceneIdentifier;

}

@property (nonatomic,readonly) EKEventStore * eventStore;                                //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;                                        //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,copy) EKCalendarDate * selectedDate;                                //@synthesize selectedDate=_selectedDate - In the implementation block
@property (nonatomic,readonly) EKCalendarDate * selectedDay; 
@property (nonatomic,readonly) long long readWriteCalendarCount; 
@property (nonatomic,readonly) long long accountsInInitialSyncCount; 
@property (nonatomic,readonly) BOOL currentlyLocked; 
@property (assign,nonatomic) unsigned long long firstVisibleSecond;                      //@synthesize firstVisibleSecond=_firstVisibleSecond - In the implementation block
@property (nonatomic,retain) EKEvent * selectedOccurrence;                               //@synthesize selectedOccurrence=_selectedOccurrence - In the implementation block
@property (nonatomic,retain) NSSet * selectedCalendars;                                  //@synthesize selectedCalendars=_selectedCalendars - In the implementation block
@property (nonatomic,copy) NSSet * unselectedCalendars; 
@property (nonatomic,retain) NSString * searchString;                                    //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic) BOOL showDayAsList; 
@property (assign,nonatomic) BOOL showMonthAsDivided; 
@property (nonatomic,retain,readonly) EKSource * sourceForSelectedIdentity;              //@synthesize sourceForSelectedIdentity=_sourceForSelectedIdentity - In the implementation block
@property (nonatomic,retain) NSArray * sortedEnabledDelegates;                           //@synthesize sortedEnabledDelegates=_sortedEnabledDelegates - In the implementation block
@property (nonatomic,readonly) BOOL containsDelegateSources; 
@property (nonatomic,copy) NSString * sceneIdentifier;                                   //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (assign,nonatomic) BOOL autoStartNotificationMonitor;                          //@synthesize autoStartNotificationMonitor=_autoStartNotificationMonitor - In the implementation block
@property (assign,nonatomic) BOOL allowEventLocationPrediction; 
+(void)temporarilyIgnoreInvalidCredentialsErrorForSource:(id)arg1 ;
+(id)sortedEnabledDelegateSourcesFromStore:(id)arg1 ;
+(unsigned long long)errorForSource:(id)arg1 ;
+(id)calendarModelWithDataPath:(id)arg1 ;
+(id)calendarModelWithEventStore:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(double)_tomorrow;
-(NSString *)sceneIdentifier;
-(void)setSceneIdentifier:(NSString *)arg1 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(EKEventStore *)eventStore;
-(BOOL)cachedOccurrencesAreLoaded;
-(BOOL)cachedOccurrencesAreBeingGenerated;
-(id)cachedOccurrenceAtIndexPath:(id)arg1 ;
-(long long)sectionForCachedOccurrencesOnDate:(id)arg1 ;
-(id)defaultCalendarForNewEvents;
-(void)_eventStoreChanged:(id)arg1 ;
-(BOOL)allowEventLocationPrediction;
-(void)calendarEventLoader:(id)arg1 occurrencesDidUpdateBetweenStart:(double)arg2 end:(double)arg3 wasEmptyLoad:(BOOL)arg4 ;
-(id)initWithEventStore:(id)arg1 ;
-(void)setAllowEventLocationPrediction:(BOOL)arg1 ;
-(void)addOccurrenceAwaitingRefresh:(id)arg1 ;
-(void)addOccurrenceAwaitingDeletion:(id)arg1 ;
-(void)setComponentForExpandingRequests:(unsigned long long)arg1 ;
-(void)setComponentForExpandingPadding:(unsigned long long)arg1 ;
-(void)setPreferredReloadStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)setSelectedCalendars:(NSSet *)arg1 ;
-(id)occurrencesForStartDate:(id)arg1 endDate:(id)arg2 preSorted:(BOOL)arg3 waitForLoad:(BOOL)arg4 ;
-(void)setFirstVisibleSecond:(unsigned long long)arg1 ;
-(unsigned long long)firstVisibleSecond;
-(id)refreshAccountListIfNeeded:(BOOL)arg1 ;
-(id)refreshCalendarDataIfNeeded:(BOOL)arg1 ;
-(NSSet *)selectedCalendars;
-(BOOL)showDayAsList;
-(void)setShowDayAsList:(BOOL)arg1 ;
-(BOOL)showMonthAsDivided;
-(void)setShowMonthAsDivided:(BOOL)arg1 ;
-(id)initWithDataPath:(id)arg1 ;
-(void)_performCommonInitialization;
-(void)_createOccurrenceCacheDataSources;
-(void)_significantTimeChange:(id)arg1 ;
-(void)_tzSupportTodayRolledOver;
-(void)_timeZoneChanged:(id)arg1 ;
-(void)_searchResultsAvailable:(id)arg1 ;
-(void)_sceneEnteredBackground:(id)arg1 ;
-(void)_ignoredErrorsChanged;
-(void)_sceneEnteredForeground:(id)arg1 ;
-(void)_invalidateOccurrenceCacheDataSources;
-(void)_loadVisibleCalendarsIfNeeded;
-(BOOL)_setSelectedCalendars:(id)arg1 ;
-(void)postSelectedCalendarsChanged;
-(id)_calendarsForCurrentIdentityFromCalendars:(id)arg1 lock:(BOOL)arg2 ;
-(EKEvent *)selectedOccurrence;
-(void)setSelectedOccurrence:(EKEvent *)arg1 ;
-(void)_recreateOccurrenceCacheDataSources;
-(void)_processReloadForCacheOnly:(BOOL)arg1 includingCalendars:(BOOL)arg2 checkCalendarsValid:(BOOL)arg3 checkSources:(BOOL)arg4 ;
-(EKSource *)sourceForSelectedIdentity;
-(void)setSourceForSelectedIdentity:(EKSource *)arg1 ;
-(BOOL)_eventBelongsToCurrentIdentity:(id)arg1 ;
-(void)setSelectedCalendarsAndRequestPreferenceSave:(id)arg1 ;
-(void)updateSourceForSelectedIdentity:(id)arg1 selectedCalendars:(id)arg2 ;
-(id)calendarsForCurrentIdentityFromCalendars:(id)arg1 ;
-(void)setSelectedDate:(EKCalendarDate *)arg1 ;
-(id)occurrencesForDay:(id)arg1 waitForLoad:(BOOL)arg2 ;
-(long long)numberOfDaysWithCachedOccurrencesUsingFilter:(BOOL)arg1 ;
-(id)_dataSourceUsingFilter:(BOOL)arg1 ;
-(id)dateForCachedOccurrencesInSection:(long long)arg1 ;
-(long long)numberOfCachedOccurrencesInSection:(long long)arg1 usingFilter:(BOOL)arg2 ;
-(id)dateForCachedOccurrencesInSection:(long long)arg1 usingFilter:(BOOL)arg2 ;
-(id)cachedOccurrenceAtIndexPath:(id)arg1 usingFilter:(BOOL)arg2 ;
-(long long)sectionForCachedOccurrencesOnDate:(id)arg1 sectionExistsForDay:(BOOL*)arg2 usingFilter:(BOOL)arg3 ;
-(long long)cachedFakeTodayIndex;
-(long long)sectionForCachedOccurrencesOnDate:(id)arg1 sectionExistsForDay:(BOOL*)arg2 ;
-(void)fetchCachedDaysInBackgroundStartingFromSection:(long long)arg1 usingFilter:(BOOL)arg2 ;
-(void)_invalidateCachedOccurrences;
-(void)_checkSources;
-(BOOL)countSourcesWithErrors;
-(long long)countAccountsInInitialSync;
-(void)_finishedFirstLoad;
-(void)startNotificationMonitor;
-(id)_notificationMonitor;
-(void)_reloadIfTodayDetermined;
-(id)persistedSceneState;
-(void)_notificationsExpired:(id)arg1 ;
-(void)_notificationCountExpired:(id)arg1 ;
-(id)eventNotificationReferencesForIdentity:(id)arg1 ;
-(id)allEventNotificationReferences;
-(NSSet *)unselectedCalendars;
-(void)setUnselectedCalendars:(NSSet *)arg1 ;
-(BOOL)selectedOccurrenceIsSearchMatch;
-(NSArray *)sortedEnabledDelegates;
-(BOOL)containsDelegateSources;
-(long long)readWriteCalendarCount;
-(void)ensureCalendarVisibleWithId:(id)arg1 ;
-(BOOL)isCalendarVisibleWithID:(id)arg1 ;
-(void)setSelectedDateChangesDelayedUntilAfterTransition:(BOOL)arg1 ;
-(EKCalendarDate *)selectedDay;
-(void)updateSelectedDateTimeZone;
-(id)occurrencesForStartDay:(id)arg1 endDay:(id)arg2 preSorted:(BOOL)arg3 waitForLoad:(BOOL)arg4 ;
-(id)selectedDateOccurrences:(BOOL)arg1 loadIsComplete:(BOOL*)arg2 ;
-(id)closestOccurrenceToTomorrowForEventUID:(int)arg1 ;
-(void)setDesiredPaddingDays:(unsigned)arg1 ;
-(void)setMaxCachedDays:(unsigned)arg1 ;
-(BOOL)currentlyLocked;
-(long long)numberOfDaysWithCachedOccurrences;
-(long long)numberOfCachedOccurrencesInSection:(long long)arg1 ;
-(long long)sectionForCachedOccurrencesOnDate:(id)arg1 usingFilter:(BOOL)arg2 ;
-(void)fetchCachedDaysInBackgroundStartingFromSection:(long long)arg1 ;
-(long long)displayableAccountErrorsForSource:(id)arg1 ;
-(long long)accountsInInitialSyncCount;
-(void)simulateFirstLoadFinished;
-(void)_occurrenceCacheChanged;
-(void)updateAfterAppResume;
-(void)prepareForAppSuspend;
-(void)_systemWake;
-(BOOL)removeEvent:(id)arg1 withSpan:(long long)arg2 error:(id*)arg3 ;
-(BOOL)invitationBearingStoresExistForEvents;
-(unsigned long long)allEventNotificationsCount;
-(unsigned long long)eventNotificationsForCurrentIdentityCount;
-(id)eventNotificationReferencesForCurrentIdentity;
-(BOOL)searchingOccurrences;
-(EKCalendarDate *)selectedDate;
-(void)setSortedEnabledDelegates:(NSArray *)arg1 ;
-(BOOL)autoStartNotificationMonitor;
-(void)setAutoStartNotificationMonitor:(BOOL)arg1 ;
@end

