/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOTransitSurcharge : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _surchargeUnits;
	unsigned _numberOfLegs;
	int _paymentType;
	SCD_Struct_GE33 _flags;

}

@property (nonatomic,retain) NSMutableArray * surchargeUnits; 
@property (assign,nonatomic) BOOL hasPaymentType; 
@property (assign,nonatomic) int paymentType; 
@property (assign,nonatomic) BOOL hasNumberOfLegs; 
@property (assign,nonatomic) unsigned numberOfLegs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)surchargeUnitType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)paymentType;
-(void)setPaymentType:(int)arg1 ;
-(void)setHasPaymentType:(BOOL)arg1 ;
-(BOOL)hasPaymentType;
-(id)paymentTypeAsString:(int)arg1 ;
-(int)StringAsPaymentType:(id)arg1 ;
-(unsigned)numberOfLegs;
-(void)setNumberOfLegs:(unsigned)arg1 ;
-(void)setHasNumberOfLegs:(BOOL)arg1 ;
-(BOOL)hasNumberOfLegs;
-(void)addSurchargeUnit:(id)arg1 ;
-(unsigned long long)surchargeUnitsCount;
-(void)clearSurchargeUnits;
-(id)surchargeUnitAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)surchargeUnits;
-(void)setSurchargeUnits:(NSMutableArray *)arg1 ;
@end

