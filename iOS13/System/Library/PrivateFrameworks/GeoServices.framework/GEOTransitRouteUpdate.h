/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_alerts : 1;
		unsigned wrote_displayStrings : 1;
		unsigned wrote_routeIdentifier : 1;
		unsigned wrote_stepUpdates : 1;
		unsigned wrote_status : 1;
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
+(BOOL)isValid:(id)arg1 ;
+(Class)alertType;
+(Class)stepUpdateType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOTransitRouteIdentifier *)routeIdentifier;
-(NSMutableArray *)stepUpdates;
-(NSMutableArray *)alerts;
-(id)_logDescription;
-(GEOTransitRouteDisplayStrings *)displayStrings;
-(void)_readDisplayStrings;
-(void)setDisplayStrings:(GEOTransitRouteDisplayStrings *)arg1 ;
-(void)_readRouteIdentifier;
-(void)_readStepUpdates;
-(void)_addNoFlagsStepUpdate:(id)arg1 ;
-(void)_readAlerts;
-(void)_addNoFlagsAlert:(id)arg1 ;
-(void)setRouteIdentifier:(GEOTransitRouteIdentifier *)arg1 ;
-(unsigned long long)stepUpdatesCount;
-(void)clearStepUpdates;
-(id)stepUpdateAtIndex:(unsigned long long)arg1 ;
-(void)addStepUpdate:(id)arg1 ;
-(unsigned long long)alertsCount;
-(void)clearAlerts;
-(id)alertAtIndex:(unsigned long long)arg1 ;
-(void)addAlert:(id)arg1 ;
-(BOOL)hasRouteIdentifier;
-(BOOL)hasDisplayStrings;
-(void)setStepUpdates:(NSMutableArray *)arg1 ;
-(void)setAlerts:(NSMutableArray *)arg1 ;
@end

