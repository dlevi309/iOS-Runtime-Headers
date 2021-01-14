/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/


@protocol OS_os_log, _DKKnowledgeQuerying;
#import <PowerUI/PowerUI-Structs.h>
@class MLModel, NSObject;

@interface PowerUIMLAudioAccessoryModelPredictor : NSObject {

	os_unfair_lock_s _lock;
	int _minimumDaysOfHistory;
	int _minimumNumberOfPreviousConnections;
	MLModel* _highUsageEngageModel;
	MLModel* _highUsageRegressionModel;
	MLModel* _lowUsageEngageModel;
	MLModel* _lowUsageRegressionModel;
	NSObject*<OS_os_log> _log;
	NSObject*<OS_os_log> _statusLog;
	id<_DKKnowledgeQuerying> _store;

}

@property (nonatomic,retain) NSObject*<OS_os_log> log;                            //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> statusLog;                      //@synthesize statusLog=_statusLog - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                               //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying> store;                      //@synthesize store=_store - In the implementation block
@property (assign,nonatomic) int minimumDaysOfHistory;                            //@synthesize minimumDaysOfHistory=_minimumDaysOfHistory - In the implementation block
@property (assign,nonatomic) int minimumNumberOfPreviousConnections;              //@synthesize minimumNumberOfPreviousConnections=_minimumNumberOfPreviousConnections - In the implementation block
@property (nonatomic,readonly) MLModel * highUsageEngageModel;                    //@synthesize highUsageEngageModel=_highUsageEngageModel - In the implementation block
@property (nonatomic,readonly) MLModel * highUsageRegressionModel;                //@synthesize highUsageRegressionModel=_highUsageRegressionModel - In the implementation block
@property (nonatomic,readonly) MLModel * lowUsageEngageModel;                     //@synthesize lowUsageEngageModel=_lowUsageEngageModel - In the implementation block
@property (nonatomic,readonly) MLModel * lowUsageRegressionModel;                 //@synthesize lowUsageRegressionModel=_lowUsageRegressionModel - In the implementation block
-(void)setStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(BOOL)isSufficientDataAvailableForEngagementForDevice:(id)arg1 ;
-(id)init;
-(NSObject*<OS_os_log>)log;
-(id<_DKKnowledgeQuerying>)store;
-(MLModel *)lowUsageEngageModel;
-(id)getInputFeaturesForDate:(id)arg1 withEvents:(id)arg2 withLog:(id)arg3 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(os_unfair_lock_s)lock;
-(id)getBTConnectionEventsUpTo:(id)arg1 withMinimumDuration:(double)arg2 withLimit:(unsigned)arg3 ascending:(BOOL)arg4 forDevice:(id)arg5 ;
-(BOOL)deviceHasAtLeastOneLongConnection:(id)arg1 forReferenceDate:(id)arg2 ;
-(void)setMinimumDaysOfHistory:(int)arg1 ;
-(MLModel *)highUsageRegressionModel;
-(int)minimumDaysOfHistory;
-(NSObject*<OS_os_log>)statusLog;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(id)chargingDecisionForDate:(id)arg1 forAudioAccessory:(id)arg2 ;
-(void)setStatusLog:(NSObject*<OS_os_log>)arg1 ;
-(MLModel *)lowUsageRegressionModel;
-(void)setMinimumNumberOfPreviousConnections:(int)arg1 ;
-(MLModel *)highUsageEngageModel;
-(double)historicalMeaningfulUnderchargeRate:(id)arg1 ;
-(id)checkForSufficientBTConnectionEventsUpTo:(id)arg1 forDevice:(id)arg2 ;
-(int)minimumNumberOfPreviousConnections;
-(id)getBTConnectionEventsInDescendingOrderForPredictionUpTo:(id)arg1 forDevice:(id)arg2 ;
@end

