/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setShippingContact:(NSData *)arg1 ;
-(NSData *)shippingContact;
-(PKProtobufPaymentMethod *)paymentMethod;
-(void)setPaymentMethod:(PKProtobufPaymentMethod *)arg1 ;
-(BOOL)hasPaymentMethod;
-(PKProtobufShippingMethod *)shippingMethod;
-(void)setShippingMethod:(PKProtobufShippingMethod *)arg1 ;
-(BOOL)hasShippingContact;
-(BOOL)hasShippingMethod;
-(void)setRemotePaymentRequestIdentifier:(NSString *)arg1 ;
-(BOOL)hasRemotePaymentRequestIdentifier;
-(NSString *)remotePaymentRequestIdentifier;
@end

