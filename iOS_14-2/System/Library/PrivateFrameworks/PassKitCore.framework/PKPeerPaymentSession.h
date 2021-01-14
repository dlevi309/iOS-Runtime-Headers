/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentSession.h>

@interface PKPeerPaymentSession : PKPaymentSession
-(BOOL)deleteApplet;
-(id)authorizePeerPaymentQuote:(id)arg1 forPaymentApplication:(id)arg2 withAuthenticationCredential:(id)arg3 shouldReregister:(BOOL*)arg4 ;
-(id)authorizePeerPaymentQuote:(id)arg1 forPaymentApplication:(id)arg2 withAuthenticationCredential:(id)arg3 ;
-(id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2 ;
@end

