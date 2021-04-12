/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoStandalonePaymentSetupProduct;

@interface NPKProtoStandalonePaymentProvisioningFlowDigitalIssuanceAmountStepContext : PBCodable <NSCopying> {

	NPKProtoStandalonePaymentSetupProduct* _product;
	BOOL _allowsReaderModeEntry;
	SCD_Struct_NP2 _has;

}

@property (nonatomic,readonly) BOOL hasProduct; 
@property (nonatomic,retain) NPKProtoStandalonePaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsReaderModeEntry; 
@property (assign,nonatomic) BOOL allowsReaderModeEntry;                                   //@synthesize allowsReaderModeEntry=_allowsReaderModeEntry - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setProduct:(NPKProtoStandalonePaymentSetupProduct *)arg1 ;
-(NPKProtoStandalonePaymentSetupProduct *)product;
-(BOOL)hasProduct;
-(BOOL)allowsReaderModeEntry;
-(void)setAllowsReaderModeEntry:(BOOL)arg1 ;
-(void)setHasAllowsReaderModeEntry:(BOOL)arg1 ;
-(BOOL)hasAllowsReaderModeEntry;
@end

