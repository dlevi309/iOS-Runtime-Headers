/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
*/

@class NSDictionary;


@protocol PCGrowthAlgorithm <NSObject>
@property (nonatomic,readonly) double currentKeepAliveInterval; 
@property (assign,nonatomic) BOOL isServerOriginatedKeepAlive; 
@property (assign,nonatomic) double minimumKeepAliveInterval; 
@property (assign,nonatomic) double maximumKeepAliveInterval; 
@property (assign,nonatomic) double serverStatsExpectedKeepAliveInterval; 
@property (assign,nonatomic) double serverStatsMaxKeepAliveInterval; 
@property (assign,nonatomic) double serverStatsMinKeepAliveInterval; 
@property (assign,nonatomic) double lastSuccessfulKeepAliveInterval; 
@property (assign,nonatomic) BOOL minimumIntervalFallbackEnabled; 
@property (assign,nonatomic) BOOL usingServerStatsAggressively; 
@property (assign,nonatomic) double minimumIntervalFallbackStateTimeout; 
@property (nonatomic,readonly) unsigned long long countOfGrowthActions; 
@property (nonatomic,copy,readonly) NSDictionary * cacheInfo; 
@property (nonatomic,readonly) int growthStage; 
@property (nonatomic,readonly) int previousAction; 
@required
-(double)lastSuccessfulKeepAliveInterval;
-(BOOL)minimumIntervalFallbackEnabled;
-(void)setLastSuccessfulKeepAliveInterval:(double)arg1;
-(void)setMinimumIntervalFallbackEnabled:(BOOL)arg1;
-(int)growthStage;
-(BOOL)isServerOriginatedKeepAlive;
-(double)serverStatsMaxKeepAliveInterval;
-(void)setServerStatsExpectedKeepAliveInterval:(double)arg1;
-(void)setMaximumKeepAliveInterval:(double)arg1;
-(BOOL)useIntervalIfImprovement:(double)arg1;
-(void)setUsingServerStatsAggressively:(BOOL)arg1;
-(void)setIsServerOriginatedKeepAlive:(BOOL)arg1;
-(void)processNextAction:(int)arg1;
-(double)serverStatsExpectedKeepAliveInterval;
-(int)previousAction;
-(NSDictionary *)cacheInfo;
-(void)setServerStatsMinKeepAliveInterval:(double)arg1;
-(double)serverStatsMinKeepAliveInterval;
-(unsigned long long)countOfGrowthActions;
-(id)initWithCacheInfo:(id)arg1 loggingIdentifier:(id)arg2 algorithmName:(id)arg3;
-(double)currentKeepAliveInterval;
-(double)maximumKeepAliveInterval;
-(double)minimumIntervalFallbackStateTimeout;
-(void)setMinimumKeepAliveInterval:(double)arg1;
-(BOOL)usingServerStatsAggressively;
-(void)setMinimumIntervalFallbackStateTimeout:(double)arg1;
-(void)setServerStatsMaxKeepAliveInterval:(double)arg1;
-(double)minimumKeepAliveInterval;

@end

