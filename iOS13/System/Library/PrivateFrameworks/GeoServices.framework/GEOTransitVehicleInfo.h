/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOTransitVehicleTime, NSString;

@interface GEOTransitVehicleInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE19* _clusteredRouteLineArtworkIndexs;
	GEOTransitVehicleTime* _arrivalTime;
	GEOTransitVehicleTime* _departureTime;
	unsigned long long _tripMuid;
	NSString* _vehicleNumber;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _departureFrequencyMax;
	unsigned _departureFrequencyMin;
	unsigned _lineIndex;
	int _pickupDropoffType;
	unsigned _routeLineArtworkIndex;
	struct {
		unsigned has_tripMuid : 1;
		unsigned has_departureFrequencyMax : 1;
		unsigned has_departureFrequencyMin : 1;
		unsigned has_lineIndex : 1;
		unsigned has_pickupDropoffType : 1;
		unsigned has_routeLineArtworkIndex : 1;
		unsigned read_unknownFields : 1;
		unsigned read_clusteredRouteLineArtworkIndexs : 1;
		unsigned read_arrivalTime : 1;
		unsigned read_departureTime : 1;
		unsigned read_vehicleNumber : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_clusteredRouteLineArtworkIndexs : 1;
		unsigned wrote_arrivalTime : 1;
		unsigned wrote_departureTime : 1;
		unsigned wrote_tripMuid : 1;
		unsigned wrote_vehicleNumber : 1;
		unsigned wrote_departureFrequencyMax : 1;
		unsigned wrote_departureFrequencyMin : 1;
		unsigned wrote_lineIndex : 1;
		unsigned wrote_pickupDropoffType : 1;
		unsigned wrote_routeLineArtworkIndex : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasArrivalTime; 
@property (nonatomic,retain) GEOTransitVehicleTime * arrivalTime; 
@property (nonatomic,readonly) BOOL hasDepartureTime; 
@property (nonatomic,retain) GEOTransitVehicleTime * departureTime; 
@property (assign,nonatomic) BOOL hasLineIndex; 
@property (assign,nonatomic) unsigned lineIndex; 
@property (assign,nonatomic) BOOL hasRouteLineArtworkIndex; 
@property (assign,nonatomic) unsigned routeLineArtworkIndex; 
@property (nonatomic,readonly) unsigned long long clusteredRouteLineArtworkIndexsCount; 
@property (nonatomic,readonly) unsigned* clusteredRouteLineArtworkIndexs; 
@property (assign,nonatomic) BOOL hasPickupDropoffType; 
@property (assign,nonatomic) int pickupDropoffType; 
@property (assign,nonatomic) BOOL hasDepartureFrequencyMin; 
@property (assign,nonatomic) unsigned departureFrequencyMin; 
@property (assign,nonatomic) BOOL hasDepartureFrequencyMax; 
@property (assign,nonatomic) unsigned departureFrequencyMax; 
@property (assign,nonatomic) BOOL hasTripMuid; 
@property (assign,nonatomic) unsigned long long tripMuid; 
@property (nonatomic,readonly) BOOL hasVehicleNumber; 
@property (nonatomic,retain) NSString * vehicleNumber; 
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
-(unsigned)lineIndex;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOTransitVehicleTime *)departureTime;
-(void)setDepartureTime:(GEOTransitVehicleTime *)arg1 ;
-(BOOL)hasDepartureTime;
-(unsigned long long)tripMuid;
-(void)setTripMuid:(unsigned long long)arg1 ;
-(void)setHasTripMuid:(BOOL)arg1 ;
-(BOOL)hasTripMuid;
-(void)setLineIndex:(unsigned)arg1 ;
-(void)setHasLineIndex:(BOOL)arg1 ;
-(BOOL)hasLineIndex;
-(NSString *)vehicleNumber;
-(BOOL)hasDepartureFrequencyMin;
-(unsigned)departureFrequencyMin;
-(BOOL)hasDepartureFrequencyMax;
-(unsigned)departureFrequencyMax;
-(BOOL)hasArrivalTime;
-(GEOTransitVehicleTime *)arrivalTime;
-(unsigned long long)clusteredRouteLineArtworkIndexsCount;
-(unsigned*)clusteredRouteLineArtworkIndexs;
-(BOOL)hasRouteLineArtworkIndex;
-(unsigned)routeLineArtworkIndex;
-(int)pickupDropoffType;
-(void)_readArrivalTime;
-(void)_readDepartureTime;
-(void)_readClusteredRouteLineArtworkIndexs;
-(void)_addNoFlagsClusteredRouteLineArtworkIndex:(unsigned)arg1 ;
-(void)_readVehicleNumber;
-(void)setArrivalTime:(GEOTransitVehicleTime *)arg1 ;
-(void)clearClusteredRouteLineArtworkIndexs;
-(unsigned)clusteredRouteLineArtworkIndexAtIndex:(unsigned long long)arg1 ;
-(void)addClusteredRouteLineArtworkIndex:(unsigned)arg1 ;
-(void)setVehicleNumber:(NSString *)arg1 ;
-(void)setRouteLineArtworkIndex:(unsigned)arg1 ;
-(void)setHasRouteLineArtworkIndex:(BOOL)arg1 ;
-(void)setClusteredRouteLineArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setPickupDropoffType:(int)arg1 ;
-(void)setHasPickupDropoffType:(BOOL)arg1 ;
-(BOOL)hasPickupDropoffType;
-(id)pickupDropoffTypeAsString:(int)arg1 ;
-(int)StringAsPickupDropoffType:(id)arg1 ;
-(void)setDepartureFrequencyMin:(unsigned)arg1 ;
-(void)setHasDepartureFrequencyMin:(BOOL)arg1 ;
-(void)setDepartureFrequencyMax:(unsigned)arg1 ;
-(void)setHasDepartureFrequencyMax:(BOOL)arg1 ;
-(BOOL)hasVehicleNumber;
@end

