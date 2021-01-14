/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOWaypointRouteFeatures : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	BOOL _avoidsHighways;
	BOOL _avoidsTolls;
	BOOL _avoidsTraffic;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasAvoidsTolls; 
@property (assign,nonatomic) BOOL avoidsTolls; 
@property (assign,nonatomic) BOOL hasAvoidsHighways; 
@property (assign,nonatomic) BOOL avoidsHighways; 
@property (assign,nonatomic) BOOL hasAvoidsTraffic; 
@property (assign,nonatomic) BOOL avoidsTraffic; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(BOOL)avoidsTolls;
-(BOOL)avoidsHighways;
-(BOOL)avoidsTraffic;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setAvoidsTolls:(BOOL)arg1 ;
-(void)setAvoidsHighways:(BOOL)arg1 ;
-(void)setAvoidsTraffic:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasAvoidsTolls;
-(void)setHasAvoidsTolls:(BOOL)arg1 ;
-(void)setHasAvoidsHighways:(BOOL)arg1 ;
-(BOOL)hasAvoidsHighways;
-(void)setHasAvoidsTraffic:(BOOL)arg1 ;
-(BOOL)hasAvoidsTraffic;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

