/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKProtobufPaymentMethod, NSString, NSData, PKProtobufShippingMethod;

@interface PKProtobufPaymentHostUpdate : PBCodable <NSCopying> {

	PKProtobufPaymentMethod* _paymentMethod;
	NSString* _remotePaymentRequestIdentifier;
	NSData* _shippingContact;
	PKProtobufShippingMethod* _shippingMethod;

}

@property (nonatomic,readonly) BOOL hasRemotePaymentRequestIdentifier; 
@property (nonatomic,retain) NSString * remotePaymentRequestIdentifier;              //@synthesize remotePaymentRequestIdentifier=_remotePaymentRequestIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasShippingContact; 
@property (nonatomic,retain) NSData * shippingContact;                               //@synthesize shippingContact=_shippingContact - In the implementation block
@property (nonatomic,readonly) BOOL hasShippingMethod; 
@property (nonatomic,retain) PKProtobufShippingMethod * shippingMethod;              //@synthesize shippingMethod=_shippingMethod - In the implementation block
@property (nonatomic,readonly) BOOL hasPaymentMethod; 
@property (nonatomic,retain) PKProtobufPaymentMethod * paymentMethod;                //@synthesize paymentMethod=_paymentMethod - In the implementation block
-(id)dictionaryRepresentation;
-(void)setRemotePaymentRequestIdentifier:(NSString *)arg1 ;
-(BOOL)hasRemotePaymentRequestIdentifier;
-(NSString *)remotePaymentRequestIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(PKProtobufPaymentMethod *)paymentMethod;
-(void)setPaymentMethod:(PKProtobufPaymentMethod *)arg1 ;
-(BOOL)hasPaymentMethod;
-(id)description;
-(void)setShippingContact:(NSData *)arg1 ;
-(void)setShippingMethod:(PKProtobufShippingMethod *)arg1 ;
-(BOOL)hasShippingContact;
-(BOOL)hasShippingMethod;
-(NSData *)shippingContact;
-(PKProtobufShippingMethod *)shippingMethod;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

