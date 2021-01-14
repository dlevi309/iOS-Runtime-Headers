/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEONavigabilityInfo, GEOTrafficBannerText, GEOTraversalTimes;

@interface GEOETATrafficUpdateWaypointRoute : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _incidentsOnUserWaypointRoutes;
	GEONavigabilityInfo* _navigabilityInfo;
	NSMutableArray* _newWaypointRoutes;
	NSMutableArray* _routeLegs;
	GEOTrafficBannerText* _trafficBannerText;
	GEOTraversalTimes* _traversalTimes;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _identifier;
	struct {
		unsigned has_identifier : 1;
		unsigned read_unknownFields : 1;
		unsigned read_incidentsOnUserWaypointRoutes : 1;
		unsigned read_navigabilityInfo : 1;
		unsigned read_newWaypointRoutes : 1;
		unsigned read_routeLegs : 1;
		unsigned read_trafficBannerText : 1;
		unsigned read_traversalTimes : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) unsigned identifier; 
@property (nonatomic,retain) NSMutableArray * routeLegs; 
@property (nonatomic,readonly) BOOL hasTraversalTimes; 
@property (nonatomic,retain) GEOTraversalTimes * traversalTimes; 
@property (nonatomic,retain) NSMutableArray * incidentsOnUserWaypointRoutes; 
@property (nonatomic,readonly) BOOL hasTrafficBannerText; 
@property (nonatomic,retain) GEOTrafficBannerText * trafficBannerText; 
@property (nonatomic,retain) NSMutableArray * newWaypointRoutes; 
@property (nonatomic,readonly) BOOL hasNavigabilityInfo; 
@property (nonatomic,retain) GEONavigabilityInfo * navigabilityInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)routeLegType;
+(BOOL)isValid:(id)arg1 ;
+(Class)incidentsOnUserWaypointRouteType;
+(Class)newWaypointRoutesType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasIdentifier;
-(NSMutableArray *)newWaypointRoutes;
-(GEOTraversalTimes *)traversalTimes;
-(NSMutableArray *)routeLegs;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)addRouteLeg:(id)arg1 ;
-(unsigned long long)routeLegsCount;
-(void)clearRouteLegs;
-(id)routeLegAtIndex:(unsigned long long)arg1 ;
-(void)setRouteLegs:(NSMutableArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(id)description;
-(void)setTraversalTimes:(GEOTraversalTimes *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTraversalTimes;
-(GEONavigabilityInfo *)navigabilityInfo;
-(GEOTrafficBannerText *)trafficBannerText;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(unsigned)arg1 ;
-(unsigned)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)incidentsOnUserWaypointRoutes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTrafficBannerText:(GEOTrafficBannerText *)arg1 ;
-(void)setNavigabilityInfo:(GEONavigabilityInfo *)arg1 ;
-(BOOL)hasNavigabilityInfo;
-(BOOL)hasTrafficBannerText;
-(void)addNewWaypointRoutes:(id)arg1 ;
-(void)addIncidentsOnUserWaypointRoute:(id)arg1 ;
-(unsigned long long)incidentsOnUserWaypointRoutesCount;
-(unsigned long long)newWaypointRoutesCount;
-(id)initWithJSON:(id)arg1 ;
-(void)clearIncidentsOnUserWaypointRoutes;
-(id)incidentsOnUserWaypointRouteAtIndex:(unsigned long long)arg1 ;
-(void)clearNewWaypointRoutes;
-(id)newWaypointRoutesAtIndex:(unsigned long long)arg1 ;
-(void)setIncidentsOnUserWaypointRoutes:(NSMutableArray *)arg1 ;
-(void)setNewWaypointRoutes:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

