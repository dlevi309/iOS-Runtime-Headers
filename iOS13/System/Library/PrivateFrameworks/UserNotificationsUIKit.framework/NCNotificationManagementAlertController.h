/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UIKitCore/UIAlertController.h>
#import <libobjc.A.dylib/NCNotificationManagementController.h>

@protocol NCNotificationManagementControllerSettingsDelegate;
@class NCNotificationRequest, NSString;

@interface NCNotificationManagementAlertController : UIAlertController <NCNotificationManagementController> {

	id<NCNotificationManagementControllerSettingsDelegate> _settingsDelegate;
	NCNotificationRequest* _request;

}

@property (nonatomic,retain) NCNotificationRequest * request;                                                             //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NCNotificationManagementControllerSettingsDelegate> settingsDelegate;              //@synthesize settingsDelegate=_settingsDelegate - In the implementation block
-(void)setRequest:(NCNotificationRequest *)arg1 ;
-(NCNotificationRequest *)request;
-(void)viewDidLoad;
-(BOOL)shouldAutorotate;
-(id)initWithRequest:(id)arg1 withPresentingView:(id)arg2 settingsDelegate:(id)arg3 ;
-(void)setSettingsDelegate:(id<NCNotificationManagementControllerSettingsDelegate>)arg1 ;
-(id<NCNotificationManagementControllerSettingsDelegate>)settingsDelegate;
-(void)_configureView;
@end

