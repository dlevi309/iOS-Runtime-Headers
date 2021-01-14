/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
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
+(Class)directionsRequestType;
+(Class)directionsResponseType;
+(Class)directionsWaypointPlaceInfoType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(GEORPUserSearchInput *)endWaypoint;
-(GEORPUserSearchInput *)startWaypoint;
-(void)setEndWaypoint:(GEORPUserSearchInput *)arg1 ;
-(void)addDirectionsRequest:(id)arg1 ;
-(void)addDirectionsResponse:(id)arg1 ;
-(void)addDirectionsWaypointPlaceInfo:(id)arg1 ;
-(void)setStartWaypoint:(GEORPUserSearchInput *)arg1 ;
-(unsigned long long)directionsRequestsCount;
-(void)clearDirectionsRequests;
-(id)directionsRequestAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)directionsResponsesCount;
-(void)clearDirectionsResponses;
-(id)directionsResponseAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)directionsWaypointPlaceInfosCount;
-(void)clearDirectionsWaypointPlaceInfos;
-(id)directionsWaypointPlaceInfoAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasStartWaypoint;
-(NSMutableArray *)directionsRequests;
-(void)setDirectionsRequests:(NSMutableArray *)arg1 ;
-(NSMutableArray *)directionsResponses;
-(void)setDirectionsResponses:(NSMutableArray *)arg1 ;
-(NSMutableArray *)directionsWaypointPlaceInfos;
-(void)setDirectionsWaypointPlaceInfos:(NSMutableArray *)arg1 ;
-(BOOL)hasEndWaypoint;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

