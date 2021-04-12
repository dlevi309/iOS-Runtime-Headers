/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(BOOL)hasIdentifier;
-(NSString *)paymentApplicationIdentifier;
-(void)setPaymentApplicationIdentifier:(NSString *)arg1 ;
-(PKProtobufPaymentRequest *)paymentRequest;
-(void)setPaymentRequest:(PKProtobufPaymentRequest *)arg1 ;
-(BOOL)hasPaymentRequest;
-(BOOL)hasPaymentApplicationIdentifier;
@end

