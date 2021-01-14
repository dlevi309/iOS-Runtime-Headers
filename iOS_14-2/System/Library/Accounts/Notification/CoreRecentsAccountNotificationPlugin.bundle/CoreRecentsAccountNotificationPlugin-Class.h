/*
* Generated on Thursday, January 14, 2021 at 2:29:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Accounts/Notification/CoreRecentsAccountNotificationPlugin.bundle/CoreRecentsAccountNotificationPlugin
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@class NSString;

@interface CoreRecentsAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(id)_findAddressesForAccount:(id)arg1 ;
@end

