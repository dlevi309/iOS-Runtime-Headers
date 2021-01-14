/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class PKXPCService;

@interface PKDeviceRegistrationService : NSObject {

	PKXPCService* _remoteService;
	BOOL _isRegistering;

}
+(id)sharedInstance;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)init;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxy;
-(id)_remoteObjectProxyWithSemaphore:(id)arg1 ;
-(void)performDeviceRegistrationWithCompletion:(/*^block*/id)arg1 ;
-(void)performDeviceRegistrationForReason:(id)arg1 actionType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

