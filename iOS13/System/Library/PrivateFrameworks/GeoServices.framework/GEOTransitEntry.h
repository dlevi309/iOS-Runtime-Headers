/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)lineMuid;
-(void)setLineMuid:(unsigned long long)arg1 ;
-(void)setHasLineMuid:(BOOL)arg1 ;
-(BOOL)hasLineMuid;
-(NSData *)routingParameters;
-(void)setRoutingParameters:(NSData *)arg1 ;
-(BOOL)hasRoutingParameters;
-(unsigned long long)tripMuid;
-(void)setTripMuid:(unsigned long long)arg1 ;
-(void)setHasTripMuid:(BOOL)arg1 ;
-(BOOL)hasTripMuid;
-(unsigned)tripStaticDepartureTime;
-(void)setTripStaticDepartureTime:(unsigned)arg1 ;
-(void)setHasTripStaticDepartureTime:(BOOL)arg1 ;
-(BOOL)hasTripStaticDepartureTime;
-(unsigned)windowStartTime;
-(void)setWindowStartTime:(unsigned)arg1 ;
-(void)setHasWindowStartTime:(BOOL)arg1 ;
-(BOOL)hasWindowStartTime;
@end

