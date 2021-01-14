/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <CalendarNotification/CalendarNotification-Structs.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDate, NSTimer, NSDateFormatter, CLLocationManager, RTRoutineManager, NSMutableDictionary, EKTimedEventStorePurger, NSString;

@interface _EKAlarmEngine : NSObject <CLLocationManagerDelegate> {

	int _lastDBSequence;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSDate* _nextFireDate;
	NSDate* _lastCheckpoint;
	BOOL _populating;
	NSDate* _populateStart;
	NSTimer* _syncTimer;
	BOOL _pendingChanges;
	BOOL _needsAlarmTablePopulation;
	BOOL _fencesNeedAdjusted;
	NSDateFormatter* _dateFormatter;
	CLLocationManager* _locationManager;
	RTRoutineManager* _routineManager;
	NSDate* _tomorrow;
	BOOL _includeRefiringAlarmsForInitialReschedule;
	BOOL _refirePastAlarmsForInitialUpdate;
	NSMutableDictionary* _monitoredRegions;
	BOOL _shouldUpdateWithForceForAlarmTable;
	BOOL _shouldUpdateWithForceForFences;
	long long _vehicleConnectionState;
	EKTimedEventStorePurger* _timedEventStorePurger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_publisherBulletinIDForReminder:(id)arg1 ;
+(id)_publisherBulletinIDForTask:(void*)arg1 ;
+(BOOL)remindersNotificationsEnabled;
+(id)_publisherBulletinIDForTaskUniqueIdentifier:(id)arg1 ;
+(id)requestedDarwinNotifications;
+(void)logUnexpectedRemindersCall:(const char*)arg1 ;
-(id)_dateFormatter;
-(void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3 ;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2 ;
-(void)didRegisterForAlarms;
-(void)_killSyncTimer;
-(BOOL)_shouldUseCoreRoutine;
-(BOOL)_shouldAdjustFencesWithStatus:(int)arg1 ;
-(id)init;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_timeDidChangeSignificantly;
-(void)start;
-(void)_databaseChanged;
-(void)receivedAlarmNamed:(id)arg1 ;
-(void)_proximityAlertTriggered:(id)arg1 entered:(BOOL)arg2 ;
-(void)_calendarNotificationSettingChanged;
-(void)_setupLocationManager;
-(void)_rescheduleTimer;
-(void)_storeAlarms:(id)arg1 nextScheduleLimit:(id)arg2 eventStore:(id)arg3 ;
-(void)_simulatedOffsetChanged:(id)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(id)_insertSideAlarmObjectForVehicleTriggerAlarm:(id)arg1 forReminder:(id)arg2 withDelay:(double)arg3 eventStore:(id)arg4 context:(id)arg5 ;
-(void)_syncDidEnd;
-(id)_stringForAuthorizationStatus:(int)arg1 ;
-(void)_populateFinished;
-(BOOL)_populateAlarmTable:(id)arg1 ;
-(void)_killTimer;
-(void)_notifyAlarmsFired:(id)arg1 ;
-(id)_alertInfoAlarmIDFromSideAlarm:(id)arg1 ;
-(void)_timeZoneChanged:(id)arg1 ;
-(void)_locationDaemonDidLaunch;
-(void)_timerFired;
-(id)_debugStringForVehicleConnectionState:(long long)arg1 ;
-(void)_motionUpdatedWithConnectionState:(long long)arg1 ;
-(void)_installTimerWithFireDate:(id)arg1 ;
-(void)_vehicleTriggerFired:(BOOL)arg1 ;
-(void)handleDarwinNotification:(id)arg1 ;
-(void)_protectedDataDidBecomeAvailable;
-(void)_adjustFences:(id)arg1 ;
-(void)_syncDidStart;
-(void)locationManager:(id)arg1 didEnterRegion:(id)arg2 ;
-(void)_updateRegionMonitoringForRegion:(id)arg1 withLocationOfInterest:(id)arg2 forLocation:(CLLocationCoordinate2D)arg3 ;
-(id)_eventStore;
-(BOOL)_haveAlarmsChanged:(id)arg1 ;
-(void)_resetSyncTimer;
-(BOOL)_isAlarmAcknowledgedWithAcknowledgedDate:(id)arg1 fireDate:(id)arg2 ;
-(void)_removeAllFences;
-(id)_alertInfoAlarmIDFromEKAlarm:(id)arg1 ;
-(void)_removeAllFencesSynch;
-(BOOL)_isDataProtected;
-(BOOL)_allowVehicleTrigger;
-(void)_updateWithForceForAlarmTable:(BOOL)arg1 forFences:(BOOL)arg2 ;
-(void)dealloc;
-(BOOL)_shouldRefireAlarms;
-(void)_syncTimerFired:(id)arg1 ;
-(BOOL)_allowConservativeEntry;
-(void)_removeStaleRefiringAlarmsWithEventStore:(id)arg1 ;
@end

