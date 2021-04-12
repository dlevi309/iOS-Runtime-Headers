/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NCNotificationManagementControllerSettingsDelegate.h>
#import <libobjc.A.dylib/NCNotificationManagementViewPresenterDelegate.h>
#import <libobjc.A.dylib/NCNotificationManagementController.h>

@protocol NCNotificationManagementControllerSettingsDelegate;
@class NCNotificationManagementView, NCNotificationRequest, NSURL, NCNotificationManagementViewPresenter, NSString;

@interface NCNotificationManagementViewController : UIViewController <NCNotificationManagementControllerSettingsDelegate, NCNotificationManagementViewPresenterDelegate, NCNotificationManagementController> {

	NCNotificationManagementView* _platterView;
	NCNotificationRequest* _request;
	BOOL _isDeliveredQuietly;
	NSURL* _settingsURL;
	NCNotificationManagementViewPresenter* _viewPresenter;
	id<NCNotificationManagementControllerSettingsDelegate> _settingsDelegate;

}

@property (nonatomic,retain) NCNotificationRequest * request;                                                             //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSURL * settingsURL;                                                                         //@synthesize settingsURL=_settingsURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NCNotificationManagementControllerSettingsDelegate> settingsDelegate;              //@synthesize settingsDelegate=_settingsDelegate - In the implementation block
+(id)notificationManagementAlertControllerForNotificationRequest:(id)arg1 withPresentingView:(id)arg2 settingsDelegate:(id)arg3 ;
-(void)setRequest:(NCNotificationRequest *)arg1 ;
-(NCNotificationRequest *)request;
-(void)loadView;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(id)initWithRequest:(id)arg1 ;
-(NSURL *)settingsURL;
-(id)_sectionSettingsForSectionIdentifier:(id)arg1 ;
-(id)notificationManagementViewPresenter:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2 ;
-(void)notificationManagementViewPresenter:(id)arg1 setAllowsNotifications:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 ;
-(void)notificationManagementViewPresenter:(id)arg1 setDeliverQuietly:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 ;
-(void)notificationManagementViewPresenter:(id)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 ;
-(id)notificationManagementController:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2 ;
-(void)notificationManagementController:(id)arg1 setAllowsNotifications:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 ;
-(void)notificationManagementController:(id)arg1 setDeliverQuietly:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 ;
-(void)notificationManagementController:(id)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 ;
-(void)setSettingsDelegate:(id<NCNotificationManagementControllerSettingsDelegate>)arg1 ;
-(id<NCNotificationManagementControllerSettingsDelegate>)settingsDelegate;
-(id)_newManagementView;
-(void)_deliveryButtonTapped:(id)arg1 ;
-(void)_onOffToggleButtonTapped:(id)arg1 ;
-(void)_setAllowsNotifications:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)_setDeliverQuietly:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)_setAllowsCriticalAlerts:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)setSettingsURL:(NSURL *)arg1 ;
@end

