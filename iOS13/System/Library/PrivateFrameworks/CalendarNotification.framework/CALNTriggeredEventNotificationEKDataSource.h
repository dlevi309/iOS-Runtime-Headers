/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNTravelEngineDelegate.h>
#import <libobjc.A.dylib/CALNTimeToLeaveRefreshMonitorDelegate.h>
#import <libobjc.A.dylib/CALNTriggeredEventNotificationDataSource.h>

@protocol CALNTriggeredEventNotificationDataSourceDelegate, EKEventStoreProvider, CALNRemoteMutator, CALNDataSourceEventRepresentationProvider, CALNStats, CALNTTLEventTracker, CALNAlarmEngineMonitor, CALNTravelEngine, CALNFoundInAppsEventTracker, CALNSuggestionsServiceLogger, CALNRouteHypothesizerProvider, CALNTimeToLeaveRefreshMonitor, CALNDebugPreferences;
@class CALNCalendarCoreLocationManager, CALNTriggeredEventNotificationMailtoURLProvider, NSString;

@interface CALNTriggeredEventNotificationEKDataSource : NSObject <CALNTravelEngineDelegate, CALNTimeToLeaveRefreshMonitorDelegate, CALNTriggeredEventNotificationDataSource> {

	id<CALNTriggeredEventNotificationDataSourceDelegate> _delegate;
	id<EKEventStoreProvider> _eventStoreProvider;
	id<CALNRemoteMutator> _remoteMutator;
	id<CALNDataSourceEventRepresentationProvider> _dataSourceEventRepresentationProvider;
	CALNCalendarCoreLocationManager* _coreLocationManager;
	id<CALNStats> _stats;
	id<CALNTTLEventTracker> _ttlEventTracker;
	id<CALNAlarmEngineMonitor> _alarmEngineMonitor;
	id<CALNTravelEngine> _travelEngine;
	id<CALNFoundInAppsEventTracker> _foundInAppsEventTracker;
	id<CALNSuggestionsServiceLogger> _suggestionsServiceLogger;
	id<CALNRouteHypothesizerProvider> _routeHypothesizerProvider;
	id<CALNTimeToLeaveRefreshMonitor> _timeToLeaveRefreshMonitor;
	id<CALNDebugPreferences> _debugPreferences;
	CALNTriggeredEventNotificationMailtoURLProvider* _mailtoURLProvider;

}

