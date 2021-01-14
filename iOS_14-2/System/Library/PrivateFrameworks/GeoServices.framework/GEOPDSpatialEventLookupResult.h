/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOMapRegion, NSMutableArray;

@interface GEOPDSpatialEventLookupResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOMapRegion* _displayMapRegion;
	NSMutableArray* _events;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _statusCode;
	struct {
		unsigned has_statusCode : 1;
		unsigned read_unknownFields : 1;
		unsigned read_displayMapRegion : 1;
		unsigned read_events : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode; 
@property (nonatomic,retain) NSMutableArray * events; 
@property (nonatomic,readonly) BOOL hasDisplayMapRegion; 
@property (nonatomic,retain) GEOMapRegion * displayMapRegion; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)eventType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)addEvent:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)clearEvents;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(GEOMapRegion *)displayMapRegion;
-(int)StringAsStatusCode:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)statusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)hasStatusCode;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)events;
-(unsigned long long)eventsCount;
-(void)writeTo:(id)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(void)setDisplayMapRegion:(GEOMapRegion *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)eventAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDisplayMapRegion;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

