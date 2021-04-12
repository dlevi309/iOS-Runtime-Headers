/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/NCAlertingController.h>

@class SBNCSoundController, SBNCScreenController, SBLockScreenManager, SBCommunicationPolicyManager, NCNotificationRequest, NSMutableSet, NSString;

@interface SBNCAlertingController : NSObject <NCAlertingController> {

	SBNCSoundController* _soundController;
	SBNCScreenController* _screenController;
	SBLockScreenManager* _lockScreenManager;
	SBCommunicationPolicyManager* _communicationPolicyManager;
	NCNotificationRequest* _activeRequestWithRealerts;
	NSMutableSet* _realertTimers;

}

@property (nonatomic,retain) SBNCSoundController * soundController;                                  //@synthesize soundController=_soundController - In the implementation block
@property (nonatomic,retain) SBNCScreenController * screenController;                                //@synthesize screenController=_screenController - In the implementation block
@property (nonatomic,retain) SBLockScreenManager * lockScreenManager;                                //@synthesize lockScreenManager=_lockScreenManager - In the implementation block
@property (nonatomic,retain) SBCommunicationPolicyManager * communicationPolicyManager;              //@synthesize communicationPolicyManager=_communicationPolicyManager - In the implementation block
@property (nonatomic,retain) NCNotificationRequest * activeRequestWithRealerts;                      //@synthesize activeRequestWithRealerts=_activeRequestWithRealerts - In the implementation block
@property (nonatomic,retain) NSMutableSet * realertTimers;                                           //@synthesize realertTimers=_realertTimers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBLockScreenManager *)lockScreenManager;
-(void)_lockStateChanged;
-(void)alertOnPresentationForNotificationRequest:(id)arg1 presentingDestination:(id)arg2 ;
-(BOOL)_shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg1 ;
-(void)setLockScreenManager:(SBLockScreenManager *)arg1 ;
-(SBNCScreenController *)screenController;
-(id)init;
-(void)setRealertTimers:(NSMutableSet *)arg1 ;
-(void)_killRealertsForNotificationRequest:(id)arg1 ;
-(id)initWithSoundController:(id)arg1 screenController:(id)arg2 lockScreenManager:(id)arg3 communicationPolicyManager:(id)arg4 ;
-(void)_realertTimerFired:(id)arg1 ;
-(void)alertOnPostForNotificationRequest:(id)arg1 forRequestDestinations:(id)arg2 ;
-(void)setCommunicationPolicyManager:(SBCommunicationPolicyManager *)arg1 ;
-(void)setScreenController:(SBNCScreenController *)arg1 ;
-(BOOL)_shouldRealert;
-(SBNCSoundController *)soundController;
-(void)_hardwareButtonPressed:(id)arg1 ;
-(void)killAlertsForNotificationRequest:(id)arg1 ;
-(NSMutableSet *)realertTimers;
-(SBCommunicationPolicyManager *)communicationPolicyManager;
-(BOOL)_isBundleIdentifierBlockedForCommunicationPolicy:(id)arg1 ;
-(void)_notificationCenterDidPresent;
-(void)_alertNowForNotificationRequest:(id)arg1 presentingDestination:(id)arg2 ;
-(void)_alertNowForNotificationRequest:(id)arg1 ;
-(void)resetAutomaticLockStateForNotificationRequest:(id)arg1 ;
-(void)_scheduleRealertsForNotificationRequest:(id)arg1 ;
-(BOOL)_isBundleIdentifierBlockedForScreenTimeExpiration:(id)arg1 ;
-(BOOL)_activeAlertDestinationsInRequestDestinations:(id)arg1 ;
-(void)setSoundController:(SBNCSoundController *)arg1 ;
-(void)setActiveRequestWithRealerts:(NCNotificationRequest *)arg1 ;
-(NCNotificationRequest *)activeRequestWithRealerts;
-(void)killRealerts;
-(BOOL)_shouldScreenTimeSuppressNotificationRequest:(id)arg1 ;
@end

