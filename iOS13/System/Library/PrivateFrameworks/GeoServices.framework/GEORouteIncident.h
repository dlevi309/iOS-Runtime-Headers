/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOLatLng;

@interface GEORouteIncident : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _crossStreet;
	long long _endTime;
	NSString* _incidentId;
	NSString* _info;
	GEOLatLng* _position;
	long long _startTime;
	NSString* _street;
	long long _updateTime;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _laneClosureCount;
	int _laneClosureType;
	int _significance;
	int _type;
	BOOL _endTimeReliable;
	struct {
		unsigned has_endTime : 1;
		unsigned has_startTime : 1;
		unsigned has_updateTime : 1;
		unsigned has_laneClosureCount : 1;
		unsigned has_laneClosureType : 1;
		unsigned has_significance : 1;
		unsigned has_type : 1;
		unsigned has_endTimeReliable : 1;
		unsigned read_unknownFields : 1;
		unsigned read_crossStreet : 1;
		unsigned read_incidentId : 1;
		unsigned read_info : 1;
		unsigned read_position : 1;
		unsigned read_street : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_crossStreet : 1;
		unsigned wrote_endTime : 1;
		unsigned wrote_incidentId : 1;
		unsigned wrote_info : 1;
		unsigned wrote_position : 1;
		unsigned wrote_startTime : 1;
		unsigned wrote_street : 1;
		unsigned wrote_updateTime : 1;
		unsigned wrote_laneClosureCount : 1;
		unsigned wrote_laneClosureType : 1;
		unsigned wrote_significance : 1;
		unsigned wrote_type : 1;
		unsigned wrote_endTimeReliable : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPosition; 
@property (nonatomic,retain) GEOLatLng * position; 
@property (nonatomic,readonly) BOOL hasIncidentId; 
@property (nonatomic,retain) NSString * incidentId; 
@property (nonatomic,readonly) BOOL hasInfo; 
@property (nonatomic,retain) NSString * info; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasStreet; 
@property (nonatomic,retain) NSString * street; 
@property (nonatomic,readonly) BOOL hasCrossStreet; 
@property (nonatomic,retain) NSString * crossStreet; 
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) long long startTime; 
@property (assign,nonatomic) BOOL hasEndTime; 
@property (assign,nonatomic) long long endTime; 
@property (assign,nonatomic) BOOL hasUpdateTime; 
@property (assign,nonatomic) long long updateTime; 
@property (assign,nonatomic) BOOL hasLaneClosureType; 
@property (assign,nonatomic) int laneClosureType; 
@property (assign,nonatomic) BOOL hasLaneClosureCount; 
@property (assign,nonatomic) unsigned laneClosureCount; 
@property (assign,nonatomic) BOOL hasEndTimeReliable; 
@property (assign,nonatomic) BOOL endTimeReliable; 
@property (assign,nonatomic) BOOL hasSignificance; 
@property (assign,nonatomic) int significance; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLatLng *)position;
-(void)writeTo:(id)arg1 ;
-(NSString *)info;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setPosition:(GEOLatLng *)arg1 ;
-(long long)startTime;
-(NSString *)street;
-(long long)endTime;
-(void)setEndTime:(long long)arg1 ;
-(void)setStartTime:(long long)arg1 ;
-(void)setInfo:(NSString *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasPosition;
-(void)_readPosition;
-(void)_readIncidentId;
-(NSString *)incidentId;
-(void)setIncidentId:(NSString *)arg1 ;
-(BOOL)hasIncidentId;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(long long)updateTime;
-(void)setUpdateTime:(long long)arg1 ;
-(void)setHasUpdateTime:(BOOL)arg1 ;
-(BOOL)hasUpdateTime;
-(unsigned)laneClosureCount;
-(void)setLaneClosureCount:(unsigned)arg1 ;
-(void)setHasLaneClosureCount:(BOOL)arg1 ;
-(BOOL)hasLaneClosureCount;
-(int)laneClosureType;
-(void)setLaneClosureType:(int)arg1 ;
-(void)setHasLaneClosureType:(BOOL)arg1 ;
-(BOOL)hasLaneClosureType;
-(id)laneClosureTypeAsString:(int)arg1 ;
-(int)StringAsLaneClosureType:(id)arg1 ;
-(int)significance;
-(void)_readInfo;
-(void)_readStreet;
-(void)_readCrossStreet;
-(NSString *)crossStreet;
-(void)setStreet:(NSString *)arg1 ;
-(void)setCrossStreet:(NSString *)arg1 ;
-(BOOL)hasInfo;
-(BOOL)hasStreet;
-(BOOL)hasCrossStreet;
-(void)setHasEndTime:(BOOL)arg1 ;
-(BOOL)hasEndTime;
-(BOOL)endTimeReliable;
-(void)setEndTimeReliable:(BOOL)arg1 ;
-(void)setHasEndTimeReliable:(BOOL)arg1 ;
-(BOOL)hasEndTimeReliable;
-(void)setSignificance:(int)arg1 ;
-(void)setHasSignificance:(BOOL)arg1 ;
-(BOOL)hasSignificance;
-(id)significanceAsString:(int)arg1 ;
-(int)StringAsSignificance:(id)arg1 ;
@end

