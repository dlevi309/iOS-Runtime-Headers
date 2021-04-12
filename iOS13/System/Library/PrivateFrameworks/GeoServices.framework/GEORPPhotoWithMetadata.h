/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_creationDate : 1;
		unsigned wrote_data : 1;
		unsigned wrote_geotagCoordinate : 1;
		unsigned wrote_geotagHorizontalAccuracy : 1;
		unsigned wrote_geotagTimestamp : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(double)creationDate;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCreationDate:(double)arg1 ;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(BOOL)hasCreationDate;
-(void)_readData;
-(void)readAll:(BOOL)arg1 ;
-(void)_readGeotagCoordinate;
-(GEOLatLng *)geotagCoordinate;
-(void)setGeotagCoordinate:(GEOLatLng *)arg1 ;
-(BOOL)hasData;
-(BOOL)hasGeotagCoordinate;
-(double)geotagHorizontalAccuracy;
-(void)setGeotagHorizontalAccuracy:(double)arg1 ;
-(void)setHasGeotagHorizontalAccuracy:(BOOL)arg1 ;
-(BOOL)hasGeotagHorizontalAccuracy;
-(double)geotagTimestamp;
-(void)setGeotagTimestamp:(double)arg1 ;
-(void)setHasGeotagTimestamp:(BOOL)arg1 ;
-(BOOL)hasGeotagTimestamp;
@end

