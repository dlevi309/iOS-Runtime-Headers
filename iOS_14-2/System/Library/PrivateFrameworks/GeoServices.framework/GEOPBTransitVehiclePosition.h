/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitVehiclePosition.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, PBDataReader, PBUnknownFields, GEOPBTransitArtwork, GEOLatLng, GEOPBTransitShield, GEOStyleAttributes;

@interface GEOPBTransitVehiclePosition : PBCodable <GEOTransitVehiclePosition, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPBTransitArtwork* _artwork;
	NSString* _color;
	NSString* _directionName;
	NSString* _headsign;
	GEOLatLng* _latLng;
	GEOPBTransitShield* _modeShield;
	GEOStyleAttributes* _styleAttributes;
	unsigned long long _time;
	unsigned long long _tripId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	float _bearing;
	float _speed;
	struct {
		unsigned has_time : 1;
		unsigned has_tripId : 1;
		unsigned has_bearing : 1;
		unsigned has_speed : 1;
		unsigned read_unknownFields : 1;
		unsigned read_artwork : 1;
		unsigned read_color : 1;
		unsigned read_directionName : 1;
		unsigned read_headsign : 1;
		unsigned read_latLng : 1;
		unsigned read_modeShield : 1;
		unsigned read_styleAttributes : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long tripID; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
@property (nonatomic,readonly) double heading; 
@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,copy,readonly) NSString * direction; 
@property (nonatomic,copy,readonly) NSString * headsign; 
@property (nonatomic,copy,readonly) NSString * colorHexString; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artworkDataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasTripId; 
@property (assign,nonatomic) unsigned long long tripId; 
@property (nonatomic,readonly) BOOL hasLatLng; 
@property (nonatomic,retain) GEOLatLng * latLng; 
@property (assign,nonatomic) BOOL hasTime; 
@property (assign,nonatomic) unsigned long long time; 
@property (assign,nonatomic) BOOL hasBearing; 
@property (assign,nonatomic) float bearing; 
@property (assign,nonatomic) BOOL hasSpeed; 
@property (assign,nonatomic) float speed; 
@property (nonatomic,readonly) BOOL hasDirectionName; 
@property (nonatomic,retain) NSString * directionName; 
@property (nonatomic,readonly) BOOL hasHeadsign; 
@property (nonatomic,retain) NSString * headsign; 
@property (nonatomic,readonly) BOOL hasModeShield; 
@property (nonatomic,retain) GEOPBTransitShield * modeShield; 
@property (nonatomic,readonly) BOOL hasColor; 
@property (nonatomic,retain) NSString * color; 
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) BOOL hasArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * artwork; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)transitVehiclePositionForPlaceData:(id)arg1 ;
-(NSString *)direction;
-(BOOL)hasStyleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(id)dictionaryRepresentation;
-(double)heading;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)time;
-(void)setSpeed:(float)arg1 ;
-(id<GEOTransitArtworkDataSource>)artworkDataSource;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setTime:(unsigned long long)arg1 ;
-(GEOStyleAttributes *)styleAttributes;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(unsigned long long)tripID;
-(id)jsonRepresentation;
-(unsigned long long)tripId;
-(float)speed;
-(GEOCoarseLocationLatLng)coordinate;
-(void)setArtwork:(GEOPBTransitArtwork *)arg1 ;
-(NSString *)color;
-(NSDate *)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(float)bearing;
-(BOOL)hasTime;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOLatLng *)latLng;
-(NSString *)description;
-(BOOL)hasColor;
-(BOOL)hasSpeed;
-(void)setColor:(NSString *)arg1 ;
-(NSString *)headsign;
-(GEOPBTransitArtwork *)artwork;
-(BOOL)hasHeadsign;
-(void)setHasSpeed:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasLatLng;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLatLng:(GEOLatLng *)arg1 ;
-(BOOL)hasArtwork;
-(BOOL)hasTripId;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)directionName;
-(void)setBearing:(float)arg1 ;
-(BOOL)hasBearing;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDirectionName:(NSString *)arg1 ;
-(void)setModeShield:(GEOPBTransitShield *)arg1 ;
-(void)setHasTripId:(BOOL)arg1 ;
-(void)setHasBearing:(BOOL)arg1 ;
-(BOOL)hasDirectionName;
-(BOOL)hasModeShield;
-(void)setHeadsign:(NSString *)arg1 ;
-(void)setHasTime:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)colorHexString;
-(GEOPBTransitShield *)modeShield;
-(void)setTripId:(unsigned long long)arg1 ;
@end

