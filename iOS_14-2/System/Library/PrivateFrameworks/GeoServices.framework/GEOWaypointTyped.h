/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOWaypointID, GEOWaypointLocation, GEOWaypointPlace;

@interface GEOWaypointTyped : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOWaypointID* _waypointId;
	GEOWaypointLocation* _waypointLocation;
	GEOWaypointPlace* _waypointPlace;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _waypointType;
	BOOL _isCurrentLocation;
	BOOL _isLocationOfInterest;
	struct {
		unsigned has_waypointType : 1;
		unsigned has_isCurrentLocation : 1;
		unsigned has_isLocationOfInterest : 1;
		unsigned read_unknownFields : 1;
		unsigned read_waypointId : 1;
		unsigned read_waypointLocation : 1;
		unsigned read_waypointPlace : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasWaypointType; 
@property (assign,nonatomic) int waypointType; 
@property (nonatomic,readonly) BOOL hasWaypointId; 
@property (nonatomic,retain) GEOWaypointID * waypointId; 
@property (nonatomic,readonly) BOOL hasWaypointPlace; 
@property (nonatomic,retain) GEOWaypointPlace * waypointPlace; 
@property (nonatomic,readonly) BOOL hasWaypointLocation; 
@property (nonatomic,retain) GEOWaypointLocation * waypointLocation; 
@property (assign,nonatomic) BOOL hasIsCurrentLocation; 
@property (assign,nonatomic) BOOL isCurrentLocation; 
@property (assign,nonatomic) BOOL hasIsLocationOfInterest; 
@property (assign,nonatomic) BOOL isLocationOfInterest; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearLocations;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOWaypointID *)waypointId;
-(void)readAll:(BOOL)arg1 ;
-(int)waypointType;
-(id)init;
-(id)jsonRepresentation;
-(void)clearSensitiveFields;
-(BOOL)hasWaypointType;
-(void)setWaypointLocation:(GEOWaypointLocation *)arg1 ;
-(void)setHasWaypointType:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasWaypointPlace;
-(BOOL)hasIsLocationOfInterest;
-(void)setIsCurrentLocation:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasWaypointId;
-(BOOL)hasWaypointLocation;
-(BOOL)hasIsCurrentLocation;
-(BOOL)isCurrentLocation;
-(GEOWaypointPlace *)waypointPlace;
-(id)locationForWaypoint;
-(unsigned long long)hash;
-(void)setWaypointPlace:(GEOWaypointPlace *)arg1 ;
-(BOOL)isLocationOfInterest;
-(void)setWaypointType:(int)arg1 ;
-(void)setHasIsLocationOfInterest:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasIsCurrentLocation:(BOOL)arg1 ;
-(id)waypointTypeAsString:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setIsLocationOfInterest:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)StringAsWaypointType:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setWaypointId:(GEOWaypointID *)arg1 ;
-(GEOWaypointLocation *)waypointLocation;
@end

