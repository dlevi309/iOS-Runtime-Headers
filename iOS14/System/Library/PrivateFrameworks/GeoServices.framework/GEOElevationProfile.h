/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOMinimumVisibleElevationRange, NSMutableArray;

@interface GEOElevationProfile : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOMinimumVisibleElevationRange* _minimumVisibleElevationRange;
	NSMutableArray* _points;
	NSMutableArray* _segmentDescriptions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _sumElevationGainCm;
	unsigned _sumElevationLossCm;
	struct {
		unsigned has_sumElevationGainCm : 1;
		unsigned has_sumElevationLossCm : 1;
		unsigned read_unknownFields : 1;
		unsigned read_minimumVisibleElevationRange : 1;
		unsigned read_points : 1;
		unsigned read_segmentDescriptions : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * points; 
@property (assign,nonatomic) BOOL hasSumElevationGainCm; 
@property (assign,nonatomic) unsigned sumElevationGainCm; 
@property (assign,nonatomic) BOOL hasSumElevationLossCm; 
@property (assign,nonatomic) unsigned sumElevationLossCm; 
@property (nonatomic,readonly) BOOL hasMinimumVisibleElevationRange; 
@property (nonatomic,retain) GEOMinimumVisibleElevationRange * minimumVisibleElevationRange; 
@property (nonatomic,retain) NSMutableArray * segmentDescriptions; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)segmentDescriptionType;
+(BOOL)isValid:(id)arg1 ;
+(Class)pointType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)addPoint:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(void)setPoints:(NSMutableArray *)arg1 ;
-(id)jsonRepresentation;
-(GEOMinimumVisibleElevationRange *)minimumVisibleElevationRange;
-(void)setSumElevationGainCm:(unsigned)arg1 ;
-(id)pointAtIndex:(unsigned long long)arg1 ;
-(void)setSumElevationLossCm:(unsigned)arg1 ;
-(void)setMinimumVisibleElevationRange:(GEOMinimumVisibleElevationRange *)arg1 ;
-(void)addSegmentDescription:(id)arg1 ;
-(unsigned long long)segmentDescriptionsCount;
-(void)clearSegmentDescriptions;
-(id)segmentDescriptionAtIndex:(unsigned long long)arg1 ;
-(unsigned)sumElevationGainCm;
-(void)setHasSumElevationGainCm:(BOOL)arg1 ;
-(BOOL)hasSumElevationGainCm;
-(unsigned)sumElevationLossCm;
-(void)setHasSumElevationLossCm:(BOOL)arg1 ;
-(BOOL)hasSumElevationLossCm;
-(NSMutableArray *)segmentDescriptions;
-(BOOL)hasMinimumVisibleElevationRange;
-(void)setSegmentDescriptions:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)clearPoints;
-(unsigned long long)pointsCount;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)points;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

