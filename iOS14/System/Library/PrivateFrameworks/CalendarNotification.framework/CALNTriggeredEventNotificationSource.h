/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNTriggeredEventNotificationDataSourceDelegate.h>
#import <libobjc.A.dylib/CALNNotificationSource.h>

@protocol CALNTriggeredEventNotificationDataSource, CALNNotificationManager, CALNCalendarIconIdentifierProvider, CALNSourceEventRepresentationProvider, CALNTriggeredEventNotificationTriggerHelper, CALNTriggeredEventNotificationTransitionProvider, CALNTriggeredEventNotificationBodyDescriptionProvider, CALNTravelAdvisoryTimelinessAuthority, CalDateProvider, CALNTriggeredEventNotificationDataStorage, CALNTimeToLeaveRefreshStorage, CALNURLHandler, CALNTriggeredEventNotificationMapItemURLProvider, OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString, NSArray;

@interface CALNTriggeredEventNotificationSource : NSObject <CALNTriggeredEventNotificationDataSourceDelegate, CALNNotificationSource> {

	id<CALNTriggeredEventNotificationDataSource> _dataSource;
	id<CALNNotificationManager> _notificationManager;
	id<CALNCalendarIconIdentifierProvider> _iconIdentifierProvider;
	id<CALNSourceEventRepresentationProvider> _sourceEventRepresentationProvider;
	id<CALNTriggeredEventNotificationTriggerHelper> _triggerHelper;
	id<CALNTriggeredEventNotificationTransitionProvider> _transitionProvider;
	id<CALNTriggeredEventNotificationBodyDescriptionProvider> _bodyDescriptionProvider;
	id<CALNTravelAdvisoryTimelinessAuthority> _travelAdvisoryTimelinessAuthority;
	id<CalDateProvider> _dateProvider;
	id<CALNTriggeredEventNotificationDataStorage> _notificationDataStorage;
	id<CALNTimeToLeaveRefreshStorage> _timeToLeaveRefreshStorage;
	NSMutableDictionary* _eventURLToObjectIDMap;
	id<CALNURLHandler> _urlHandler;
	id<CALNTriggeredEventNotificationMapItemURLProvider> _mapItemURLProvider;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) id<CALNTriggeredEventNotificationDataSource> dataSource;                                        //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,__weak,readonly) id<CALNNotificationManager> notificationManager;                                         //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,readonly) id<CALNCalendarIconIdentifierProvider> iconIdentifierProvider;                                  //@synthesize iconIdentifierProvider=_iconIdentifierProvider - In the implementation block
