/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSData;

@interface GEOTransitEntry : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _lineMuid;
	NSData* _routingParameters;
	unsigned long long _tripMuid;
	unsigned _tripStaticDepartureTime;
	unsigned _windowStartTime;
	struct {
		unsigned has_lineMuid : 1;
		unsigned has_tripMuid : 1;
		unsigned has_tripStaticDepartureTime : 1;
		unsigned has_windowStartTime : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTripMuid; 
@property (assign,nonatomic) unsigned long long tripMuid; 
@property (assign,nonatomic) BOOL hasLineMuid; 
@property (assign,nonatomic) unsigned long long lineMuid; 
@property (assign,nonatomic) BOOL hasTripStaticDepartureTime; 
@property (assign,nonatomic) unsigned tripStaticDepartureTime; 
@property (assign,nonatomic) BOOL hasWindowStartTime; 
@property (assign,nonatomic) unsigned windowStartTime; 
@property (nonatomic,readonly) BOOL hasRoutingParameters; 
@property (nonatomic,retain) NSData * routingParameters; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)tripMuid;
-(unsigned long long)lineMuid;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTripMuid:(unsigned long long)arg1 ;
-(void)setHasTripMuid:(BOOL)arg1 ;
-(BOOL)hasTripMuid;
-(NSData *)routingParameters;
-(void)setLineMuid:(unsigned long long)arg1 ;
-(void)setTripStaticDepartureTime:(unsigned)arg1 ;
-(void)setWindowStartTime:(unsigned)arg1 ;
-(void)setRoutingParameters:(NSData *)arg1 ;
-(void)setHasLineMuid:(BOOL)arg1 ;
-(BOOL)hasLineMuid;
-(unsigned)tripStaticDepartureTime;
-(void)setHasTripStaticDepartureTime:(BOOL)arg1 ;
-(BOOL)hasTripStaticDepartureTime;
-(unsigned)windowStartTime;
-(void)setHasWindowStartTime:(BOOL)arg1 ;
-(BOOL)hasWindowStartTime;
-(BOOL)hasRoutingParameters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

