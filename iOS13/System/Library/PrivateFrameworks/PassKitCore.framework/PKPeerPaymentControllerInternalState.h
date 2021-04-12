/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKPeerPaymentRecipient, PKPeerPaymentRequestToken, PKPeerPaymentQuote, PKPeerPaymentPerformResponse, PKPeerPaymentQuoteCertificatesResponse, PKPeerPaymentQuoteRequest;

@interface PKPeerPaymentControllerInternalState : NSObject <NSSecureCoding> {

	unsigned long long state;
	unsigned long long mode;
	NSString* senderPhoneOrEmail;
	NSString* recipientPhoneOrEmail;
	PKPeerPaymentRecipient* recipient;
	NSString* recipientDisplayName;
	PKPeerPaymentRequestToken* requestToken;
	PKPeerPaymentQuote* quote;
	PKPeerPaymentPerformResponse* performQuoteResponse;
	BOOL supportsPreserveCurrentBalance;
	PKPeerPaymentQuoteCertificatesResponse* quoteCertificatesResponse;
	NSString* accountName;
	NSString* accountNumber;
	NSString* routingNumber;
	PKPeerPaymentQuoteRequest* quoteRequest;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToPeerPaymentControllerInternalState:(id)arg1 ;
@end

