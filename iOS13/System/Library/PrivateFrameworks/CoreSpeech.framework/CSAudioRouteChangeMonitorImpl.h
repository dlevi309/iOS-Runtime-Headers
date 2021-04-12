/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSAudioRouteChangeMonitor.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CSAudioRouteChangeMonitorImpl : CSAudioRouteChangeMonitor {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isHearstConnected;
	BOOL _isJarvisConnected;

}
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)_fetchHearstConnectionState;
-(void)_notifyHearstConnectionState:(BOOL)arg1 ;
-(void)getHearstConnected:(/*^block*/id)arg1 ;
-(BOOL)hearstConnected;
-(void)getJarvisConnected:(/*^block*/id)arg1 ;
-(BOOL)jarvisConnected;
-(BOOL)_fetchJarvisConnectionState;
-(void)_notifyJarvisConnectionState:(BOOL)arg1 ;
-(void)preferredExternalRouteDidChange:(id)arg1 ;
-(void)carPlayAudioRouteDidChange:(id)arg1 ;
@end

