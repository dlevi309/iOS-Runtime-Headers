/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOArrivalParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _arrivalMapRegions;
	NSMutableArray* _arrivalPoints;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _arrivalParametersEndOfRouteDistanceThreshold;
	unsigned _endOfRouteDistanceThreshold;
	struct {
		unsigned has_arrivalParametersEndOfRouteDistanceThreshold : 1;
		unsigned has_endOfRouteDistanceThreshold : 1;
		unsigned read_unknownFields : 1;
		unsigned read_arrivalMapRegions : 1;
		unsigned read_arrivalPoints : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_arrivalMapRegions : 1;
		unsigned wrote_arrivalPoints : 1;
		unsigned wrote_arrivalParametersEndOfRouteDistanceThreshold : 1;
		unsigned wrote_endOfRouteDistanceThreshold : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasEndOfRouteDistanceThreshold; 
@property (assign,nonatomic) unsigned endOfRouteDistanceThreshold; 
@property (nonatomic,retain) NSMutableArray * arrivalPoints; 
@property (nonatomic,retain) NSMutableArray * arrivalMapRegions; 
@property (assign,nonatomic) BOOL hasArrivalParametersEndOfRouteDistanceThreshold; 
@property (assign,nonatomic) unsigned arrivalParametersEndOfRouteDistanceThreshold; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)arrivalPointsType;
+(Class)arrivalMapRegionsType;
-(id)init;
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
-(void)_readArrivalPoints;
-(void)_addNoFlagsArrivalPoints:(id)arg1 ;
-(void)_readArrivalMapRegions;
-(void)_addNoFlagsArrivalMapRegions:(id)arg1 ;
-(unsigned long long)arrivalPointsCount;
-(void)clearArrivalPoints;
-(id)arrivalPointsAtIndex:(unsigned long long)arg1 ;
-(void)addArrivalPoints:(id)arg1 ;
-(unsigned long long)arrivalMapRegionsCount;
-(void)clearArrivalMapRegions;
-(id)arrivalMapRegionsAtIndex:(unsigned long long)arg1 ;
-(void)addArrivalMapRegions:(id)arg1 ;
-(NSMutableArray *)arrivalPoints;
-(NSMutableArray *)arrivalMapRegions;
-(unsigned)endOfRouteDistanceThreshold;
-(void)setEndOfRouteDistanceThreshold:(unsigned)arg1 ;
-(void)setHasEndOfRouteDistanceThreshold:(BOOL)arg1 ;
-(BOOL)hasEndOfRouteDistanceThreshold;
-(void)setArrivalPoints:(NSMutableArray *)arg1 ;
-(void)setArrivalMapRegions:(NSMutableArray *)arg1 ;
-(unsigned)arrivalParametersEndOfRouteDistanceThreshold;
-(void)setArrivalParametersEndOfRouteDistanceThreshold:(unsigned)arg1 ;
-(void)setHasArrivalParametersEndOfRouteDistanceThreshold:(BOOL)arg1 ;
-(BOOL)hasArrivalParametersEndOfRouteDistanceThreshold;
@end

