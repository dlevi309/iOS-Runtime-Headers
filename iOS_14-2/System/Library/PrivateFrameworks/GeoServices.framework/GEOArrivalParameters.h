/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasEndOfRouteDistanceThreshold; 
@property (assign,nonatomic) unsigned endOfRouteDistanceThreshold; 
@property (nonatomic,retain) NSMutableArray * arrivalPoints; 
@property (nonatomic,retain) NSMutableArray * arrivalMapRegions; 
@property (assign,nonatomic) BOOL hasArrivalParametersEndOfRouteDistanceThreshold; 
@property (assign,nonatomic) unsigned arrivalParametersEndOfRouteDistanceThreshold; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)arrivalPointsType;
+(Class)arrivalMapRegionsType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(NSMutableArray *)arrivalPoints;
-(void)addArrivalPoints:(id)arg1 ;
-(id)init;
-(void)setEndOfRouteDistanceThreshold:(unsigned)arg1 ;
-(void)addArrivalMapRegions:(id)arg1 ;
-(unsigned long long)arrivalPointsCount;
-(void)setArrivalParametersEndOfRouteDistanceThreshold:(unsigned)arg1 ;
-(void)clearArrivalPoints;
-(id)arrivalPointsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)arrivalMapRegionsCount;
-(void)clearArrivalMapRegions;
-(id)arrivalMapRegionsAtIndex:(unsigned long long)arg1 ;
-(unsigned)endOfRouteDistanceThreshold;
-(void)setHasEndOfRouteDistanceThreshold:(BOOL)arg1 ;
-(BOOL)hasEndOfRouteDistanceThreshold;
-(void)setArrivalPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)arrivalMapRegions;
-(void)setArrivalMapRegions:(NSMutableArray *)arg1 ;
-(unsigned)arrivalParametersEndOfRouteDistanceThreshold;
-(void)setHasArrivalParametersEndOfRouteDistanceThreshold:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasArrivalParametersEndOfRouteDistanceThreshold;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

