/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOMapRegion, GEOLocation, GEOComposedWaypoint, GEODirectionsRequestFeedback, GEORouteAttributes, NSString;

@interface MNDirectionsRequestDetails : PBCodable <NSCopying> {

	GEOMapRegion* _currentMapRegion;
	GEOLocation* _currentUserLocation;
	GEOComposedWaypoint* _destination;
	GEODirectionsRequestFeedback* _directionsRequestFeedback;
	unsigned _maxRouteCount;
	GEOComposedWaypoint* _origin;
	GEORouteAttributes* _routeAttributes;
	NSString* _tracePath;
	SCD_Struct_MN18 _has;

}

@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) GEOComposedWaypoint * origin;                                          //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) BOOL hasDestination; 
@property (nonatomic,retain) GEOComposedWaypoint * destination;                                     //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteAttributes; 
@property (nonatomic,retain) GEORouteAttributes * routeAttributes;                                  //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (assign,nonatomic) BOOL hasMaxRouteCount; 
@property (assign,nonatomic) unsigned maxRouteCount;                                                //@synthesize maxRouteCount=_maxRouteCount - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentUserLocation; 
@property (nonatomic,retain) GEOLocation * currentUserLocation;                                     //@synthesize currentUserLocation=_currentUserLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentMapRegion; 
@property (nonatomic,retain) GEOMapRegion * currentMapRegion;                                       //@synthesize currentMapRegion=_currentMapRegion - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionsRequestFeedback; 
@property (nonatomic,retain) GEODirectionsRequestFeedback * directionsRequestFeedback;              //@synthesize directionsRequestFeedback=_directionsRequestFeedback - In the implementation block
@property (nonatomic,readonly) BOOL hasTracePath; 
@property (nonatomic,retain) NSString * tracePath;                                                  //@synthesize tracePath=_tracePath - In the implementation block
-(void)setOrigin:(GEOComposedWaypoint *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDestination:(GEOComposedWaypoint *)arg1 ;
-(GEORouteAttributes *)routeAttributes;
-(GEOComposedWaypoint *)origin;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(BOOL)hasCurrentUserLocation;
-(GEOMapRegion *)currentMapRegion;
-(void)mergeFrom:(id)arg1 ;
-(void)setCurrentUserLocation:(GEOLocation *)arg1 ;
-(void)setCurrentMapRegion:(GEOMapRegion *)arg1 ;
-(id)description;
-(GEOLocation *)currentUserLocation;
-(void)setTracePath:(NSString *)arg1 ;
-(BOOL)hasRouteAttributes;
-(unsigned long long)hash;
-(BOOL)hasDestination;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)tracePath;
-(BOOL)hasOrigin;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOComposedWaypoint *)destination;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasCurrentMapRegion;
-(BOOL)hasTracePath;
-(GEODirectionsRequestFeedback *)directionsRequestFeedback;
-(unsigned)maxRouteCount;
-(void)setMaxRouteCount:(unsigned)arg1 ;
-(void)setDirectionsRequestFeedback:(GEODirectionsRequestFeedback *)arg1 ;
-(void)setHasMaxRouteCount:(BOOL)arg1 ;
-(BOOL)hasMaxRouteCount;
-(BOOL)hasDirectionsRequestFeedback;
@end
