/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOLatLng, GEOMapRegion, GEOPDMapsIdentifier;

@interface GEORPFeedbackLayoutConfigParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOLatLng* _coordinate;
	GEOMapRegion* _mapRegion;
	GEOPDMapsIdentifier* _mapsId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _formType;
	struct {
		unsigned has_formType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_coordinate : 1;
		unsigned read_mapRegion : 1;
		unsigned read_mapsId : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_coordinate : 1;
		unsigned wrote_mapRegion : 1;
		unsigned wrote_mapsId : 1;
		unsigned wrote_formType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasFormType; 
@property (assign,nonatomic) int formType; 
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate; 
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
-(GEOLatLng *)coordinate;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(int)formType;
-(void)setFormType:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDMapsIdentifier *)mapsId;
-(void)_readMapRegion;
-(GEOMapRegion *)mapRegion;
-(BOOL)hasMapRegion;
-(void)_readMapsId;
-(void)setMapsId:(GEOPDMapsIdentifier *)arg1 ;
-(BOOL)hasMapsId;
-(void)_readCoordinate;
-(void)setHasFormType:(BOOL)arg1 ;
-(BOOL)hasFormType;
-(id)formTypeAsString:(int)arg1 ;
-(int)StringAsFormType:(id)arg1 ;
-(BOOL)hasCoordinate;
@end

