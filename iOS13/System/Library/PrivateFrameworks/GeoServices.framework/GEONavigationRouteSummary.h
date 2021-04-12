/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_destinationName : 1;
		unsigned wrote_destination : 1;
		unsigned wrote_origin : 1;
		unsigned wrote_travelTime : 1;
		unsigned wrote_transportType : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(GEOComposedWaypoint *)destination;
-(void)setDestination:(GEOComposedWaypoint *)arg1 ;
-(GEOComposedWaypoint *)origin;
-(int)transportType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setOrigin:(GEOComposedWaypoint *)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(NSString *)destinationName;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(void)setHasTransportType:(BOOL)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(void)setRoute:(id)arg1 ;
-(double)travelTime;
-(void)setTravelTime:(double)arg1 ;
-(void)setHasTravelTime:(BOOL)arg1 ;
-(BOOL)hasTravelTime;
-(void)setDestinationName:(NSString *)arg1 ;
-(id)initWithRoute:(id)arg1 destinationName:(id)arg2 ;
-(void)_readDestinationName;
-(void)_readDestination;
-(void)_readOrigin;
-(BOOL)hasDestinationName;
-(BOOL)hasDestination;
-(BOOL)hasOrigin;
@end

