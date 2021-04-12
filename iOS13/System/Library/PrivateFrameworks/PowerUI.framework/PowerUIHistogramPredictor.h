/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <PowerUI/PowerUIPredictor.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSObject, _DKPredictionTimeline, NSDateInterval;

@interface PowerUIHistogramPredictor : NSObject <PowerUIPredictor> {

	int _pluginToken;
	NSObject*<OS_os_log> _log;
	_DKPredictionTimeline* _deviceActivityTimeline;
	_DKPredictionTimeline* _devicePluginTimeline;
	NSDateInterval* _predictedInactivity;
	NSDateInterval* _predictedLengthyPlugin;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_os_log> log;                                    //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) _DKPredictionTimeline * deviceActivityTimeline;              //@synthesize deviceActivityTimeline=_deviceActivityTimeline - In the implementation block
@property (nonatomic,retain) _DKPredictionTimeline * devicePluginTimeline;                //@synthesize devicePluginTimeline=_devicePluginTimeline - In the implementation block
@property (nonatomic,retain) NSDateInterval * predictedInactivity;                        //@synthesize predictedInactivity=_predictedInactivity - In the implementation block
@property (nonatomic,retain) NSDateInterval * predictedLengthyPlugin;                     //@synthesize predictedLengthyPlugin=_predictedLengthyPlugin - In the implementation block
@property (assign,nonatomic) int pluginToken;                                             //@synthesize pluginToken=_pluginToken - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
+(id)monitor;
+(id)deviceActivityLikelihoodQueryPredicate;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(unsigned long long)modelVersion;
-(id)predictFullChargeDateWithBatteryLevel:(unsigned long long)arg1 ;
-(id)readNumberForPreferenceKey:(id)arg1 ;
-(id)stringFromInterval:(id)arg1 ;
-(id)deviceActivityLikelihoodTimeline;
-(id)shortenIntervalWithInterval:(id)arg1 ;
-(id)chargeLikelihoodTimeline;
-(void)loadDeviceActivityPrediction;
-(id)adjustedPeriodFromInterval:(id)arg1 atDate:(id)arg2 ;
-(void)loadChargePrediction;
-(id)currentInactivityPrediction;
-(id)currentPluginPrediction;
-(_DKPredictionTimeline *)deviceActivityTimeline;
-(void)setDeviceActivityTimeline:(_DKPredictionTimeline *)arg1 ;
-(_DKPredictionTimeline *)devicePluginTimeline;
-(void)setDevicePluginTimeline:(_DKPredictionTimeline *)arg1 ;
-(NSDateInterval *)predictedInactivity;
-(void)setPredictedInactivity:(NSDateInterval *)arg1 ;
-(NSDateInterval *)predictedLengthyPlugin;
-(void)setPredictedLengthyPlugin:(NSDateInterval *)arg1 ;
-(int)pluginToken;
-(void)setPluginToken:(int)arg1 ;
@end

