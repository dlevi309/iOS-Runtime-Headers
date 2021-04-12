/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <libobjc.A.dylib/NCNotificationManagementControllerSettingsDelegate.h>

@protocol NCNotificationManagementViewPresenterDelegate;
@class UIAlertController, NSString;

@interface NCNotificationManagementViewPresenter : NSObject <NCNotificationManagementControllerSettingsDelegate> {

	id<NCNotificationManagementViewPresenterDelegate> _delegate;
	UIAlertController* _notificationManagementAlertViewController;

}

@property (nonatomic,retain) UIAlertController * notificationManagementAlertViewController;                  //@synthesize notificationManagementAlertViewController=_notificationManagementAlertViewController - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationManagementViewPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NCNotificationManagementViewPresenterDelegate>)delegate;
-(void)setDelegate:(id<NCNotificationManagementViewPresenterDelegate>)arg1 ;
-(void)setNotificationManagementAlertViewController:(UIAlertController *)arg1 ;
-(id)notificationManagementController:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2 ;
-(void)notificationManagementController:(id)arg1 setAllowsNotifications:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 ;
-(void)notificationManagementController:(id)arg1 setDeliverQuietly:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 ;
-(void)notificationManagementController:(id)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 ;
-(void)notificationManagementControllerDidDismissManagementView:(id)arg1 ;
-(void)presentNotificationManagementViewType:(unsigned long long)arg1 forNotificationRequest:(id)arg2 withPresentingViewController:(id)arg3 withPresentingView:(id)arg4 ;
-(BOOL)dismissManagementViewIfPresentedAnimated:(BOOL)arg1 ;
-(UIAlertController *)notificationManagementAlertViewController;
@end

