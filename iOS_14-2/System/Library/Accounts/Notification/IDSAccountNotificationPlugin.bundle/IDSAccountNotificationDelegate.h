/*
* Generated on Thursday, January 14, 2021 at 2:29:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(id)_findExistingIdentityServicesACAccountWithUserName:(id)arg1 inStore:(id)arg2 ;
-(id)_passwordEquivalentTokenFromAccount:(id)arg1 ;
-(void)_iCloudSignInBasedOnAccount:(id)arg1 inStore:(id)arg2 ;
-(void)_iCloudSignOut;
-(void)_iCloudModifyBasedOnUsername:(id)arg1 ;
-(void)_iTunesSignInBasedOnAccount:(id)arg1 ;
-(void)_iTunesSignOut;
@end

