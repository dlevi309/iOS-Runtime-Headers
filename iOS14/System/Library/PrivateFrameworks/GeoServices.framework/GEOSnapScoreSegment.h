/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
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
+(Class)categoryScoreType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)geoId;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setAttributes:(NSMutableArray *)arg1 ;
-(id)attributeAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearAttributes;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableArray *)attributes;
-(BOOL)hasGeoId;
-(void)setGeoId:(unsigned long long)arg1 ;
-(id)description;
-(void)addAttribute:(id)arg1 ;
-(GEOLatLng *)pointOnLine;
-(void)setPointOnLine:(GEOLatLng *)arg1 ;
-(void)setOverallScore:(float)arg1 ;
-(void)addCategoryScore:(id)arg1 ;
-(unsigned long long)categoryScoresCount;
-(void)clearCategoryScores;
-(id)categoryScoreAtIndex:(unsigned long long)arg1 ;
-(void)setHasGeoId:(BOOL)arg1 ;
-(BOOL)hasPointOnLine;
-(float)overallScore;
-(void)setHasOverallScore:(BOOL)arg1 ;
-(BOOL)hasOverallScore;
-(NSMutableArray *)categoryScores;
-(void)setCategoryScores:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)attributesCount;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

