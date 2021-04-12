/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, AWDProactiveAppPredictionAppActionSequence, AWDProactiveAppPredictionAppLaunchSequence;

@interface AWDProactiveAppPredictionIntentPredictionSession : PBCodable <NSCopying> {

	SCD_Struct_AW2* _engagedActionCacheIndices;
	unsigned long long _timestamp;
	NSString* _abGroup;
	NSMutableArray* _actionDatas;
	int _appActionCoreMotionCurrentMotionLaunches;
	AWDProactiveAppPredictionAppActionSequence* _appActionSequence;
	int _appForAllActionsCoreMotionCurrentMotionLaunches;
	AWDProactiveAppPredictionAppLaunchSequence* _appSequence;
	int _consumerSubType;
	int _currentLOIType;
	int _dayOfWeek;
	int _engagementType;
	int _intentDonationDelay;
	int _locationDistanceFromHome;
	int _locationDistanceFromWork;
	int _logType;
	int _predictionAge;
	NSString* _sessionId;
	int _sessionLogVersion;
	int _timeOfDayInterval;
	int _totalAppActionAirplaneModeLaunches;
	int _totalAppActionCoarseTimeOfDayLaunches;
	int _totalAppActionCurrentDayOfWeekLaunches;
	int _totalAppActionTimeOfDayLaunches;
	int _totalAppForAllActionTimeOfDayLaunches;
	int _totalAppForAllActionsAirplaneModeLaunches;
	int _totalAppForAllActionsCoarseTimeOfDayLaunches;
	int _totalAppForAllActionsCurrentDayOfWeekLaunches;
	int _uiFeedbackDelay;
	BOOL _inAirplaneMode;
	BOOL _isInternalBuild;
	SCD_Struct_AW55 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionDatas;                                                //@synthesize actionDatas=_actionDatas - In the implementation block
@property (assign,nonatomic) BOOL hasAppActionCoreMotionCurrentMotionLaunches; 
@property (assign,nonatomic) int appActionCoreMotionCurrentMotionLaunches;                                //@synthesize appActionCoreMotionCurrentMotionLaunches=_appActionCoreMotionCurrentMotionLaunches - In the implementation block
@property (nonatomic,readonly) BOOL hasAppSequence; 
@property (nonatomic,retain) AWDProactiveAppPredictionAppLaunchSequence * appSequence;                    //@synthesize appSequence=_appSequence - In the implementation block
@property (assign,nonatomic) BOOL hasConsumerSubType; 
@property (assign,nonatomic) int consumerSubType;                                                         //@synthesize consumerSubType=_consumerSubType - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentLOIType; 
@property (assign,nonatomic) int currentLOIType;                                                          //@synthesize currentLOIType=_currentLOIType - In the implementation block
@property (assign,nonatomic) BOOL hasDayOfWeek; 
@property (assign,nonatomic) int dayOfWeek;                                                               //@synthesize dayOfWeek=_dayOfWeek - In the implementation block
@property (nonatomic,readonly) unsigned long long engagedActionCacheIndicesCount; 
@property (nonatomic,readonly) int* engagedActionCacheIndices; 
@property (assign,nonatomic) BOOL hasEngagementType; 
@property (assign,nonatomic) int engagementType;                                                          //@synthesize engagementType=_engagementType - In the implementation block
@property (assign,nonatomic) BOOL hasInAirplaneMode; 
@property (assign,nonatomic) BOOL inAirplaneMode;                                                         //@synthesize inAirplaneMode=_inAirplaneMode - In the implementation block
@property (assign,nonatomic) BOOL hasIntentDonationDelay; 
@property (assign,nonatomic) int intentDonationDelay;                                                     //@synthesize intentDonationDelay=_intentDonationDelay - In the implementation block
@property (assign,nonatomic) BOOL hasIsInternalBuild; 
@property (assign,nonatomic) BOOL isInternalBuild;                                                        //@synthesize isInternalBuild=_isInternalBuild - In the implementation block
@property (assign,nonatomic) BOOL hasLogType; 
@property (assign,nonatomic) int logType;                                                                 //@synthesize logType=_logType - In the implementation block
@property (assign,nonatomic) BOOL hasPredictionAge; 
@property (assign,nonatomic) int predictionAge;                                                           //@synthesize predictionAge=_predictionAge - In the implementation block
@property (assign,nonatomic) BOOL hasTimeOfDayInterval; 
@property (assign,nonatomic) int timeOfDayInterval;                                                       //@synthesize timeOfDayInterval=_timeOfDayInterval - In the implementation block
@property (assign,nonatomic) BOOL hasTotalAppActionAirplaneModeLaunches; 
@property (assign,nonatomic) int totalAppActionAirplaneModeLaunches;                                      //@synthesize totalAppActionAirplaneModeLaunches=_totalAppActionAirplaneModeLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasTotalAppActionCurrentDayOfWeekLaunches; 
@property (assign,nonatomic) int totalAppActionCurrentDayOfWeekLaunches;                                  //@synthesize totalAppActionCurrentDayOfWeekLaunches=_totalAppActionCurrentDayOfWeekLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasTotalAppForAllActionsAirplaneModeLaunches; 
@property (assign,nonatomic) int totalAppForAllActionsAirplaneModeLaunches;                               //@synthesize totalAppForAllActionsAirplaneModeLaunches=_totalAppForAllActionsAirplaneModeLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasTotalAppForAllActionsCurrentDayOfWeekLaunches; 
@property (assign,nonatomic) int totalAppForAllActionsCurrentDayOfWeekLaunches;                           //@synthesize totalAppForAllActionsCurrentDayOfWeekLaunches=_totalAppForAllActionsCurrentDayOfWeekLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasUiFeedbackDelay; 
@property (assign,nonatomic) int uiFeedbackDelay;                                                         //@synthesize uiFeedbackDelay=_uiFeedbackDelay - In the implementation block
@property (assign,nonatomic) BOOL hasSessionLogVersion; 
@property (assign,nonatomic) int sessionLogVersion;                                                       //@synthesize sessionLogVersion=_sessionLogVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAbGroup; 
@property (nonatomic,retain) NSString * abGroup;                                                          //@synthesize abGroup=_abGroup - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllActionsCoreMotionCurrentMotionLaunches; 
@property (assign,nonatomic) int appForAllActionsCoreMotionCurrentMotionLaunches;                         //@synthesize appForAllActionsCoreMotionCurrentMotionLaunches=_appForAllActionsCoreMotionCurrentMotionLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasLocationDistanceFromHome; 
@property (assign,nonatomic) int locationDistanceFromHome;                                                //@synthesize locationDistanceFromHome=_locationDistanceFromHome - In the implementation block
@property (assign,nonatomic) BOOL hasLocationDistanceFromWork; 
@property (assign,nonatomic) int locationDistanceFromWork;                                                //@synthesize locationDistanceFromWork=_locationDistanceFromWork - In the implementation block
@property (assign,nonatomic) BOOL hasTotalAppActionTimeOfDayLaunches; 
@property (assign,nonatomic) int totalAppActionTimeOfDayLaunches;                                         //@synthesize totalAppActionTimeOfDayLaunches=_totalAppActionTimeOfDayLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasTotalAppForAllActionTimeOfDayLaunches; 
@property (assign,nonatomic) int totalAppForAllActionTimeOfDayLaunches;                                   //@synthesize totalAppForAllActionTimeOfDayLaunches=_totalAppForAllActionTimeOfDayLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasTotalAppActionCoarseTimeOfDayLaunches; 
@property (assign,nonatomic) int totalAppActionCoarseTimeOfDayLaunches;                                   //@synthesize totalAppActionCoarseTimeOfDayLaunches=_totalAppActionCoarseTimeOfDayLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasTotalAppForAllActionsCoarseTimeOfDayLaunches; 
@property (assign,nonatomic) int totalAppForAllActionsCoarseTimeOfDayLaunches;                            //@synthesize totalAppForAllActionsCoarseTimeOfDayLaunches=_totalAppForAllActionsCoarseTimeOfDayLaunches - In the implementation block
@property (nonatomic,readonly) BOOL hasAppActionSequence; 
@property (nonatomic,retain) AWDProactiveAppPredictionAppActionSequence * appActionSequence;              //@synthesize appActionSequence=_appActionSequence - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSString * sessionId;                                                        //@synthesize sessionId=_sessionId - In the implementation block
+(Class)actionDataType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)dayOfWeek;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(BOOL)hasSessionId;
-(void)setDayOfWeek:(int)arg1 ;
-(void)setHasDayOfWeek:(BOOL)arg1 ;
-(BOOL)hasDayOfWeek;
-(BOOL)isInternalBuild;
-(int)logType;
-(void)setLogType:(int)arg1 ;
-(BOOL)inAirplaneMode;
-(int)predictionAge;
-(void)setPredictionAge:(int)arg1 ;
-(void)setIsInternalBuild:(BOOL)arg1 ;
-(int)consumerSubType;
-(NSString *)abGroup;
-(int)engagementType;
-(BOOL)hasAbGroup;
-(void)setAbGroup:(NSString *)arg1 ;
-(void)setInAirplaneMode:(BOOL)arg1 ;
-(void)setHasInAirplaneMode:(BOOL)arg1 ;
-(BOOL)hasInAirplaneMode;
-(void)setTimeOfDayInterval:(int)arg1 ;
-(void)setHasTimeOfDayInterval:(BOOL)arg1 ;
-(BOOL)hasTimeOfDayInterval;
-(void)setConsumerSubType:(int)arg1 ;
-(void)setHasConsumerSubType:(BOOL)arg1 ;
-(BOOL)hasConsumerSubType;
-(id)consumerSubTypeAsString:(int)arg1 ;
-(int)StringAsConsumerSubType:(id)arg1 ;
-(int)currentLOIType;
-(void)setCurrentLOIType:(int)arg1 ;
-(void)setHasCurrentLOIType:(BOOL)arg1 ;
-(BOOL)hasCurrentLOIType;
-(id)currentLOITypeAsString:(int)arg1 ;
-(int)StringAsCurrentLOIType:(id)arg1 ;
-(void)setLocationDistanceFromHome:(int)arg1 ;
-(void)setHasLocationDistanceFromHome:(BOOL)arg1 ;
-(BOOL)hasLocationDistanceFromHome;
-(void)setLocationDistanceFromWork:(int)arg1 ;
-(void)setHasLocationDistanceFromWork:(BOOL)arg1 ;
-(BOOL)hasLocationDistanceFromWork;
-(void)setHasIsInternalBuild:(BOOL)arg1 ;
-(BOOL)hasIsInternalBuild;
-(void)setSessionLogVersion:(int)arg1 ;
-(void)setHasSessionLogVersion:(BOOL)arg1 ;
-(BOOL)hasSessionLogVersion;
-(int)timeOfDayInterval;
-(int)locationDistanceFromHome;
-(int)locationDistanceFromWork;
-(int)sessionLogVersion;
-(void)clearActionDatas;
-(void)addActionData:(id)arg1 ;
-(unsigned long long)actionDatasCount;
-(id)actionDataAtIndex:(unsigned long long)arg1 ;
-(void)setAppActionCoreMotionCurrentMotionLaunches:(int)arg1 ;
-(void)setHasAppActionCoreMotionCurrentMotionLaunches:(BOOL)arg1 ;
-(BOOL)hasAppActionCoreMotionCurrentMotionLaunches;
-(BOOL)hasAppSequence;
-(unsigned long long)engagedActionCacheIndicesCount;
-(int*)engagedActionCacheIndices;
-(void)clearEngagedActionCacheIndices;
-(void)addEngagedActionCacheIndices:(int)arg1 ;
-(int)engagedActionCacheIndicesAtIndex:(unsigned long long)arg1 ;
-(void)setEngagedActionCacheIndices:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setEngagementType:(int)arg1 ;
-(void)setHasEngagementType:(BOOL)arg1 ;
-(BOOL)hasEngagementType;
-(id)engagementTypeAsString:(int)arg1 ;
-(int)StringAsEngagementType:(id)arg1 ;
-(void)setIntentDonationDelay:(int)arg1 ;
-(void)setHasIntentDonationDelay:(BOOL)arg1 ;
-(BOOL)hasIntentDonationDelay;
-(void)setHasLogType:(BOOL)arg1 ;
-(BOOL)hasLogType;
-(void)setHasPredictionAge:(BOOL)arg1 ;
-(BOOL)hasPredictionAge;
-(void)setTotalAppActionAirplaneModeLaunches:(int)arg1 ;
-(void)setHasTotalAppActionAirplaneModeLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalAppActionAirplaneModeLaunches;
-(void)setTotalAppActionCurrentDayOfWeekLaunches:(int)arg1 ;
-(void)setHasTotalAppActionCurrentDayOfWeekLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalAppActionCurrentDayOfWeekLaunches;
-(void)setTotalAppForAllActionsAirplaneModeLaunches:(int)arg1 ;
-(void)setHasTotalAppForAllActionsAirplaneModeLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalAppForAllActionsAirplaneModeLaunches;
-(void)setTotalAppForAllActionsCurrentDayOfWeekLaunches:(int)arg1 ;
-(void)setHasTotalAppForAllActionsCurrentDayOfWeekLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalAppForAllActionsCurrentDayOfWeekLaunches;
-(void)setUiFeedbackDelay:(int)arg1 ;
-(void)setHasUiFeedbackDelay:(BOOL)arg1 ;
-(BOOL)hasUiFeedbackDelay;
-(void)setAppForAllActionsCoreMotionCurrentMotionLaunches:(int)arg1 ;
-(void)setHasAppForAllActionsCoreMotionCurrentMotionLaunches:(BOOL)arg1 ;
-(BOOL)hasAppForAllActionsCoreMotionCurrentMotionLaunches;
-(void)setTotalAppActionTimeOfDayLaunches:(int)arg1 ;
-(void)setHasTotalAppActionTimeOfDayLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalAppActionTimeOfDayLaunches;
-(void)setTotalAppForAllActionTimeOfDayLaunches:(int)arg1 ;
-(void)setHasTotalAppForAllActionTimeOfDayLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalAppForAllActionTimeOfDayLaunches;
-(void)setTotalAppActionCoarseTimeOfDayLaunches:(int)arg1 ;
-(void)setHasTotalAppActionCoarseTimeOfDayLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalAppActionCoarseTimeOfDayLaunches;
-(void)setTotalAppForAllActionsCoarseTimeOfDayLaunches:(int)arg1 ;
-(void)setHasTotalAppForAllActionsCoarseTimeOfDayLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalAppForAllActionsCoarseTimeOfDayLaunches;
-(BOOL)hasAppActionSequence;
-(NSMutableArray *)actionDatas;
-(void)setActionDatas:(NSMutableArray *)arg1 ;
-(int)appActionCoreMotionCurrentMotionLaunches;
-(AWDProactiveAppPredictionAppLaunchSequence *)appSequence;
-(void)setAppSequence:(AWDProactiveAppPredictionAppLaunchSequence *)arg1 ;
-(int)intentDonationDelay;
-(int)totalAppActionAirplaneModeLaunches;
-(int)totalAppActionCurrentDayOfWeekLaunches;
-(int)totalAppForAllActionsAirplaneModeLaunches;
-(int)totalAppForAllActionsCurrentDayOfWeekLaunches;
-(int)uiFeedbackDelay;
-(int)appForAllActionsCoreMotionCurrentMotionLaunches;
-(int)totalAppActionTimeOfDayLaunches;
-(int)totalAppForAllActionTimeOfDayLaunches;
-(int)totalAppActionCoarseTimeOfDayLaunches;
-(int)totalAppForAllActionsCoarseTimeOfDayLaunches;
-(AWDProactiveAppPredictionAppActionSequence *)appActionSequence;
-(void)setAppActionSequence:(AWDProactiveAppPredictionAppActionSequence *)arg1 ;
@end

