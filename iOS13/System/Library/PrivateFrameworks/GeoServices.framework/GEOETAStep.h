/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOTimeCheckpoints;

@interface GEOETAStep : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOTimeCheckpoints* _timeCheckpoints;
	unsigned _distanceRemaining;
	unsigned _expectedTime;
	unsigned _stepID;
	int _zilchPointIndex;
	struct {
		unsigned has_distanceRemaining : 1;
		unsigned has_expectedTime : 1;
		unsigned has_stepID : 1;
		unsigned has_zilchPointIndex : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDistanceRemaining; 
@property (assign,nonatomic) unsigned distanceRemaining; 
@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID; 
@property (assign,nonatomic) BOOL hasExpectedTime; 
@property (assign,nonatomic) unsigned expectedTime; 
@property (assign,nonatomic) BOOL hasZilchPointIndex; 
@property (assign,nonatomic) int zilchPointIndex; 
@property (nonatomic,readonly) BOOL hasTimeCheckpoints; 
@property (nonatomic,retain) GEOTimeCheckpoints * timeCheckpoints; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setStepID:(unsigned)arg1 ;
-(unsigned)expectedTime;
-(void)setExpectedTime:(unsigned)arg1 ;
-(void)setHasExpectedTime:(BOOL)arg1 ;
-(BOOL)hasExpectedTime;
-(GEOTimeCheckpoints *)timeCheckpoints;
-(void)setTimeCheckpoints:(GEOTimeCheckpoints *)arg1 ;
-(unsigned)stepID;
-(void)setHasStepID:(BOOL)arg1 ;
-(BOOL)hasStepID;
-(BOOL)hasTimeCheckpoints;
-(int)zilchPointIndex;
-(void)setZilchPointIndex:(int)arg1 ;
-(void)setHasZilchPointIndex:(BOOL)arg1 ;
-(BOOL)hasZilchPointIndex;
-(unsigned)distanceRemaining;
-(void)setDistanceRemaining:(unsigned)arg1 ;
-(void)setHasDistanceRemaining:(BOOL)arg1 ;
-(BOOL)hasDistanceRemaining;
@end

