/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Notification/MessageAccountNotificationPlugin.bundle/MessageAccountNotificationPlugin
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@class NSString;

@interface MessageAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	int _updateAutoFetchSettingsRequestCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_accountHasMailAccountParentType:(id)arg1 ;
+(BOOL)_accountHasLeafMailAccountType:(id)arg1 ;
+(BOOL)_accountHasLeafDeliveryAccountType:(id)arg1 ;
+(id)_childMailAccountWithParentAccount:(id)arg1 ;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(BOOL)_addMailChildAccountToParentAccount:(id)arg1 inStore:(id)arg2 ;
-(BOOL)_shouldDeleteOnAccountChange:(id)arg1 oldAccount:(id)arg2 ;
-(id)_mailAccountToDeleteForAccount:(id)arg1 ;
-(void)_deleteDataWithMailAccount:(id)arg1 ;
-(void)_mailAccount:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)_deliveryAccount:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)_updateAutoFetchSettingsAsynchronously;
-(BOOL)_accountIsExchangeAccount:(id)arg1 ;
-(BOOL)_accountWasDisabled:(id)arg1 oldAccount:(id)arg2 ;
@end

