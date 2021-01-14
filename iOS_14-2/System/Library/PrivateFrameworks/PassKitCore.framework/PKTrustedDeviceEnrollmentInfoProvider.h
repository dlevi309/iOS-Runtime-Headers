/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class PKXPCService;

@interface PKTrustedDeviceEnrollmentInfoProvider : NSObject {

	PKXPCService* _remoteService;

}
-(id)_existingRemoteObjectProxy;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)init;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxy;
-(void)trustedDeviceEnrollmentInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)trustedDeviceEnrollmentSignatureForDevice:(unsigned long long)arg1 accountDSID:(id)arg2 sessionData:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

