/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
+(void)_loadDefaults;
+(void)_loadDefaultValue:(double*)arg1 forKey:(CFStringRef)arg2 ;
-(NSString *)description;
-(void)_resetAlgorithmToInterval:(double)arg1 stage:(int)arg2 ;
-(void)_resetAlgorithmToInterval:(double)arg1 ;
-(double)minimumKeepAliveInterval;
-(void)setMinimumKeepAliveInterval:(double)arg1 ;
-(double)currentKeepAliveInterval;
-(void)_setCurrentKeepAliveInterval:(double)arg1 ;
-(double)maximumKeepAliveInterval;
-(void)setMaximumKeepAliveInterval:(double)arg1 ;
-(id)_stringForMode:(int)arg1 ;
-(id)_stringForStage:(int)arg1 ;
-(id)_stringForAction:(int)arg1 ;
-(void)_adjustGrowthAlgorithmMode;
-(void)_processInitialGrowthAction:(int)arg1 ;
-(void)_processRefinedGrowthAction:(int)arg1 ;
-(void)_processSteadyStateAction:(int)arg1 ;
-(void)_processBackoffAction:(int)arg1 ;
-(void)_processMinimumIntervalFallbackStateAction:(int)arg1 ;
-(void)_processInitialShrinkAction:(int)arg1 ;
-(void)_processRefinedShrinkAction:(int)arg1 ;
-(double)serverStatsExpectedKeepAliveInterval;
-(void)_fallbackToLastSuccessfulKeepAliveInterval;
-(void)processNextAction:(int)arg1 ;
-(double)_steadyStateTimeout;
-(id)initWithCacheInfo:(id)arg1 loggingIdentifier:(id)arg2 algorithmName:(id)arg3 ;
-(BOOL)useIntervalIfImprovement:(double)arg1 ;
-(BOOL)isServerOriginatedKeepAlive;
-(void)setIsServerOriginatedKeepAlive:(BOOL)arg1 ;
-(void)setServerStatsExpectedKeepAliveInterval:(double)arg1 ;
-(double)serverStatsMaxKeepAliveInterval;
-(void)setServerStatsMaxKeepAliveInterval:(double)arg1 ;
-(double)serverStatsMinKeepAliveInterval;
-(void)setServerStatsMinKeepAliveInterval:(double)arg1 ;
-(double)lastSuccessfulKeepAliveInterval;
-(void)setLastSuccessfulKeepAliveInterval:(double)arg1 ;
-(BOOL)minimumIntervalFallbackEnabled;
-(void)setMinimumIntervalFallbackEnabled:(BOOL)arg1 ;
-(BOOL)usingServerStatsAggressively;
-(void)setUsingServerStatsAggressively:(BOOL)arg1 ;
-(double)minimumIntervalFallbackStateTimeout;
-(void)setMinimumIntervalFallbackStateTimeout:(double)arg1 ;
-(unsigned long long)countOfGrowthActions;
-(NSDictionary *)cacheInfo;
-(int)growthStage;
@end

