/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>
#import <libobjc.A.dylib/REDailyRoutinePredictorDelegate.h>
#import <libobjc.A.dylib/REDailyRoutineRelevanceProviderManagerProperties.h>

@class NSString;

@interface REDailyRoutineRelevanceProviderManager : RERelevanceProviderManager <REDailyRoutinePredictorDelegate, REDailyRoutineRelevanceProviderManagerProperties> {

	BOOL _inMorningRoutine;
	BOOL _inEveningRoutine;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isInMorningRoutine; 
@property (nonatomic,readonly) BOOL isInEveningRoutine; 
+(id)_features;
+(Class)_relevanceProviderClass;
+(BOOL)_wantsSeperateRelevanceQueue;
-(void)pause;
-(void)resume;
-(void)_prepareForUpdate;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3 ;
-(void)dailyRoutinePredictorDidUpdatedPredictedRoutines:(id)arg1 ;
-(void)dailyRoutinePredictorDidBeginMorningRoutine:(id)arg1 ;
-(void)dailyRoutinePredictorDidEndMorningRoutine:(id)arg1 ;
-(void)dailyRoutinePredictorDidBeginEveningRoutine:(id)arg1 ;
-(void)dailyRoutinePredictorDidEndEveningRoutine:(id)arg1 ;
-(BOOL)_isInRoutine:(unsigned long long)arg1 forDate:(id)arg2 ;
-(void)_updateRoutines;
-(BOOL)isInMorningRoutine;
-(BOOL)isInEveningRoutine;
@end

