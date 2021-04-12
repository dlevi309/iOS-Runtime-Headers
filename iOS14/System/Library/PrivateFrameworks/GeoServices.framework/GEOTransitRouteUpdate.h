/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOTransitRouteDisplayStrings, GEOTransitRouteIdentifier;

@interface GEOTransitRouteUpdate : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _alerts;
	GEOTransitRouteDisplayStrings* _displayStrings;
	GEOTransitRouteIdentifier* _routeIdentifier;
	NSMutableArray* _stepUpdates;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _status;
	struct {
		unsigned has_status : 1;
		unsigned read_unknownFields : 1;
		unsigned read_alerts : 1;
		unsigned read_displayStrings : 1;
		unsigned read_routeIdentifier : 1;
		unsigned read_stepUpdates : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasRouteIdentifier; 
@property (nonatomic,retain) GEOTransitRouteIdentifier * routeIdentifier; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (nonatomic,readonly) BOOL hasDisplayStrings; 
@property (nonatomic,retain) GEOTransitRouteDisplayStrings * displayStrings; 
@property (nonatomic,retain) NSMutableArray * stepUpdates; 
@property (nonatomic,retain) NSMutableArray * alerts; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)alertType;
+(Class)stepUpdateType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOTransitRouteDisplayStrings *)displayStrings;
-(void)setDisplayStrings:(GEOTransitRouteDisplayStrings *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(NSMutableArray *)alerts;
-(id)jsonRepresentation;
-(GEOTransitRouteIdentifier *)routeIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(void)addAlert:(id)arg1 ;
-(BOOL)hasDisplayStrings;
-(id)initWithData:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setRouteIdentifier:(GEOTransitRouteIdentifier *)arg1 ;
-(BOOL)hasStatus;
-(int)StringAsStatus:(id)arg1 ;
-(unsigned long long)alertsCount;
-(void)addStepUpdate:(id)arg1 ;
-(unsigned long long)stepUpdatesCount;
-(void)clearStepUpdates;
-(id)stepUpdateAtIndex:(unsigned long long)arg1 ;
-(void)clearAlerts;
-(id)alertAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasRouteIdentifier;
-(NSMutableArray *)stepUpdates;
-(void)setStepUpdates:(NSMutableArray *)arg1 ;
-(id)description;
-(id)_logDescription;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAlerts:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
@end

