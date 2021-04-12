/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <PowerUI/PowerUI-Structs.h>
#import <PowerUI/PowerUIPredictor.h>

@protocol OS_os_log, _DKKnowledgeQuerying, _CDUserContext;
@class NSDate, TRITrackingId, NSString, NSObject, TRIClient, MLModel;

@interface PowerUIMLTwoStageModelPredictor : NSObject <PowerUIPredictor> {

	os_unfair_lock_s _lock;
	NSDate* _pluginDate;
	double _pluginBatteryLevel;
	double _lastEngagementResult;
	double _lastDurationResult;
	double _adjustedDuration;
	TRITrackingId* _trialTrackingID;
	NSString* _treatmentID;
	NSString* _experimentID;
	NSObject*<OS_os_log> _log;
	NSObject*<OS_os_log> _statusLog;
	double _threshold;
	double _minInputChargeDuration;
	id<_DKKnowledgeQuerying> _store;
	id<_CDUserContext> _context;
	NSDate* _deadline;
	TRIClient* _trialClient;
	MLModel* _engageModel;
	MLModel* _durationModel;

}

@property (nonatomic,retain) NSObject*<OS_os_log> log;                    //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> statusLog;              //@synthesize statusLog=_statusLog - In the implementation block
@property (assign,nonatomic) double threshold;                            //@synthesize threshold=_threshold - In the implementation block
@property (assign,nonatomic) double minInputChargeDuration;               //@synthesize minInputChargeDuration=_minInputChargeDuration - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying> store;              //@synthesize store=_store - In the implementation block
@property (assign,nonatomic) double pluginBatteryLevel;                   //@synthesize pluginBatteryLevel=_pluginBatteryLevel - In the implementation block
@property (nonatomic,retain) id<_CDUserContext> context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSDate * deadline;                           //@synthesize deadline=_deadline - In the implementation block
@property (assign,nonatomic) double lastEngagementResult;                 //@synthesize lastEngagementResult=_lastEngagementResult - In the implementation block
@property (assign,nonatomic) double lastDurationResult;                   //@synthesize lastDurationResult=_lastDurationResult - In the implementation block
@property (nonatomic,retain) TRIClient * trialClient;                     //@synthesize trialClient=_trialClient - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                       //@synthesize lock=_lock - In the implementation block
@property (retain) TRITrackingId * trialTrackingID;                       //@synthesize trialTrackingID=_trialTrackingID - In the implementation block
@property (retain) NSString * treatmentID;                                //@synthesize treatmentID=_treatmentID - In the implementation block
@property (retain) NSString * experimentID;                               //@synthesize experimentID=_experimentID - In the implementation block
@property (nonatomic,readonly) MLModel * engageModel;                     //@synthesize engageModel=_engageModel - In the implementation block
@property (nonatomic,readonly) MLModel * durationModel;                   //@synthesize durationModel=_durationModel - In the implementation block
@property (nonatomic,retain) NSDate * pluginDate;                         //@synthesize pluginDate=_pluginDate - In the implementation block
@property (assign,nonatomic) double adjustedDuration;                     //@synthesize adjustedDuration=_adjustedDuration - In the implementation block
-(id)init;
-(os_unfair_lock_s)lock;
-(id<_CDUserContext>)context;
-(id<_DKKnowledgeQuerying>)store;
-(void)setContext:(id<_CDUserContext>)arg1 ;
-(double)threshold;
-(void)setThreshold:(double)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)setStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(unsigned long long)modelVersion;
-(double)currentBatteryLevel;
-(TRIClient *)trialClient;
-(void)setTrialClient:(TRIClient *)arg1 ;
-(TRITrackingId *)trialTrackingID;
-(void)setTrialTrackingID:(TRITrackingId *)arg1 ;
-(NSString *)treatmentID;
-(NSString *)experimentID;
-(void)setExperimentID:(NSString *)arg1 ;
-(void)loadTrialUpdates;
-(double)loadAdjustedHours;
-(double)loadThreshold;
-(double)loadMinInputChargeDuration;
-(id)loadTrialEngageModelByDeletingExistingModel:(BOOL)arg1 ;
-(id)loadTrialDurationModelByDeletingExistingModel:(BOOL)arg1 ;
-(void)resetSavedDeadline;
-(id)loadModelFromPath:(id)arg1 deleteExistingFiles:(BOOL)arg2 ;
-(unsigned long long)durationModelVersion;
-(double)batteryLevelAtDate:(id)arg1 ;
-(id)timeStringFromDate:(id)arg1 ;
-(double)getHourBinID:(id)arg1 forHourBin:(unsigned long long)arg2 ;
-(double)meanOf:(id)arg1 ;
-(double)adjustedChargingDecision:(unsigned long long)arg1 withPluginDate:(id)arg2 withPluginBatteryLevel:(double)arg3 forDate:(id)arg4 forStatus:(BOOL)arg5 ;
-(double)chargingDecision:(unsigned long long)arg1 withPluginDate:(id)arg2 withPluginBatteryLevel:(double)arg3 forDate:(id)arg4 withLog:(id)arg5 ;
-(id)events:(id)arg1 forHourBin:(unsigned long long)arg2 pluginDate:(id)arg3 ;
-(double)standardDeviationOf:(id)arg1 ;
-(double)medianOf:(id)arg1 ;
-(id)getPluginEventsBefore:(id)arg1 withMinimumDuration:(double)arg2 ;
-(id)getInputFeatures:(double)arg1 events:(id)arg2 pluginBatteryLevel:(unsigned long long)arg3 timeFromPlugin:(double)arg4 pluginDate:(id)arg5 pluginHour:(double)arg6 withLog:(id)arg7 ;
-(id)predictFullChargeDateWithBatteryLevel:(unsigned long long)arg1 ;
-(id)arrayWithShape:(id)arg1 values:(id)arg2 type:(long long)arg3 ;
-(unsigned long long)engagementModelVersion;
-(id)engagementModelBoltID;
-(id)durationModelBoltID;
-(void)setPluginDate:(NSDate *)arg1 ;
-(void)deleteCompiledModels;
-(NSDate *)pluginDate;
-(double)pluginBatteryLevel;
-(void)setPluginBatteryLevel:(double)arg1 ;
-(double)lastEngagementResult;
-(void)setLastEngagementResult:(double)arg1 ;
-(double)lastDurationResult;
-(void)setLastDurationResult:(double)arg1 ;
-(double)adjustedDuration;
-(void)setAdjustedDuration:(double)arg1 ;
-(void)setTreatmentID:(NSString *)arg1 ;
-(NSObject*<OS_os_log>)statusLog;
-(void)setStatusLog:(NSObject*<OS_os_log>)arg1 ;
-(double)minInputChargeDuration;
-(void)setMinInputChargeDuration:(double)arg1 ;
-(NSDate *)deadline;
-(void)setDeadline:(NSDate *)arg1 ;
-(MLModel *)engageModel;
-(MLModel *)durationModel;
@end

