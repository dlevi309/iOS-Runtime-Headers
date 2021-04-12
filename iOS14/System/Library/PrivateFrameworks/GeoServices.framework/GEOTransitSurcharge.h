/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	struct {
		unsigned has_numberOfLegs : 1;
		unsigned has_paymentType : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * surchargeUnits; 
@property (assign,nonatomic) BOOL hasPaymentType; 
@property (assign,nonatomic) int paymentType; 
@property (assign,nonatomic) BOOL hasNumberOfLegs; 
@property (assign,nonatomic) unsigned numberOfLegs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)surchargeUnitType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)addSurchargeUnit:(id)arg1 ;
-(unsigned long long)surchargeUnitsCount;
-(void)clearSurchargeUnits;
-(id)surchargeUnitAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)surchargeUnits;
-(void)setSurchargeUnits:(NSMutableArray *)arg1 ;
-(BOOL)hasPaymentType;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasPaymentType:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)paymentTypeAsString:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)StringAsPaymentType:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setNumberOfLegs:(unsigned)arg1 ;
-(unsigned)numberOfLegs;
-(void)setHasNumberOfLegs:(BOOL)arg1 ;
-(BOOL)hasNumberOfLegs;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPaymentType:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(int)paymentType;
-(BOOL)isEqual:(id)arg1 ;
@end

