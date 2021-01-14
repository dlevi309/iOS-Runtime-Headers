/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPDGeographicCoordinate : PBCodable <NSCopying> {

	double _altitude;
	double _latitude;
	double _longitude;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) BOOL hasAltitude; 
@property (assign,nonatomic) double altitude; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(double)latitude;
-(void)setAltitude:(double)arg1 ;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(BOOL)hasLongitude;
-(double)altitude;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasLongitude:(BOOL)arg1 ;
-(BOOL)hasAltitude;
-(void)setHasAltitude:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

