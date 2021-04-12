/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentRequest.h>

@class PKPeerPaymentQuote;

@interface PKPeerPaymentRequest : PKPaymentRequest {

	PKPeerPaymentQuote* _peerPaymentQuote;

}

@property (nonatomic,readonly) PKPeerPaymentQuote * peerPaymentQuote;              //@synthesize peerPaymentQuote=_peerPaymentQuote - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPeerPaymentQuote:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(PKPeerPaymentQuote *)peerPaymentQuote;
-(BOOL)isEqual:(id)arg1 ;
@end

