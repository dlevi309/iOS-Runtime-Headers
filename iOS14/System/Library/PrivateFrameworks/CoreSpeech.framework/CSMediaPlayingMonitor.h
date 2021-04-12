/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CSMediaPlayingMonitor : CSEventMonitor {

	long long _mediaIsPlaying;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 mediaIsPlayingState:(long long)arg2 ;
-(void)_notePossiblePlayPausedStateChange:(id)arg1 ;
-(void)initializeMediaPlayingState;
-(long long)mediaPlayingState;
-(void)mediaPlayingStateWithCompletion:(/*^block*/id)arg1 ;
@end

