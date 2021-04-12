/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPaymentMethod, NSString, NSData, NSURL;

@interface PKPaymentToken : NSObject <NSSecureCoding> {

	PKPaymentMethod* _paymentMethod;
	NSString* _paymentInstrumentName;
	NSString* _paymentNetwork;
	NSString* _transactionIdentifier;
	NSData* _paymentData;
	NSURL* _redeemURL;
	NSString* _retryNonce;

}

@property (nonatomic,retain) PKPaymentMethod * paymentMethod;              //@synthesize paymentMethod=_paymentMethod - In the implementation block
@property (nonatomic,copy) NSString * paymentInstrumentName;               //@synthesize paymentInstrumentName=_paymentInstrumentName - In the implementation block
@property (nonatomic,copy) NSString * paymentNetwork;                      //@synthesize paymentNetwork=_paymentNetwork - In the implementation block
@property (nonatomic,copy) NSString * transactionIdentifier;               //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy) NSData * paymentData;                           //@synthesize paymentData=_paymentData - In the implementation block
@property (nonatomic,retain) NSURL * redeemURL;                            //@synthesize redeemURL=_redeemURL - In the implementation block
@property (nonatomic,copy) NSString * retryNonce;                          //@synthesize retryNonce=_retryNonce - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)version;
+(id)simulatedTokenForNetwork:(id)arg1 ;
+(id)paymentTokenWithProtobuf:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)paymentNetwork;
-(void)setPaymentNetwork:(NSString *)arg1 ;
-(id)protobuf;
-(PKPaymentMethod *)paymentMethod;
-(NSString *)transactionIdentifier;
-(NSData *)paymentData;
-(void)setPaymentMethod:(PKPaymentMethod *)arg1 ;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(NSString *)retryNonce;
-(void)setRetryNonce:(NSString *)arg1 ;
-(void)setPaymentInstrumentName:(NSString *)arg1 ;
-(void)setPaymentData:(NSData *)arg1 ;
-(NSURL *)redeemURL;
-(void)setRedeemURL:(NSURL *)arg1 ;
-(NSString *)paymentInstrumentName;
@end

