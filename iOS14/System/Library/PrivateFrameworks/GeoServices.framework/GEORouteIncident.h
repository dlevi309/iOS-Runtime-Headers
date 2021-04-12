/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOLatLng, GEORestrictionInfo;

@interface GEORouteIncident : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _crossStreet;
	long long _endTime;
	NSString* _incidentId;
	NSString* _info;
	GEOLatLng* _position;
	GEORestrictionInfo* _restrictionInfo;
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
	unsigned _userReportsCount;
	BOOL _endTimeReliable;
	BOOL _shouldDisplayOnMap;
	SCD_Struct_GE78 _flags;

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
@property (nonatomic,readonly) BOOL hasRestrictionInfo; 
@property (nonatomic,retain) GEORestrictionInfo * restrictionInfo; 
@property (assign,nonatomic) BOOL hasUserReportsCount; 
@property (assign,nonatomic) unsigned userReportsCount; 
@property (assign,nonatomic) BOOL hasShouldDisplayOnMap; 
@property (assign,nonatomic) BOOL shouldDisplayOnMap; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasPosition;
-(long long)updateTime;
-(id)dictionaryRepresentation;
-(void)setHasStartTime:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(GEOLatLng *)position;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)street;
-(BOOL)hasStartTime;
-(void)setStreet:(NSString *)arg1 ;
-(void)setHasSignificance:(BOOL)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(NSString *)info;
-(BOOL)hasStreet;
-(id)init;
-(int)StringAsType:(id)arg1 ;
-(id)jsonRepresentation;
-(void)setStartTime:(long long)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasInfo;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setHasEndTime:(BOOL)arg1 ;
-(GEORestrictionInfo *)restrictionInfo;
-(void)setRestrictionInfo:(GEORestrictionInfo *)arg1 ;
-(void)setUserReportsCount:(unsigned)arg1 ;
-(void)setShouldDisplayOnMap:(BOOL)arg1 ;
-(BOOL)hasRestrictionInfo;
-(unsigned)userReportsCount;
-(void)setHasUserReportsCount:(BOOL)arg1 ;
-(BOOL)hasUserReportsCount;
-(BOOL)shouldDisplayOnMap;
-(void)setHasShouldDisplayOnMap:(BOOL)arg1 ;
-(BOOL)hasShouldDisplayOnMap;
-(void)setSignificance:(int)arg1 ;
-(void)setUpdateTime:(long long)arg1 ;
-(void)setIncidentId:(NSString *)arg1 ;
-(void)setCrossStreet:(NSString *)arg1 ;
-(void)setLaneClosureCount:(unsigned)arg1 ;
-(void)setEndTimeReliable:(BOOL)arg1 ;
-(void)setLaneClosureType:(int)arg1 ;
-(BOOL)hasIncidentId;
-(void)setHasUpdateTime:(BOOL)arg1 ;
-(BOOL)hasUpdateTime;
-(BOOL)hasCrossStreet;
-(unsigned)laneClosureCount;
-(void)setHasLaneClosureCount:(BOOL)arg1 ;
-(BOOL)hasLaneClosureCount;
-(BOOL)endTimeReliable;
-(void)setHasEndTimeReliable:(BOOL)arg1 ;
-(BOOL)hasEndTimeReliable;
-(int)laneClosureType;
-(void)setHasLaneClosureType:(BOOL)arg1 ;
-(BOOL)hasLaneClosureType;
-(id)laneClosureTypeAsString:(int)arg1 ;
-(int)StringAsLaneClosureType:(id)arg1 ;
-(id)significanceAsString:(int)arg1 ;
-(int)StringAsSignificance:(id)arg1 ;
-(void)setInfo:(NSString *)arg1 ;
-(int)type;
-(void)setPosition:(GEOLatLng *)arg1 ;
-(unsigned long long)hash;
-(NSString *)crossStreet;
-(BOOL)hasSignificance;
-(BOOL)readFrom:(id)arg1 ;
-(void)setEndTime:(long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(long long)endTime;
-(int)significance;
-(NSString *)incidentId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)startTime;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasEndTime;
-(BOOL)isEqual:(id)arg1 ;
@end

