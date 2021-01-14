/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <PowerUI/PowerUI-Structs.h>
#import <PowerUI/PowerUIPredictor.h>

@protocol OS_os_log, _DKKnowledgeQuerying, _CDLocalContext;
@class MLModel, NSDate, NSString, NSObject, PowerUITrialManager;

@interface PowerUIMLTwoStageModelPredictor : NSObject <PowerUIPredictor> {

	os_unfair_lock_s _loadModelLock;
	MLModel* _engageModel;
	MLModel* _durationModel;
	NSDate* _pluginDate;
	double _pluginBatteryLevel;
	double _lastEngagementResult;
	double _lastDurationResult;
	double _adjustedDuration;
	NSString* _defaultsDomain;
	NSObject*<OS_os_log> _log;
	NSObject*<OS_os_log> _statusLog;
	double _threshold;
	double _minInputChargeDuration;
	id<_DKKnowledgeQuerying> _store;
	id<_CDLocalContext> _context;
	PowerUITrialManager* _trialManager;
	NSDate* _deadline;

}

@property (nonatomic,retain) NSString * defaultsDomain;                       //@synthesize defaultsDomain=_defaultsDomain - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                        //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> statusLog;                  //@synthesize statusLog=_statusLog - In the implementation block
@property (assign,nonatomic) double threshold;                                //@synthesize threshold=_threshold - In the implementation block
@property (assign,nonatomic) double minInputChargeDuration;                   //@synthesize minInputChargeDuration=_minInputChargeDuration - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying> store;                  //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) id<_CDLocalContext> context;                     //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) PowerUITrialManager * trialManager;              //@synthesize trialManager=_trialManager - In the implementation block
@property (nonatomic,retain) NSDate * deadline;                               //@synthesize deadline=_deadline - In the implementation block
@property (assign,nonatomic) double lastEngagementResult;                     //@synthesize lastEngagementResult=_lastEngagementResult - In the implementation block
@property (assign,nonatomic) double lastDurationResult;                       //@synthesize lastDurationResult=_lastDurationResult - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s loadModelLock;                  //@synthesize loadModelLock=_loadModelLock - In the implementation block
@property (nonatomic,retain,readonly) MLModel * engageModel;                  //@synthesize engageModel=_engageModel - In the implementation block
@property (nonatomic,retain,readonly) MLModel * durationModel;                //@synthesize durationModel=_durationModel - In the implementation block
@property (nonatomic,retain) NSDate * pluginDate;                             //@synthesize pluginDate=_pluginDate - In the implementation block
@property (assign,nonatomic) double pluginBatteryLevel;                       //@synthesize pluginBatteryLevel=_pluginBatteryLevel - In the implementation block
@property (assign,nonatomic) double adjustedDuration;                         //@synthesize adjustedDuration=_adjustedDuration - In the implementation block
-(void)resetSavedDeadline;
-(double)threshold;
-(NSDate *)deadline;
-(void)setMinInputChargeDuration:(double)arg1 ;
-(void)setLastEngagementResult:(double)arg1 ;
-(unsigned long long)modelVersion;
-(os_unfair_lock_s)loadModelLock;
-(double)getHourBinID:(id)arg1 forHourBin:(unsigned long long)arg2 ;
-(void)setStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(unsigned long long)engagementModelVersion;
-(NSObject*<OS_os_log>)log;
-(id<_DKKnowledgeQuerying>)store;
-(void)setLastDurationResult:(double)arg1 ;
-(unsigned long long)durationModelVersion;
-(id)predictFullChargeDateWithBatteryLevel:(unsigned long long)arg1 ;
-(double)pluginBatteryLevel;
-(id)getInputFeatures:(double)arg1 events:(id)arg2 pluginBatteryLevel:(unsigned long long)arg3 timeFromPlugin:(double)arg4 pluginDate:(id)arg5 pluginHour:(double)arg6 withLog:(id)arg7 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id)engagementModelBoltID;
-(void)setAdjustedDuration:(double)arg1 ;
-(id<_CDLocalContext>)context;
-(NSString *)defaultsDomain;
-(id)getMacRoutineModelInputFeatures:(double)arg1 events:(id)arg2 pluginBatteryLevel:(unsigned long long)arg3 timeFromPlugin:(double)arg4 pluginDate:(id)arg5 pluginHour:(double)arg6 withLog:(id)arg7 ;
-(double)adjustedChargingDecision:(unsigned long long)arg1 withPluginDate:(id)arg2 withPluginBatteryLevel:(double)arg3 forDate:(id)arg4 forStatus:(BOOL)arg5 ;
-(NSObject*<OS_os_log>)statusLog;
-(void)setTrialManager:(PowerUITrialManager *)arg1 ;
-(void)setDefaultsDomain:(NSString *)arg1 ;
-(double)loadThreshold;
-(void)setPluginDate:(NSDate *)arg1 ;
-(double)loadAdjustedHours;
-(void)setStatusLog:(NSObject*<OS_os_log>)arg1 ;
-(id)timeStringFromDate:(id)arg1 ;
-(double)chargingDecision:(unsigned long long)arg1 withPluginDate:(id)arg2 withPluginBatteryLevel:(double)arg3 forDate:(id)arg4 withLog:(id)arg5 ;
-(double)minInputChargeDuration;
-(PowerUITrialManager *)trialManager;
-(double)adjustedDuration;
-(MLModel *)durationModel;
-(MLModel *)engageModel;
-(id)arrayWithShape:(id)arg1 values:(id)arg2 type:(long long)arg3 ;
-(void)setLoadModelLock:(os_unfair_lock_s)arg1 ;
-(void)loadTrial;
-(double)lastEngagementResult;
-(NSDate *)pluginDate;
-(void)deleteCompiledModels;
-(void)setPluginBatteryLevel:(double)arg1 ;
-(double)lastDurationResult;
-(void)setDeadline:(NSDate *)arg1 ;
-(id)initWithDefaultsDomain:(id)arg1 withContextStore:(id)arg2 withKnowledgeStore:(id)arg3 withTrialManager:(id)arg4 ;
-(id)durationModelBoltID;
-(void)setThreshold:(double)arg1 ;
-(id)getPluginEventsBefore:(id)arg1 withMinimumDuration:(double)arg2 ;
-(double)loadMinInputChargeDuration;
-(void)setContext:(id<_CDLocalContext>)arg1 ;
@end

