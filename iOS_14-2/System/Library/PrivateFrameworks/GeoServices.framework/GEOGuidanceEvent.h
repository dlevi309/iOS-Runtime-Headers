/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	unsigned _enrouteNoticeIndex;
	int _eventType;
	unsigned _identifier;
	int _offsetForDistanceString;
	int _startValidDistance;
	unsigned _zilchPathIndex;
	BOOL _sticky;
	struct {
		unsigned has_maxSpeed : 1;
		unsigned has_minSpeed : 1;
		unsigned has_distanceZilchIndex : 1;
		unsigned has_endValidDistance : 1;
		unsigned has_enrouteNoticeIndex : 1;
		unsigned has_eventType : 1;
		unsigned has_identifier : 1;
		unsigned has_offsetForDistanceString : 1;
		unsigned has_startValidDistance : 1;
		unsigned has_zilchPathIndex : 1;
		unsigned has_sticky : 1;
		unsigned read_unknownFields : 1;
		unsigned read_junctionView : 1;
		unsigned read_laneGuidance : 1;
		unsigned read_signGuidance : 1;
		unsigned read_spokenGuidance : 1;
		unsigned wrote_anyField : 1;
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
@property (assign,nonatomic) BOOL hasZilchPathIndex; 
@property (assign,nonatomic) unsigned zilchPathIndex; 
@property (assign,nonatomic) BOOL hasEnrouteNoticeIndex; 
@property (assign,nonatomic) unsigned enrouteNoticeIndex; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)dictionaryRepresentation;
-(int)StringAsEventType:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)eventTypeAsString:(int)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setEventType:(int)arg1 ;
-(int)eventType;
-(BOOL)sticky;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasIdentifier;
-(void)setSticky:(BOOL)arg1 ;
-(void)setZilchPathIndex:(unsigned)arg1 ;
-(unsigned)zilchPathIndex;
-(void)setHasZilchPathIndex:(BOOL)arg1 ;
-(BOOL)hasZilchPathIndex;
-(void)mergeFrom:(id)arg1 ;
-(GEOSignGuidance *)signGuidance;
-(GEOSpokenGuidance *)spokenGuidance;
-(GEOVisualLaneGuidance *)laneGuidance;
-(GEOJunctionView *)junctionView;
-(void)setStartValidDistance:(int)arg1 ;
-(void)setEndValidDistance:(int)arg1 ;
-(void)setSignGuidance:(GEOSignGuidance *)arg1 ;
-(void)setSpokenGuidance:(GEOSpokenGuidance *)arg1 ;
-(BOOL)hasSticky;
-(void)setLaneGuidance:(GEOVisualLaneGuidance *)arg1 ;
-(void)setJunctionView:(GEOJunctionView *)arg1 ;
-(void)setDistanceZilchIndex:(int)arg1 ;
-(void)setMinSpeed:(double)arg1 ;
-(int)startValidDistance;
-(void)setOffsetForDistanceString:(int)arg1 ;
-(void)setHasStartValidDistance:(BOOL)arg1 ;
-(BOOL)hasStartValidDistance;
-(BOOL)hasMaxSpeed;
-(int)endValidDistance;
-(void)setHasEndValidDistance:(BOOL)arg1 ;
-(BOOL)hasEndValidDistance;
-(BOOL)hasSignGuidance;
-(BOOL)hasMinSpeed;
-(BOOL)hasSpokenGuidance;
-(BOOL)hasLaneGuidance;
-(BOOL)hasJunctionView;
-(int)distanceZilchIndex;
-(void)setHasMinSpeed:(BOOL)arg1 ;
-(void)setHasDistanceZilchIndex:(BOOL)arg1 ;
-(void)setHasMaxSpeed:(BOOL)arg1 ;
-(int)offsetForDistanceString;
-(void)setHasSticky:(BOOL)arg1 ;
-(void)setHasOffsetForDistanceString:(BOOL)arg1 ;
-(BOOL)hasOffsetForDistanceString;
-(unsigned)enrouteNoticeIndex;
-(void)setHasEnrouteNoticeIndex:(BOOL)arg1 ;
-(BOOL)hasEnrouteNoticeIndex;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(id)description;
-(void)setMaxSpeed:(double)arg1 ;
-(double)minSpeed;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(unsigned)arg1 ;
-(BOOL)hasDistanceZilchIndex;
-(void)setEnrouteNoticeIndex:(unsigned)arg1 ;
-(unsigned)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(double)maxSpeed;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

