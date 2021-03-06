/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOEVStepFeedbackInfo, NSData;

@interface GEOStepFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	double _completionTimeStamp;
	GEOEVStepFeedbackInfo* _evStepInfo;
	NSData* _routeID;
	NSData* _stepZilch;
	NSData* _tripID;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _expectedTime;
	int _maneuverType;
	unsigned _routeIndex;
	unsigned _stepID;
	unsigned _waypointRouteID;
	BOOL _completedStep;
	BOOL _lightGuidance;
	BOOL _routePaused;
	BOOL _routeResumed;
	struct {
		unsigned has_completionTimeStamp : 1;
		unsigned has_expectedTime : 1;
		unsigned has_maneuverType : 1;
		unsigned has_routeIndex : 1;
		unsigned has_stepID : 1;
		unsigned has_waypointRouteID : 1;
		unsigned has_completedStep : 1;
		unsigned has_lightGuidance : 1;
		unsigned has_routePaused : 1;
		unsigned has_routeResumed : 1;
		unsigned read_evStepInfo : 1;
		unsigned read_routeID : 1;
		unsigned read_stepZilch : 1;
		unsigned read_tripID : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID; 
@property (assign,nonatomic) BOOL hasCompletionTimeStamp; 
@property (assign,nonatomic) double completionTimeStamp; 
@property (assign,nonatomic) BOOL hasCompletedStep; 
@property (assign,nonatomic) BOOL completedStep; 
@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID; 
@property (assign,nonatomic) BOOL hasRouteIndex; 
@property (assign,nonatomic) unsigned routeIndex; 
@property (assign,nonatomic) BOOL hasLightGuidance; 
@property (assign,nonatomic) BOOL lightGuidance; 
@property (nonatomic,readonly) BOOL hasTripID; 
@property (nonatomic,retain) NSData * tripID; 
@property (assign,nonatomic) BOOL hasRoutePaused; 
@property (assign,nonatomic) BOOL routePaused; 
@property (assign,nonatomic) BOOL hasRouteResumed; 
@property (assign,nonatomic) BOOL routeResumed; 
@property (nonatomic,readonly) BOOL hasEvStepInfo; 
@property (nonatomic,retain) GEOEVStepFeedbackInfo * evStepInfo; 
@property (assign,nonatomic) BOOL hasWaypointRouteID; 
@property (assign,nonatomic) unsigned waypointRouteID; 
@property (assign,nonatomic) BOOL hasManeuverType; 
@property (assign,nonatomic) int maneuverType; 
@property (assign,nonatomic) BOOL hasExpectedTime; 
@property (assign,nonatomic) unsigned expectedTime; 
@property (nonatomic,readonly) BOOL hasStepZilch; 
@property (nonatomic,retain) NSData * stepZilch; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(NSData *)tripID;
-(unsigned)stepID;
-(id)jsonRepresentation;
-(unsigned)expectedTime;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasExpectedTime;
-(id)initWithDictionary:(id)arg1 ;
-(void)setExpectedTime:(unsigned)arg1 ;
-(NSData *)routeID;
-(void)setHasExpectedTime:(BOOL)arg1 ;
-(id)description;
-(int)maneuverType;
-(NSData *)stepZilch;
-(BOOL)hasTripID;
-(void)setCompletionTimeStamp:(double)arg1 ;
-(void)setCompletedStep:(BOOL)arg1 ;
-(void)setLightGuidance:(BOOL)arg1 ;
-(void)setRoutePaused:(BOOL)arg1 ;
-(void)setRouteResumed:(BOOL)arg1 ;
-(void)setEvStepInfo:(GEOEVStepFeedbackInfo *)arg1 ;
-(void)setWaypointRouteID:(unsigned)arg1 ;
-(unsigned long long)hash;
-(void)setStepZilch:(NSData *)arg1 ;
-(double)completionTimeStamp;
-(void)setHasCompletionTimeStamp:(BOOL)arg1 ;
-(BOOL)hasCompletionTimeStamp;
-(BOOL)completedStep;
-(void)setHasCompletedStep:(BOOL)arg1 ;
-(BOOL)hasCompletedStep;
-(BOOL)lightGuidance;
-(void)setHasLightGuidance:(BOOL)arg1 ;
-(BOOL)hasLightGuidance;
-(BOOL)routePaused;
-(void)setHasRoutePaused:(BOOL)arg1 ;
-(BOOL)hasRoutePaused;
-(BOOL)routeResumed;
-(BOOL)hasEvStepInfo;
-(void)setHasRouteResumed:(BOOL)arg1 ;
-(BOOL)hasRouteResumed;
-(unsigned)waypointRouteID;
-(void)setHasWaypointRouteID:(BOOL)arg1 ;
-(BOOL)hasStepZilch;
-(BOOL)hasWaypointRouteID;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasStepID;
-(void)setRouteIndex:(unsigned)arg1 ;
-(void)setHasRouteIndex:(BOOL)arg1 ;
-(BOOL)hasRouteIndex;
-(void)setHasStepID:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRouteID:(NSData *)arg1 ;
-(unsigned)routeIndex;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStepID:(unsigned)arg1 ;
-(void)setManeuverType:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasManeuverType:(BOOL)arg1 ;
-(BOOL)hasManeuverType;
-(id)maneuverTypeAsString:(int)arg1 ;
-(int)StringAsManeuverType:(id)arg1 ;
-(BOOL)hasRouteID;
-(BOOL)isEqual:(id)arg1 ;
-(GEOEVStepFeedbackInfo *)evStepInfo;
-(void)setTripID:(NSData *)arg1 ;
@end

