/*
* Generated on Thursday, January 14, 2021 at 2:29:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Accounts/Notification/ADAccountsNotificationPlugin.bundle/ADAccountsNotificationPlugin
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@class NSString;

@interface ADAccountsNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)postNotificationForChangeWithAccount:(id)arg1 andOldAccount:(id)arg2 withType:(id)arg3 ;
-(void)checkForStorefrontChangeWithAccount:(id)arg1 andOldAccount:(id)arg2 ;
@end

