/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields;

@interface GEOSharedNavRouteInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE41* _coordinates;
	SCD_Struct_GE19* _trafficColorOffsets;
	SCD_Struct_GE19* _trafficColors;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_coordinates : 1;
		unsigned read_trafficColorOffsets : 1;
		unsigned read_trafficColors : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_coordinates : 1;
		unsigned wrote_trafficColorOffsets : 1;
		unsigned wrote_trafficColors : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long coordinatesCount; 
@property (nonatomic,readonly) double* coordinates; 
@property (nonatomic,readonly) unsigned long long trafficColorsCount; 
@property (nonatomic,readonly) unsigned* trafficColors; 
@property (nonatomic,readonly) unsigned long long trafficColorOffsetsCount; 
@property (nonatomic,readonly) unsigned* trafficColorOffsets; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(double*)coordinates;
-(void)_readCoordinates;
-(void)_addNoFlagsCoordinates:(double)arg1 ;
-(void)_readTrafficColors;
-(void)_addNoFlagsTrafficColor:(unsigned)arg1 ;
-(void)_readTrafficColorOffsets;
-(void)_addNoFlagsTrafficColorOffset:(unsigned)arg1 ;
-(unsigned long long)coordinatesCount;
-(void)clearCoordinates;
-(double)coordinatesAtIndex:(unsigned long long)arg1 ;
-(void)addCoordinates:(double)arg1 ;
-(unsigned long long)trafficColorsCount;
-(void)clearTrafficColors;
-(unsigned)trafficColorAtIndex:(unsigned long long)arg1 ;
-(void)addTrafficColor:(unsigned)arg1 ;
-(unsigned long long)trafficColorOffsetsCount;
-(void)clearTrafficColorOffsets;
-(unsigned)trafficColorOffsetAtIndex:(unsigned long long)arg1 ;
-(void)addTrafficColorOffset:(unsigned)arg1 ;
-(void)setCoordinates:(double*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)trafficColors;
-(void)setTrafficColors:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)trafficColorOffsets;
-(void)setTrafficColorOffsets:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

