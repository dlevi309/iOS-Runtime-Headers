/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned read_timezone : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_area : 1;
		unsigned wrote_basemapRegionMetadata : 1;
		unsigned wrote_center : 1;
		unsigned wrote_timezone : 1;
		unsigned wrote_knownAccuracy : 1;
		unsigned wrote_isApproximateCenter : 1;
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
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)placeInfoForPlaceData:(id)arg1 ;
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
-(GEOTimezone *)timezone;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readCenter;
-(BOOL)hasCenter;
-(void)_readTimezone;
-(void)setTimezone:(GEOTimezone *)arg1 ;
-(BOOL)hasTimezone;
-(int)knownAccuracy;
-(void)setKnownAccuracy:(int)arg1 ;
-(void)setHasKnownAccuracy:(BOOL)arg1 ;
-(BOOL)hasKnownAccuracy;
-(id)knownAccuracyAsString:(int)arg1 ;
-(int)StringAsKnownAccuracy:(id)arg1 ;
-(void)_readBasemapRegionMetadata;
-(GEOPDBasemapRegionMetadata *)basemapRegionMetadata;
-(void)setBasemapRegionMetadata:(GEOPDBasemapRegionMetadata *)arg1 ;
-(double)area;
-(void)setArea:(double)arg1 ;
-(void)setHasArea:(BOOL)arg1 ;
-(BOOL)hasArea;
-(BOOL)isApproximateCenter;
-(void)setIsApproximateCenter:(BOOL)arg1 ;
-(void)setHasIsApproximateCenter:(BOOL)arg1 ;
-(BOOL)hasIsApproximateCenter;
-(BOOL)hasBasemapRegionMetadata;
@end

