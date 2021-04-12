/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_waypointId : 1;
		unsigned wrote_waypointLocation : 1;
		unsigned wrote_waypointPlace : 1;
		unsigned wrote_waypointType : 1;
		unsigned wrote_isCurrentLocation : 1;
		unsigned wrote_isLocationOfInterest : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(void)clearLocations;
-(GEOWaypointID *)waypointId;
-(GEOWaypointPlace *)waypointPlace;
-(GEOWaypointLocation *)waypointLocation;
-(void)_readWaypointId;
-(void)_readWaypointPlace;
-(void)_readWaypointLocation;
-(BOOL)hasWaypointLocation;
-(void)setWaypointLocation:(GEOWaypointLocation *)arg1 ;
-(void)setWaypointId:(GEOWaypointID *)arg1 ;
-(void)setWaypointPlace:(GEOWaypointPlace *)arg1 ;
-(int)waypointType;
-(void)setWaypointType:(int)arg1 ;
-(void)setHasWaypointType:(BOOL)arg1 ;
-(BOOL)hasWaypointType;
-(id)waypointTypeAsString:(int)arg1 ;
-(int)StringAsWaypointType:(id)arg1 ;
-(BOOL)hasWaypointId;
-(BOOL)hasWaypointPlace;
-(BOOL)isCurrentLocation;
-(void)setIsCurrentLocation:(BOOL)arg1 ;
-(void)setHasIsCurrentLocation:(BOOL)arg1 ;
-(BOOL)hasIsCurrentLocation;
-(BOOL)isLocationOfInterest;
-(void)setIsLocationOfInterest:(BOOL)arg1 ;
-(void)setHasIsLocationOfInterest:(BOOL)arg1 ;
-(BOOL)hasIsLocationOfInterest;
-(id)locationForWaypoint;
@end

