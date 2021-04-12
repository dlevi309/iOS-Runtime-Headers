/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
*/

#import <FMClient/FMClient.ServerSessionProtocol.h>
#import <FMClient/FMClient.ClientSessionProtocol.h>

@interface FMClient.Session : NSObject <FMClient.ServerSessionProtocol, FMClient.ClientSessionProtocol> {

	 clientBundleId;
	 clientProcessName;
	 _activeConnection;
	 $__lazy_storage_$_serverProxy;
	 authenticationProvider;

}
-(void)discoverNearbyDevicesWithCompletion:(/*^block*/id)arg1 ;
-(void)deviceSearch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clientConfigurationWithUpdateConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)playSound:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)voiceAssistantSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidateCacheWithType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)sessionInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)credentialNotAuthorizedWithCredential:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)credential:(/*^block*/id)arg1 ;
-(id)init;
-(void)invalidate;
-(void)registerAuthenticationProvider:(id)arg1 ;
@end

