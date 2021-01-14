/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentSession.h>

@interface PKInAppPaymentSession : PKPaymentSession
-(id)authorizePaymentRequest:(id)arg1 forPaymentApplication:(id)arg2 withAuthorizationParameters:(id)arg3 ;
-(id)authorizePaymentRequest:(id)arg1 forPaymentApplication:(id)arg2 usingNonce:(id)arg3 withAuthenticationCredential:(id)arg4 ;
-(id)authorizePaymentRequest:(id)arg1 forPaymentApplication:(id)arg2 usingNonce:(id)arg3 withAuthenticationCredential:(id)arg4 isFeatureNotSupportedError:(BOOL*)arg5 ;
-(id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2 ;
-(id)_appletForPaymentApplication:(id)arg1 ;
-(id)_appletWithIdentifier:(id)arg1 ;
@end

