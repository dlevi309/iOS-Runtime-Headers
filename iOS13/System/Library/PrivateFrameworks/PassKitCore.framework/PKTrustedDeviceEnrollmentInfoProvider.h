/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class PKXPCService;

@interface PKTrustedDeviceEnrollmentInfoProvider : NSObject {

	PKXPCService* _remoteService;

}
-(id)init;
-(id)_remoteObjectProxy;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_existingRemoteObjectProxy;
-(void)trustedDeviceEnrollmentInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)trustedDeviceEnrollmentSignatureForDevice:(unsigned long long)arg1 accountDSID:(id)arg2 sessionData:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

