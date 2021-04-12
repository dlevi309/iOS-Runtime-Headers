/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbKit.framework/DoNotDisturbKit
*/

#import <libobjc.A.dylib/DNDStateUpdateListener.h>
#import <libobjc.A.dylib/DNDSettingsUpdateListener.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, DNDModeAssertionService, DNDStateService, DNDSettingsService, DNDStateModeAssertionMetadata, DNDState, DNDBehaviorSettings, DNDBypassSettings, UNUserNotificationCenter, NSString;

@interface DNDNotificationsService : NSObject <DNDStateUpdateListener, DNDSettingsUpdateListener, UNUserNotificationCenterDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	DNDModeAssertionService* _notificationsAssertionService;
	DNDStateService* _notificationsStateService;
	DNDSettingsService* _notificationsSettingsService;
	BOOL _doNotDisturbActive;
	BOOL _basicActive;
	BOOL _sleepActive;
	BOOL _bedtimeActive;
	BOOL _drivingActive;
	BOOL _workoutActive;
	DNDStateModeAssertionMetadata* _longestAssertionMetadata;
	DNDState* _currentState;
	DNDBehaviorSettings* _currentBehaviorSettings;
	DNDBypassSettings* _currentPhoneCallBypassSettings;
	UNUserNotificationCenter* _notificationsCenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)resume;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)initWithClientIdentifier:(id)arg1 ;
-(void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
-(void)settingsService:(id)arg1 didReceiveUpdatedBehaviorSettings:(id)arg2 ;
-(void)settingsService:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2 ;
-(void)_handleSignificantTimeChange;
-(void)_queue_postOrRemoveNotificationWithUpdatedBehavior:(BOOL)arg1 significantTimeChange:(BOOL)arg2 ;
@end

