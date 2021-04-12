/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
@class NSMutableDictionary;

@interface PHAWorkerHealthMonitor : NSObject {

	os_unfair_lock_s _lock;
	double _maxScoreRecentnessInterval;
	NSMutableDictionary* _scoresByWorkerType;
	NSMutableDictionary* _cachedAverageScoresByWorkerType;
	NSMutableDictionary* _lastTrimDateByWorkerType;

}

@property (nonatomic,readonly) NSMutableDictionary * scoresByWorkerType;                           //@synthesize scoresByWorkerType=_scoresByWorkerType - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cachedAverageScoresByWorkerType;              //@synthesize cachedAverageScoresByWorkerType=_cachedAverageScoresByWorkerType - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * lastTrimDateByWorkerType;                     //@synthesize lastTrimDateByWorkerType=_lastTrimDateByWorkerType - In the implementation block
@property (assign,nonatomic) double maxScoreRecentnessInterval;                                    //@synthesize maxScoreRecentnessInterval=_maxScoreRecentnessInterval - In the implementation block
-(id)init;
-(void)reset;
-(id)statusAsDictionary;
-(id)_scoresForWorkerType:(short)arg1 ;
-(BOOL)_needsTrimScoresForWorkerType:(short)arg1 ;
-(void)_trimScoresForWorkerType:(short)arg1 ;
-(float)_calculateAverageScoreForWorkerType:(short)arg1 ;
-(float)_averageScoreForWorkerType:(short)arg1 ;
-(BOOL)_isHealthyForWorkerType:(short)arg1 ;
-(float)averageScoreForWorkerType:(short)arg1 ;
-(void)recordResultsFromWorkerJob:(id)arg1 ;
-(BOOL)isHealthyForWorkerType:(short)arg1 ;
-(double)maxScoreRecentnessInterval;
-(void)setMaxScoreRecentnessInterval:(double)arg1 ;
-(NSMutableDictionary *)scoresByWorkerType;
-(NSMutableDictionary *)cachedAverageScoresByWorkerType;
-(NSMutableDictionary *)lastTrimDateByWorkerType;
@end

