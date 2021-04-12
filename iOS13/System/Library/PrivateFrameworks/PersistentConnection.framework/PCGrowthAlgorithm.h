/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@required
-(double)minimumKeepAliveInterval;
-(void)setMinimumKeepAliveInterval:(double)arg1;
-(double)currentKeepAliveInterval;
-(double)maximumKeepAliveInterval;
-(void)setMaximumKeepAliveInterval:(double)arg1;
-(double)serverStatsExpectedKeepAliveInterval;
-(void)processNextAction:(int)arg1;
-(id)initWithCacheInfo:(id)arg1 loggingIdentifier:(id)arg2 algorithmName:(id)arg3;
-(BOOL)useIntervalIfImprovement:(double)arg1;
-(BOOL)isServerOriginatedKeepAlive;
-(void)setIsServerOriginatedKeepAlive:(BOOL)arg1;
-(void)setServerStatsExpectedKeepAliveInterval:(double)arg1;
-(double)serverStatsMaxKeepAliveInterval;
-(void)setServerStatsMaxKeepAliveInterval:(double)arg1;
-(double)serverStatsMinKeepAliveInterval;
-(void)setServerStatsMinKeepAliveInterval:(double)arg1;
-(double)lastSuccessfulKeepAliveInterval;
-(void)setLastSuccessfulKeepAliveInterval:(double)arg1;
-(BOOL)minimumIntervalFallbackEnabled;
-(void)setMinimumIntervalFallbackEnabled:(BOOL)arg1;
-(BOOL)usingServerStatsAggressively;
-(void)setUsingServerStatsAggressively:(BOOL)arg1;
-(double)minimumIntervalFallbackStateTimeout;
-(void)setMinimumIntervalFallbackStateTimeout:(double)arg1;
-(unsigned long long)countOfGrowthActions;
-(NSDictionary *)cacheInfo;
-(int)growthStage;

@end

