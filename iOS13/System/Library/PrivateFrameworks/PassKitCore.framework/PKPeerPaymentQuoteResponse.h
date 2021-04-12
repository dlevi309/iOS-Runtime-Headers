/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentQuote;

@interface PKPeerPaymentQuoteResponse : PKPeerPaymentWebServiceResponse {

	PKPeerPaymentQuote* _quote;

}

@property (nonatomic,readonly) PKPeerPaymentQuote * quote;              //@synthesize quote=_quote - In the implementation block
-(id)initWithData:(id)arg1 ;
-(PKPeerPaymentQuote *)quote;
@end

