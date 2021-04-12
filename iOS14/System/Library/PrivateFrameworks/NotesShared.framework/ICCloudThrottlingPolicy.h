/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class NSArray, NSDate, NSTimer, ICCloudThrottlingLevel;

@interface ICCloudThrottlingPolicy : NSObject {

	NSArray* _throttlingLevels;
	double _resetInterval;
	unsigned long long _currentBatchCount;
	unsigned long long _currentLevelIndex;
	NSDate* _policyStartDate;
	NSTimer* _policyResetTimer;

}

@property (assign,nonatomic) unsigned long long currentBatchCount;                 //@synthesize currentBatchCount=_currentBatchCount - In the implementation block
@property (nonatomic,retain) NSArray * throttlingLevels;                           //@synthesize throttlingLevels=_throttlingLevels - In the implementation block
@property (assign,nonatomic) unsigned long long currentLevelIndex;                 //@synthesize currentLevelIndex=_currentLevelIndex - In the implementation block
@property (nonatomic,readonly) ICCloudThrottlingLevel * currentLevel; 
@property (assign) double resetInterval;                                           //@synthesize resetInterval=_resetInterval - In the implementation block
@property (retain) NSDate * policyStartDate;                                       //@synthesize policyStartDate=_policyStartDate - In the implementation block
@property (retain) NSTimer * policyResetTimer;                                     //@synthesize policyResetTimer=_policyResetTimer - In the implementation block
@property (nonatomic,readonly) double batchInterval; 
+(void)resetSavedPolicyState;
-(void)setCurrentBatchCount:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)currentBatchCount;
-(void)resetPolicy;
-(void)setThrottlingLevels:(NSArray *)arg1 ;
-(void)incrementBatchCount;
-(void)savePolicyState;
-(NSArray *)throttlingLevels;
-(id)initWithThrottlingLevels:(id)arg1 resetInterval:(double)arg2 ;
-(void)setResetInterval:(double)arg1 ;
-(double)batchInterval;
-(unsigned long long)currentLevelIndex;
-(void)setPolicyResetTimer:(NSTimer *)arg1 ;
-(NSTimer *)policyResetTimer;
-(double)resetInterval;
-(void)setCurrentLevelIndex:(unsigned long long)arg1 ;
-(void)loadSavedPolicyState;
-(NSDate *)policyStartDate;
-(void)setPolicyStartDate:(NSDate *)arg1 ;
-(void)changeLevelIfNecessary;
-(void)startPolicyResetTimer;
-(ICCloudThrottlingLevel *)currentLevel;
-(void)dealloc;
@end

