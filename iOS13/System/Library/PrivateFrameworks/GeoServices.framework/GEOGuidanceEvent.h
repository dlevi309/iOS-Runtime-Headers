/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOJunctionView, GEOVisualLaneGuidance, GEOSignGuidance, GEOSpokenGuidance;

@interface GEOGuidanceEvent : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOJunctionView* _junctionView;
	GEOVisualLaneGuidance* _laneGuidance;
	double _maxSpeed;
	double _minSpeed;
	GEOSignGuidance* _signGuidance;
	GEOSpokenGuidance* _spokenGuidance;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _distanceZilchIndex;
	int _endValidDistance;
	int _eventType;
	unsigned _identifier;
	int _offsetForDistanceString;
	int _startValidDistance;
	BOOL _sticky;
	struct {
		unsigned has_maxSpeed : 1;
		unsigned has_minSpeed : 1;
		unsigned has_distanceZilchIndex : 1;
		unsigned has_endValidDistance : 1;
		unsigned has_eventType : 1;
		unsigned has_identifier : 1;
		unsigned has_offsetForDistanceString : 1;
		unsigned has_startValidDistance : 1;
		unsigned has_sticky : 1;
		unsigned read_unknownFields : 1;
		unsigned read_junctionView : 1;
		unsigned read_laneGuidance : 1;
		unsigned read_signGuidance : 1;
		unsigned read_spokenGuidance : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_junctionView : 1;
		unsigned wrote_laneGuidance : 1;
		unsigned wrote_maxSpeed : 1;
		unsigned wrote_minSpeed : 1;
		unsigned wrote_signGuidance : 1;
		unsigned wrote_spokenGuidance : 1;
		unsigned wrote_distanceZilchIndex : 1;
		unsigned wrote_endValidDistance : 1;
		unsigned wrote_eventType : 1;
		unsigned wrote_identifier : 1;
		unsigned wrote_offsetForDistanceString : 1;
		unsigned wrote_startValidDistance : 1;
		unsigned wrote_sticky : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStartValidDistance; 
@property (assign,nonatomic) int startValidDistance; 
@property (assign,nonatomic) BOOL hasEndValidDistance; 
@property (assign,nonatomic) int endValidDistance; 
@property (nonatomic,readonly) BOOL hasSignGuidance; 
@property (nonatomic,retain) GEOSignGuidance * signGuidance; 
@property (nonatomic,readonly) BOOL hasSpokenGuidance; 
@property (nonatomic,retain) GEOSpokenGuidance * spokenGuidance; 
@property (nonatomic,readonly) BOOL hasLaneGuidance; 
@property (nonatomic,retain) GEOVisualLaneGuidance * laneGuidance; 
@property (nonatomic,readonly) BOOL hasJunctionView; 
@property (nonatomic,retain) GEOJunctionView * junctionView; 
@property (assign,nonatomic) BOOL hasDistanceZilchIndex; 
@property (assign,nonatomic) int distanceZilchIndex; 
@property (assign,nonatomic) BOOL hasMinSpeed; 
@property (assign,nonatomic) double minSpeed; 
@property (assign,nonatomic) BOOL hasMaxSpeed; 
@property (assign,nonatomic) double maxSpeed; 
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) int eventType; 
@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) unsigned identifier; 
@property (assign,nonatomic) BOOL hasOffsetForDistanceString; 
@property (assign,nonatomic) int offsetForDistanceString; 
@property (assign,nonatomic) BOOL hasSticky; 
@property (assign,nonatomic) BOOL sticky; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned)identifier;
-(void)setIdentifier:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)eventType;
-(double)maxSpeed;
-(void)setMaxSpeed:(double)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasDistanceZilchIndex;
-(BOOL)hasIdentifier;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(int)distanceZilchIndex;
-(int)offsetForDistanceString;
-(BOOL)hasJunctionView;
-(BOOL)hasStartValidDistance;
-(int)startValidDistance;
-(BOOL)hasEndValidDistance;
-(int)endValidDistance;
-(GEOSignGuidance *)signGuidance;
-(BOOL)hasSpokenGuidance;
-(GEOSpokenGuidance *)spokenGuidance;
-(BOOL)hasSignGuidance;
-(BOOL)hasLaneGuidance;
-(GEOJunctionView *)junctionView;
-(BOOL)sticky;
-(GEOVisualLaneGuidance *)laneGuidance;
-(BOOL)hasMinSpeed;
-(double)minSpeed;
-(BOOL)hasMaxSpeed;
-(void)setEventType:(int)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)eventTypeAsString:(int)arg1 ;
-(int)StringAsEventType:(id)arg1 ;
-(void)setDistanceZilchIndex:(int)arg1 ;
-(void)_readSignGuidance;
-(void)_readSpokenGuidance;
-(void)_readLaneGuidance;
-(void)_readJunctionView;
-(void)setSignGuidance:(GEOSignGuidance *)arg1 ;
-(void)setSpokenGuidance:(GEOSpokenGuidance *)arg1 ;
-(void)setLaneGuidance:(GEOVisualLaneGuidance *)arg1 ;
-(void)setJunctionView:(GEOJunctionView *)arg1 ;
-(void)setStartValidDistance:(int)arg1 ;
-(void)setHasStartValidDistance:(BOOL)arg1 ;
-(void)setEndValidDistance:(int)arg1 ;
-(void)setHasEndValidDistance:(BOOL)arg1 ;
-(void)setHasDistanceZilchIndex:(BOOL)arg1 ;
-(void)setMinSpeed:(double)arg1 ;
-(void)setHasMinSpeed:(BOOL)arg1 ;
-(void)setHasMaxSpeed:(BOOL)arg1 ;
-(void)setOffsetForDistanceString:(int)arg1 ;
-(void)setHasOffsetForDistanceString:(BOOL)arg1 ;
-(BOOL)hasOffsetForDistanceString;
-(void)setSticky:(BOOL)arg1 ;
-(void)setHasSticky:(BOOL)arg1 ;
-(BOOL)hasSticky;
@end

