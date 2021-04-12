/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface AWDProactiveAppPredictionSession : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _aPREngagementType;
	NSString* _aPRFeedbackSource;
	NSString* _aPRSiriExperience;
	NSMutableArray* _appSequences;
	int _consumerSubType;
	NSString* _consumerType;
	int _coreMotionCurrentMotionLaunches;
	int _coreMotionLaunches;
	int _currentLOIType;
	int _dayOfWeek;
	int _engagedApp;
	NSString* _intentType;
	int _locationDistanceFromGym;
	int _locationDistanceFromHome;
	int _locationDistanceFromSchool;
	int _locationDistanceFromWork;
	int _outcome;
	int _predictionCacheAge;
	NSString* _sessionId;
	int _sessionLogVersion;
	int _timeOfDayInterval;
	int _totalAirplaneModeLaunches;
	int _totalCurrentDayOfWeekLaunches;
	int _totalDayOfWeekLaunches;
	int _totalLaunchSequences;
	int _totalLaunches;
	int _totalSSIDLaunches;
	int _totalSpotlightLaunches;
	int _totalSpotlightTimeOfDayLaunches;
	int _totalTimeOfDayLaunches;
	int _totalTrendingLaunches;
	int _totalWifiLaunches;
	BOOL _inAirplaneMode;
	BOOL _isInternalBuild;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCoreMotionLaunches; 
