/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasPreferredSurchargeType; 
@property (assign,nonatomic) int preferredSurchargeType; 
@property (assign,nonatomic) BOOL hasPaymentType; 
@property (assign,nonatomic) int paymentType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
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
-(int)preferredSurchargeType;
-(void)setPreferredSurchargeType:(int)arg1 ;
-(void)setHasPreferredSurchargeType:(BOOL)arg1 ;
-(BOOL)hasPreferredSurchargeType;
@end

