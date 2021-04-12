/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOCompanionDriveStep, GEOCompanionFerryStep, GEOCompanionGenericStep, NSMutableArray, NSString, NSData, GEOCompanionWalkStep;

@interface GEOCompanionStep : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOCompanionDriveStep* _driveStep;
	GEOCompanionFerryStep* _ferryStep;
	GEOCompanionGenericStep* _genericStep;
	NSMutableArray* _guidanceEvents;
	NSMutableArray* _instructionWithAlternatives;
	NSString* _listInstruction;
	NSString* _roadName;
	NSData* _updateID;
	GEOCompanionWalkStep* _walkStep;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _distance;
	unsigned _endCoordinateIndex;
	unsigned _maneuverStartCoordinateIndex;
	unsigned _startCoordinateIndex;
	unsigned _stepID;
	unsigned _time;
	struct {
		unsigned has_distance : 1;
		unsigned has_endCoordinateIndex : 1;
		unsigned has_maneuverStartCoordinateIndex : 1;
		unsigned has_startCoordinateIndex : 1;
		unsigned has_stepID : 1;
		unsigned has_time : 1;
		unsigned read_driveStep : 1;
		unsigned read_ferryStep : 1;
		unsigned read_genericStep : 1;
		unsigned read_guidanceEvents : 1;
		unsigned read_instructionWithAlternatives : 1;
		unsigned read_listInstruction : 1;
		unsigned read_roadName : 1;
		unsigned read_updateID : 1;
		unsigned read_walkStep : 1;
		unsigned wrote_driveStep : 1;
		unsigned wrote_ferryStep : 1;
		unsigned wrote_genericStep : 1;
		unsigned wrote_guidanceEvents : 1;
		unsigned wrote_instructionWithAlternatives : 1;
		unsigned wrote_listInstruction : 1;
		unsigned wrote_roadName : 1;
		unsigned wrote_updateID : 1;
		unsigned wrote_walkStep : 1;
		unsigned wrote_distance : 1;
		unsigned wrote_endCoordinateIndex : 1;
		unsigned wrote_maneuverStartCoordinateIndex : 1;
		unsigned wrote_startCoordinateIndex : 1;
		unsigned wrote_stepID : 1;
		unsigned wrote_time : 1;
	}  _flags;

}

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
+(BOOL)isValid:(id)arg1 ;
+(Class)guidanceEventType;
+(Class)instructionWithAlternativesType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)time;
-(void)writeTo:(id)arg1 ;
-(void)setTime:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(unsigned)distance;
-(void)setHasTime:(BOOL)arg1 ;
-(BOOL)hasTime;
-(void)readAll:(BOOL)arg1 ;
-(void)setStepID:(unsigned)arg1 ;
-(NSMutableArray *)guidanceEvents;
-(void)_readGuidanceEvents;
-(void)_addNoFlagsGuidanceEvent:(id)arg1 ;
-(unsigned long long)guidanceEventsCount;
-(void)clearGuidanceEvents;
-(id)guidanceEventAtIndex:(unsigned long long)arg1 ;
-(void)addGuidanceEvent:(id)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasDistance;
-(void)setGuidanceEvents:(NSMutableArray *)arg1 ;
-(unsigned)stepID;
-(void)setHasStepID:(BOOL)arg1 ;
-(BOOL)hasStepID;
-(id)geoStep;
-(id)initWithStep:(id)arg1 route:(id)arg2 stringFormatter:(id)arg3 ;
-(void)setUpdateID:(NSData *)arg1 ;
-(void)setStartCoordinateIndex:(unsigned)arg1 ;
-(void)setManeuverStartCoordinateIndex:(unsigned)arg1 ;
-(void)setEndCoordinateIndex:(unsigned)arg1 ;
-(void)setDriveStep:(GEOCompanionDriveStep *)arg1 ;
-(void)setWalkStep:(GEOCompanionWalkStep *)arg1 ;
-(void)setFerryStep:(GEOCompanionFerryStep *)arg1 ;
-(void)setGenericStep:(GEOCompanionGenericStep *)arg1 ;
-(NSString *)roadName;
-(void)setRoadName:(NSString *)arg1 ;
-(void)setListInstruction:(NSString *)arg1 ;
-(void)setInstructionWithAlternatives:(NSMutableArray *)arg1 ;
-(BOOL)hasDriveStep;
-(GEOCompanionDriveStep *)driveStep;
-(BOOL)hasWalkStep;
-(GEOCompanionWalkStep *)walkStep;
-(BOOL)hasFerryStep;
-(GEOCompanionFerryStep *)ferryStep;
-(BOOL)hasGenericStep;
-(GEOCompanionGenericStep *)genericStep;
-(unsigned)endCoordinateIndex;
-(id)maneuverStep;
-(NSString *)listInstruction;
-(void)_readRoadName;
-(void)_readDriveStep;
-(void)_readWalkStep;
-(void)_readFerryStep;
-(void)_readInstructionWithAlternatives;
-(void)_addNoFlagsInstructionWithAlternatives:(id)arg1 ;
-(void)_readListInstruction;
-(void)_readUpdateID;
-(void)_readGenericStep;
-(NSMutableArray *)instructionWithAlternatives;
-(NSData *)updateID;
-(unsigned long long)instructionWithAlternativesCount;
-(void)clearInstructionWithAlternatives;
-(id)instructionWithAlternativesAtIndex:(unsigned long long)arg1 ;
-(void)addInstructionWithAlternatives:(id)arg1 ;
-(BOOL)hasRoadName;
-(unsigned)startCoordinateIndex;
-(void)setHasStartCoordinateIndex:(BOOL)arg1 ;
-(BOOL)hasStartCoordinateIndex;
-(unsigned)maneuverStartCoordinateIndex;
-(void)setHasManeuverStartCoordinateIndex:(BOOL)arg1 ;
-(BOOL)hasManeuverStartCoordinateIndex;
-(void)setHasEndCoordinateIndex:(BOOL)arg1 ;
-(BOOL)hasEndCoordinateIndex;
-(BOOL)hasListInstruction;
-(BOOL)hasUpdateID;
@end

