/*
* Generated on Thursday, January 14, 2021 at 2:29:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Accounts/Notification/AKAccountNotificationPlugin.bundle/AKAccountNotificationPlugin
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@class NSString;

@interface AKAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2 ;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(BOOL)_isAccount:(id)arg1 ofAccountType:(id)arg2 ;
-(BOOL)_isValidAuthKitAccount:(id)arg1 ;
-(BOOL)_isValidChangeForAccount:(id)arg1 oldAccount:(id)arg2 ;
-(void)_processDeletionForAccount:(id)arg1 ;
-(void)_processAppleAccountModification:(id)arg1 oldAccount:(id)arg2 inStore:(id)arg3 changeType:(int)arg4 ;
-(void)_processAuthKitAccountChange:(id)arg1 oldAccount:(id)arg2 inStore:(id)arg3 ;
-(void)_notifyPeerDevicesOfSecurityUpgradeIfNecessaryWithStore:(id)arg1 account:(id)arg2 oldAccount:(id)arg3 ;
-(BOOL)_isPrimaryAppleAccount:(id)arg1 ;
-(void)_synchronizeItemsForAccount:(id)arg1 altDSID:(id)arg2 inStore:(id)arg3 ;
-(id)_saveOptionsForCompanionDeviceAuth;
@end

