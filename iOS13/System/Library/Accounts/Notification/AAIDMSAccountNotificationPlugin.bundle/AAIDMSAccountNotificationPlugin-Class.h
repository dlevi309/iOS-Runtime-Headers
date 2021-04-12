/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Notification/AAIDMSAccountNotificationPlugin.bundle/AAIDMSAccountNotificationPlugin
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@class NSString;

@interface AAIDMSAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(unsigned long long)_newRepairStateOnAuthKitAccount:(id)arg1 vsOldAccount:(id)arg2 ;
-(BOOL)updateAppleAccount:(id)arg1 withRepairState:(unsigned long long)arg2 store:(id)arg3 ;
-(BOOL)_shouldForceRenewCredentialsForAccount:(id)arg1 inStore:(id)arg2 oldAccount:(id)arg3 ;
-(BOOL)_verifiedEmailForAccount:(id)arg1 fromOldAccount:(id)arg2 ;
-(void)_enableDataclassesForVerifiedEmailOnAppleAccount:(id)arg1 inStore:(id)arg2 ;
@end

