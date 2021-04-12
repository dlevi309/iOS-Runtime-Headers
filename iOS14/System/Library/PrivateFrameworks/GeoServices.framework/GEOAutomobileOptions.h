/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOUserPreferences, GEOVehicleSpecifications;

@interface GEOAutomobileOptions : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOUserPreferences* _userPreferences;
	GEOVehicleSpecifications* _vehicleSpecifications;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _trafficType;
	BOOL _includeHistoricTravelTime;
	BOOL _includeStaticTravelTime;
	struct {
		unsigned has_trafficType : 1;
		unsigned has_includeHistoricTravelTime : 1;
		unsigned has_includeStaticTravelTime : 1;
		unsigned read_unknownFields : 1;
		unsigned read_userPreferences : 1;
		unsigned read_vehicleSpecifications : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIncludeHistoricTravelTime; 
@property (assign,nonatomic) BOOL includeHistoricTravelTime; 
@property (assign,nonatomic) BOOL hasTrafficType; 
@property (assign,nonatomic) int trafficType; 
@property (assign,nonatomic) BOOL hasIncludeStaticTravelTime; 
@property (assign,nonatomic) BOOL includeStaticTravelTime; 
@property (nonatomic,readonly) BOOL hasUserPreferences; 
@property (nonatomic,retain) GEOUserPreferences * userPreferences; 
@property (nonatomic,readonly) BOOL hasVehicleSpecifications; 
@property (nonatomic,retain) GEOVehicleSpecifications * vehicleSpecifications; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)setIncludeHistoricTravelTime:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(int)trafficType;
-(BOOL)includeHistoricTravelTime;
-(PBUnknownFields *)unknownFields;
-(void)setTrafficType:(int)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)StringAsTrafficType:(id)arg1 ;
-(GEOUserPreferences *)userPreferences;
-(BOOL)hasIncludeHistoricTravelTime;
-(void)setHasIncludeHistoricTravelTime:(BOOL)arg1 ;
-(void)setHasTrafficType:(BOOL)arg1 ;
-(BOOL)hasTrafficType;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(void)setIncludeStaticTravelTime:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setVehicleSpecifications:(GEOVehicleSpecifications *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasUserPreferences;
-(GEOVehicleSpecifications *)vehicleSpecifications;
-(BOOL)includeStaticTravelTime;
-(unsigned long long)hash;
-(id)trafficTypeAsString:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasVehicleSpecifications;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setUserPreferences:(GEOUserPreferences *)arg1 ;
-(void)setHasIncludeStaticTravelTime:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasIncludeStaticTravelTime;
@end