@property (nonatomic,readonly) id<EKEventStoreProvider> eventStoreProvider;                                                      //@synthesize eventStoreProvider=_eventStoreProvider - In the implementation block
@property (nonatomic,readonly) id<CALNRemoteMutator> remoteMutator;                                                              //@synthesize remoteMutator=_remoteMutator - In the implementation block
@property (nonatomic,readonly) id<CALNDataSourceEventRepresentationProvider> dataSourceEventRepresentationProvider;              //@synthesize dataSourceEventRepresentationProvider=_dataSourceEventRepresentationProvider - In the implementation block
@property (nonatomic,readonly) CALNCalendarCoreLocationManager * coreLocationManager;                                            //@synthesize coreLocationManager=_coreLocationManager - In the implementation block
@property (nonatomic,readonly) id<CALNStats> stats;                                                                              //@synthesize stats=_stats - In the implementation block
@property (nonatomic,readonly) id<CALNTTLEventTracker> ttlEventTracker;                                                          //@synthesize ttlEventTracker=_ttlEventTracker - In the implementation block
@property (nonatomic,readonly) id<CALNAlarmEngineMonitor> alarmEngineMonitor;                                                    //@synthesize alarmEngineMonitor=_alarmEngineMonitor - In the implementation block
@property (nonatomic,readonly) id<CALNTravelEngine> travelEngine;                                                                //@synthesize travelEngine=_travelEngine - In the implementation block
@property (nonatomic,readonly) id<CALNFoundInAppsEventTracker> foundInAppsEventTracker;                                          //@synthesize foundInAppsEventTracker=_foundInAppsEventTracker - In the implementation block
@property (nonatomic,readonly) id<CALNSuggestionsServiceLogger> suggestionsServiceLogger;                                        //@synthesize suggestionsServiceLogger=_suggestionsServiceLogger - In the implementation block
@property (nonatomic,readonly) id<CALNRouteHypothesizerProvider> routeHypothesizerProvider;                                      //@synthesize routeHypothesizerProvider=_routeHypothesizerProvider - In the implementation block
@property (nonatomic,readonly) id<CALNTimeToLeaveRefreshMonitor> timeToLeaveRefreshMonitor;                                      //@synthesize timeToLeaveRefreshMonitor=_timeToLeaveRefreshMonitor - In the implementation block
@property (nonatomic,readonly) id<CALNDebugPreferences> debugPreferences;                                                        //@synthesize debugPreferences=_debugPreferences - In the implementation block
@property (nonatomic,readonly) CALNTriggeredEventNotificationMailtoURLProvider * mailtoURLProvider;                              //@synthesize mailtoURLProvider=_mailtoURLProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CALNTriggeredEventNotificationDataSourceDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
+(id)_alarmForEvent:(id)arg1 withAlarmID:(id)arg2 ;
+(id)_alarmDateForAlarm:(id)arg1 eventStartDate:(id)arg2 ;
+(id)_sourceClientIdentifierForAlertInfo:(id)arg1 ;
+(double)snoozeInterval;
-(id<CALNTriggeredEventNotificationDataSourceDelegate>)delegate;
-(void)setDelegate:(id<CALNTriggeredEventNotificationDataSourceDelegate>)arg1 ;
-(void)didDismissUINotification:(unsigned long long)arg1 forPlannedDestination:(id)arg2 dismissalType:(unsigned long long)arg3 ;
-(id<EKEventStoreProvider>)eventStoreProvider;
-(id<CALNStats>)stats;
-(id<CALNAlarmEngineMonitor>)alarmEngineMonitor;
-(void)_alertsFired:(id)arg1 ;
-(id<CALNTravelEngine>)travelEngine;
-(id<CALNTimeToLeaveRefreshMonitor>)timeToLeaveRefreshMonitor;
-(id<CALNDataSourceEventRepresentationProvider>)dataSourceEventRepresentationProvider;
-(CALNTriggeredEventNotificationMailtoURLProvider *)mailtoURLProvider;
-(CALNCalendarCoreLocationManager *)coreLocationManager;
-(id<CALNDebugPreferences>)debugPreferences;
-(BOOL)_shouldWithdrawNotificationWithSourceClientIdentifier:(id)arg1 event:(id)arg2 alarmID:(id)arg3 ;
-(id)_eventForEventID:(id)arg1 ;
-(id)_notificationExpirationDateForNullableAlarmDate:(id)arg1 eventEndDate:(id)arg2 ;
-(id)_notificationExpirationDateForAlarmDate:(id)arg1 eventEndDate:(id)arg2 ;
-(void)setUpTimeToLeaveRefreshTimerWithTriggerDate:(id)arg1 eventID:(id)arg2 ;
-(void)_didSetUpTimeToLeaveRefreshTimerForEventID:(id)arg1 triggerDate:(id)arg2 ;
-(void)removeTimeToLeaveRefreshTimerForEventID:(id)arg1 ;
-(double)_requestHypothesisRefreshInterval;
-(void)ceaseRouteMonitoringEventWithEventID:(id)arg1 ;
-(void)_handleNotificationActionForSourceClientIdentifier:(id)arg1 acknowledgeAlarm:(BOOL)arg2 eventActions:(/*^block*/id)arg3 ;
-(id<CALNRemoteMutator>)remoteMutator;
-(id<CALNTTLEventTracker>)ttlEventTracker;
-(id)_eventForSourceClientIdentifier:(id)arg1 ;
-(id<CALNFoundInAppsEventTracker>)foundInAppsEventTracker;
-(id<CALNSuggestionsServiceLogger>)suggestionsServiceLogger;
-(id<CALNRouteHypothesizerProvider>)routeHypothesizerProvider;
-(void)_alertFiredForAlertInfo:(id)arg1 ;
-(BOOL)_shouldTriggerForAlertInfo:(id)arg1 ;
-(void)travelEngine:(id)arg1 receivedHypothesis:(id)arg2 eventExternalURL:(id)arg3 ;
-(void)travelEngine:(id)arg1 eventSignificantlyChangedWithEventExternalURL:(id)arg2 ;
-(void)travelEngine:(id)arg1 authorizationChanged:(BOOL)arg2 ;
-(void)timeToLeaveRefreshMonitor:(id)arg1 refreshTimerFiredForEventExternalURL:(id)arg2 ;
-(id)fetchTriggeredEventNotificationInfoWithSourceClientIdentifier:(id)arg1 isProtectedDataAvailable:(BOOL)arg2 ;
-(BOOL)shouldWithdrawNotificationWithSourceClientIdentifier:(id)arg1 ;
-(BOOL)shouldRemoveNotificationMetaDataWithEventID:(id)arg1 ;
-(BOOL)shouldRemoveTimeToLeaveRefreshTimerWithRefreshDate:(id)arg1 eventID:(id)arg2 ;
-(id)notificationExpirationDateForEventID:(id)arg1 alarmID:(id)arg2 ;
-(void)acknowledgeEventWithSourceClientIdentifier:(id)arg1 shouldMarkAsHavingReceivedLocation:(BOOL)arg2 ;
-(void)snoozeEventWithSourceClientIdentifier:(id)arg1 ;
-(void)handleDirectionsActionWithSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg3 ;
-(void)handleConferenceCallActionWithSourceClientIdentifier:(id)arg1 ;
-(void)handleMailOrganizerActionWithSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2 ;
-(id)eventObjectIDForEventID:(id)arg1 ;
-(void)setUpTimeToLeaveRefreshTimerWithTriggerDate:(id)arg1 sourceClientIdentifier:(id)arg2 ;
-(void)removeTimeToLeaveRefreshTimerForSourceClientIdentifier:(id)arg1 ;
-(void)ceaseRouteMonitoringEventForSourceClientIdentifier:(id)arg1 ;
-(void)sendFeedbackForAddedTravelAdvisoryNotificationWithSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2 travelAdvisoryTimelinessPeriod:(unsigned long long)arg3 ;
-(void)sendFeedbackForAddedLeaveNowNotificationWithSourceClientIdentifier:(id)arg1 ;
-(id)initWithEventStoreProvider:(id)arg1 remoteMutator:(id)arg2 dataSourceEventRepresentationProvider:(id)arg3 coreLocationProvider:(id)arg4 stats:(id)arg5 ttlEventTracker:(id)arg6 alarmEngineMonitor:(id)arg7 travelEngine:(id)arg8 foundInAppsEventTracker:(id)arg9 suggestionsServiceLogger:(id)arg10 routeHypothesizerProvider:(id)arg11 timeToLeaveRefreshMonitor:(id)arg12 debugPreferences:(id)arg13 mailtoURLProvider:(id)arg14 ;
@end

