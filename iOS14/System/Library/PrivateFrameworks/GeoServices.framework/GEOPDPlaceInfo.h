/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDBasemapRegionMetadata, GEOLatLng, GEOTimezone;

@interface GEOPDPlaceInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	double _area;
	GEOPDBasemapRegionMetadata* _basemapRegionMetadata;
	GEOLatLng* _center;
	GEOLatLng* _enhancedCenter;
	GEOTimezone* _timezone;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _knownAccuracy;
	BOOL _isApproximateCenter;
	struct {
		unsigned has_area : 1;
		unsigned has_knownAccuracy : 1;
		unsigned has_isApproximateCenter : 1;
		unsigned read_unknownFields : 1;
		unsigned read_basemapRegionMetadata : 1;
		unsigned read_center : 1;
		unsigned read_enhancedCenter : 1;
		unsigned read_timezone : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center; 
@property (assign,nonatomic) BOOL hasArea; 
@property (assign,nonatomic) double area; 
@property (nonatomic,readonly) BOOL hasTimezone; 
@property (nonatomic,retain) GEOTimezone * timezone; 
@property (assign,nonatomic) BOOL hasIsApproximateCenter; 
@property (assign,nonatomic) BOOL isApproximateCenter; 
@property (assign,nonatomic) BOOL hasKnownAccuracy; 
@property (assign,nonatomic) int knownAccuracy; 
@property (nonatomic,readonly) BOOL hasBasemapRegionMetadata; 
@property (nonatomic,retain) GEOPDBasemapRegionMetadata * basemapRegionMetadata; 
@property (nonatomic,readonly) BOOL hasEnhancedCenter; 
@property (nonatomic,retain) GEOLatLng * enhancedCenter; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)placeInfoForPlaceData:(id)arg1 ;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOTimezone *)timezone;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(GEOLatLng *)center;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasCenter;
-(double)area;
-(BOOL)hasIsApproximateCenter;
-(BOOL)hasEnhancedCenter;
-(id)knownAccuracyAsString:(int)arg1 ;
-(void)setEnhancedCenter:(GEOLatLng *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasArea;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasKnownAccuracy;
-(void)setHasKnownAccuracy:(BOOL)arg1 ;
-(id)description;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(BOOL)hasTimezone;
-(BOOL)hasBasemapRegionMetadata;
-(void)setArea:(double)arg1 ;
-(GEOLatLng *)enhancedCenter;
-(GEOPDBasemapRegionMetadata *)basemapRegionMetadata;
-(unsigned long long)hash;
-(void)setHasIsApproximateCenter:(BOOL)arg1 ;
-(int)StringAsKnownAccuracy:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasArea:(BOOL)arg1 ;
-(void)setIsApproximateCenter:(BOOL)arg1 ;
-(int)knownAccuracy;
-(void)setKnownAccuracy:(int)arg1 ;
-(BOOL)isApproximateCenter;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTimezone:(GEOTimezone *)arg1 ;
-(void)setBasemapRegionMetadata:(GEOPDBasemapRegionMetadata *)arg1 ;
@end

