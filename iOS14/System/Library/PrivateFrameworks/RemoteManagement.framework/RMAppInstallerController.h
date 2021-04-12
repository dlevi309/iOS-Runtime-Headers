/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/


@class NSMutableDictionary, NSObject;

@interface RMAppInstallerController : NSObject {

	NSMutableDictionary* _terminationAssertions;
	NSObject* _terminationAssertionLock;

}
-(id)init;
-(id)_bundleIDFromConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)_personaIdentifierFromConfiguration:(id)arg1 ;
-(void)_installUserAppForBundleID:(id)arg1 personaIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_installDeviceLicensedAppWithBundleID:(id)arg1 personaIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_downloadAppForBundleID:(id)arg1 type:(long long)arg2 personaIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_removeTerminationAssertionForBundleIdentifier:(id)arg1 ;
-(void)_uninstallAppWithBundleIdentifier:(id)arg1 personaIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_addTerminationAssertion:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_sendAppStoreRequestWithBundleIdentifier:(id)arg1 appStoreAccountIdentifier:(id)arg2 type:(long long)arg3 skipDownloads:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)installAppWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeAppWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

