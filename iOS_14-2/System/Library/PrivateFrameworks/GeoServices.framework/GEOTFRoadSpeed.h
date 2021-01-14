/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSData, NSMutableArray;

@interface GEOTFRoadSpeed : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE72* _geoIds;
	SCD_Struct_GE73* _latitudeCoordinates;
	SCD_Struct_GE73* _longitudeCoordinates;
	long long _geoid;
	NSData* _openlr;
	NSMutableArray* _predictedSpeeds;
	NSData* _zilch;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _color;
	float _confidence;
	unsigned _decayTimeWindowInMinutes;
	float _endOffset;
	unsigned _speedKph;
	float _startOffset;
	BOOL _hidden;
	struct {
		unsigned has_color : 1;
		unsigned has_confidence : 1;
		unsigned has_decayTimeWindowInMinutes : 1;
		unsigned has_endOffset : 1;
		unsigned has_speedKph : 1;
		unsigned has_startOffset : 1;
		unsigned has_hidden : 1;
		unsigned read_geoIds : 1;
		unsigned read_latitudeCoordinates : 1;
		unsigned read_longitudeCoordinates : 1;
		unsigned read_openlr : 1;
		unsigned read_predictedSpeeds : 1;
		unsigned read_zilch : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) long long geoid; 
@property (assign,nonatomic) BOOL hasStartOffset; 
@property (assign,nonatomic) float startOffset; 
@property (assign,nonatomic) BOOL hasEndOffset; 
@property (assign,nonatomic) float endOffset; 
@property (assign,nonatomic) BOOL hasHidden; 
@property (assign,nonatomic) BOOL hidden; 
@property (nonatomic,retain) NSMutableArray * predictedSpeeds; 
@property (assign,nonatomic) BOOL hasColor; 
@property (assign,nonatomic) int color; 
@property (assign,nonatomic) BOOL hasSpeedKph; 
@property (assign,nonatomic) unsigned speedKph; 
@property (nonatomic,readonly) BOOL hasZilch; 
@property (nonatomic,retain) NSData * zilch; 
@property (assign,nonatomic) BOOL hasDecayTimeWindowInMinutes; 
@property (assign,nonatomic) unsigned decayTimeWindowInMinutes; 
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) float confidence; 
@property (nonatomic,readonly) unsigned long long latitudeCoordinatesCount; 
@property (nonatomic,readonly) float* latitudeCoordinates; 
@property (nonatomic,readonly) unsigned long long longitudeCoordinatesCount; 
@property (nonatomic,readonly) float* longitudeCoordinates; 
@property (nonatomic,readonly) unsigned long long geoIdsCount; 
@property (nonatomic,readonly) long long* geoIds; 
@property (nonatomic,readonly) BOOL hasOpenlr; 
@property (nonatomic,retain) NSData * openlr; 
+(Class)predictedSpeedType;
+(BOOL)isValid:(id)arg1 ;
-(float)confidence;
-(id)dictionaryRepresentation;
-(NSData *)zilch;
-(long long)geoid;
-(BOOL)hasHidden;
-(BOOL)hidden;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(NSData *)openlr;
-(long long*)geoIds;
-(id)jsonRepresentation;
-(void)setHasHidden:(BOOL)arg1 ;
-(float)endOffset;
-(void)setHidden:(BOOL)arg1 ;
-(int)color;
-(void)mergeFrom:(id)arg1 ;
-(void)setStartOffset:(float)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned)speedKph;
-(BOOL)hasColor;
-(BOOL)hasZilch;
-(void)setColor:(int)arg1 ;
-(void)setConfidence:(float)arg1 ;
-(void)setSpeedKph:(unsigned)arg1 ;
-(void)setHasSpeedKph:(BOOL)arg1 ;
-(BOOL)hasSpeedKph;
-(void)setEndOffset:(float)arg1 ;
-(void)addPredictedSpeed:(id)arg1 ;
-(void)setDecayTimeWindowInMinutes:(unsigned)arg1 ;
-(unsigned long long)geoIdsCount;
-(void)clearGeoIds;
-(long long)geoIdsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)predictedSpeedsCount;
-(void)clearPredictedSpeeds;
-(id)predictedSpeedAtIndex:(unsigned long long)arg1 ;
-(void)setGeoIds:(long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasStartOffset:(BOOL)arg1 ;
-(BOOL)hasStartOffset;
-(void)setHasEndOffset:(BOOL)arg1 ;
-(BOOL)hasEndOffset;
-(NSMutableArray *)predictedSpeeds;
-(void)setPredictedSpeeds:(NSMutableArray *)arg1 ;
-(void)setHasColor:(BOOL)arg1 ;
-(id)colorAsString:(int)arg1 ;
-(int)StringAsColor:(id)arg1 ;
-(void)setHasConfidence:(BOOL)arg1 ;
-(unsigned)decayTimeWindowInMinutes;
-(void)setHasDecayTimeWindowInMinutes:(BOOL)arg1 ;
-(BOOL)hasDecayTimeWindowInMinutes;
-(BOOL)hasConfidence;
-(void)setZilch:(NSData *)arg1 ;
-(void)addLatitudeCoordinates:(float)arg1 ;
-(void)addLongitudeCoordinates:(float)arg1 ;
-(unsigned long long)latitudeCoordinatesCount;
-(void)clearLatitudeCoordinates;
-(float)latitudeCoordinatesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)longitudeCoordinatesCount;
-(void)clearLongitudeCoordinates;
-(float)longitudeCoordinatesAtIndex:(unsigned long long)arg1 ;
-(float*)latitudeCoordinates;
-(void)setLatitudeCoordinates:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)longitudeCoordinates;
-(void)setLongitudeCoordinates:(float*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(BOOL)hasOpenlr;
-(void)setGeoid:(long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)startOffset;
-(void)writeTo:(id)arg1 ;
-(void)addGeoIds:(long long)arg1 ;
-(void)setOpenlr:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

