/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOTrafficPath, GEOTrafficPredictedPaces;

@interface GEOTrafficSpeed : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOTrafficPath* _path;
	GEOTrafficPredictedPaces* _predictedPaces;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _color;
	unsigned _confidence;
	float _freeFlowSpeedKph;
	unsigned _observationCount;
	float _speedKph;
	struct {
		unsigned has_color : 1;
		unsigned has_confidence : 1;
		unsigned has_freeFlowSpeedKph : 1;
		unsigned has_observationCount : 1;
		unsigned has_speedKph : 1;
		unsigned read_path : 1;
		unsigned read_predictedPaces : 1;
		unsigned wrote_path : 1;
		unsigned wrote_predictedPaces : 1;
		unsigned wrote_color : 1;
		unsigned wrote_confidence : 1;
		unsigned wrote_freeFlowSpeedKph : 1;
		unsigned wrote_observationCount : 1;
		unsigned wrote_speedKph : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPath; 
@property (nonatomic,retain) GEOTrafficPath * path; 
@property (assign,nonatomic) BOOL hasSpeedKph; 
@property (assign,nonatomic) float speedKph; 
@property (assign,nonatomic) BOOL hasColor; 
@property (assign,nonatomic) int color; 
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) unsigned confidence; 
@property (assign,nonatomic) BOOL hasFreeFlowSpeedKph; 
@property (assign,nonatomic) float freeFlowSpeedKph; 
@property (assign,nonatomic) BOOL hasObservationCount; 
@property (assign,nonatomic) unsigned observationCount; 
@property (nonatomic,readonly) BOOL hasPredictedPaces; 
@property (nonatomic,retain) GEOTrafficPredictedPaces * predictedPaces; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(GEOTrafficPath *)path;
-(id)dictionaryRepresentation;
-(void)setPath:(GEOTrafficPath *)arg1 ;
-(unsigned)confidence;
-(void)writeTo:(id)arg1 ;
-(int)color;
-(void)setColor:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConfidence:(unsigned)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasColor;
-(void)setHasColor:(BOOL)arg1 ;
-(id)colorAsString:(int)arg1 ;
-(int)StringAsColor:(id)arg1 ;
-(float)speedKph;
-(void)setSpeedKph:(float)arg1 ;
-(void)setHasSpeedKph:(BOOL)arg1 ;
-(BOOL)hasSpeedKph;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(BOOL)hasPath;
-(void)_readPath;
-(void)_readPredictedPaces;
-(GEOTrafficPredictedPaces *)predictedPaces;
-(void)setPredictedPaces:(GEOTrafficPredictedPaces *)arg1 ;
-(float)freeFlowSpeedKph;
-(void)setFreeFlowSpeedKph:(float)arg1 ;
-(void)setHasFreeFlowSpeedKph:(BOOL)arg1 ;
-(BOOL)hasFreeFlowSpeedKph;
-(unsigned)observationCount;
-(void)setObservationCount:(unsigned)arg1 ;
-(void)setHasObservationCount:(BOOL)arg1 ;
-(BOOL)hasObservationCount;
-(BOOL)hasPredictedPaces;
@end

