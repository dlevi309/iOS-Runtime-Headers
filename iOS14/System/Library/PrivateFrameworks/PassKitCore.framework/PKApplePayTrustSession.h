/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentSession.h>

@interface PKApplePayTrustSession : PKPaymentSession
-(id)signatureForRequest:(id)arg1 withAuthorization:(id)arg2 ;
-(BOOL)deleteKeyWithIdentifier:(id)arg1 ;
-(id)createKeyWithRequest:(id)arg1 error:(id*)arg2 ;
-(id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2 ;
-(id)keyWithIdentifier:(id)arg1 ;
@end

