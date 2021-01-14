/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, PKProtobufPaymentMethod;

@interface PKProtobufPaymentToken : PBCodable <NSCopying> {

	NSString* _instrumentName;
	NSString* _network;
	NSData* _paymentData;
	PKProtobufPaymentMethod* _paymentMethod;
	NSString* _redeemURL;
	NSString* _retryNonce;
	NSString* _transactionIdentifier;

}

@property (nonatomic,readonly) BOOL hasPaymentMethod; 
@property (nonatomic,retain) PKProtobufPaymentMethod * paymentMethod;              //@synthesize paymentMethod=_paymentMethod - In the implementation block
@property (nonatomic,readonly) BOOL hasInstrumentName; 
@property (nonatomic,retain) NSString * instrumentName;                            //@synthesize instrumentName=_instrumentName - In the implementation block
@property (nonatomic,readonly) BOOL hasNetwork; 
@property (nonatomic,retain) NSString * network;                                   //@synthesize network=_network - In the implementation block
@property (nonatomic,readonly) BOOL hasTransactionIdentifier; 
@property (nonatomic,retain) NSString * transactionIdentifier;                     //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPaymentData; 
@property (nonatomic,retain) NSData * paymentData;                                 //@synthesize paymentData=_paymentData - In the implementation block
@property (nonatomic,readonly) BOOL hasRedeemURL; 
@property (nonatomic,retain) NSString * redeemURL;                                 //@synthesize redeemURL=_redeemURL - In the implementation block
@property (nonatomic,readonly) BOOL hasRetryNonce; 
@property (nonatomic,retain) NSString * retryNonce;                                //@synthesize retryNonce=_retryNonce - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasTransactionIdentifier;
-(NSString *)network;
-(BOOL)hasInstrumentName;
-(BOOL)hasRedeemURL;
-(BOOL)hasPaymentData;
-(void)mergeFrom:(id)arg1 ;
-(PKProtobufPaymentMethod *)paymentMethod;
-(void)setPaymentMethod:(PKProtobufPaymentMethod *)arg1 ;
-(BOOL)hasPaymentMethod;
-(NSString *)redeemURL;
-(id)description;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(BOOL)hasNetwork;
-(unsigned long long)hash;
-(NSString *)retryNonce;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)instrumentName;
-(void)setPaymentData:(NSData *)arg1 ;
-(void)setRedeemURL:(NSString *)arg1 ;
-(void)setInstrumentName:(NSString *)arg1 ;
-(BOOL)hasRetryNonce;
-(void)writeTo:(id)arg1 ;
-(NSString *)transactionIdentifier;
-(NSData *)paymentData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setNetwork:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRetryNonce:(NSString *)arg1 ;
@end

