/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Notification/IDSAccountNotificationPlugin.bundle/IDSAccountNotificationPlugin
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface IDSAccountNotificationDelegate : NSObject <ACDAccountNotificationPlugin> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _setupRequestPending;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(id)_findExistingIdentityServicesACAccountWithUserName:(id)arg1 inStore:(id)arg2 ;
-(id)_passwordEquivalentTokenOrPasswordFromAccount:(id)arg1 ;
-(void)_iCloudSignInBasedOnAccount:(id)arg1 inStore:(id)arg2 ;
-(void)_iCloudSignOut;
-(void)_iCloudModifyBasedOnUsername:(id)arg1 ;
-(void)_iTunesSignInBasedOnAccount:(id)arg1 ;
-(void)_iTunesSignOut;
-(void)_notifyRemoteDeviceOfIDMSAccountForAccount:(id)arg1 store:(id)arg2 changeType:(int)arg3 ;
@end

