/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <PowerUI/PowerUIPredictor.h>

@protocol OS_os_log, _DKKnowledgeQuerying, _CDUserContext;
@class NSDate, NSObject, MLModel;

@interface PowerUIMLRegressorModelPredictor : NSObject <PowerUIPredictor> {

	NSDate* _pluginDate;
	long long _pluginBatteryLevel;
	double _adjustedDuration;
	NSObject*<OS_os_log> _log;
	id<_DKKnowledgeQuerying> _store;
	MLModel* _model;
	id<_CDUserContext> _context;

}

@property (nonatomic,retain) NSObject*<OS_os_log> log;                    //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying> store;              //@synthesize store=_store - In the implementation block
@property (assign,nonatomic) long long pluginBatteryLevel;                //@synthesize pluginBatteryLevel=_pluginBatteryLevel - In the implementation block
@property (nonatomic,readonly) MLModel * model;                           //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) id<_CDUserContext> context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSDate * pluginDate;                         //@synthesize pluginDate=_pluginDate - In the implementation block
@property (assign,nonatomic) double adjustedDuration;                     //@synthesize adjustedDuration=_adjustedDuration - In the implementation block
-(id)init;
-(id<_CDUserContext>)context;
-(id<_DKKnowledgeQuerying>)store;
-(MLModel *)model;
-(void)setContext:(id<_CDUserContext>)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)setStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(unsigned long long)currentBatteryLevel;
-(unsigned long long)batteryLevelAtDate:(id)arg1 ;
-(id)timeStringFromDate:(id)arg1 ;
-(id)getPluginEventsBefore:(id)arg1 withMinimumDuration:(double)arg2 ;
-(id)predictFullChargeDateWithBatteryLevel:(unsigned long long)arg1 ;
-(void)setPluginDate:(NSDate *)arg1 ;
-(NSDate *)pluginDate;
-(long long)pluginBatteryLevel;
-(void)setPluginBatteryLevel:(long long)arg1 ;
-(double)adjustedDuration;
-(void)setAdjustedDuration:(double)arg1 ;
-(double)getHourBinID:(id)arg1 ;
-(id)averageDurationAndCountWithPluginDate:(id)arg1 ;
-(double)adjustedChargingDecision:(unsigned long long)arg1 withPluginDate:(id)arg2 withPluginBatteryLevel:(unsigned long long)arg3 forDate:(id)arg4 ;
-(double)chargingDecision:(unsigned long long)arg1 withPluginDate:(id)arg2 withPluginBatteryLevel:(unsigned long long)arg3 forDate:(id)arg4 ;
@end

