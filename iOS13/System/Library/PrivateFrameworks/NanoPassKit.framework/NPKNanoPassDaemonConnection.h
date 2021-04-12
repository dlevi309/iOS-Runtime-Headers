/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/PKXPCServiceDelegate.h>

@class PKXPCService, NSString;

@interface NPKNanoPassDaemonConnection : NSObject <PKXPCServiceDelegate> {

	PKXPCService* _remoteService;

}

@property (nonatomic,retain) PKXPCService * remoteService;              //@synthesize remoteService=_remoteService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)remoteService:(id)arg1 didEstablishConnection:(id)arg2 ;
-(void)remoteService:(id)arg1 didInterruptConnection:(id)arg2 ;
-(void)remoteServiceDidResume:(id)arg1 ;
-(void)remoteServiceDidSuspend:(id)arg1 ;
-(PKXPCService *)remoteService;
-(void)setRemoteService:(PKXPCService *)arg1 ;
-(id)_remoteObjectProxySynchronous:(BOOL)arg1 withFailureHandler:(/*^block*/id)arg2 ;
-(void)startSubcredentialProvisioningOnRemoteDeviceForInvitationIdentifier:(id)arg1 metadata:(id)arg2 ;
-(void)startSubcredentialProvisioningOnLocalDeviceForInvitationIdentifier:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(/*^block*/id)_errorHandlerWithCompletion:(/*^block*/id)arg1 ;
-(void)noteWillDeleteAccountsSynchronous:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

