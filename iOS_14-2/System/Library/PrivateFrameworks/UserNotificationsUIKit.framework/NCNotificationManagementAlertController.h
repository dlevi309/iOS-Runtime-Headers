/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<NCNotificationManagementControllerSettingsDelegate> settingsDelegate;              //@synthesize settingsDelegate=_settingsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRequest:(NCNotificationRequest *)arg1 ;
-(NCNotificationRequest *)request;
-(BOOL)shouldAutorotate;
-(void)viewDidLoad;
-(id)initWithRequest:(id)arg1 withPresentingView:(id)arg2 settingsDelegate:(id)arg3 ;
-(void)setSettingsDelegate:(id<NCNotificationManagementControllerSettingsDelegate>)arg1 ;
-(id<NCNotificationManagementControllerSettingsDelegate>)settingsDelegate;
-(void)_configureView;
@end

