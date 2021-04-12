/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOLatLng, GEOMapItemStorage, GEOWaypointTyped;

@interface GEOComposedWaypoint : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOLatLng* _latLng;
	GEOMapItemStorage* _mapItemStorage;
	GEOWaypointTyped* _waypoint;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_latLng : 1;
		unsigned read_mapItemStorage : 1;
		unsigned read_waypoint : 1;
		unsigned wrote_latLng : 1;
		unsigned wrote_mapItemStorage : 1;
		unsigned wrote_waypoint : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasWaypoint; 
@property (nonatomic,retain) GEOWaypointTyped * waypoint; 
@property (nonatomic,readonly) BOOL hasMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * mapItemStorage; 
@property (nonatomic,readonly) BOOL hasLatLng; 
@property (nonatomic,retain) GEOLatLng * latLng; 
+(BOOL)isValid:(id)arg1 ;
+(void)composedWaypointForMapServiceResponse:(id)arg1 clientAttributes:(id)arg2 error:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 traits:(id)arg3 auditToken:(id)arg4 completionHandler:(/*^block*/id)arg5 networkActivityHandler:(/*^block*/id)arg6 ;
+(id)composedWaypointForCurrentLocation:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForSearchString:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 clientAttributes:(id)arg4 clientResolvedCompletionHandler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 networkActivityHandler:(/*^block*/id)arg7 ;
+(id)composedWaypointForMapItemToRefine:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 clientAttributes:(id)arg4 completionHandler:(/*^block*/id)arg5 networkActivityHandler:(/*^block*/id)arg6 ;
+(id)composedWaypointForMapItem:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 clientAttributes:(id)arg4 completionHandler:(/*^block*/id)arg5 networkActivityHandler:(/*^block*/id)arg6 ;
+(id)composedWaypointForMapItemToRefine:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForIdentifier:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 traits:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForID:(unsigned long long)arg1 resultsProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 clientAttributes:(id)arg5 completionHandler:(/*^block*/id)arg6 networkActivityHandler:(/*^block*/id)arg7 ;
+(id)composedWaypointForCurrentLocation:(id)arg1 traits:(id)arg2 completionHandler:(/*^block*/id)arg3 networkActivityHandler:(/*^block*/id)arg4 ;
+(id)composedWaypointForAddressString:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForSearchString:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 clientAttributes:(id)arg4 completionHandler:(/*^block*/id)arg5 networkActivityHandler:(/*^block*/id)arg6 ;
+(id)composedWaypointForMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForIncompleteMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForTransitID:(unsigned long long)arg1 coordinate:(SCD_Struct_GE32)arg2 isCurrentLocation:(BOOL)arg3 traits:(id)arg4 clientAttributes:(id)arg5 completionHandler:(/*^block*/id)arg6 networkActivityHandler:(/*^block*/id)arg7 ;
+(id)composedWaypointForWaypointTyped:(id)arg1 completionHandler:(/*^block*/id)arg2 networkActivityHandler:(/*^block*/id)arg3 ;
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
-(id)timezone;
-(void)readAll:(BOOL)arg1 ;
-(GEOLatLng *)latLng;
-(void)_readLatLng;
-(void)setLatLng:(GEOLatLng *)arg1 ;
-(BOOL)hasLatLng;
-(BOOL)hasMapItemStorage;
-(id)geoMapItem;
-(id)initWithLocation:(id)arg1 isCurrentLocation:(BOOL)arg2 ;
-(id)initWithMapItem:(id)arg1 ;
-(GEOWaypointTyped *)waypoint;
-(GEOMapItemStorage *)mapItemStorage;
-(BOOL)isSameAs:(id)arg1 comparisonCriteria:(unsigned long long)arg2 ;
-(id)_muidCandidatesForComparison;
-(id)_locationCandidatesForComparison;
-(id)_addressCandidatesForComparison;
-(id)_regionCandidatesForContainment;
-(BOOL)isSameAs:(id)arg1 ;
-(BOOL)isCurrentLocation;
-(void)setIsCurrentLocation:(BOOL)arg1 ;
-(void)_readWaypoint;
-(void)_readMapItemStorage;
-(void)setWaypoint:(GEOWaypointTyped *)arg1 ;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(BOOL)hasWaypoint;
-(BOOL)isLocationWaypointType;
-(id)bestLatLng;
-(double)distanceToWaypoint:(id)arg1 ;
@end

