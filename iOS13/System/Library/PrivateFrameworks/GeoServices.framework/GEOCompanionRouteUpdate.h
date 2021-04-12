/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSData, GEOTransitRouteUpdate;

@interface GEOCompanionRouteUpdate : PBCodable <NSCopying> {

	PBDataReader* _reader;
	double _lastUpdated;
	NSData* _routeID;
	GEOTransitRouteUpdate* _transitRouteUpdate;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _type;
	struct {
		unsigned has_lastUpdated : 1;
		unsigned has_type : 1;
		unsigned read_routeID : 1;
		unsigned read_transitRouteUpdate : 1;
		unsigned wrote_lastUpdated : 1;
		unsigned wrote_routeID : 1;
		unsigned wrote_transitRouteUpdate : 1;
		unsigned wrote_type : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasLastUpdated; 
@property (assign,nonatomic) double lastUpdated; 
@property (nonatomic,readonly) BOOL hasTransitRouteUpdate; 
@property (nonatomic,retain) GEOTransitRouteUpdate * transitRouteUpdate; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)readAll:(BOOL)arg1 ;
-(void)_readRouteID;
-(NSData *)routeID;
-(void)setRouteID:(NSData *)arg1 ;
-(BOOL)hasRouteID;
-(void)setTransitRouteUpdate:(GEOTransitRouteUpdate *)arg1 ;
-(id)initWithTransitRouteUpdate:(id)arg1 ;
-(GEOTransitRouteUpdate *)transitRouteUpdate;
-(double)lastUpdated;
-(void)_readTransitRouteUpdate;
-(void)setLastUpdated:(double)arg1 ;
-(void)setHasLastUpdated:(BOOL)arg1 ;
-(BOOL)hasLastUpdated;
-(BOOL)hasTransitRouteUpdate;
@end

