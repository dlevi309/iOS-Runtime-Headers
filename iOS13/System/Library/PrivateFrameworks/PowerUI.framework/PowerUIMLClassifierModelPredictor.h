/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/


@protocol OS_os_log, _DKKnowledgeQuerying, _CDUserContext;
@class NSDate, NSObject, MLModel;

@interface PowerUIMLClassifierModelPredictor : NSObject {

	NSDate* _pluginDate;
	double _threshold;
	NSObject*<OS_os_log> _log;
	id<_DKKnowledgeQuerying> _store;
	long long _pluginBatteryLevel;
	MLModel* _model;
	id<_CDUserContext> _context;

}

@property (nonatomic,retain) NSObject*<OS_os_log> log;                    //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying> store;              //@synthesize store=_store - In the implementation block
@property (assign,nonatomic) long long pluginBatteryLevel;                //@synthesize pluginBatteryLevel=_pluginBatteryLevel - In the implementation block
@property (nonatomic,readonly) MLModel * model;                           //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) id<_CDUserContext> context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSDate * pluginDate;                         //@synthesize pluginDate=_pluginDate - In the implementation block
@property (assign,nonatomic) double threshold;                            //@synthesize threshold=_threshold - In the implementation block
-(id)init;
-(id<_CDUserContext>)context;
-(id<_DKKnowledgeQuerying>)store;
-(MLModel *)model;
-(void)setContext:(id<_CDUserContext>)arg1 ;
-(double)threshold;
-(void)setThreshold:(double)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)setStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id)timeStringFromDate:(id)arg1 ;
-(id)getPluginEventsBefore:(id)arg1 withMinimumDuration:(double)arg2 ;
-(void)setPluginDate:(NSDate *)arg1 ;
-(NSDate *)pluginDate;
-(long long)pluginBatteryLevel;
-(void)setPluginBatteryLevel:(long long)arg1 ;
-(double)getHourBinID:(id)arg1 ;
-(id)getBatteryEventsFrom:(id)arg1 to:(id)arg2 ;
-(id)chargingDecision:(unsigned long long)arg1 withPluginDate:(id)arg2 forDate:(id)arg3 ;
-(double)wasDeviceActiveInLastHourFrom:(id)arg1 ;
-(id)averageDurationAndCountWithPluginDate:(id)arg1 ;
-(double)dynamicallyTuneThresholdForActivity:(id)arg1 ;
-(BOOL)shouldDisableCharging:(unsigned long long)arg1 ;
@end

