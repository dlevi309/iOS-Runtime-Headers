/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class PKXPCService;

@interface PKDeviceRegistrationService : NSObject {

	PKXPCService* _remoteService;
	BOOL _isRegistering;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_remoteObjectProxy;
-(void)performDeviceRegistrationForReason:(id)arg1 actionType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxyWithSemaphore:(id)arg1 ;
-(void)performDeviceRegistrationWithCompletion:(/*^block*/id)arg1 ;
@end

