/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOStopStepEVInfo, GEOEVStateInfo, GEOTimeCheckpoints;

@interface GEOETAStep : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOStopStepEVInfo* _evInfo;
	GEOEVStateInfo* _evStateInfo;
	GEOTimeCheckpoints* _timeCheckpoints;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	float _distanceRemaining;
	unsigned _expectedTime;
	unsigned _stepID;
	unsigned _zilchPathIndex;
	int _zilchPointIndex;
	struct {
		unsigned has_distanceRemaining : 1;
		unsigned has_expectedTime : 1;
		unsigned has_stepID : 1;
		unsigned has_zilchPathIndex : 1;
		unsigned has_zilchPointIndex : 1;
		unsigned read_unknownFields : 1;
		unsigned read_evInfo : 1;
		unsigned read_evStateInfo : 1;
		unsigned read_timeCheckpoints : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDistanceRemaining; 
@property (assign,nonatomic) float distanceRemaining; 
@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID; 
@property (assign,nonatomic) BOOL hasExpectedTime; 
@property (assign,nonatomic) unsigned expectedTime; 
@property (assign,nonatomic) BOOL hasZilchPointIndex; 
@property (assign,nonatomic) int zilchPointIndex; 
@property (nonatomic,readonly) BOOL hasTimeCheckpoints; 
@property (nonatomic,retain) GEOTimeCheckpoints * timeCheckpoints; 
@property (assign,nonatomic) BOOL hasZilchPathIndex; 
@property (assign,nonatomic) unsigned zilchPathIndex; 
@property (nonatomic,readonly) BOOL hasEvInfo; 
@property (nonatomic,retain) GEOStopStepEVInfo * evInfo; 
@property (nonatomic,readonly) BOOL hasEvStateInfo; 
@property (nonatomic,retain) GEOEVStateInfo * evStateInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(GEOStopStepEVInfo *)evInfo;
-(unsigned)stepID;
-(id)jsonRepresentation;
-(unsigned)expectedTime;
-(void)setZilchPathIndex:(unsigned)arg1 ;
-(unsigned)zilchPathIndex;
-(void)setHasZilchPathIndex:(BOOL)arg1 ;
-(BOOL)hasZilchPathIndex;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasExpectedTime;
-(void)setEvStateInfo:(GEOEVStateInfo *)arg1 ;
-(BOOL)hasEvStateInfo;
-(id)initWithDictionary:(id)arg1 ;
-(void)setExpectedTime:(unsigned)arg1 ;
-(void)setHasExpectedTime:(BOOL)arg1 ;
-(id)description;
-(GEOTimeCheckpoints *)timeCheckpoints;
-(void)setTimeCheckpoints:(GEOTimeCheckpoints *)arg1 ;
-(BOOL)hasTimeCheckpoints;
-(GEOEVStateInfo *)evStateInfo;
-(unsigned long long)hash;
-(BOOL)hasEvInfo;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasStepID;
-(void)setHasStepID:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDistanceRemaining:(float)arg1 ;
-(void)setZilchPointIndex:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(float)distanceRemaining;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStepID:(unsigned)arg1 ;
-(int)zilchPointIndex;
-(void)setHasZilchPointIndex:(BOOL)arg1 ;
-(BOOL)hasZilchPointIndex;
-(void)setHasDistanceRemaining:(BOOL)arg1 ;
-(BOOL)hasDistanceRemaining;
-(id)initWithJSON:(id)arg1 ;
-(void)setEvInfo:(GEOStopStepEVInfo *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

