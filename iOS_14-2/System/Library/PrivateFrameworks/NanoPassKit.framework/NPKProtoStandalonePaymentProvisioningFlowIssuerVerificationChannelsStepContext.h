/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoStandalonePaymentPass, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationChannelsStepContext : PBCodable <NSCopying> {

	NPKProtoStandalonePaymentPass* _paymentPass;
	NSMutableArray* _verificationChannels;

}

@property (nonatomic,readonly) BOOL hasPaymentPass; 
@property (nonatomic,retain) NPKProtoStandalonePaymentPass * paymentPass;              //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,retain) NSMutableArray * verificationChannels;                    //@synthesize verificationChannels=_verificationChannels - In the implementation block
+(Class)verificationChannelsType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)verificationChannels;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setVerificationChannels:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NPKProtoStandalonePaymentPass *)paymentPass;
-(void)setPaymentPass:(NPKProtoStandalonePaymentPass *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasPaymentPass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addVerificationChannels:(id)arg1 ;
-(unsigned long long)verificationChannelsCount;
-(void)clearVerificationChannels;
-(id)verificationChannelsAtIndex:(unsigned long long)arg1 ;
@end

