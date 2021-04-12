/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentAccount;

@interface PKPeerPaymentAccountResponse : PKPeerPaymentWebServiceResponse {

	PKPeerPaymentAccount* _account;

}

@property (nonatomic,readonly) PKPeerPaymentAccount * account;              //@synthesize account=_account - In the implementation block
-(PKPeerPaymentAccount *)account;
-(id)initWithData:(id)arg1 ;
@end

