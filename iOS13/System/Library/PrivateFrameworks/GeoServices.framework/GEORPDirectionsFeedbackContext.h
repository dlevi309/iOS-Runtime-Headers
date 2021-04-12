/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEORPUserSearchInput;

@interface GEORPDirectionsFeedbackContext : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _directionsRequests;
	NSMutableArray* _directionsResponses;
	NSMutableArray* _directionsWaypointPlaceInfos;
	GEORPUserSearchInput* _endWaypoint;
	GEORPUserSearchInput* _startWaypoint;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_directionsRequests : 1;
		unsigned read_directionsResponses : 1;
		unsigned read_directionsWaypointPlaceInfos : 1;
		unsigned read_endWaypoint : 1;
		unsigned read_startWaypoint : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_directionsRequests : 1;
		unsigned wrote_directionsResponses : 1;
		unsigned wrote_directionsWaypointPlaceInfos : 1;
		unsigned wrote_endWaypoint : 1;
		unsigned wrote_startWaypoint : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * directionsRequests; 
@property (nonatomic,retain) NSMutableArray * directionsResponses; 
@property (nonatomic,retain) NSMutableArray * directionsWaypointPlaceInfos; 
@property (nonatomic,readonly) BOOL hasStartWaypoint; 
@property (nonatomic,retain) GEORPUserSearchInput * startWaypoint; 
@property (nonatomic,readonly) BOOL hasEndWaypoint; 
@property (nonatomic,retain) GEORPUserSearchInput * endWaypoint; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)directionsRequestType;
+(Class)directionsResponseType;
+(Class)directionsWaypointPlaceInfoType;
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
-(void)_readDirectionsRequests;
-(void)_addNoFlagsDirectionsRequest:(id)arg1 ;
-(void)_readDirectionsResponses;
-(void)_addNoFlagsDirectionsResponse:(id)arg1 ;
-(void)_readDirectionsWaypointPlaceInfos;
-(void)_addNoFlagsDirectionsWaypointPlaceInfo:(id)arg1 ;
-(unsigned long long)directionsRequestsCount;
-(void)clearDirectionsRequests;
-(id)directionsRequestAtIndex:(unsigned long long)arg1 ;
-(void)addDirectionsRequest:(id)arg1 ;
-(unsigned long long)directionsResponsesCount;
-(void)clearDirectionsResponses;
-(id)directionsResponseAtIndex:(unsigned long long)arg1 ;
-(void)addDirectionsResponse:(id)arg1 ;
-(unsigned long long)directionsWaypointPlaceInfosCount;
-(void)clearDirectionsWaypointPlaceInfos;
-(id)directionsWaypointPlaceInfoAtIndex:(unsigned long long)arg1 ;
-(void)addDirectionsWaypointPlaceInfo:(id)arg1 ;
-(NSMutableArray *)directionsRequests;
-(void)setDirectionsRequests:(NSMutableArray *)arg1 ;
-(NSMutableArray *)directionsResponses;
-(void)setDirectionsResponses:(NSMutableArray *)arg1 ;
-(NSMutableArray *)directionsWaypointPlaceInfos;
-(void)setDirectionsWaypointPlaceInfos:(NSMutableArray *)arg1 ;
-(void)_readStartWaypoint;
-(void)_readEndWaypoint;
-(GEORPUserSearchInput *)startWaypoint;
-(GEORPUserSearchInput *)endWaypoint;
-(void)setStartWaypoint:(GEORPUserSearchInput *)arg1 ;
-(void)setEndWaypoint:(GEORPUserSearchInput *)arg1 ;
-(BOOL)hasStartWaypoint;
-(BOOL)hasEndWaypoint;
@end

