/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CSCoverSheetViewControllerObserver.h>
#import <libobjc.A.dylib/SBFNotificationExtensionVisibilityProviding.h>

@protocol SBNotificationDestination, NCNotificationAlertDestination;
@class SBNotificationBannerDestination, SBWalletNotificationSource, SBNotificationCenterDestination, NCNotificationDispatcher, SBNCNotificationDispatcherDelegate, NCBulletinNotificationSource, SBUserAlertNotificationSource, SBLockScreenManager, SBLockStateAggregator, SBCommunicationPolicyManager, SBNCAlertingController, BSServiceConnectionEndpoint, NSString;

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
	id<NCNotificationAlertDestination> _carDestination;
	SBCommunicationPolicyManager* _communicationPolicyManager;
	SBNCAlertingController* _alertingController;

}

@property (nonatomic,retain) NCNotificationDispatcher * dispatcher;                                          //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,retain) SBNCNotificationDispatcherDelegate * dispatcherDelegate;                        //@synthesize dispatcherDelegate=_dispatcherDelegate - In the implementation block
@property (nonatomic,retain) NCBulletinNotificationSource * notificationSource;                              //@synthesize notificationSource=_notificationSource - In the implementation block
@property (nonatomic,retain) SBUserAlertNotificationSource * userNotificationAlertSource;                    //@synthesize userNotificationAlertSource=_userNotificationAlertSource - In the implementation block
@property (nonatomic,retain) SBLockScreenManager * lockScreenManager;                                        //@synthesize lockScreenManager=_lockScreenManager - In the implementation block
@property (nonatomic,retain) SBLockStateAggregator * lockStateAggregator;                                    //@synthesize lockStateAggregator=_lockStateAggregator - In the implementation block
@property (nonatomic,retain) id<NCNotificationAlertDestination> carDestination;                              //@synthesize carDestination=_carDestination - In the implementation block
@property (nonatomic,retain) SBCommunicationPolicyManager * communicationPolicyManager;                      //@synthesize communicationPolicyManager=_communicationPolicyManager - In the implementation block
@property (nonatomic,retain) SBNCAlertingController * alertingController;                                    //@synthesize alertingController=_alertingController - In the implementation block
@property (nonatomic,readonly) SBNotificationBannerDestination * bannerDestination;                          //@synthesize bannerDestination=_bannerDestination - In the implementation block
@property (nonatomic,readonly) id<SBNotificationDestination> dashBoardDestination;                           //@synthesize dashBoardDestination=_dashBoardDestination - In the implementation block
@property (nonatomic,readonly) SBWalletNotificationSource * walletNotificationSource;                        //@synthesize walletNotificationSource=_walletNotificationSource - In the implementation block
@property (nonatomic,readonly) SBNotificationCenterDestination * notificationCenterDestination;              //@synthesize notificationCenterDestination=_notificationCenterDestination - In the implementation block
@property (nonatomic,readonly) BOOL isCarDestinationActive; 
@property (nonatomic,readonly) BSServiceConnectionEndpoint * carOpenServiceEndpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBUserAlertNotificationSource *)userNotificationAlertSource;
-(SBLockScreenManager *)lockScreenManager;
-(void)setAlertingController:(SBNCAlertingController *)arg1 ;
-(void)setLockScreenManager:(SBLockScreenManager *)arg1 ;
-(SBNotificationBannerDestination *)bannerDestination;
-(NCNotificationDispatcher *)dispatcher;
-(void)setDispatcher:(NCNotificationDispatcher *)arg1 ;
-(SBNCAlertingController *)alertingController;
-(id)init;
-(BOOL)isNotificationContentExtensionVisible:(id)arg1 ;
-(SBNCNotificationDispatcherDelegate *)dispatcherDelegate;
-(void)setCommunicationPolicyManager:(SBCommunicationPolicyManager *)arg1 ;
-(void)_setupNewDestinationsForDispatcher:(id)arg1 ;
-(BSServiceConnectionEndpoint *)carOpenServiceEndpoint;
-(void)coverSheetViewController:(id)arg1 didChangeActiveBehavior:(id)arg2 ;
-(void)setDispatcherDelegate:(SBNCNotificationDispatcherDelegate *)arg1 ;
-(id<SBNotificationDestination>)dashBoardDestination;
-(id<NCNotificationAlertDestination>)carDestination;
-(NCBulletinNotificationSource *)notificationSource;
-(void)setUserNotificationAlertSource:(SBUserAlertNotificationSource *)arg1 ;
-(SBCommunicationPolicyManager *)communicationPolicyManager;
-(SBNotificationCenterDestination *)notificationCenterDestination;
-(void)setNotificationSource:(NCBulletinNotificationSource *)arg1 ;
-(BOOL)isCarDestinationActive;
-(void)_updateActiveDestinations;
-(void)setCarDestination:(id<NCNotificationAlertDestination>)arg1 ;
-(SBLockStateAggregator *)lockStateAggregator;
-(BOOL)_lockScreenWantsBanners;
-(id)keyWindowForScreen:(id)arg1 ;
-(void)_aggregateLockStateDidChange;
-(void)_carPlayDestinationAvailabilityDidChange;
-(void)setLockStateAggregator:(SBLockStateAggregator *)arg1 ;
-(SBWalletNotificationSource *)walletNotificationSource;
@end

