/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPeerPaymentQuote, PKContact, NSData, NSDictionary;

@interface PKAuthorizedPeerPaymentQuote : NSObject <NSSecureCoding> {

	PKPeerPaymentQuote* _peerPaymentQuote;
	PKContact* _contact;
	NSData* _transactionData;
	NSDictionary* _certificates;

}

@property (nonatomic,readonly) PKPeerPaymentQuote * peerPaymentQuote;              //@synthesize peerPaymentQuote=_peerPaymentQuote - In the implementation block
@property (nonatomic,retain) PKContact * contact;                                  //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSData * transactionData;                           //@synthesize transactionData=_transactionData - In the implementation block
@property (nonatomic,readonly) NSDictionary * certificates;                        //@synthesize certificates=_certificates - In the implementation block
+(BOOL)supportsSecureCoding;
-(PKContact *)contact;
-(void)setContact:(PKContact *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)certificates;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)transactionData;
-(PKPeerPaymentQuote *)peerPaymentQuote;
-(id)initWithQuote:(id)arg1 transactionData:(id)arg2 certificates:(id)arg3 ;
@end

