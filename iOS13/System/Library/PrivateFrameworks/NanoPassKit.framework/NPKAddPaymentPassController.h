/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <PassKitCore/PKAddPaymentPassController.h>
#import <libobjc.A.dylib/NPKAddPaymentPassControllerClientProtocol.h>
#import <libobjc.A.dylib/PKXPCServiceDelegate.h>

@class PKAddPaymentPassRequestConfiguration, PKXPCService, NSString;

@interface NPKAddPaymentPassController : PKAddPaymentPassController <NPKAddPaymentPassControllerClientProtocol, PKXPCServiceDelegate> {

	BOOL _didFinishCallbackSent;
	PKAddPaymentPassRequestConfiguration* _configuration;
	PKXPCService* _remoteService;

}

@property (nonatomic,retain) PKAddPaymentPassRequestConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) PKXPCService * remoteService;                                      //@synthesize remoteService=_remoteService - In the implementation block
@property (assign,nonatomic) BOOL didFinishCallbackSent;                                        //@synthesize didFinishCallbackSent=_didFinishCallbackSent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canAddPaymentPass;
-(void)setConfiguration:(PKAddPaymentPassRequestConfiguration *)arg1 ;
-(PKAddPaymentPassRequestConfiguration *)configuration;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)presentWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithRequestConfiguration:(id)arg1 delegate:(id)arg2 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)remoteService:(id)arg1 didEstablishConnection:(id)arg2 ;
-(void)remoteService:(id)arg1 didInterruptConnection:(id)arg2 ;
-(PKXPCService *)remoteService;
-(void)setRemoteService:(PKXPCService *)arg1 ;
-(void)generateRequestWithCertificateChain:(id)arg1 nonce:(id)arg2 nonceSignature:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)didFinishWithPass:(id)arg1 error:(id)arg2 ;
-(void)_sendDidFinishWithPass:(id)arg1 error:(id)arg2 ;
-(BOOL)didFinishCallbackSent;
-(void)setDidFinishCallbackSent:(BOOL)arg1 ;
@end

