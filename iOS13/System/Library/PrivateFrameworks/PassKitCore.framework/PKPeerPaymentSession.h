/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentSession.h>

@interface PKPeerPaymentSession : PKPaymentSession
-(id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2 ;
-(id)authorizePeerPaymentQuote:(id)arg1 forPaymentApplication:(id)arg2 withAuthenticationCredential:(id)arg3 shouldReregister:(BOOL*)arg4 ;
-(id)authorizePeerPaymentQuote:(id)arg1 forPaymentApplication:(id)arg2 withAuthenticationCredential:(id)arg3 ;
-(BOOL)deleteApplet;
@end

