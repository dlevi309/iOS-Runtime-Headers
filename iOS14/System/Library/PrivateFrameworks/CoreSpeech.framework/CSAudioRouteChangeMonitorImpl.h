/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)jarvisConnected;
-(void)carPlayAudioRouteDidChange:(id)arg1 ;
-(void)getJarvisConnected:(/*^block*/id)arg1 ;
-(void)getHearstConnected:(/*^block*/id)arg1 ;
-(void)_notifyHearstConnectionState:(BOOL)arg1 ;
-(BOOL)_fetchJarvisConnectionState;
-(BOOL)hearstConnected;
-(BOOL)_fetchHearstConnectionState;
-(void)_notifyJarvisConnectionState:(BOOL)arg1 ;
-(void)preferredExternalRouteDidChange:(id)arg1 ;
@end

