/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class PKXPCService;

@interface PKInAppPaymentService : NSObject {

	PKXPCService* _remoteService;

}
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)init;
-(BOOL)secureElementStatus:(unsigned long long*)arg1 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)registerPaymentListenerEndpoint:(id)arg1 forHostIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg1 forHostIdentifier:(id)arg2 orientation:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_remoteObjectProxy;
-(void)paymentHardwareStatusWithType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(long long)cardsAvailableForAMPWithCountryCode:(id)arg1 ;
-(void)secureElementStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)enrollPaymentPassWithUniqueIdentifier:(id)arg1 merchantSession:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_remoteObjectProxyWithSemaphore:(id)arg1 ;
-(void)retrievePaymentListenerEndpointForHostIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)paymentHardwareStatusWithType:(unsigned long long)arg1 ;
-(void)merchantStatusCheck:(id)arg1 merchantDomain:(id)arg2 sourceApplicationSecondaryIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)cardsAvailableForAMPWithCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)paymentServicesMerchantURLForAPIType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)cardDataForMerchantIdentifier:(id)arg1 countryCode:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

