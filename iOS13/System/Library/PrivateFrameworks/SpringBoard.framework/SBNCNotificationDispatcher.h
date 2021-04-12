/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CSCoverSheetViewControllerObserver.h>
#import <libobjc.A.dylib/SBFNotificationExtensionVisibilityProviding.h>

@protocol SBNotificationDestination;
@class SBNotificationBannerDestination, SBWalletNotificationSource, SBNotificationCenterDestination, NCNotificationDispatcher, SBNCNotificationDispatcherDelegate, NCBulletinNotificationSource, SBUserAlertNotificationSource, SBLockScreenManager, SBLockStateAggregator, SBStarkNotificationSceneComponentManager, SBNotificationLegacyCarDestination, SBCommunicationPolicyManager, SBNCAlertingController, NSString;

@interface SBNCNotificationDispatcher : NSObject <CSCoverSheetViewControllerObserver, SBFNotificationExtensionVisibilityProviding> {

	SBNotificationBannerDestination* _bannerDestination;
	id<SBNotificationDestination> _dashBoardDestination;
	SBWalletNotificationSource* _walletNotificationSource;
	SBNotificationCenterDestination* _notificationCenterDestination;
	NCNotificationDispatcher* _dispatcher;
	SBNCNotificationDispatcherDelegate* _dispatcherDelegate;
	NCBulletinNotificationSource* _notificationSource;
	SBUserAlertNotificationSource* _userNotificationAlertSource;
	SBLockScreenManager* _lockScreenManager;
	SBLockStateAggregator* _lockStateAggregator;
	SBStarkNotificationSceneComponentManager* _starkComponentManager;
	SBNotificationLegacyCarDestination* _carDestination;
	SBCommunicationPolicyManager* _communicationPolicyManager;
	SBNCAlertingController* _alertingController;

}

@property (nonatomic,retain) NCNotificationDispatcher * dispatcher;                                          //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,retain) SBNCNotificationDispatcherDelegate * dispatcherDelegate;                        //@synthesize dispatcherDelegate=_dispatcherDelegate - In the implementation block
@property (nonatomic,retain) NCBulletinNotificationSource * notificationSource;                              //@synthesize notificationSource=_notificationSource - In the implementation block
@property (nonatomic,retain) SBUserAlertNotificationSource * userNotificationAlertSource;                    //@synthesize userNotificationAlertSource=_userNotificationAlertSource - In the implementation block
@property (nonatomic,retain) SBLockScreenManager * lockScreenManager;                                        //@synthesize lockScreenManager=_lockScreenManager - In the implementation block
@property (nonatomic,retain) SBLockStateAggregator * lockStateAggregator;                                    //@synthesize lockStateAggregator=_lockStateAggregator - In the implementation block
@property (nonatomic,retain) SBStarkNotificationSceneComponentManager * starkComponentManager;               //@synthesize starkComponentManager=_starkComponentManager - In the implementation block
@property (nonatomic,retain) SBNotificationLegacyCarDestination * carDestination;                            //@synthesize carDestination=_carDestination - In the implementation block
@property (nonatomic,retain) SBCommunicationPolicyManager * communicationPolicyManager;                      //@synthesize communicationPolicyManager=_communicationPolicyManager - In the implementation block
@property (nonatomic,retain) SBNCAlertingController * alertingController;                                    //@synthesize alertingController=_alertingController - In the implementation block
@property (nonatomic,readonly) SBNotificationBannerDestination * bannerDestination;                          //@synthesize bannerDestination=_bannerDestination - In the implementation block
@property (nonatomic,readonly) id<SBNotificationDestination> dashBoardDestination;                           //@synthesize dashBoardDestination=_dashBoardDestination - In the implementation block
@property (nonatomic,readonly) SBWalletNotificationSource * walletNotificationSource;                        //@synthesize walletNotificationSource=_walletNotificationSource - In the implementation block
@property (nonatomic,readonly) SBNotificationCenterDestination * notificationCenterDestination;              //@synthesize notificationCenterDestination=_notificationCenterDestination - In the implementation block
@property (nonatomic,readonly) id<SBStarkNotificationsAgent> carNotificationsAgent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setNotificationSource:(NCBulletinNotificationSource *)arg1 ;
-(NCNotificationDispatcher *)dispatcher;
-(void)setDispatcher:(NCNotificationDispatcher *)arg1 ;
-(NCBulletinNotificationSource *)notificationSource;
-(BOOL)isNotificationContentExtensionVisible:(id)arg1 ;
-(void)coverSheetViewController:(id)arg1 didChangeActiveBehavior:(id)arg2 ;
-(SBNCAlertingController *)alertingController;
-(void)setAlertingController:(SBNCAlertingController *)arg1 ;
-(SBWalletNotificationSource *)walletNotificationSource;
-(SBNotificationBannerDestination *)bannerDestination;
-(id<SBStarkNotificationsAgent>)carNotificationsAgent;
-(SBLockScreenManager *)lockScreenManager;
-(void)setLockScreenManager:(SBLockScreenManager *)arg1 ;
-(void)_updateActiveDestinations;
-(SBCommunicationPolicyManager *)communicationPolicyManager;
-(void)setCommunicationPolicyManager:(SBCommunicationPolicyManager *)arg1 ;
-(SBLockStateAggregator *)lockStateAggregator;
-(void)setLockStateAggregator:(SBLockStateAggregator *)arg1 ;
-(void)_setupNewDestinationsForDispatcher:(id)arg1 ;
-(void)_aggregateLockStateDidChange;
-(void)_carNotificationActiveConfigurationDidChange;
-(BOOL)_lockScreenWantsBanners;
-(id<SBNotificationDestination>)dashBoardDestination;
-(SBNotificationLegacyCarDestination *)carDestination;
-(SBNotificationCenterDestination *)notificationCenterDestination;
-(SBNCNotificationDispatcherDelegate *)dispatcherDelegate;
-(void)setDispatcherDelegate:(SBNCNotificationDispatcherDelegate *)arg1 ;
-(SBUserAlertNotificationSource *)userNotificationAlertSource;
-(void)setUserNotificationAlertSource:(SBUserAlertNotificationSource *)arg1 ;
-(SBStarkNotificationSceneComponentManager *)starkComponentManager;
-(void)setStarkComponentManager:(SBStarkNotificationSceneComponentManager *)arg1 ;
-(void)setCarDestination:(SBNotificationLegacyCarDestination *)arg1 ;
@end

