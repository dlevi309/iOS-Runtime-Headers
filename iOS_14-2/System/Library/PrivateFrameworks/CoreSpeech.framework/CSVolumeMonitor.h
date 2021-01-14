/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CSVolumeMonitor : CSEventMonitor {

	NSObject*<OS_dispatch_queue> _queue;
	float _musicVolumeLevel;
	float _alarmVolumeLevel;

}
+(id)sharedInstance;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_startObservingSystemControllerLifecycle;
-(void)systemControllerDied:(id)arg1 ;
-(void)dealloc;
-(void)fetchVolumeFromAVSystemControllerForAudioCategory:(id)arg1 ;
-(void)startObservingSystemVolumes;
-(BOOL)_fetchSystemVolumeForCategory:(id)arg1 usingSystemController:(id)arg2 volume:(float*)arg3 ;
-(BOOL)_supportAVSystemVolumeFetch;
-(float)_getNewSystemVolumesWithNotification:(id)arg1 category:(id)arg2 ;
-(void)_notifyObserver:(id)arg1 volumeDidChanged:(float)arg2 forAudioCategory:(id)arg3 ;
-(void)systemVolumeDidChange:(id)arg1 ;
-(float)musicVolume;
-(void)musicVolumeWithCompletion:(/*^block*/id)arg1 ;
-(float)alarmVolume;
@end