@property (nonatomic,readonly) id<CALNSourceEventRepresentationProvider> sourceEventRepresentationProvider;                    //@synthesize sourceEventRepresentationProvider=_sourceEventRepresentationProvider - In the implementation block
@property (nonatomic,readonly) id<CALNTriggeredEventNotificationTriggerHelper> triggerHelper;                                  //@synthesize triggerHelper=_triggerHelper - In the implementation block
@property (nonatomic,readonly) id<CALNTriggeredEventNotificationTransitionProvider> transitionProvider;                        //@synthesize transitionProvider=_transitionProvider - In the implementation block
@property (nonatomic,readonly) id<CALNTriggeredEventNotificationBodyDescriptionProvider> bodyDescriptionProvider;              //@synthesize bodyDescriptionProvider=_bodyDescriptionProvider - In the implementation block
@property (nonatomic,readonly) id<CALNTravelAdvisoryTimelinessAuthority> travelAdvisoryTimelinessAuthority;                    //@synthesize travelAdvisoryTimelinessAuthority=_travelAdvisoryTimelinessAuthority - In the implementation block
@property (nonatomic,readonly) id<CalDateProvider> dateProvider;                                                               //@synthesize dateProvider=_dateProvider - In the implementation block
@property (nonatomic,readonly) id<CALNTriggeredEventNotificationDataStorage> notificationDataStorage;                          //@synthesize notificationDataStorage=_notificationDataStorage - In the implementation block
@property (nonatomic,readonly) id<CALNTimeToLeaveRefreshStorage> timeToLeaveRefreshStorage;                                    //@synthesize timeToLeaveRefreshStorage=_timeToLeaveRefreshStorage - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * eventURLToObjectIDMap;                                                    //@synthesize eventURLToObjectIDMap=_eventURLToObjectIDMap - In the implementation block
@property (nonatomic,readonly) id<CALNURLHandler> urlHandler;                                                                  //@synthesize urlHandler=_urlHandler - In the implementation block
@property (nonatomic,readonly) id<CALNTriggeredEventNotificationMapItemURLProvider> mapItemURLProvider;                        //@synthesize mapItemURLProvider=_mapItemURLProvider - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                                         //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) NSArray * categories; 
+(id)snoozeActionIdentifier;
+(id)conferenceCallActionIdentifier;
+(id)_conferenceURLForNotification:(id)arg1 ;
+(id)_mapItemURLForNotification:(id)arg1 ;
+(id)mapItemURLUserInfoKey;
+(id)conferenceURLUserInfoKey;
+(id)directionsActionIdentifier;
+(id)mailOrganizerActionIdentifier;
+(id)_mergeDataFromUnprotectedStore:(id)arg1 withDataInProtectedStore:(id)arg2 ;
-(void)_updateTimeToLeaveRefreshTimerForSourceClientIdentifier:(id)arg1 ;
-(id)_sourceNotificationInfoForSourceClientIdentifier:(id)arg1 shouldClearHypothesis:(BOOL)arg2 isForContentCreation:(BOOL)arg3 ;
-(void)_notificationAddedWithSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 trigger:(unsigned long long)arg3 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)_contentForNotificationWithSourceClientIdentifier:(id)arg1 shouldClearHypothesis:(BOOL)arg2 ;
-(void)didReceiveResponse:(id)arg1 ;
-(void)dataSource:(id)arg1 travelEngineEventSignificantlyChangedWithSourceClientIdentifier:(id)arg2 ;
-(id)_updatedSourceNotificationInfoForContentCreation:(id)arg1 ;
-(BOOL)_sourceClientIdentifier:(id)arg1 matchesEventForSourceClientIdentifier:(id)arg2 ;
-(void)_refreshNotificationMetaData:(id)arg1 eventID:(id)arg2 ;
-(void)_updateStoredNotificationDataForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 existingNotificationData:(id)arg3 transition:(unsigned long long)arg4 now:(id)arg5 ;
-(void)dataSource:(id)arg1 triggeredWithSourceClientIdentifier:(id)arg2 triggerData:(id)arg3 ;
-(void)_refreshTimeToLeaveRefreshTimersWithObjectIDs:(id)arg1 ;
-(NSArray *)categories;
-(id)_updatedLastFireTimeOfAlertOffsetFromTravelTimeGivenIsOffsetFromTravelTime:(BOOL)arg1 ;
-(id<CALNTriggeredEventNotificationTriggerHelper>)triggerHelper;
-(void)_refreshNotificationRecordsWithObjectIDs:(id)arg1 ;
-(void)_clearTravelAdvisoryFromNotificationMetaDataForSourceClientIdentifier:(id)arg1 ;
-(id)_resolvedSourceClientIdentifierForNewSourceClientIdentifier:(id)arg1 oldSourceClientIdentifier:(id)arg2 ;
-(BOOL)_shouldCeaseRouteMonitoringEventForSourceClientIdentifier:(id)arg1 ;
-(void)_refreshNotificationMetaDataWithObjectIDs:(id)arg1 ;
-(id<CALNURLHandler>)urlHandler;
-(void)_didReceiveResponse:(id)arg1 ;
-(id<CALNTimeToLeaveRefreshStorage>)timeToLeaveRefreshStorage;
-(id<CALNTriggeredEventNotificationDataSource>)dataSource;
-(void)_refreshTimeToLeaveRefreshTimerWithRefreshDate:(id)arg1 eventID:(id)arg2 ;
-(id)_updatedNotificationDataResettingTimeToLeaveDisplayState:(id)arg1 ;
-(id)_existingRecordMatchingEventForSourceClientIdentifier:(id)arg1 ;
-(id<CALNNotificationManager>)notificationManager;
-(void)_removeStoredNotificationDataForEventWithEventID:(id)arg1 ;
-(BOOL)migrateToStorage:(id)arg1 ;
-(id<CALNSourceEventRepresentationProvider>)sourceEventRepresentationProvider;
-(void)_addEventURL:(id)arg1 mappingToEventObjectID:(id)arg2 ;
-(void)_clearTravelAdvisoryHypotheses;
-(id)_notificationDataForSourceNotificationInfo:(id)arg1 existingNotificationData:(id)arg2 transition:(unsigned long long)arg3 now:(id)arg4 ;
-(void)_updateTimeToLeaveRefreshTimerForSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2 allowsLocationAlerts:(BOOL)arg3 ;
-(void)_triggeredWithSourceClientIdentifier:(id)arg1 triggerData:(id)arg2 ;
-(id<CALNTriggeredEventNotificationTransitionProvider>)transitionProvider;
-(unsigned long long)_calnTravelAdvisoryTimelinessPeriodFromEKTravelAvisoryTimelinessPeriod:(unsigned long long)arg1 ;
-(void)_refreshNotifications:(id)arg1 ;
-(NSMutableDictionary *)eventURLToObjectIDMap;
-(unsigned long long)_travelAdvisoryTimelinessPeriodForHypothesis:(id)arg1 ;
-(BOOL)_shouldRemoveStoredNotificationDataGivenShouldWithdrawNotification:(BOOL)arg1 hasExistingTravelInformation:(BOOL)arg2 mayCeaseRouteMonitoring:(BOOL)arg3 ;
-(void)_handleConferenceCallActionWithResponse:(id)arg1 ;
-(id)_sourceNotificationInfoForSourceClientIdentifier:(id)arg1 notificationInfo:(id)arg2 existingNotificationData:(id)arg3 hypothesis:(id)arg4 shouldClearHypothesis:(BOOL)arg5 isOffsetFromTravelTimeStart:(BOOL)arg6 isForContentCreation:(BOOL)arg7 ;
-(BOOL)_shouldRemoveTimeToLeaveRefreshTimerWithRefreshDate:(id)arg1 eventID:(id)arg2 ;
-(id)_contentForNotificationWithSourceClientIdentifier:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3 sourceEventRepresentationProvider:(id)arg4 triggerHelper:(id)arg5 transitionProvider:(id)arg6 bodyDescriptionProvider:(id)arg7 travelAdvisoryTimelinessAuthority:(id)arg8 dateProvider:(id)arg9 notificationDataStorage:(id)arg10 urlHandler:(id)arg11 mapItemURLProvider:(id)arg12 timeToLeaveRefreshStorage:(id)arg13 ;
-(id)contentForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 isProtectedDataAvailable:(BOOL)arg3 ;
-(id<CALNCalendarIconIdentifierProvider>)iconIdentifierProvider;
-(void)_addRecord:(id)arg1 sourceNotificationInfo:(id)arg2 existingNotificationData:(id)arg3 trigger:(unsigned long long)arg4 transition:(unsigned long long)arg5 now:(id)arg6 ;
-(id)_launchURLForResponse:(id)arg1 ;
-(id<CalDateProvider>)dateProvider;
-(void)_addNotificationData:(id)arg1 forSourceClientIdentifier:(id)arg2 ;
-(void)refreshNotifications:(id)arg1 ;
-(void)_updateNotification:(id)arg1 shouldClearHypothesis:(BOOL)arg2 ;
-(void)dataSource:(id)arg1 travelAdvisoryAuthorizationChanged:(BOOL)arg2 ;
-(id)_existingRecordMatchingEventForSourceClientIdentifier:(id)arg1 existingRecords:(id)arg2 ;
-(void)_handleDirectionsActionWithResponse:(id)arg1 ;
-(void)_setNotificationResponseData:(id)arg1 onNotificationContent:(id)arg2 ;
-(id)_notificationResponseDataForSourceNotificationInfo:(id)arg1 ;
-(void)_handleMailOrganizerActionWithResponse:(id)arg1 ;
-(void)_refreshNotification:(id)arg1 ;
-(id)_eventRepresentationDictionaryWithSourceNotificationInfo:(id)arg1 hypothesisMessage:(id)arg2 ;
-(void)_travelEngineEventSignificantlyChangedWithSourceClientIdentifier:(id)arg1 ;
-(BOOL)_isNotificationMetaDataExpired:(id)arg1 eventID:(id)arg2 ;
-(id)_notificationResponseDataForRecord:(id)arg1 ;
-(BOOL)_itemWithEventID:(id)arg1 affectedByChangesToObjects:(id)arg2 ;
-(void)_addNotificationDataForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 existingNotificationData:(id)arg3 transition:(unsigned long long)arg4 now:(id)arg5 ;
-(id<CALNTravelAdvisoryTimelinessAuthority>)travelAdvisoryTimelinessAuthority;
-(BOOL)_shouldRemoveNotificationMetaData:(id)arg1 eventID:(id)arg2 ;
-(id<CALNTriggeredEventNotificationBodyDescriptionProvider>)bodyDescriptionProvider;
-(BOOL)sourceClientIdentifier:(id)arg1 matchesEventForSourceClientIdentifier:(id)arg2 ;
-(id<CALNTriggeredEventNotificationMapItemURLProvider>)mapItemURLProvider;
-(id)_existingNotificationDataMatchingEventForSourceClientIdentifier:(id)arg1 ;
-(BOOL)_shouldUpdateStoredNotificationDataGivenTransition:(unsigned long long)arg1 ;
-(BOOL)_mayCeaseRouteMonitoringForExistingNotificationData:(id)arg1 ;
-(id)contentForNotificationWithSourceClientIdentifier:(id)arg1 ;
-(void)_travelAdvisoryAuthorizationChanged:(BOOL)arg1 ;
-(void)_resetStoredNotificationDataTimeToLeaveDisplayStateForSourceClientIdentifier:(id)arg1 ;
-(NSString *)sourceIdentifier;
-(BOOL)_notificationWithSourceClientIdentifier:(id)arg1 affectedByChangesToObjects:(id)arg2 ;
-(id<CALNTriggeredEventNotificationDataStorage>)notificationDataStorage;
@end

