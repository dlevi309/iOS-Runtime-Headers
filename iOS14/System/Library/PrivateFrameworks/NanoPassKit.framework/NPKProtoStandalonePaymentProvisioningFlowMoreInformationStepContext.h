/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NPKProtoStandalonePaymentPass;

@interface NPKProtoStandalonePaymentProvisioningFlowMoreInformationStepContext : PBCodable <NSCopying> {

	NSMutableArray* _moreInfoItems;
	NPKProtoStandalonePaymentPass* _paymentPass;

}

@property (nonatomic,retain) NSMutableArray * moreInfoItems;                           //@synthesize moreInfoItems=_moreInfoItems - In the implementation block
@property (nonatomic,readonly) BOOL hasPaymentPass; 
@property (nonatomic,retain) NPKProtoStandalonePaymentPass * paymentPass;              //@synthesize paymentPass=_paymentPass - In the implementation block
+(Class)moreInfoItemsType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NPKProtoStandalonePaymentPass *)paymentPass;
-(void)setPaymentPass:(NPKProtoStandalonePaymentPass *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasPaymentPass;
-(NSMutableArray *)moreInfoItems;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMoreInfoItems:(NSMutableArray *)arg1 ;
-(void)addMoreInfoItems:(id)arg1 ;
-(unsigned long long)moreInfoItemsCount;
-(void)clearMoreInfoItems;
-(id)moreInfoItemsAtIndex:(unsigned long long)arg1 ;
@end

