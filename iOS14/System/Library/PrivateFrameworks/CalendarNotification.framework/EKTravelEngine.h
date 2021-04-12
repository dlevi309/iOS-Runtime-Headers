/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source, CALNRouteHypothesizerProvider;
@class NSObject, NSMutableDictionary, CLLocationManager, EKTimedEventStorePurger, NSString;

@interface EKTravelEngine : NSObject <CLLocationManagerDelegate> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_source> _syncYieldTimer;
	BOOL _running;
	BOOL _needsRefresh;
	BOOL _databaseIsEncryptedAndUnreadable;
	BOOL _yieldingToSync;
	NSMutableDictionary* _eventExternalURLsToAgendaEntries;
	CLLocationManager* _locationManager;
	EKTimedEventStorePurger* _timedEventStorePurger;
	BOOL _authorizedInternal;
	/*^block*/id _adviceBlock;
	/*^block*/id _authorizationChangedBlock;
	/*^block*/id _eventSignificantlyChangedBlock;
	id<CALNRouteHypothesizerProvider> _routeHypothesizerProvider;

}

@property (nonatomic,readonly) id<CALNRouteHypothesizerProvider> routeHypothesizerProvider;              //@synthesize routeHypothesizerProvider=_routeHypothesizerProvider - In the implementation block
@property (assign,nonatomic) BOOL authorizedInternal;                                                    //@synthesize authorizedInternal=_authorizedInternal - In the implementation block
@property (nonatomic,copy) id adviceBlock;                                                               //@synthesize adviceBlock=_adviceBlock - In the implementation block
@property (nonatomic,readonly) BOOL authorized; 
@property (nonatomic,copy) id authorizationChangedBlock;                                                 //@synthesize authorizationChangedBlock=_authorizationChangedBlock - In the implementation block
@property (nonatomic,copy) id eventSignificantlyChangedBlock;                                            //@synthesize eventSignificantlyChangedBlock=_eventSignificantlyChangedBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)_travelAgendaTimeWindowInterval;
+(id)travelEligibleEventsInEventStore:(id)arg1 ;
+(double)_periodicRefreshInterval;
+(id)travelEligibleEvents:(id)arg1 fromStartDate:(id)arg2 untilEndDate:(id)arg3 ;
+(double)requestRefreshTimeInterval;
+(id)requestedDarwinNotifications;
-(void)_enableTravelAdvisoriesForAutomaticBehaviorNotificationReceived;
-(void)ceaseMonitoringForEventWithExternalURL:(id)arg1 ;
-(void)setAuthorizationChangedBlock:(id)arg1 ;
-(void)setEventSignificantlyChangedBlock:(id)arg1 ;
-(void)_stopInternal;
-(void)_uninstallPeriodicRefreshTimer;
-(void)start;
-(void)_refreshIfNeeded;
-(void)receivedAlarmNamed:(id)arg1 ;
-(id)authorizationChangedBlock;
-(BOOL)_authorizedToAcquireLocation;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(BOOL)authorizedInternal;
-(void)_installPeriodicRefreshTimer;
-(void)_significantTimeChangeNotificationReceived;
-(void)_updateDatabaseEncryptionState;
-(void)stop;
-(BOOL)authorized;
-(void)setAuthorizedInternal:(BOOL)arg1 ;
-(void)_uninstallLocationManager;
-(id)eventSignificantlyChangedBlock;
-(BOOL)_isProtectedDataAvailable;
-(void)_unregisterAllAgendaEntries;
-(void)_calSyncClientFinishedMultiSaveNotificationReceived;
-(void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)arg1 ;
-(void)_suggestEventLocationsSettingChanged;
-(id)initWithRouteHypothesizerProvider:(id)arg1 ;
-(BOOL)isLocationManagerStatusAuthorized:(int)arg1 ;
-(void)handleDarwinNotification:(id)arg1 ;
-(void)_periodicRefreshTimerFired;
-(void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)arg1 ;
-(void)_installLocationManager;
-(id)alarmName;
-(void)setAdviceBlock:(id)arg1 ;
-(void)_calSyncClientBeginningMultiSaveNotificationReceived;
-(id)_eventStore;
-(void)_eventKitFeatureSetChanged;
-(id<CALNRouteHypothesizerProvider>)routeHypothesizerProvider;
-(void)_trimAgendaEntriesBeforeDate:(id)arg1 andAfterDate:(id)arg2 ;
-(void)_sendFeedbackForPostingNotificationForEventWithExternalURL:(id)arg1 feedback:(/*^block*/id)arg2 ;
-(void)_uninstallSyncYieldTimer;
-(void)_installSyncYieldTimer;
-(void)_calDatabaseChangedNotificationReceived;
-(void)requestHypothesisRefreshAtDate:(id)arg1 forEventWithExternalURL:(id)arg2 ;
-(void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)arg1 ;
-(void)dealloc;
-(id)adviceBlock;
@end

