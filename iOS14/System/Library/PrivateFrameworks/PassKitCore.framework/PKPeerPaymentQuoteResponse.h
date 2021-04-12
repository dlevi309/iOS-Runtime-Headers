/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentQuote;

@interface PKPeerPaymentQuoteResponse : PKPeerPaymentWebServiceResponse {

	PKPeerPaymentQuote* _quote;

}

@property (nonatomic,readonly) PKPeerPaymentQuote * quote;              //@synthesize quote=_quote - In the implementation block
-(PKPeerPaymentQuote *)quote;
-(id)initWithData:(id)arg1 ;
@end

