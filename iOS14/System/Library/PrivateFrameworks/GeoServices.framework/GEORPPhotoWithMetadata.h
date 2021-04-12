/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSData, GEOLatLng;

@interface GEORPPhotoWithMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	double _creationDate;
	NSData* _data;
	GEOLatLng* _geotagCoordinate;
	double _geotagHorizontalAccuracy;
	double _geotagTimestamp;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_creationDate : 1;
		unsigned has_geotagHorizontalAccuracy : 1;
		unsigned has_geotagTimestamp : 1;
		unsigned read_data : 1;
		unsigned read_geotagCoordinate : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasData; 
@property (nonatomic,retain) NSData * data; 
@property (assign,nonatomic) BOOL hasCreationDate; 
@property (assign,nonatomic) double creationDate; 
@property (nonatomic,readonly) BOOL hasGeotagCoordinate; 
@property (nonatomic,retain) GEOLatLng * geotagCoordinate; 
@property (assign,nonatomic) BOOL hasGeotagHorizontalAccuracy; 
@property (assign,nonatomic) double geotagHorizontalAccuracy; 
@property (assign,nonatomic) BOOL hasGeotagTimestamp; 
@property (assign,nonatomic) double geotagTimestamp; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasCreationDate;
-(BOOL)hasData;
-(void)setCreationDate:(double)arg1 ;
-(GEOLatLng *)geotagCoordinate;
-(void)setGeotagCoordinate:(GEOLatLng *)arg1 ;
-(void)setGeotagTimestamp:(double)arg1 ;
-(void)setGeotagHorizontalAccuracy:(double)arg1 ;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(BOOL)hasGeotagCoordinate;
-(double)geotagTimestamp;
-(double)geotagHorizontalAccuracy;
-(void)setHasGeotagHorizontalAccuracy:(BOOL)arg1 ;
-(BOOL)hasGeotagHorizontalAccuracy;
-(void)setHasGeotagTimestamp:(BOOL)arg1 ;
-(BOOL)hasGeotagTimestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)description;
-(double)creationDate;
-(NSData *)data;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

