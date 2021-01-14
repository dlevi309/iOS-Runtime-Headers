/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoStandalonePaymentSetupProduct;

@interface NPKProtoStandalonePaymentProvisioningFlowDigitalIssuancePaymentStepContext : PBCodable <NSCopying> {

	NPKProtoStandalonePaymentSetupProduct* _product;

}

@property (nonatomic,readonly) BOOL hasProduct; 
@property (nonatomic,retain) NPKProtoStandalonePaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setProduct:(NPKProtoStandalonePaymentSetupProduct *)arg1 ;
-(id)description;
-(NPKProtoStandalonePaymentSetupProduct *)product;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasProduct;
@end

