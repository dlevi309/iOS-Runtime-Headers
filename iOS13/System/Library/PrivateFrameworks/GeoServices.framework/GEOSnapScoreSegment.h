/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOLatLng;

@interface GEOSnapScoreSegment : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _attributes;
	NSMutableArray* _categoryScores;
	unsigned long long _geoId;
	GEOLatLng* _pointOnLine;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	float _overallScore;
	struct {
		unsigned has_geoId : 1;
		unsigned has_overallScore : 1;
		unsigned read_unknownFields : 1;
		unsigned read_attributes : 1;
		unsigned read_categoryScores : 1;
		unsigned read_pointOnLine : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_attributes : 1;
		unsigned wrote_categoryScores : 1;
		unsigned wrote_geoId : 1;
		unsigned wrote_pointOnLine : 1;
		unsigned wrote_overallScore : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasGeoId; 
@property (assign,nonatomic) unsigned long long geoId; 
@property (nonatomic,readonly) BOOL hasPointOnLine; 
@property (nonatomic,retain) GEOLatLng * pointOnLine; 
@property (assign,nonatomic) BOOL hasOverallScore; 
@property (assign,nonatomic) float overallScore; 
@property (nonatomic,retain) NSMutableArray * categoryScores; 
@property (nonatomic,retain) NSMutableArray * attributes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)attributeType;
+(BOOL)isValid:(id)arg1 ;
+(Class)categoryScoreType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSMutableArray *)attributes;
-(id)dictionaryRepresentation;
-(void)setAttributes:(NSMutableArray *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)geoId;
-(void)setGeoId:(unsigned long long)arg1 ;
-(void)setHasGeoId:(BOOL)arg1 ;
-(BOOL)hasGeoId;
-(void)_readAttributes;
-(unsigned long long)attributesCount;
-(void)clearAttributes;
-(void)addAttribute:(id)arg1 ;
-(id)attributeAtIndex:(unsigned long long)arg1 ;
-(void)_readPointOnLine;
-(void)_readCategoryScores;
-(void)_addNoFlagsCategoryScore:(id)arg1 ;
-(void)_addNoFlagsAttribute:(id)arg1 ;
-(GEOLatLng *)pointOnLine;
-(void)setPointOnLine:(GEOLatLng *)arg1 ;
-(unsigned long long)categoryScoresCount;
-(void)clearCategoryScores;
-(id)categoryScoreAtIndex:(unsigned long long)arg1 ;
-(void)addCategoryScore:(id)arg1 ;
-(NSMutableArray *)categoryScores;
-(BOOL)hasPointOnLine;
-(float)overallScore;
-(void)setOverallScore:(float)arg1 ;
-(void)setHasOverallScore:(BOOL)arg1 ;
-(BOOL)hasOverallScore;
-(void)setCategoryScores:(NSMutableArray *)arg1 ;
@end

