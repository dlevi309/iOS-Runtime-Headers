/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class NSLock, NSArray;

@interface _MFMailAccountProxySource : NSObject {

	NSLock* _lock;
	NSArray* _accountProxies;
	int _lastSourceAccountManagementQueried;
	BOOL _registeredForNotifications;
	int _notifyToken;

}
+(id)defaultInstance;
-(id)init;
-(void)_deregisterForNotifications_nts;
-(void)_registerForNotifications_nts;
-(void)_resetAccountsChanged:(BOOL)arg1 ;
-(id)accountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)dealloc;
@end

