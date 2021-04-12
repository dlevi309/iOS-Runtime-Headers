/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOCyclingUserPreferences, GEOCyclingVehicleSpecifications;

@interface GEOCyclingOptions : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOCyclingUserPreferences* _cyclingUserPreferences;
	GEOCyclingVehicleSpecifications* _cyclingVehicleSpecifications;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_cyclingUserPreferences : 1;
		unsigned read_cyclingVehicleSpecifications : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCyclingUserPreferences; 
@property (nonatomic,retain) GEOCyclingUserPreferences * cyclingUserPreferences; 
@property (nonatomic,readonly) BOOL hasCyclingVehicleSpecifications; 
@property (nonatomic,retain) GEOCyclingVehicleSpecifications * cyclingVehicleSpecifications; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(GEOCyclingUserPreferences *)cyclingUserPreferences;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setCyclingUserPreferences:(GEOCyclingUserPreferences *)arg1 ;
-(BOOL)hasCyclingUserPreferences;
-(unsigned long long)hash;
-(GEOCyclingVehicleSpecifications *)cyclingVehicleSpecifications;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCyclingVehicleSpecifications:(GEOCyclingVehicleSpecifications *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasCyclingVehicleSpecifications;
@end

