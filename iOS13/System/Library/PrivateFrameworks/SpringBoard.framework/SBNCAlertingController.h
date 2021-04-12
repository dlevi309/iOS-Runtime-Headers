/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/NCAlertingController.h>

@protocol SBStarkNotificationsAgent;
@class SBNCSoundController, SBNCScreenController, SBLockScreenManager, SBCommunicationPolicyManager, NCNotificationRequest, NSMutableSet, NSString;

@interface SBNCAlertingController : NSObject <NCAlertingController> {

	SBNCSoundController* _soundController;
	SBNCScreenController* _screenController;
	SBLockScreenManager* _lockScreenManager;
	id<SBStarkNotificationsAgent> _carNotificationsAgent;
	SBCommunicationPolicyManager* _communicationPolicyManager;
	NCNotificationRequest* _activeRequestWithRealerts;
	NSMutableSet* _realertTimers;

}

@property (nonatomic,retain) SBNCSoundController * soundController;                                   //@synthesize soundController=_soundController - In the implementation block
@property (nonatomic,retain) SBNCScreenController * screenController;                                 //@synthesize screenController=_screenController - In the implementation block
@property (nonatomic,retain) SBLockScreenManager * lockScreenManager;                                 //@synthesize lockScreenManager=_lockScreenManager - In the implementation block
@property (assign,nonatomic,__weak) id<SBStarkNotificationsAgent> carNotificationsAgent;              //@synthesize carNotificationsAgent=_carNotificationsAgent - In the implementation block
@property (nonatomic,retain) SBCommunicationPolicyManager * communicationPolicyManager;               //@synthesize communicationPolicyManager=_communicationPolicyManager - In the implementation block
@property (nonatomic,retain) NCNotificationRequest * activeRequestWithRealerts;                       //@synthesize activeRequestWithRealerts=_activeRequestWithRealerts - In the implementation block
@property (nonatomic,retain) NSMutableSet * realertTimers;                                            //@synthesize realertTimers=_realertTimers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(SBNCSoundController *)soundController;
-(void)setSoundController:(SBNCSoundController *)arg1 ;
-(BOOL)_shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg1 ;
-(void)killRealerts;
-(void)_lockStateChanged;
-(void)alertOnPostForNotificationRequest:(id)arg1 forRequestDestinations:(id)arg2 ;
-(void)killAlertsForNotificationRequest:(id)arg1 ;
-(void)alertOnPresentationForNotificationRequest:(id)arg1 presentingDestination:(id)arg2 ;
-(void)resetAutomaticLockStateForNotificationRequest:(id)arg1 ;
-(id<SBStarkNotificationsAgent>)carNotificationsAgent;
-(SBLockScreenManager *)lockScreenManager;
-(void)setLockScreenManager:(SBLockScreenManager *)arg1 ;
-(void)_hardwareButtonPressed:(id)arg1 ;
-(BOOL)_activeAlertDestinationsInRequestDestinations:(id)arg1 ;
-(BOOL)_shouldScreenTimeSuppressNotificationRequest:(id)arg1 ;
-(void)_alertNowForNotificationRequest:(id)arg1 ;
-(void)_scheduleRealertsForNotificationRequest:(id)arg1 ;
-(void)_alertNowForNotificationRequest:(id)arg1 presentingDestination:(id)arg2 ;
-(void)_killRealertsForNotificationRequest:(id)arg1 ;
-(NCNotificationRequest *)activeRequestWithRealerts;
-(NSMutableSet *)realertTimers;
-(void)setActiveRequestWithRealerts:(NCNotificationRequest *)arg1 ;
-(SBNCScreenController *)screenController;
-(BOOL)_isBundleIdentifierBlockedForScreenTimeExpiration:(id)arg1 ;
-(BOOL)_isBundleIdentifierBlockedForCommunicationPolicy:(id)arg1 ;
-(BOOL)_shouldRealert;
-(void)_realertTimerFired:(id)arg1 ;
-(id)initWithSoundController:(id)arg1 screenController:(id)arg2 lockScreenManager:(id)arg3 carNotificationsAgent:(id)arg4 communicationPolicyManager:(id)arg5 ;
-(void)_notificationCenterDidPresent;
-(void)setScreenController:(SBNCScreenController *)arg1 ;
-(void)setCarNotificationsAgent:(id<SBStarkNotificationsAgent>)arg1 ;
-(SBCommunicationPolicyManager *)communicationPolicyManager;
-(void)setCommunicationPolicyManager:(SBCommunicationPolicyManager *)arg1 ;
-(void)setRealertTimers:(NSMutableSet *)arg1 ;
@end

