/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_center : 1;
		unsigned wrote_disambiguationRadiusMeters : 1;
		unsigned wrote_distance : 1;
		unsigned wrote_mapsId : 1;
		unsigned wrote_opaqueGeoId : 1;
		unsigned wrote_placeType : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(GEOLatLng *)center;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)placeType;
-(void)setDistance:(double)arg1 ;
-(double)distance;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDMapsIdentifier *)mapsId;
-(void)_readCenter;
-(BOOL)hasCenter;
-(void)_readMapsId;
-(void)setMapsId:(GEOPDMapsIdentifier *)arg1 ;
-(BOOL)hasMapsId;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasDistance;
-(BOOL)hasOpaqueGeoId;
-(unsigned long long)opaqueGeoId;
-(BOOL)hasDisambiguationRadiusMeters;
-(double)disambiguationRadiusMeters;
-(void)setPlaceType:(int)arg1 ;
-(void)setHasPlaceType:(BOOL)arg1 ;
-(BOOL)hasPlaceType;
-(id)placeTypeAsString:(int)arg1 ;
-(int)StringAsPlaceType:(id)arg1 ;
-(void)setOpaqueGeoId:(unsigned long long)arg1 ;
-(void)setHasOpaqueGeoId:(BOOL)arg1 ;
-(void)setDisambiguationRadiusMeters:(double)arg1 ;
-(void)setHasDisambiguationRadiusMeters:(BOOL)arg1 ;
@end

