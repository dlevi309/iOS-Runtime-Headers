/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOSharedNavRouteInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE97* _coordinates;
	SCD_Struct_GE17* _trafficColorOffsets;
	SCD_Struct_GE17* _trafficColors;
	NSMutableArray* _chargingStations;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_coordinates : 1;
		unsigned read_trafficColorOffsets : 1;
		unsigned read_trafficColors : 1;
		unsigned read_chargingStations : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long coordinatesCount; 
@property (nonatomic,readonly) double* coordinates; 
@property (nonatomic,readonly) unsigned long long trafficColorsCount; 
@property (nonatomic,readonly) unsigned* trafficColors; 
@property (nonatomic,readonly) unsigned long long trafficColorOffsetsCount; 
@property (nonatomic,readonly) unsigned* trafficColorOffsets; 
@property (nonatomic,retain) NSMutableArray * chargingStations; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)chargingStationsType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(double*)coordinates;
-(id)initWithDictionary:(id)arg1 ;
-(void)addCoordinates:(double)arg1 ;
-(unsigned long long)coordinatesCount;
-(void)clearCoordinates;
-(double)coordinatesAtIndex:(unsigned long long)arg1 ;
-(void)setCoordinates:(double*)arg1 count:(unsigned long long)arg2 ;
-(id)description;
-(void)addChargingStations:(id)arg1 ;
-(unsigned long long)chargingStationsCount;
-(void)clearChargingStations;
-(id)chargingStationsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)chargingStations;
-(void)setChargingStations:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)addTrafficColor:(unsigned)arg1 ;
-(void)addTrafficColorOffset:(unsigned)arg1 ;
-(unsigned long long)trafficColorsCount;
-(void)clearTrafficColors;
-(unsigned)trafficColorAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)trafficColorOffsetsCount;
-(void)clearTrafficColorOffsets;
-(unsigned)trafficColorOffsetAtIndex:(unsigned long long)arg1 ;
-(unsigned*)trafficColors;
-(void)setTrafficColors:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)trafficColorOffsets;
-(void)setTrafficColorOffsets:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

