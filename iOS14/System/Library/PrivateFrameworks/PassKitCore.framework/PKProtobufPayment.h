/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, PKProtobufShippingMethod, PKProtobufPaymentToken;

@interface PKProtobufPayment : PBCodable <NSCopying> {

	NSData* _billingContact;
	NSData* _shippingContact;
	PKProtobufShippingMethod* _shippingMethod;
	PKProtobufPaymentToken* _token;

}

@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) PKProtobufPaymentToken * token;                         //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) BOOL hasBillingContact; 
@property (nonatomic,retain) NSData * billingContact;                                //@synthesize billingContact=_billingContact - In the implementation block
@property (nonatomic,readonly) BOOL hasShippingContact; 
@property (nonatomic,retain) NSData * shippingContact;                               //@synthesize shippingContact=_shippingContact - In the implementation block
@property (nonatomic,readonly) BOOL hasShippingMethod; 
@property (nonatomic,retain) PKProtobufShippingMethod * shippingMethod;              //@synthesize shippingMethod=_shippingMethod - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasToken;
-(void)setBillingContact:(NSData *)arg1 ;
-(void)setToken:(PKProtobufPaymentToken *)arg1 ;
-(void)setShippingContact:(NSData *)arg1 ;
-(void)setShippingMethod:(PKProtobufShippingMethod *)arg1 ;
-(BOOL)hasBillingContact;
-(BOOL)hasShippingContact;
-(BOOL)hasShippingMethod;
-(NSData *)billingContact;
-(NSData *)shippingContact;
-(PKProtobufShippingMethod *)shippingMethod;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(PKProtobufPaymentToken *)token;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

