/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source, CALNRouteHypothesizerProvider;
@class NSObject, NSMutableDictionary, PCPersistentTimer, CLLocationManager, EKTimedEventStorePurger, NSString;

@interface EKTravelEngine : NSObject <CLLocationManagerDelegate> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_source> _syncYieldTimer;
	BOOL _running;
	BOOL _needsRefresh;
	BOOL _databaseIsEncryptedAndUnreadable;
	BOOL _yieldingToSync;
	NSMutableDictionary* _eventExternalURLsToAgendaEntries;
	PCPersistentTimer* _periodicRefreshTimer;
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
+(id)requestedDarwinNotifications;
+(double)_travelAgendaTimeWindowInterval;
+(id)travelEligibleEvents:(id)arg1 fromStartDate:(id)arg2 untilEndDate:(id)arg3 ;
+(double)_periodicRefreshInterval;
+(double)requestRefreshTimeInterval;
+(id)travelEligibleEventsInEventStore:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)_refreshIfNeeded;
-(void)handleDarwinNotification:(id)arg1 ;
-(void)handleBTAJob:(id)arg1 named:(const char*)arg2 ;
-(BOOL)authorized;
-(void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)arg1 ;
-(void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)arg1 ;
-(void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)arg1 ;
-(void)requestHypothesisRefreshAtDate:(id)arg1 forEventWithExternalURL:(id)arg2 ;
-(void)ceaseMonitoringForEventWithExternalURL:(id)arg1 ;
-(id<CALNRouteHypothesizerProvider>)routeHypothesizerProvider;
-(BOOL)_isProtectedDataAvailable;
-(void)_stopInternal;
-(void)_registerForNotificationObservation;
-(void)_installPeriodicRefreshTimer;
-(void)_installLocationManager;
-(void)_uninstallLocationManager;
-(void)_unregisterAllAgendaEntries;
-(void)_unregisterForNotificationObservation;
-(void)_uninstallSyncYieldTimer;
-(void)_uninstallPeriodicRefreshTimer;
-(void)_calDatabaseChangedNotificationReceived;
-(void)_calSyncClientBeginningMultiSaveNotificationReceived;
-(void)_calSyncClientFinishedMultiSaveNotificationReceived;
-(void)_enableTravelAdvisoriesForAutomaticBehaviorNotificationReceived;
-(void)_significantTimeChangeNotificationReceived;
-(void)_eventKitFeatureSetChanged;
-(void)_updateDatabaseEncryptionState;
-(void)_suggestEventLocationsSettingChanged;
-(id)btaJobName;
-(void)_periodicRefreshTimerFired:(id)arg1 ;
-(BOOL)authorizedInternal;
-(void)_sendFeedbackForPostingNotificationForEventWithExternalURL:(id)arg1 feedback:(/*^block*/id)arg2 ;
-(BOOL)isLocationManagerStatusAuthorized:(int)arg1 ;
-(void)setAuthorizedInternal:(BOOL)arg1 ;
-(id)authorizationChangedBlock;
-(void)_installSyncYieldTimer;
-(BOOL)_authorizedToAcquireLocation;
-(void)_trimAgendaEntriesBeforeDate:(id)arg1 andAfterDate:(id)arg2 ;
-(id)initWithRouteHypothesizerProvider:(id)arg1 ;
-(id)adviceBlock;
-(id)eventSignificantlyChangedBlock;
-(void)setAdviceBlock:(id)arg1 ;
-(void)setAuthorizationChangedBlock:(id)arg1 ;
-(void)setEventSignificantlyChangedBlock:(id)arg1 ;
@end

