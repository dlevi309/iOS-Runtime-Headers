/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOLatLng, GEOPDMapsIdentifier;

@interface GEOPDAutocompleteEntryAddress : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOLatLng* _center;
	double _disambiguationRadiusMeters;
	double _distance;
	GEOPDMapsIdentifier* _mapsId;
	unsigned long long _opaqueGeoId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _placeType;
	struct {
		unsigned has_disambiguationRadiusMeters : 1;
		unsigned has_distance : 1;
		unsigned has_opaqueGeoId : 1;
		unsigned has_placeType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_center : 1;
		unsigned read_mapsId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center; 
@property (assign,nonatomic) BOOL hasOpaqueGeoId; 
@property (assign,nonatomic) unsigned long long opaqueGeoId; 
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) double distance; 
@property (assign,nonatomic) BOOL hasPlaceType; 
@property (assign,nonatomic) int placeType; 
@property (assign,nonatomic) BOOL hasDisambiguationRadiusMeters; 
@property (assign,nonatomic) double disambiguationRadiusMeters; 
@property (nonatomic,readonly) BOOL hasMapsId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * mapsId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)setDistance:(double)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(GEOLatLng *)center;
-(void)setMapsId:(GEOPDMapsIdentifier *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasCenter;
-(double)distance;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDistance;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)placeType;
-(void)setPlaceType:(int)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(void)setHasPlaceType:(BOOL)arg1 ;
-(BOOL)hasPlaceType;
-(id)placeTypeAsString:(int)arg1 ;
-(int)StringAsPlaceType:(id)arg1 ;
-(id)description;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(GEOPDMapsIdentifier *)mapsId;
-(BOOL)hasMapsId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setOpaqueGeoId:(unsigned long long)arg1 ;
-(void)setDisambiguationRadiusMeters:(double)arg1 ;
-(unsigned long long)opaqueGeoId;
-(void)setHasOpaqueGeoId:(BOOL)arg1 ;
-(BOOL)hasOpaqueGeoId;
-(double)disambiguationRadiusMeters;
-(void)setHasDisambiguationRadiusMeters:(BOOL)arg1 ;
-(BOOL)hasDisambiguationRadiusMeters;
@end

