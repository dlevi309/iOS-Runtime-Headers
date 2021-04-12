/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentRequest.h>

@class PKPeerPaymentQuote;

@interface PKPeerPaymentRequest : PKPaymentRequest {

	PKPeerPaymentQuote* _peerPaymentQuote;

}

@property (nonatomic,readonly) PKPeerPaymentQuote * peerPaymentQuote;              //@synthesize peerPaymentQuote=_peerPaymentQuote - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKPeerPaymentQuote *)peerPaymentQuote;
-(id)initWithPeerPaymentQuote:(id)arg1 ;
@end

