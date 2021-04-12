/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PKProtobufPaymentRequest;

@interface PKProtobufRemotePaymentRequest : PBRequest <NSCopying> {

	NSString* _identifier;
	NSString* _paymentApplicationIdentifier;
	PKProtobufPaymentRequest* _paymentRequest;

}

@property (nonatomic,readonly) BOOL hasPaymentRequest; 
@property (nonatomic,retain) PKProtobufPaymentRequest * paymentRequest;              //@synthesize paymentRequest=_paymentRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasPaymentApplicationIdentifier; 
@property (nonatomic,retain) NSString * paymentApplicationIdentifier;                //@synthesize paymentApplicationIdentifier=_paymentApplicationIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
-(id)dictionaryRepresentation;
-(Class)responseClass;
-(BOOL)hasIdentifier;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSString *)paymentApplicationIdentifier;
-(void)setPaymentApplicationIdentifier:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasPaymentRequest;
-(BOOL)hasPaymentApplicationIdentifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(PKProtobufPaymentRequest *)paymentRequest;
-(void)setPaymentRequest:(PKProtobufPaymentRequest *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

