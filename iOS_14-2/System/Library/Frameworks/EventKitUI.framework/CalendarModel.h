/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)calendarModelWithDataPath:(id)arg1 ;
+(void)temporarilyIgnoreInsecureConnectionErrorsForCalendars:(id)arg1 ;
+(unsigned long long)errorForSource:(id)arg1 ;
+(void)temporarilyIgnoreInvalidCredentialsErrorForSource:(id)arg1 ;
+(id)sortedEnabledDelegateSourcesFromStore:(id)arg1 ;
+(id)calendarModelWithEventStore:(id)arg1 ;
+(unsigned long long)errorForSubscribedCalendarChildrenOfSource:(id)arg1 ;
-(void)setPreferredReloadStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)_eventStoreChanged:(id)arg1 ;
-(void)setComponentForExpandingPadding:(unsigned long long)arg1 ;
-(EKEventStore *)eventStore;
-(void)_checkSources;
-(id)refreshCalendarDataIfNeeded:(BOOL)arg1 ;
-(void)ensureCalendarVisibleWithId:(id)arg1 ;
-(void)setSceneIdentifier:(NSString *)arg1 ;
-(double)_tomorrow;
-(long long)sectionForCachedOccurrencesOnDate:(id)arg1 ;
-(void)_reloadIfTodayDetermined;
-(NSSet *)selectedCalendars;
-(long long)cachedFakeTodayIndex;
-(void)_invalidateCachedOccurrences;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(unsigned long long)firstVisibleSecond;
-(id)init;
-(NSString *)sceneIdentifier;
-(void)setFirstVisibleSecond:(unsigned long long)arg1 ;
-(BOOL)isCalendarVisibleWithID:(id)arg1 ;
-(id)_calendarsForCurrentIdentityFromCalendars:(id)arg1 lock:(BOOL)arg2 ;
-(void)_finishedFirstLoad;
-(void)addOccurrenceAwaitingDeletion:(id)arg1 ;
-(long long)numberOfCachedOccurrencesInSection:(long long)arg1 usingFilter:(BOOL)arg2 ;
-(BOOL)removeEvent:(id)arg1 withSpan:(long long)arg2 error:(id*)arg3 ;
-(long long)displayableAccountErrorsForSource:(id)arg1 ;
-(void)_notificationCountExpired:(id)arg1 ;
-(BOOL)selectedOccurrenceIsSearchMatch;
-(BOOL)countSourcesWithErrors;
-(void)_ignoredErrorsChanged;
-(void)setMaxCachedDays:(unsigned)arg1 ;
-(EKEvent *)selectedOccurrence;
-(void)simulateFirstLoadFinished;
-(id)eventNotificationReferencesForIdentity:(id)arg1 ;
-(id)occurrencesForDay:(id)arg1 waitForLoad:(BOOL)arg2 ;
-(void)setUnselectedCalendars:(NSSet *)arg1 ;
-(NSCalendar *)calendar;
-(long long)accountsInInitialSyncCount;
-(id)persistedSceneState;
-(BOOL)showDayAsList;
-(id)cachedOccurrenceAtIndexPath:(id)arg1 usingFilter:(BOOL)arg2 ;
-(void)_notificationsExpired:(id)arg1 ;
-(void)_significantTimeChange:(id)arg1 ;
-(void)_systemWake;
-(void)updateAfterAppResume;
-(void)_localeChanged:(id)arg1 ;
-(EKCalendarDate *)selectedDate;
-(void)prepareForAppSuspend;
-(id)selectedDateOccurrences:(BOOL)arg1 loadIsComplete:(BOOL*)arg2 ;
-(long long)readWriteCalendarCount;
-(id)eventNotificationReferencesForCurrentIdentity;
-(EKSource *)sourceForSelectedIdentity;
-(void)setAutoStartNotificationMonitor:(BOOL)arg1 ;
-(void)setAllowEventLocationPrediction:(BOOL)arg1 ;
-(BOOL)currentlyLocked;
-(BOOL)invitationBearingStoresExistForEvents;
-(void)setSelectedOccurrence:(EKEvent *)arg1 ;
-(void)setSelectedDateChangesDelayedUntilAfterTransition:(BOOL)arg1 ;
-(void)locationPrecisionDeterminedNotification:(id)arg1 ;
-(void)_sceneEnteredBackground:(id)arg1 ;
-(void)setSortedEnabledDelegates:(NSArray *)arg1 ;
-(id)_notificationMonitor;
-(void)_timeZoneChanged:(id)arg1 ;
-(void)setDesiredPaddingDays:(unsigned)arg1 ;
-(BOOL)autoStartNotificationMonitor;
-(void)_tzSupportTodayRolledOver;
-(void)setSourceForSelectedIdentity:(EKSource *)arg1 ;
-(void)_occurrenceCacheChanged;
-(void)_notificationBlacklisted;
-(id)calendarsForCurrentIdentityFromCalendars:(id)arg1 ;
-(long long)numberOfDaysWithCachedOccurrences;
-(id)closestOccurrenceToTomorrowForEventUID:(int)arg1 ;
-(EKCalendarDate *)selectedDay;
-(void)fetchCachedDaysInBackgroundStartingFromSection:(long long)arg1 ;
-(void)_performCommonInitialization;
-(BOOL)allowEventLocationPrediction;
-(id)occurrencesForStartDate:(id)arg1 endDate:(id)arg2 preSorted:(BOOL)arg3 waitForLoad:(BOOL)arg4 ;
-(unsigned long long)eventNotificationsForCurrentIdentityCount;
-(void)setShowDayAsList:(BOOL)arg1 ;
-(void)_searchResultsAvailable:(id)arg1 ;
-(void)startNotificationMonitor;
-(unsigned long long)allEventNotificationsCount;
-(void)_loadVisibleCalendarsIfNeeded;
-(id)defaultCalendarForNewEvents;
-(NSSet *)unselectedCalendars;
-(BOOL)containsDelegateSources;
-(id)dateForCachedOccurrencesInSection:(long long)arg1 ;
-(void)updateSelectedDateTimeZone;
-(long long)sectionForCachedOccurrencesOnDate:(id)arg1 usingFilter:(BOOL)arg2 ;
-(id)refreshAccountListIfNeeded:(BOOL)arg1 ;
-(long long)sectionForCachedOccurrencesOnDate:(id)arg1 sectionExistsForDay:(BOOL*)arg2 ;
-(BOOL)_setSelectedCalendars:(id)arg1 ;
-(void)_createOccurrenceCacheDataSources;
-(void)_processReloadForCacheOnly:(BOOL)arg1 includingCalendars:(BOOL)arg2 checkCalendarsValid:(BOOL)arg3 checkSources:(BOOL)arg4 ;
-(void)calendarEventLoader:(id)arg1 occurrencesDidUpdateBetweenStart:(double)arg2 end:(double)arg3 wasEmptyLoad:(BOOL)arg4 ;
-(BOOL)showMonthAsDivided;
-(NSArray *)sortedEnabledDelegates;
-(id)_dataSourceUsingFilter:(BOOL)arg1 ;
-(id)occurrencesForStartDay:(id)arg1 endDay:(id)arg2 preSorted:(BOOL)arg3 waitForLoad:(BOOL)arg4 ;
-(void)setSearchString:(NSString *)arg1 ;
-(void)_invalidateOccurrenceCacheDataSources;
-(void)fetchCachedDaysInBackgroundStartingFromSection:(long long)arg1 usingFilter:(BOOL)arg2 ;
-(void)addOccurrenceAwaitingRefresh:(id)arg1 ;
-(void)_sceneEnteredForeground:(id)arg1 ;
-(BOOL)cachedOccurrencesAreBeingGenerated;
-(void)postSelectedCalendarsChanged;
-(void)setSelectedCalendarsAndRequestPreferenceSave:(id)arg1 ;
-(void)checkLocationAuthorizationAndAllowEventLocationPrediction;
-(BOOL)cachedOccurrencesAreLoaded;
-(id)allEventNotificationReferences;
-(long long)numberOfDaysWithCachedOccurrencesUsingFilter:(BOOL)arg1 ;
-(void)addRespondedNotificationObjectID:(id)arg1 ;
-(void)_recreateOccurrenceCacheDataSources;
-(id)initWithDataPath:(id)arg1 ;
-(id)dateForCachedOccurrencesInSection:(long long)arg1 usingFilter:(BOOL)arg2 ;
-(long long)countAccountsInInitialSync;
-(BOOL)_eventBelongsToCurrentIdentity:(id)arg1 ;
-(NSString *)searchString;
-(BOOL)searchingOccurrences;
-(id)initWithEventStore:(id)arg1 ;
-(long long)numberOfCachedOccurrencesInSection:(long long)arg1 ;
-(long long)sectionForCachedOccurrencesOnDate:(id)arg1 sectionExistsForDay:(BOOL*)arg2 usingFilter:(BOOL)arg3 ;
-(id)cachedOccurrenceAtIndexPath:(id)arg1 ;
-(void)setSelectedDate:(EKCalendarDate *)arg1 ;
-(void)dealloc;
-(void)setSelectedCalendars:(NSSet *)arg1 ;
-(void)setComponentForExpandingRequests:(unsigned long long)arg1 ;
-(void)updateSourceForSelectedIdentity:(id)arg1 selectedCalendars:(id)arg2 ;
-(void)setShowMonthAsDivided:(BOOL)arg1 ;
@end

