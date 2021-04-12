/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOCoarseLocationPolygon;

@interface GEOCoarseLocationTerritoryInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE17* _coordinates;
	GEOCoarseLocationLatLng _representativePoint;
	double _areaDegrees;
	double _areaRatio;
	unsigned long long _featureId;
	double _maxDistanceMeters;
	GEOCoarseLocationPolygon* _polygon;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _countryName;
	unsigned _regionName;
	int _representativePointQuality;
	unsigned _revgeoRank;
	int _territoryType;
	BOOL _precise;
	BOOL _shouldRandomize;
	struct {
		unsigned has_representativePoint : 1;
		unsigned has_areaDegrees : 1;
		unsigned has_areaRatio : 1;
		unsigned has_featureId : 1;
		unsigned has_maxDistanceMeters : 1;
		unsigned has_countryName : 1;
		unsigned has_regionName : 1;
		unsigned has_representativePointQuality : 1;
		unsigned has_revgeoRank : 1;
		unsigned has_territoryType : 1;
		unsigned has_precise : 1;
		unsigned has_shouldRandomize : 1;
		unsigned read_coordinates : 1;
		unsigned read_polygon : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTerritoryType; 
@property (assign,nonatomic) int territoryType; 
@property (assign,nonatomic) BOOL hasRegionName; 
@property (assign,nonatomic) unsigned regionName; 
@property (assign,nonatomic) BOOL hasCountryName; 
@property (assign,nonatomic) unsigned countryName; 
@property (nonatomic,readonly) unsigned long long coordinatesCount; 
@property (nonatomic,readonly) unsigned* coordinates; 
@property (assign,nonatomic) BOOL hasPrecise; 
@property (assign,nonatomic) BOOL precise; 
@property (assign,nonatomic) BOOL hasFeatureId; 
@property (assign,nonatomic) unsigned long long featureId; 
@property (assign,nonatomic) BOOL hasRepresentativePoint; 
@property (assign,nonatomic) GEOCoarseLocationLatLng representativePoint; 
@property (assign,nonatomic) BOOL hasAreaDegrees; 
@property (assign,nonatomic) double areaDegrees; 
@property (assign,nonatomic) BOOL hasRevgeoRank; 
@property (assign,nonatomic) unsigned revgeoRank; 
@property (assign,nonatomic) BOOL hasAreaRatio; 
@property (assign,nonatomic) double areaRatio; 
@property (assign,nonatomic) BOOL hasMaxDistanceMeters; 
@property (assign,nonatomic) double maxDistanceMeters; 
@property (nonatomic,readonly) BOOL hasPolygon; 
@property (nonatomic,retain) GEOCoarseLocationPolygon * polygon; 
@property (assign,nonatomic) BOOL hasRepresentativePointQuality; 
@property (assign,nonatomic) int representativePointQuality; 
@property (assign,nonatomic) BOOL hasShouldRandomize; 
@property (assign,nonatomic) BOOL shouldRandomize; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCountryName:(unsigned)arg1 ;
-(BOOL)precise;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(unsigned)countryName;
-(id)jsonRepresentation;
-(GEOCoarseLocationPolygon *)polygon;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasPrecise;
-(unsigned*)coordinates;
-(id)initWithDictionary:(id)arg1 ;
-(void)setTerritoryType:(int)arg1 ;
-(void)addCoordinates:(unsigned)arg1 ;
-(double)areaRatio;
-(void)setFeatureId:(unsigned long long)arg1 ;
-(void)setRepresentativePoint:(GEOCoarseLocationLatLng)arg1 ;
-(void)setAreaDegrees:(double)arg1 ;
-(void)setRevgeoRank:(unsigned)arg1 ;
-(void)setAreaRatio:(double)arg1 ;
-(void)setMaxDistanceMeters:(double)arg1 ;
-(void)setPolygon:(GEOCoarseLocationPolygon *)arg1 ;
-(void)setRepresentativePointQuality:(int)arg1 ;
-(void)setShouldRandomize:(BOOL)arg1 ;
-(unsigned long long)coordinatesCount;
-(void)clearCoordinates;
-(unsigned)coordinatesAtIndex:(unsigned long long)arg1 ;
-(int)territoryType;
-(BOOL)hasTerritoryType;
-(void)setHasTerritoryType:(BOOL)arg1 ;
-(id)territoryTypeAsString:(int)arg1 ;
-(int)StringAsTerritoryType:(id)arg1 ;
-(void)setHasRegionName:(BOOL)arg1 ;
-(BOOL)hasRegionName;
-(void)setHasCountryName:(BOOL)arg1 ;
-(BOOL)hasCountryName;
-(void)setCoordinates:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasPrecise:(BOOL)arg1 ;
-(void)setHasFeatureId:(BOOL)arg1 ;
-(BOOL)hasFeatureId;
-(GEOCoarseLocationLatLng)representativePoint;
-(void)setHasRepresentativePoint:(BOOL)arg1 ;
-(BOOL)hasRepresentativePoint;
-(double)areaDegrees;
-(void)setHasAreaDegrees:(BOOL)arg1 ;
-(BOOL)hasAreaDegrees;
-(void)setHasRevgeoRank:(BOOL)arg1 ;
-(BOOL)hasRevgeoRank;
-(void)setHasAreaRatio:(BOOL)arg1 ;
-(BOOL)hasAreaRatio;
-(double)maxDistanceMeters;
-(void)setHasMaxDistanceMeters:(BOOL)arg1 ;
-(BOOL)hasMaxDistanceMeters;
-(int)representativePointQuality;
-(void)setHasRepresentativePointQuality:(BOOL)arg1 ;
-(BOOL)hasRepresentativePointQuality;
-(id)representativePointQualityAsString:(int)arg1 ;
-(BOOL)shouldRandomize;
-(int)StringAsRepresentativePointQuality:(id)arg1 ;
-(void)setHasShouldRandomize:(BOOL)arg1 ;
-(BOOL)hasShouldRandomize;
-(void)setPrecise:(BOOL)arg1 ;
-(unsigned long long)featureId;
-(id)description;
-(unsigned)regionName;
-(void)setRegionName:(unsigned)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)revgeoRank;
-(BOOL)hasPolygon;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

