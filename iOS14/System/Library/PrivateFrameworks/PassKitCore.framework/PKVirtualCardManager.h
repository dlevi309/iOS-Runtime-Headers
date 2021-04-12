/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class PKInAppPaymentService, PKAccountService;

@interface PKVirtualCardManager : NSObject {

	PKInAppPaymentService* _inAppPaymentService;
	PKAccountService* _accountService;

}
-(id)init;
-(void)queryKeychainForVirtualCard:(/*^block*/id)arg1 ;
-(void)activeVirtualCardsWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)urlToPassDetailsForVirtualCard:(id)arg1 ;
-(void)credentialsForVirtualCard:(id)arg1 authorization:(id)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)promptDetailsForVirtualCard:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissDetailsForVirtualCard:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

