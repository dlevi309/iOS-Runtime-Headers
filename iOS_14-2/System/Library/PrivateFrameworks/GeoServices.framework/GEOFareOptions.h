/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOFareOptions : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _paymentType;
	int _preferredSurchargeType;
	struct {
		unsigned has_paymentType : 1;
		unsigned has_preferredSurchargeType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasPreferredSurchargeType; 
@property (assign,nonatomic) int preferredSurchargeType; 
@property (assign,nonatomic) BOOL hasPaymentType; 
@property (assign,nonatomic) int paymentType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasPreferredSurchargeType:(BOOL)arg1 ;
-(BOOL)hasPaymentType;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasPaymentType:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)paymentTypeAsString:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)StringAsPaymentType:(id)arg1 ;
-(int)preferredSurchargeType;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasPreferredSurchargeType;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPaymentType:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(int)paymentType;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPreferredSurchargeType:(int)arg1 ;
@end

