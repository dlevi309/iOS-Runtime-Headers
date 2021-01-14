/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
*/

#import <PersistentConnection/PersistentConnection-Structs.h>
#import <libobjc.A.dylib/PCGrowthAlgorithm.h>

@protocol OS_os_log;
@class NSDictionary, NSDate, NSString, NSObject;

@interface PCMultiStageGrowthAlgorithm : NSObject <PCGrowthAlgorithm> {

	double _currentKeepAliveInterval;
	double _minimumKeepAliveInterval;
	double _maximumKeepAliveInterval;
	double _previousMaximumKeepAliveInterval;
	double _lastKeepAliveInterval;
	double _lastSuccessfulKeepAliveInterval;
	int _growthStage;
	double _highWatermark;
	double _initialGrowthStageHighWatermark;
	double _initialGrowthStageLastAttempt;
	NSDate* _leaveSteadyStateDate;
	NSDate* _leaveMinimumIntervalFallbackStateDate;
	NSString* _algorithmName;
	unsigned long long _countOfGrowthActions;
	NSObject*<OS_os_log> _logObject;
	BOOL _isServerOriginatedKeepAlive;
	BOOL _minimumIntervalFallbackEnabled;
	int _lastKeepAliveAlgorithmMode;
	int _currentKeepAliveAlgorithmMode;
	double _serverStatsMinKeepAliveInterval;
	double _serverStatsMaxKeepAliveInterval;
	double _serverStatsExpectedKeepAliveInterval;
	double _minimumIntervalFallbackStateTimeout;
	BOOL _usingServerStatsAggressively;
	int _previousAction;

}

@property (assign,nonatomic) int previousAction;                                       //@synthesize previousAction=_previousAction - In the implementation block
@property (nonatomic,readonly) double currentKeepAliveInterval;                        //@synthesize currentKeepAliveInterval=_currentKeepAliveInterval - In the implementation block
@property (assign,nonatomic) BOOL isServerOriginatedKeepAlive;                         //@synthesize isServerOriginatedKeepAlive=_isServerOriginatedKeepAlive - In the implementation block
@property (assign,nonatomic) double minimumKeepAliveInterval;                          //@synthesize minimumKeepAliveInterval=_minimumKeepAliveInterval - In the implementation block
@property (assign,nonatomic) double maximumKeepAliveInterval;                          //@synthesize maximumKeepAliveInterval=_maximumKeepAliveInterval - In the implementation block
@property (assign,nonatomic) double serverStatsExpectedKeepAliveInterval;              //@synthesize serverStatsExpectedKeepAliveInterval=_serverStatsExpectedKeepAliveInterval - In the implementation block
@property (assign,nonatomic) double serverStatsMaxKeepAliveInterval;                   //@synthesize serverStatsMaxKeepAliveInterval=_serverStatsMaxKeepAliveInterval - In the implementation block
@property (assign,nonatomic) double serverStatsMinKeepAliveInterval;                   //@synthesize serverStatsMinKeepAliveInterval=_serverStatsMinKeepAliveInterval - In the implementation block
@property (assign,nonatomic) double lastSuccessfulKeepAliveInterval;                   //@synthesize lastSuccessfulKeepAliveInterval=_lastSuccessfulKeepAliveInterval - In the implementation block
@property (assign,nonatomic) BOOL minimumIntervalFallbackEnabled;                      //@synthesize minimumIntervalFallbackEnabled=_minimumIntervalFallbackEnabled - In the implementation block
@property (assign,nonatomic) BOOL usingServerStatsAggressively;                        //@synthesize usingServerStatsAggressively=_usingServerStatsAggressively - In the implementation block
@property (assign,nonatomic) double minimumIntervalFallbackStateTimeout;               //@synthesize minimumIntervalFallbackStateTimeout=_minimumIntervalFallbackStateTimeout - In the implementation block
@property (nonatomic,readonly) unsigned long long countOfGrowthActions;                //@synthesize countOfGrowthActions=_countOfGrowthActions - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * cacheInfo; 
@property (nonatomic,readonly) int growthStage;                                        //@synthesize growthStage=_growthStage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_loadDefaults;
+(void)_loadDefaultValue:(double*)arg1 forKey:(CFStringRef)arg2 ;
-(double)lastSuccessfulKeepAliveInterval;
-(BOOL)minimumIntervalFallbackEnabled;
-(void)setLastSuccessfulKeepAliveInterval:(double)arg1 ;
-(void)setMinimumIntervalFallbackEnabled:(BOOL)arg1 ;
-(int)growthStage;
-(BOOL)isServerOriginatedKeepAlive;
-(void)_processBackoffAction:(int)arg1 ;
-(double)serverStatsMaxKeepAliveInterval;
-(void)setServerStatsExpectedKeepAliveInterval:(double)arg1 ;
-(void)_resetAlgorithmToInterval:(double)arg1 stage:(int)arg2 ;
-(void)setMaximumKeepAliveInterval:(double)arg1 ;
-(BOOL)useIntervalIfImprovement:(double)arg1 ;
-(void)setUsingServerStatsAggressively:(BOOL)arg1 ;
-(void)setIsServerOriginatedKeepAlive:(BOOL)arg1 ;
-(void)processNextAction:(int)arg1 ;
-(double)_steadyStateTimeout;
-(void)_processRefinedGrowthAction:(int)arg1 ;
-(double)serverStatsExpectedKeepAliveInterval;
-(NSString *)description;
-(int)previousAction;
-(NSDictionary *)cacheInfo;
-(void)_processRefinedShrinkAction:(int)arg1 ;
-(void)_processMinimumIntervalFallbackStateAction:(int)arg1 ;
-(void)setServerStatsMinKeepAliveInterval:(double)arg1 ;
-(id)_stringForMode:(int)arg1 ;
-(double)serverStatsMinKeepAliveInterval;
-(unsigned long long)countOfGrowthActions;
-(id)initWithCacheInfo:(id)arg1 loggingIdentifier:(id)arg2 algorithmName:(id)arg3 ;
-(double)currentKeepAliveInterval;
-(id)_stringForAction:(int)arg1 ;
-(void)_setCurrentKeepAliveInterval:(double)arg1 ;
-(void)_adjustGrowthAlgorithmMode;
-(void)_processSteadyStateAction:(int)arg1 ;
-(double)maximumKeepAliveInterval;
-(void)setPreviousAction:(int)arg1 ;
-(id)_stringForStage:(int)arg1 ;
-(double)minimumIntervalFallbackStateTimeout;
-(void)_resetAlgorithmToInterval:(double)arg1 ;
-(void)setMinimumKeepAliveInterval:(double)arg1 ;
-(void)_processInitialShrinkAction:(int)arg1 ;
-(BOOL)usingServerStatsAggressively;
-(void)_processInitialGrowthAction:(int)arg1 ;
-(void)setMinimumIntervalFallbackStateTimeout:(double)arg1 ;
-(void)_fallbackToLastSuccessfulKeepAliveInterval;
-(void)setServerStatsMaxKeepAliveInterval:(double)arg1 ;
-(double)minimumKeepAliveInterval;
@end

