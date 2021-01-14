/*
* Generated on Thursday, January 14, 2021 at 2:29:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Accounts/Notification/SocialAccountNotificationPlugin.bundle/SocialAccountNotificationPlugin
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@class NSString;

@interface SLAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	int _accountState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)cleanupTwitterPushDestinationsForAccount:(id)arg1 accountStore:(id)arg2 ;
-(BOOL)_accountExistsForAccountTypeIdentifier:(id)arg1 inStore:(id)arg2 ;
@end

