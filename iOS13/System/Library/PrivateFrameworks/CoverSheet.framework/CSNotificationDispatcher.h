/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <libobjc.A.dylib/CSNotificationAlertingController.h>
#import <libobjc.A.dylib/SBNotificationDestination.h>
#import <libobjc.A.dylib/CSNotificationDispatcher.h>

@protocol CSNotificationDispatcher <CSCoverSheetParticipating>
@required
-(id)notificationSectionSettingsForDestination:(id)arg1;
-(void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5;
-(void)destination:(id)arg1 performAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(BOOL)arg4 withParameters:(id)arg5 completion:(/*^block*/id)arg6;
-(id)destination:(id)arg1 settingsForSectionIdentifier:(id)arg2;
-(void)destination:(id)arg1 clearNotificationRequestsInSections:(id)arg2;
-(void)destination:(id)arg1 clearNotificationRequests:(id)arg2;
-(void)destination:(id)arg1 clearNotificationRequestsFromIncomingSection:(id)arg2;
-(void)destination:(id)arg1 setAllowsNotifications:(BOOL)arg2 forSectionIdentifier:(id)arg3;
-(void)destination:(id)arg1 setDeliverQuietly:(BOOL)arg2 forSectionIdentifier:(id)arg3;
-(void)destination:(id)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forSectionIdentifier:(id)arg3;
-(void)destination:(id)arg1 clearNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;
-(id)alertingControllerForDestination:(id)arg1;

@end


@protocol CSNotificationDestination, CSCarPlayStatusProviding, NCNotificationDestinationDelegate;
@class SBNCAlertingController, CSBehavior, NSString, BSServiceConnectionEndpoint;

@interface CSNotificationDispatcher : NSObject <CSNotificationAlertingController, SBNotificationDestination, CSNotificationDispatcher> {

	BOOL _active;
	id<CSNotificationDestination> _modalDestination;
	id<CSNotificationDestination> _listDestination;
	CSBehavior* _activeBehavior;
	id<CSCarPlayStatusProviding> _carPlayStatusProvider;
	SBNCAlertingController* _alertingController;
	id<NCNotificationDestinationDelegate> _notificationDestinationDelegate;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                                            //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) CSBehavior * activeBehavior;                                            //@synthesize activeBehavior=_activeBehavior - In the implementation block
@property (assign,nonatomic,__weak) id<CSNotificationDestination> modalDestination;                  //@synthesize modalDestination=_modalDestination - In the implementation block
@property (assign,nonatomic,__weak) id<CSNotificationDestination> listDestination;                   //@synthesize listDestination=_listDestination - In the implementation block
@property (assign,nonatomic,__weak) id<CSCarPlayStatusProviding> carPlayStatusProvider;              //@synthesize carPlayStatusProvider=_carPlayStatusProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NCNotificationDestinationDelegate> delegate;                  //@synthesize notificationDestinationDelegate=_notificationDestinationDelegate - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) BSServiceConnectionEndpoint * endpoint; 
@property (assign,nonatomic,__weak) SBNCAlertingController * alertingController;                     //@synthesize alertingController=_alertingController - In the implementation block
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(id<NCNotificationDestinationDelegate>)delegate;
-(void)setDelegate:(id<NCNotificationDestinationDelegate>)arg1 ;
-(NSString *)identifier;
-(BOOL)isActive;
-(BSServiceConnectionEndpoint *)endpoint;
-(void)setActive:(BOOL)arg1 ;
-(long long)participantState;
-(void)setActiveBehavior:(CSBehavior *)arg1 ;
-(CSBehavior *)activeBehavior;
-(NSString *)coverSheetIdentifier;
-(void)postNotificationRequest:(id)arg1 ;
-(void)withdrawNotificationRequest:(id)arg1 ;
-(void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2 ;
-(BOOL)isNotificationContentExtensionVisible:(id)arg1 ;
-(BOOL)isPresentingNotificationInLongLook;
-(BOOL)dismissNotificationInLongLookAnimated:(BOOL)arg1 ;
-(id)notificationSectionSettingsForDestination:(id)arg1 ;
-(void)setModalDestination:(id<CSNotificationDestination>)arg1 ;
-(id<CSCarPlayStatusProviding>)carPlayStatusProvider;
-(void)setCarPlayStatusProvider:(id<CSCarPlayStatusProviding>)arg1 ;
-(void)setListDestination:(id<CSNotificationDestination>)arg1 ;
-(void)modifyNotificationRequest:(id)arg1 ;
-(void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)destination:(id)arg1 performAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(BOOL)arg4 withParameters:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)destination:(id)arg1 settingsForSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg1 clearNotificationRequestsInSections:(id)arg2 ;
-(void)destination:(id)arg1 clearNotificationRequests:(id)arg2 ;
-(void)destination:(id)arg1 clearNotificationRequestsFromIncomingSection:(id)arg2 ;
-(void)destination:(id)arg1 setAllowsNotifications:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(void)destination:(id)arg1 setDeliverQuietly:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(void)destination:(id)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(id<CSNotificationDestination>)modalDestination;
-(id<CSNotificationDestination>)listDestination;
-(void)_clearNotificationRequestsFromDashBoard:(id)arg1 ;
-(SBNCAlertingController *)alertingController;
-(void)stopAllRealerts;
-(BOOL)canReceiveNotificationRequest:(id)arg1 ;
-(BOOL)interceptsQueueRequest:(id)arg1 ;
-(void)setAlertingController:(SBNCAlertingController *)arg1 ;
-(void)destination:(id)arg1 clearNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4 ;
-(id)alertingControllerForDestination:(id)arg1 ;
@end

