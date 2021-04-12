/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_artwork : 1;
		unsigned wrote_color : 1;
		unsigned wrote_directionName : 1;
		unsigned wrote_headsign : 1;
		unsigned wrote_latLng : 1;
		unsigned wrote_modeShield : 1;
		unsigned wrote_styleAttributes : 1;
		unsigned wrote_time : 1;
		unsigned wrote_tripId : 1;
		unsigned wrote_bearing : 1;
		unsigned wrote_speed : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long tripID; 
@property (nonatomic,readonly) SCD_Struct_GE32 coordinate; 
@property (nonatomic,readonly) double heading; 
@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,copy,readonly) NSString * direction; 
@property (nonatomic,copy,readonly) NSString * headsign; 
@property (nonatomic,copy,readonly) NSString * colorHexString; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artworkDataSource; 
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(SCD_Struct_GE32)coordinate;
-(id)dictionaryRepresentation;
-(NSDate *)timestamp;
-(unsigned long long)time;
-(void)writeTo:(id)arg1 ;
-(NSString *)color;
-(void)setColor:(NSString *)arg1 ;
-(NSString *)direction;
-(void)setTime:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)speed;
-(void)setSpeed:(float)arg1 ;
-(double)heading;
-(GEOStyleAttributes *)styleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(void)setHasTime:(BOOL)arg1 ;
-(BOOL)hasTime;
-(void)setHasSpeed:(BOOL)arg1 ;
-(BOOL)hasSpeed;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOLatLng *)latLng;
-(unsigned long long)tripID;
-(void)_readLatLng;
-(void)_readDirectionName;
-(void)_readHeadsign;
-(void)_readModeShield;
-(void)_readColor;
-(void)_readStyleAttributes;
-(void)_readArtwork;
-(NSString *)directionName;
-(NSString *)headsign;
-(GEOPBTransitShield *)modeShield;
-(GEOPBTransitArtwork *)artwork;
-(void)setLatLng:(GEOLatLng *)arg1 ;
-(void)setDirectionName:(NSString *)arg1 ;
-(void)setHeadsign:(NSString *)arg1 ;
-(void)setModeShield:(GEOPBTransitShield *)arg1 ;
-(void)setArtwork:(GEOPBTransitArtwork *)arg1 ;
-(unsigned long long)tripId;
-(void)setTripId:(unsigned long long)arg1 ;
-(void)setHasTripId:(BOOL)arg1 ;
-(BOOL)hasTripId;
-(BOOL)hasLatLng;
-(float)bearing;
-(void)setBearing:(float)arg1 ;
-(void)setHasBearing:(BOOL)arg1 ;
-(BOOL)hasBearing;
-(BOOL)hasDirectionName;
-(BOOL)hasHeadsign;
-(BOOL)hasModeShield;
-(BOOL)hasColor;
-(BOOL)hasStyleAttributes;
-(BOOL)hasArtwork;
-(NSString *)colorHexString;
-(id<GEOTransitArtworkDataSource>)artworkDataSource;
@end

