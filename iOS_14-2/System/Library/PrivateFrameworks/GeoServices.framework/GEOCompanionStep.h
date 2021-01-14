/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOCompanionCompatibility.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOCompanionCyclingStep, GEOCompanionDriveStep, GEOCompanionFerryStep, GEOCompanionGenericStep, NSMutableArray, NSString, GEOStopWaypoint, NSData, GEOCompanionWalkStep;

@interface GEOCompanionStep : PBCodable <GEOCompanionCompatibility, NSCopying> {

	PBDataReader* _reader;
	GEOCompanionCyclingStep* _cyclingStep;
	GEOCompanionDriveStep* _driveStep;
	GEOCompanionFerryStep* _ferryStep;
	GEOCompanionGenericStep* _genericStep;
	NSMutableArray* _guidanceEvents;
	NSMutableArray* _instructionWithAlternatives;
	NSString* _listInstruction;
	NSMutableArray* _roadDescriptions;
	NSString* _roadName;
	GEOStopWaypoint* _stopWaypoint;
	NSData* _updateID;
	GEOCompanionWalkStep* _walkStep;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	float _distanceMeters;
	unsigned _distance;
	unsigned _endCoordinateIndex;
	unsigned _maneuverStartCoordinateIndex;
	unsigned _startCoordinateIndex;
	unsigned _stepID;
	unsigned _time;
	struct {
		unsigned has_distanceMeters : 1;
		unsigned has_distance : 1;
		unsigned has_endCoordinateIndex : 1;
		unsigned has_maneuverStartCoordinateIndex : 1;
		unsigned has_startCoordinateIndex : 1;
		unsigned has_stepID : 1;
		unsigned has_time : 1;
		unsigned read_cyclingStep : 1;
		unsigned read_driveStep : 1;
		unsigned read_ferryStep : 1;
		unsigned read_genericStep : 1;
		unsigned read_guidanceEvents : 1;
		unsigned read_instructionWithAlternatives : 1;
		unsigned read_listInstruction : 1;
		unsigned read_roadDescriptions : 1;
		unsigned read_roadName : 1;
		unsigned read_stopWaypoint : 1;
		unsigned read_updateID : 1;
		unsigned read_walkStep : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID; 
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance; 
@property (assign,nonatomic) BOOL hasTime; 
@property (assign,nonatomic) unsigned time; 
@property (nonatomic,readonly) BOOL hasRoadName; 
@property (nonatomic,retain) NSString * roadName; 
@property (nonatomic,readonly) BOOL hasDriveStep; 
@property (nonatomic,retain) GEOCompanionDriveStep * driveStep; 
@property (nonatomic,readonly) BOOL hasWalkStep; 
@property (nonatomic,retain) GEOCompanionWalkStep * walkStep; 
@property (nonatomic,readonly) BOOL hasFerryStep; 
@property (nonatomic,retain) GEOCompanionFerryStep * ferryStep; 
@property (assign,nonatomic) BOOL hasStartCoordinateIndex; 
@property (assign,nonatomic) unsigned startCoordinateIndex; 
@property (assign,nonatomic) BOOL hasManeuverStartCoordinateIndex; 
@property (assign,nonatomic) unsigned maneuverStartCoordinateIndex; 
@property (assign,nonatomic) BOOL hasEndCoordinateIndex; 
@property (assign,nonatomic) unsigned endCoordinateIndex; 
@property (nonatomic,retain) NSMutableArray * instructionWithAlternatives; 
@property (nonatomic,readonly) BOOL hasListInstruction; 
@property (nonatomic,retain) NSString * listInstruction; 
@property (nonatomic,retain) NSMutableArray * guidanceEvents; 
@property (nonatomic,readonly) BOOL hasUpdateID; 
@property (nonatomic,retain) NSData * updateID; 
@property (nonatomic,readonly) BOOL hasGenericStep; 
@property (nonatomic,retain) GEOCompanionGenericStep * genericStep; 
@property (nonatomic,readonly) BOOL hasCyclingStep; 
@property (nonatomic,retain) GEOCompanionCyclingStep * cyclingStep; 
@property (nonatomic,retain) NSMutableArray * roadDescriptions; 
@property (nonatomic,readonly) BOOL hasStopWaypoint; 
@property (nonatomic,retain) GEOStopWaypoint * stopWaypoint; 
@property (assign,nonatomic) BOOL hasDistanceMeters; 
@property (assign,nonatomic) float distanceMeters; 
+(BOOL)isValid:(id)arg1 ;
+(Class)guidanceEventType;
+(Class)instructionWithAlternativesType;
+(Class)roadDescriptionsType;
-(id)dictionaryRepresentation;
-(unsigned)time;
-(void)setDistance:(unsigned)arg1 ;
-(void)setTime:(unsigned)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(unsigned)stepID;
-(NSString *)roadName;
-(id)jsonRepresentation;
-(id)geoStep;
-(unsigned)distance;
-(float)distanceMeters;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDistance;
-(BOOL)hasTime;
-(id)instanceCompatibleWithProtocolVersion:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(NSString *)description;
-(GEOCompanionWalkStep *)walkStep;
-(NSData *)updateID;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasStepID;
-(GEOCompanionDriveStep *)driveStep;
-(GEOCompanionFerryStep *)ferryStep;
-(void)setRoadName:(NSString *)arg1 ;
-(id)maneuverStep;
-(void)setHasStepID:(BOOL)arg1 ;
-(id)initWithStep:(id)arg1 route:(id)arg2 stringFormatter:(id)arg3 ;
-(GEOCompanionCyclingStep *)cyclingStep;
-(GEOCompanionGenericStep *)genericStep;
-(NSMutableArray *)guidanceEvents;
-(NSMutableArray *)instructionWithAlternatives;
-(NSString *)listInstruction;
-(GEOStopWaypoint *)stopWaypoint;
-(void)setDriveStep:(GEOCompanionDriveStep *)arg1 ;
-(void)setWalkStep:(GEOCompanionWalkStep *)arg1 ;
-(void)setFerryStep:(GEOCompanionFerryStep *)arg1 ;
-(void)addGuidanceEvent:(id)arg1 ;
-(void)setStartCoordinateIndex:(unsigned)arg1 ;
-(void)setManeuverStartCoordinateIndex:(unsigned)arg1 ;
-(void)setEndCoordinateIndex:(unsigned)arg1 ;
-(void)addInstructionWithAlternatives:(id)arg1 ;
-(void)setListInstruction:(NSString *)arg1 ;
-(void)setUpdateID:(NSData *)arg1 ;
-(void)setGenericStep:(GEOCompanionGenericStep *)arg1 ;
-(void)setCyclingStep:(GEOCompanionCyclingStep *)arg1 ;
-(void)addRoadDescriptions:(id)arg1 ;
-(void)setStopWaypoint:(GEOStopWaypoint *)arg1 ;
-(void)setDistanceMeters:(float)arg1 ;
-(BOOL)hasRoadName;
-(unsigned long long)instructionWithAlternativesCount;
-(void)clearInstructionWithAlternatives;
-(unsigned long long)guidanceEventsCount;
-(id)instructionWithAlternativesAtIndex:(unsigned long long)arg1 ;
-(void)clearGuidanceEvents;
-(id)guidanceEventAtIndex:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)roadDescriptionsCount;
-(void)clearRoadDescriptions;
-(id)roadDescriptionsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDriveStep;
-(BOOL)hasWalkStep;
-(BOOL)hasFerryStep;
-(unsigned)startCoordinateIndex;
-(void)setHasStartCoordinateIndex:(BOOL)arg1 ;
-(BOOL)hasStartCoordinateIndex;
-(BOOL)hasUpdateID;
-(unsigned)maneuverStartCoordinateIndex;
-(void)setHasManeuverStartCoordinateIndex:(BOOL)arg1 ;
-(unsigned)endCoordinateIndex;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasManeuverStartCoordinateIndex;
-(void)setHasEndCoordinateIndex:(BOOL)arg1 ;
-(BOOL)hasEndCoordinateIndex;
-(void)setInstructionWithAlternatives:(NSMutableArray *)arg1 ;
-(BOOL)hasListInstruction;
-(void)setGuidanceEvents:(NSMutableArray *)arg1 ;
-(BOOL)hasGenericStep;
-(BOOL)hasCyclingStep;
-(NSMutableArray *)roadDescriptions;
-(void)setRoadDescriptions:(NSMutableArray *)arg1 ;
-(BOOL)hasStopWaypoint;
-(BOOL)hasDistanceMeters;
-(void)setHasDistanceMeters:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStepID:(unsigned)arg1 ;
-(void)setHasTime:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

