/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, NSData, NSUUID;

@interface MNGuidanceEventFeedback : PBCodable <NSCopying> {

	double _endDistance;
	double _endTime;
	double _maneuverTime;
	double _startDistance;
	double _startTime;
	double _vehicleSpeed;
	unsigned _enrouteNoticeIndex;
	NSString* _eventDescription;
	unsigned _eventIndex;
	NSMutableArray* _junctionViewImageIDs;
	NSData* _routeID;
	unsigned _selectedPrimaryStringIndex;
	unsigned _selectedSecondaryStringIndex;
	unsigned _stepID;
	unsigned _trafficColor;
	int _type;
	NSString* _uniqueIDstring;
	BOOL _shortPrompt;
	SCD_Struct_MN9 _has;

}

@property (nonatomic,readonly) NSUUID * uniqueID; 
@property (nonatomic,readonly) BOOL hasUniqueIDstring; 
@property (nonatomic,retain) NSString * uniqueIDstring;                          //@synthesize uniqueIDstring=_uniqueIDstring - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID;                                   //@synthesize routeID=_routeID - In the implementation block
@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID;                                    //@synthesize stepID=_stepID - In the implementation block
@property (assign,nonatomic) BOOL hasEnrouteNoticeIndex; 
@property (assign,nonatomic) unsigned enrouteNoticeIndex;                        //@synthesize enrouteNoticeIndex=_enrouteNoticeIndex - In the implementation block
@property (assign,nonatomic) BOOL hasEventIndex; 
@property (assign,nonatomic) unsigned eventIndex;                                //@synthesize eventIndex=_eventIndex - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) double startTime;                                   //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasStartDistance; 
@property (assign,nonatomic) double startDistance;                               //@synthesize startDistance=_startDistance - In the implementation block
@property (assign,nonatomic) BOOL hasVehicleSpeed; 
@property (assign,nonatomic) double vehicleSpeed;                                //@synthesize vehicleSpeed=_vehicleSpeed - In the implementation block
@property (assign,nonatomic) BOOL hasTrafficColor; 
@property (assign,nonatomic) unsigned trafficColor;                              //@synthesize trafficColor=_trafficColor - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedPrimaryStringIndex; 
@property (assign,nonatomic) unsigned selectedPrimaryStringIndex;                //@synthesize selectedPrimaryStringIndex=_selectedPrimaryStringIndex - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedSecondaryStringIndex; 
@property (assign,nonatomic) unsigned selectedSecondaryStringIndex;              //@synthesize selectedSecondaryStringIndex=_selectedSecondaryStringIndex - In the implementation block
@property (assign,nonatomic) BOOL hasShortPrompt; 
@property (assign,nonatomic) BOOL shortPrompt;                                   //@synthesize shortPrompt=_shortPrompt - In the implementation block
@property (assign,nonatomic) BOOL hasEndTime; 
@property (assign,nonatomic) double endTime;                                     //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) BOOL hasEndDistance; 
@property (assign,nonatomic) double endDistance;                                 //@synthesize endDistance=_endDistance - In the implementation block
@property (assign,nonatomic) BOOL hasManeuverTime; 
@property (assign,nonatomic) double maneuverTime;                                //@synthesize maneuverTime=_maneuverTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * junctionViewImageIDs;              //@synthesize junctionViewImageIDs=_junctionViewImageIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasEventDescription; 
@property (nonatomic,retain) NSString * eventDescription;                        //@synthesize eventDescription=_eventDescription - In the implementation block
+(Class)junctionViewImageIDType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(NSUUID *)uniqueID;
-(void)writeTo:(id)arg1 ;
-(id)initWithEvent:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(double)startTime;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(NSData *)routeID;
-(void)setRouteID:(NSData *)arg1 ;
-(BOOL)hasRouteID;
-(void)setStepID:(unsigned)arg1 ;
-(unsigned)stepID;
-(void)setHasStepID:(BOOL)arg1 ;
-(BOOL)hasStepID;
-(unsigned)enrouteNoticeIndex;
-(BOOL)shortPrompt;
-(void)setShortPrompt:(BOOL)arg1 ;
-(void)setHasShortPrompt:(BOOL)arg1 ;
-(BOOL)hasShortPrompt;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(void)setEnrouteNoticeIndex:(unsigned)arg1 ;
-(void)setHasEnrouteNoticeIndex:(BOOL)arg1 ;
-(BOOL)hasEnrouteNoticeIndex;
-(unsigned)eventIndex;
-(void)setEventIndex:(unsigned)arg1 ;
-(void)setHasEventIndex:(BOOL)arg1 ;
-(BOOL)hasEventIndex;
-(double)vehicleSpeed;
-(void)setVehicleSpeed:(double)arg1 ;
-(void)setHasVehicleSpeed:(BOOL)arg1 ;
-(BOOL)hasVehicleSpeed;
-(void)setHasEndTime:(BOOL)arg1 ;
-(BOOL)hasEndTime;
-(double)startDistance;
-(void)setStartDistance:(double)arg1 ;
-(NSString *)eventDescription;
-(void)setEventDescription:(NSString *)arg1 ;
-(void)addJunctionViewImageID:(id)arg1 ;
-(void)setUniqueIDstring:(NSString *)arg1 ;
-(unsigned long long)junctionViewImageIDsCount;
-(void)clearJunctionViewImageIDs;
-(id)junctionViewImageIDAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasUniqueIDstring;
-(void)setHasStartDistance:(BOOL)arg1 ;
-(BOOL)hasStartDistance;
-(void)setTrafficColor:(unsigned)arg1 ;
-(void)setHasTrafficColor:(BOOL)arg1 ;
-(BOOL)hasTrafficColor;
-(void)setSelectedPrimaryStringIndex:(unsigned)arg1 ;
-(void)setHasSelectedPrimaryStringIndex:(BOOL)arg1 ;
-(BOOL)hasSelectedPrimaryStringIndex;
-(void)setSelectedSecondaryStringIndex:(unsigned)arg1 ;
-(void)setHasSelectedSecondaryStringIndex:(BOOL)arg1 ;
-(BOOL)hasSelectedSecondaryStringIndex;
-(void)setEndDistance:(double)arg1 ;
-(void)setHasEndDistance:(BOOL)arg1 ;
-(BOOL)hasEndDistance;
-(void)setManeuverTime:(double)arg1 ;
-(void)setHasManeuverTime:(BOOL)arg1 ;
-(BOOL)hasManeuverTime;
-(BOOL)hasEventDescription;
-(NSString *)uniqueIDstring;
-(unsigned)trafficColor;
-(unsigned)selectedPrimaryStringIndex;
-(unsigned)selectedSecondaryStringIndex;
-(double)endDistance;
-(double)maneuverTime;
-(NSMutableArray *)junctionViewImageIDs;
-(void)setJunctionViewImageIDs:(NSMutableArray *)arg1 ;
@end

