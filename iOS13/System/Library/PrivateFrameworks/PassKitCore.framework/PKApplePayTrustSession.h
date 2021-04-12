/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentSession.h>

@interface PKApplePayTrustSession : PKPaymentSession
-(id)keyWithIdentifier:(id)arg1 ;
-(BOOL)deleteKeyWithIdentifier:(id)arg1 ;
-(id)createKeyWithRequest:(id)arg1 error:(id*)arg2 ;
-(id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2 ;
-(id)signatureForRequest:(id)arg1 withAuthorization:(id)arg2 ;
@end

