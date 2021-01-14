/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSAudioRouteChangeMonitor.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CSAudioRouteChangeMonitorImplWatch : CSAudioRouteChangeMonitor {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isHearstConnected;

}
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)jarvisConnected;
-(void)getJarvisConnected:(/*^block*/id)arg1 ;
-(void)getHearstConnected:(/*^block*/id)arg1 ;
-(void)_notifyHearstConnectionState:(BOOL)arg1 ;
-(BOOL)hearstConnected;
-(BOOL)_fetchHearstConnectionState;
-(void)activeAudioRouteDidChange:(id)arg1 ;
@end

