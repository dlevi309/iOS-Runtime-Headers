/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDParsecQueryRankingFeatures : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _geoScore;
	double _poiScore;
	struct {
		unsigned has_geoScore : 1;
		unsigned has_poiScore : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasPoiScore; 
@property (assign,nonatomic) double poiScore; 
@property (assign,nonatomic) BOOL hasGeoScore; 
@property (assign,nonatomic) double geoScore; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(double)poiScore;
-(void)setPoiScore:(double)arg1 ;
-(void)setGeoScore:(double)arg1 ;
-(void)setHasPoiScore:(BOOL)arg1 ;
-(BOOL)hasPoiScore;
-(void)setHasGeoScore:(BOOL)arg1 ;
-(BOOL)hasGeoScore;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(double)geoScore;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