@property (assign,nonatomic) int coreMotionLaunches;                               //@synthesize coreMotionLaunches=_coreMotionLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasTotalAirplaneModeLaunches; 
@property (assign,nonatomic) int totalAirplaneModeLaunches;                        //@synthesize totalAirplaneModeLaunches=_totalAirplaneModeLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasInAirplaneMode; 
@property (assign,nonatomic) BOOL inAirplaneMode;                                  //@synthesize inAirplaneMode=_inAirplaneMode - In the implementation block
@property (assign,nonatomic) BOOL hasCoreMotionCurrentMotionLaunches; 
@property (assign,nonatomic) int coreMotionCurrentMotionLaunches;                  //@synthesize coreMotionCurrentMotionLaunches=_coreMotionCurrentMotionLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasTotalSpotlightLaunches; 
@property (assign,nonatomic) int totalSpotlightLaunches;                           //@synthesize totalSpotlightLaunches=_totalSpotlightLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchSequences; 
@property (assign,nonatomic) int totalLaunchSequences;                             //@synthesize totalLaunchSequences=_totalLaunchSequences - In the implementation block
@property (assign,nonatomic) BOOL hasTotalCurrentDayOfWeekLaunches; 
@property (assign,nonatomic) int totalCurrentDayOfWeekLaunches;                    //@synthesize totalCurrentDayOfWeekLaunches=_totalCurrentDayOfWeekLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasTotalWifiLaunches; 
@property (assign,nonatomic) int totalWifiLaunches;                                //@synthesize totalWifiLaunches=_totalWifiLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasTimeOfDayInterval; 
@property (assign,nonatomic) int timeOfDayInterval;                                //@synthesize timeOfDayInterval=_timeOfDayInterval - In the implementation block
@property (assign,nonatomic) BOOL hasConsumerSubType; 
@property (assign,nonatomic) int consumerSubType;                                  //@synthesize consumerSubType=_consumerSubType - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentLOIType; 
@property (assign,nonatomic) int currentLOIType;                                   //@synthesize currentLOIType=_currentLOIType - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunches; 
@property (assign,nonatomic) int totalLaunches;                                    //@synthesize totalLaunches=_totalLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasOutcome; 
@property (assign,nonatomic) int outcome;                                          //@synthesize outcome=_outcome - In the implementation block
@property (assign,nonatomic) BOOL hasEngagedApp; 
@property (assign,nonatomic) int engagedApp;                                       //@synthesize engagedApp=_engagedApp - In the implementation block
@property (assign,nonatomic) BOOL hasTotalTrendingLaunches; 
@property (assign,nonatomic) int totalTrendingLaunches;                            //@synthesize totalTrendingLaunches=_totalTrendingLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasTotalTimeOfDayLaunches; 
@property (assign,nonatomic) int totalTimeOfDayLaunches;                           //@synthesize totalTimeOfDayLaunches=_totalTimeOfDayLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasTotalSSIDLaunches; 
@property (assign,nonatomic) int totalSSIDLaunches;                                //@synthesize totalSSIDLaunches=_totalSSIDLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasLocationDistanceFromHome; 
@property (assign,nonatomic) int locationDistanceFromHome;                         //@synthesize locationDistanceFromHome=_locationDistanceFromHome - In the implementation block
@property (assign,nonatomic) BOOL hasLocationDistanceFromWork; 
@property (assign,nonatomic) int locationDistanceFromWork;                         //@synthesize locationDistanceFromWork=_locationDistanceFromWork - In the implementation block
@property (assign,nonatomic) BOOL hasLocationDistanceFromSchool; 
@property (assign,nonatomic) int locationDistanceFromSchool;                       //@synthesize locationDistanceFromSchool=_locationDistanceFromSchool - In the implementation block
@property (assign,nonatomic) BOOL hasLocationDistanceFromGym; 
@property (assign,nonatomic) int locationDistanceFromGym;                          //@synthesize locationDistanceFromGym=_locationDistanceFromGym - In the implementation block
@property (assign,nonatomic) BOOL hasIsInternalBuild; 
@property (assign,nonatomic) BOOL isInternalBuild;                                 //@synthesize isInternalBuild=_isInternalBuild - In the implementation block
@property (assign,nonatomic) BOOL hasPredictionCacheAge; 
@property (assign,nonatomic) int predictionCacheAge;                               //@synthesize predictionCacheAge=_predictionCacheAge - In the implementation block
@property (assign,nonatomic) BOOL hasSessionLogVersion; 
@property (assign,nonatomic) int sessionLogVersion;                                //@synthesize sessionLogVersion=_sessionLogVersion - In the implementation block
@property (assign,nonatomic) BOOL hasTotalSpotlightTimeOfDayLaunches; 
@property (assign,nonatomic) int totalSpotlightTimeOfDayLaunches;                  //@synthesize totalSpotlightTimeOfDayLaunches=_totalSpotlightTimeOfDayLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasDayOfWeek; 
@property (assign,nonatomic) int dayOfWeek;                                        //@synthesize dayOfWeek=_dayOfWeek - In the implementation block
@property (assign,nonatomic) BOOL hasTotalDayOfWeekLaunches; 
@property (assign,nonatomic) int totalDayOfWeekLaunches;                           //@synthesize totalDayOfWeekLaunches=_totalDayOfWeekLaunches - In the implementation block
@property (nonatomic,retain) NSMutableArray * appSequences;                        //@synthesize appSequences=_appSequences - In the implementation block
@property (nonatomic,readonly) BOOL hasAPRFeedbackSource; 
@property (nonatomic,retain) NSString * aPRFeedbackSource;                         //@synthesize aPRFeedbackSource=_aPRFeedbackSource - In the implementation block
@property (nonatomic,readonly) BOOL hasAPREngagementType; 
@property (nonatomic,retain) NSString * aPREngagementType;                         //@synthesize aPREngagementType=_aPREngagementType - In the implementation block
@property (nonatomic,readonly) BOOL hasAPRSiriExperience; 
@property (nonatomic,retain) NSString * aPRSiriExperience;                         //@synthesize aPRSiriExperience=_aPRSiriExperience - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentType; 
@property (nonatomic,retain) NSString * intentType;                                //@synthesize intentType=_intentType - In the implementation block
@property (nonatomic,readonly) BOOL hasConsumerType; 
@property (nonatomic,retain) NSString * consumerType;                              //@synthesize consumerType=_consumerType - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSString * sessionId;                                 //@synthesize sessionId=_sessionId - In the implementation block
+(Class)appSequenceType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)dayOfWeek;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(int)outcome;
-(void)setOutcome:(int)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)intentType;
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
-(void)setIntentType:(NSString *)arg1 ;
-(BOOL)hasIntentType;
-(BOOL)isInternalBuild;
-(BOOL)inAirplaneMode;
-(void)setIsInternalBuild:(BOOL)arg1 ;
-(NSString *)consumerType;
-(void)setConsumerType:(NSString *)arg1 ;
-(int)consumerSubType;
-(void)setHasOutcome:(BOOL)arg1 ;
-(BOOL)hasOutcome;
-(id)outcomeAsString:(int)arg1 ;
-(int)StringAsOutcome:(id)arg1 ;
-(void)setEngagedApp:(int)arg1 ;
-(void)setHasEngagedApp:(BOOL)arg1 ;
-(BOOL)hasEngagedApp;
-(int)engagedApp;
-(void)setCoreMotionLaunches:(int)arg1 ;
-(void)setHasCoreMotionLaunches:(BOOL)arg1 ;
-(BOOL)hasCoreMotionLaunches;
-(void)setTotalAirplaneModeLaunches:(int)arg1 ;
-(void)setHasTotalAirplaneModeLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalAirplaneModeLaunches;
-(void)setInAirplaneMode:(BOOL)arg1 ;
-(void)setHasInAirplaneMode:(BOOL)arg1 ;
-(BOOL)hasInAirplaneMode;
-(void)setCoreMotionCurrentMotionLaunches:(int)arg1 ;
-(void)setHasCoreMotionCurrentMotionLaunches:(BOOL)arg1 ;
-(BOOL)hasCoreMotionCurrentMotionLaunches;
-(void)setTotalSpotlightLaunches:(int)arg1 ;
-(void)setHasTotalSpotlightLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalSpotlightLaunches;
-(void)setTotalLaunchSequences:(int)arg1 ;
-(void)setHasTotalLaunchSequences:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchSequences;
-(void)setTotalCurrentDayOfWeekLaunches:(int)arg1 ;
-(void)setHasTotalCurrentDayOfWeekLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalCurrentDayOfWeekLaunches;
-(void)setTotalWifiLaunches:(int)arg1 ;
-(void)setHasTotalWifiLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalWifiLaunches;
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
-(void)setTotalLaunches:(int)arg1 ;
-(void)setHasTotalLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalLaunches;
-(void)setTotalTrendingLaunches:(int)arg1 ;
-(void)setHasTotalTrendingLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalTrendingLaunches;
-(void)setTotalTimeOfDayLaunches:(int)arg1 ;
-(void)setHasTotalTimeOfDayLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalTimeOfDayLaunches;
-(void)setTotalSSIDLaunches:(int)arg1 ;
-(void)setHasTotalSSIDLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalSSIDLaunches;
-(void)setLocationDistanceFromHome:(int)arg1 ;
-(void)setHasLocationDistanceFromHome:(BOOL)arg1 ;
-(BOOL)hasLocationDistanceFromHome;
-(void)setLocationDistanceFromWork:(int)arg1 ;
-(void)setHasLocationDistanceFromWork:(BOOL)arg1 ;
-(BOOL)hasLocationDistanceFromWork;
-(void)setLocationDistanceFromSchool:(int)arg1 ;
-(void)setHasLocationDistanceFromSchool:(BOOL)arg1 ;
-(BOOL)hasLocationDistanceFromSchool;
-(void)setLocationDistanceFromGym:(int)arg1 ;
-(void)setHasLocationDistanceFromGym:(BOOL)arg1 ;
-(BOOL)hasLocationDistanceFromGym;
-(void)setHasIsInternalBuild:(BOOL)arg1 ;
-(BOOL)hasIsInternalBuild;
-(void)setPredictionCacheAge:(int)arg1 ;
-(void)setHasPredictionCacheAge:(BOOL)arg1 ;
-(BOOL)hasPredictionCacheAge;
-(void)setSessionLogVersion:(int)arg1 ;
-(void)setHasSessionLogVersion:(BOOL)arg1 ;
-(BOOL)hasSessionLogVersion;
-(void)setTotalSpotlightTimeOfDayLaunches:(int)arg1 ;
-(void)setHasTotalSpotlightTimeOfDayLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalSpotlightTimeOfDayLaunches;
-(void)setTotalDayOfWeekLaunches:(int)arg1 ;
-(void)setHasTotalDayOfWeekLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalDayOfWeekLaunches;
-(void)clearAppSequences;
-(void)addAppSequence:(id)arg1 ;
-(unsigned long long)appSequencesCount;
-(id)appSequenceAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAPRFeedbackSource;
-(BOOL)hasAPREngagementType;
-(BOOL)hasAPRSiriExperience;
-(BOOL)hasConsumerType;
-(int)coreMotionLaunches;
-(int)totalAirplaneModeLaunches;
-(int)coreMotionCurrentMotionLaunches;
-(int)totalSpotlightLaunches;
-(int)totalLaunchSequences;
-(int)totalCurrentDayOfWeekLaunches;
-(int)totalWifiLaunches;
-(int)timeOfDayInterval;
-(int)totalLaunches;
-(int)totalTrendingLaunches;
-(int)totalTimeOfDayLaunches;
-(int)totalSSIDLaunches;
-(int)locationDistanceFromHome;
-(int)locationDistanceFromWork;
-(int)locationDistanceFromSchool;
-(int)locationDistanceFromGym;
-(int)predictionCacheAge;
-(int)sessionLogVersion;
-(int)totalSpotlightTimeOfDayLaunches;
-(int)totalDayOfWeekLaunches;
-(NSMutableArray *)appSequences;
-(void)setAppSequences:(NSMutableArray *)arg1 ;
-(NSString *)aPRFeedbackSource;
-(void)setAPRFeedbackSource:(NSString *)arg1 ;
-(NSString *)aPREngagementType;
-(void)setAPREngagementType:(NSString *)arg1 ;
-(NSString *)aPRSiriExperience;
-(void)setAPRSiriExperience:(NSString *)arg1 ;
@end
