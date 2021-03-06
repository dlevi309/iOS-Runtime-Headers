/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSData, NSMutableArray;

@interface GEOPDRecentRouteInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSData* _etaFilter;
	NSData* _evChargingMetadata;
	NSData* _originalWaypointRoute;
	NSData* _routeId;
	NSData* _sessionState;
	NSMutableArray* _zilchPointSegments;
	NSData* _zilchPoints;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _preferredTransportType;
	struct {
		unsigned has_preferredTransportType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_etaFilter : 1;
		unsigned read_evChargingMetadata : 1;
		unsigned read_originalWaypointRoute : 1;
		unsigned read_routeId : 1;
		unsigned read_sessionState : 1;
		unsigned read_zilchPointSegments : 1;
		unsigned read_zilchPoints : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasZilchPoints; 
@property (nonatomic,retain) NSData * zilchPoints; 
@property (nonatomic,readonly) BOOL hasSessionState; 
@property (nonatomic,retain) NSData * sessionState; 
@property (nonatomic,readonly) BOOL hasRouteId; 
@property (nonatomic,retain) NSData * routeId; 
@property (assign,nonatomic) BOOL hasPreferredTransportType; 
@property (assign,nonatomic) int preferredTransportType; 
@property (nonatomic,readonly) BOOL hasEtaFilter; 
@property (nonatomic,retain) NSData * etaFilter; 
@property (nonatomic,retain) NSMutableArray * zilchPointSegments; 
@property (nonatomic,readonly) BOOL hasEvChargingMetadata; 
@property (nonatomic,retain) NSData * evChargingMetadata; 
@property (nonatomic,readonly) BOOL hasOriginalWaypointRoute; 
@property (nonatomic,retain) NSData * originalWaypointRoute; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)zilchPointSegmentType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSData *)sessionState;
-(void)readAll:(BOOL)arg1 ;
-(void)setSessionState:(NSData *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasSessionState;
-(NSData *)routeId;
-(void)mergeFrom:(id)arg1 ;
-(void)setEtaFilter:(NSData *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasOriginalWaypointRoute;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasEtaFilter;
-(void)setOriginalWaypointRoute:(NSData *)arg1 ;
-(NSData *)etaFilter;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)originalWaypointRoute;
-(BOOL)hasRouteId;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)zilchPointSegments;
-(NSData *)evChargingMetadata;
-(void)setRouteId:(NSData *)arg1 ;
-(void)setPreferredTransportType:(int)arg1 ;
-(void)addZilchPointSegment:(id)arg1 ;
-(void)setEvChargingMetadata:(NSData *)arg1 ;
-(unsigned long long)zilchPointSegmentsCount;
-(void)clearZilchPointSegments;
-(id)zilchPointSegmentAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasZilchPoints;
-(int)preferredTransportType;
-(void)setHasPreferredTransportType:(BOOL)arg1 ;
-(BOOL)hasPreferredTransportType;
-(id)preferredTransportTypeAsString:(int)arg1 ;
-(int)StringAsPreferredTransportType:(id)arg1 ;
-(void)setZilchPointSegments:(NSMutableArray *)arg1 ;
-(BOOL)hasEvChargingMetadata;
-(void)setZilchPoints:(NSData *)arg1 ;
-(NSData *)zilchPoints;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

