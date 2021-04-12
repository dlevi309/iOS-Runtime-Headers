/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Notification/AAAccountNotificationPlugin.bundle/AAAccountNotificationPlugin
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@protocol OS_dispatch_queue;
@class NSObject, AAFollowUpController, NSString;

@interface AAAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	NSObject*<OS_dispatch_queue> _backgroundQueue;
	AAFollowUpController* _followUpController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_secondaryAccountTypes;
-(id)init;
-(BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2 ;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)addFMIPChildAccountToAccount:(id)arg1 inStore:(id)arg2 ;
-(void)addFMFChildAccountToAccount:(id)arg1 inStore:(id)arg2 ;
-(BOOL)updateFMFChildAccountWithAccount:(id)arg1 inStore:(id)arg2 ;
-(BOOL)updateFMIPChildAccountWithAccount:(id)arg1 inStore:(id)arg2 ;
-(void)_notifyIDSProxyOfAppleAccount:(id)arg1 store:(id)arg2 withCommand:(id)arg3 ;
-(void)_dismissStartUsingFollowUp;
-(BOOL)_shouldSendAccountChangeOverIDSProxy:(id)arg1 ;
-(id)_saveOptionsForProxiedDeviceAuth;
-(void)_showRedirectToBridgeAlertForAccount:(id)arg1 ;
@end

