/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
*/

#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HKMCSettingsManagerObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, HKObserverSet, NSObject, _HKDelayedOperation, HKMCAnalysis, HKMCSettingsManager, HAMenstrualAlgorithmsAnalysis, NSArray, NSString;

@interface HDMCAnalysisManager : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HKMCSettingsManagerObserver> {

	HDProfile* _profile;
	HKObserverSet* _observers;
	HKObserverSet* _userInitiatedObservers;
	NSObject*<OS_dispatch_queue> _queue;
	_HKDelayedOperation* _analyzeOperation;
	HKMCAnalysis* _currentAnalysis;
	HKMCSettingsManager* _settingsManager;
	BOOL _needsMaintenenceAnalysis;
	BOOL _maintenanceOperationQueued;
	HAMenstrualAlgorithmsAnalysis* _test_algorithmsAnalysis;
	NSArray* _test_algorithmsCycles;

}

@property (nonatomic,copy,readonly) HKMCAnalysis * currentAnalysis; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)_test_setAlgorithmsCycles:(id)arg1 ;
-(void)_queue_analyzeOperationDidExecute;
-(void)_calendarDayDidChange:(id)arg1 ;
-(HKMCAnalysis *)currentAnalysis;
-(id)_analysisWithAlgorithmsAnalysis:(id)arg1 algorithmsCycles:(id)arg2 recentSymptoms:(unsigned long long)arg3 recentBasalBodyTemperature:(id)arg4 lastLoggedDayIndex:(id)arg5 lastMenstrualFlowDayIndex:(id)arg6 ;
-(void)_queue_analyzeIfNeeded;
-(id)initWithProfile:(id)arg1 settingsManager:(id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(id)_queue_analyzeNowWithError:(id*)arg1 ;
-(void)settingsManagerDidUpdateAlgorithmVersionMismatchSettings:(id)arg1 ;
-(id)analyzeWithError:(id*)arg1 ;
-(void)_test_setAlgorithmsAnalysis:(id)arg1 ;
-(void)settingsManagerDidUpdateAnalysisSettings:(id)arg1 ;
-(void)_queue_enqueueMaintenanceOperationIfNeeded;
-(void)addObserver:(id)arg1 queue:(id)arg2 userInitiated:(BOOL)arg3 ;
-(void)_startObserving;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)_userCharacteristicsDidChange:(id)arg1 ;
-(void)dealloc;
-(void)_runMaintenanceOperation;
@end

