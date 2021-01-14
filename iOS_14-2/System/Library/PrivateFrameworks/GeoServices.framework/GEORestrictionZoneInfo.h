/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEORestrictionZoneInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _restrictedZoneIds;
	int _environmentalCongestionZoneImpact;
	int _licensePlateRestrictionImpact;
	int _tollCongestionZoneImpact;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,retain) NSMutableArray * restrictedZoneIds; 
@property (assign,nonatomic) BOOL hasLicensePlateRestrictionImpact; 
@property (assign,nonatomic) int licensePlateRestrictionImpact; 
@property (assign,nonatomic) BOOL hasEnvironmentalCongestionZoneImpact; 
@property (assign,nonatomic) int environmentalCongestionZoneImpact; 
@property (assign,nonatomic) BOOL hasTollCongestionZoneImpact; 
@property (assign,nonatomic) int tollCongestionZoneImpact; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)restrictedZoneIdsType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(NSMutableArray *)restrictedZoneIds;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addRestrictedZoneIds:(id)arg1 ;
-(void)setLicensePlateRestrictionImpact:(int)arg1 ;
-(void)setEnvironmentalCongestionZoneImpact:(int)arg1 ;
-(void)setTollCongestionZoneImpact:(int)arg1 ;
-(unsigned long long)restrictedZoneIdsCount;
-(void)clearRestrictedZoneIds;
-(id)restrictedZoneIdsAtIndex:(unsigned long long)arg1 ;
-(void)setRestrictedZoneIds:(NSMutableArray *)arg1 ;
-(int)licensePlateRestrictionImpact;
-(void)setHasLicensePlateRestrictionImpact:(BOOL)arg1 ;
-(BOOL)hasLicensePlateRestrictionImpact;
-(id)licensePlateRestrictionImpactAsString:(int)arg1 ;
-(int)StringAsLicensePlateRestrictionImpact:(id)arg1 ;
-(int)environmentalCongestionZoneImpact;
-(void)setHasEnvironmentalCongestionZoneImpact:(BOOL)arg1 ;
-(BOOL)hasEnvironmentalCongestionZoneImpact;
-(id)environmentalCongestionZoneImpactAsString:(int)arg1 ;
-(int)StringAsEnvironmentalCongestionZoneImpact:(id)arg1 ;
-(int)tollCongestionZoneImpact;
-(void)setHasTollCongestionZoneImpact:(BOOL)arg1 ;
-(BOOL)hasTollCongestionZoneImpact;
-(id)tollCongestionZoneImpactAsString:(int)arg1 ;
-(int)StringAsTollCongestionZoneImpact:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

