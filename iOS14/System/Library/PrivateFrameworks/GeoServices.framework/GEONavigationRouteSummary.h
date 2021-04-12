/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOComposedWaypoint;

@interface GEONavigationRouteSummary : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _destinationName;
	GEOComposedWaypoint* _destination;
	GEOComposedWaypoint* _origin;
	double _travelTime;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _transportType;
	struct {
		unsigned has_travelTime : 1;
		unsigned has_transportType : 1;
		unsigned read_destinationName : 1;
		unsigned read_destination : 1;
		unsigned read_origin : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType; 
@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) GEOComposedWaypoint * origin; 
@property (nonatomic,readonly) BOOL hasDestination; 
@property (nonatomic,retain) GEOComposedWaypoint * destination; 
@property (nonatomic,readonly) BOOL hasDestinationName; 
@property (nonatomic,retain) NSString * destinationName; 
@property (assign,nonatomic) BOOL hasTravelTime; 
@property (assign,nonatomic) double travelTime; 
+(BOOL)isValid:(id)arg1 ;
-(void)setOrigin:(GEOComposedWaypoint *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setRoute:(id)arg1 ;
-(BOOL)hasTransportType;
-(double)travelTime;
-(void)setTravelTime:(double)arg1 ;
-(void)setDestination:(GEOComposedWaypoint *)arg1 ;
-(GEOComposedWaypoint *)origin;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setHasTransportType:(BOOL)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)transportType;
-(id)initWithDictionary:(id)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)hasTravelTime;
-(void)setHasTravelTime:(BOOL)arg1 ;
-(BOOL)hasDestination;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)destinationName;
-(void)setDestinationName:(NSString *)arg1 ;
-(BOOL)hasDestinationName;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasOrigin;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOComposedWaypoint *)destination;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithRoute:(id)arg1 destinationName:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

