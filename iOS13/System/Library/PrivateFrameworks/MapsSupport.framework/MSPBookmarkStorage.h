/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, MSPPlaceBookmark, MSPRegionBookmark, MSPRouteBookmark, MSPTransitLineBookmark;

@interface MSPBookmarkStorage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _position;
	double _timestamp;
	NSString* _identifier;
	MSPPlaceBookmark* _placeBookmark;
	MSPRegionBookmark* _regionBookmark;
	MSPRouteBookmark* _routeBookmark;
	MSPTransitLineBookmark* _transitLineBookmark;
	int _type;
	SCD_Struct_MS4 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasPosition; 
@property (assign,nonatomic) double position;                                           //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceBookmark; 
@property (nonatomic,retain) MSPPlaceBookmark * placeBookmark;                          //@synthesize placeBookmark=_placeBookmark - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteBookmark; 
@property (nonatomic,retain) MSPRouteBookmark * routeBookmark;                          //@synthesize routeBookmark=_routeBookmark - In the implementation block
@property (nonatomic,readonly) BOOL hasRegionBookmark; 
@property (nonatomic,retain) MSPRegionBookmark * regionBookmark;                        //@synthesize regionBookmark=_regionBookmark - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitLineBookmark; 
@property (nonatomic,retain) MSPTransitLineBookmark * transitLineBookmark;              //@synthesize transitLineBookmark=_transitLineBookmark - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(double)position;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setPosition:(double)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasIdentifier;
-(BOOL)hasPosition;
-(void)setHasPosition:(BOOL)arg1 ;
-(BOOL)hasPlaceBookmark;
-(void)setPlaceBookmark:(MSPPlaceBookmark *)arg1 ;
-(MSPPlaceBookmark *)placeBookmark;
-(void)setRouteBookmark:(MSPRouteBookmark *)arg1 ;
-(MSPRouteBookmark *)routeBookmark;
-(void)setRegionBookmark:(MSPRegionBookmark *)arg1 ;
-(MSPRegionBookmark *)regionBookmark;
-(void)setTransitLineBookmark:(MSPTransitLineBookmark *)arg1 ;
-(MSPTransitLineBookmark *)transitLineBookmark;
-(BOOL)hasRouteBookmark;
-(BOOL)hasRegionBookmark;
-(BOOL)hasTransitLineBookmark;
@end

