/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSVoiceTriggerDelegate.h>
#import <libobjc.A.dylib/CSAlarmMonitorDelegate.h>
#import <libobjc.A.dylib/CSTimerMonitorDelegate.h>
#import <libobjc.A.dylib/CSVolumeMonitorDelegate.h>

@protocol CSConnectionServiceDelegate, OS_dispatch_queue, CSSmartSiriVolumeProcessor;
@class NSObject, NSString;

@interface CSSmartSiriVolumeManager : NSObject <CSVoiceTriggerDelegate, CSAlarmMonitorDelegate, CSTimerMonitorDelegate, CSVolumeMonitorDelegate> {

	id<CSConnectionServiceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	id<CSSmartSiriVolumeProcessor> _smartSiriVolume;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) id<CSSmartSiriVolumeProcessor> smartSiriVolume;               //@synthesize smartSiriVolume=_smartSiriVolume - In the implementation block
@property (assign,nonatomic,__weak) id<CSConnectionServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setAsset:(id)arg1 ;
-(id<CSConnectionServiceDelegate>)delegate;
-(void)setDelegate:(id<CSConnectionServiceDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2 ;
-(void)CSVolumeMonitor:(id)arg1 didReceiveMusicVolumeChanged:(float)arg2 ;
-(void)CSVolumeMonitor:(id)arg1 didReceiveAlarmVolumeChanged:(float)arg2 ;
-(void)CSTimerMonitor:(id)arg1 didReceiveTimerChanged:(long long)arg2 ;
-(void)CSAlarmMonitor:(id)arg1 didReceiveAlarmChanged:(long long)arg2 ;
-(void)startSmartSiriVolume;
-(id)initWithSamplingRate:(float)arg1 withAsset:(id)arg2 ;
-(id)getVolumeForTTSType:(unsigned long long)arg1 withOverrideMediaVolume:(id)arg2 WithRequestTime:(unsigned long long)arg3 ;
-(id<CSSmartSiriVolumeProcessor>)smartSiriVolume;
-(void)setSmartSiriVolume:(id<CSSmartSiriVolumeProcessor>)arg1 ;
@end

