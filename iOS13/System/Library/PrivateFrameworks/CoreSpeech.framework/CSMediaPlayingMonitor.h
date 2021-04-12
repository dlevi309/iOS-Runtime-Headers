/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 mediaIsPlayingState:(long long)arg2 ;
-(void)_notePossiblePlayPausedStateChange:(id)arg1 ;
-(void)initializeMediaPlayingState;
-(long long)mediaPlayingState;
-(void)mediaPlayingStateWithCompletion:(/*^block*/id)arg1 ;
@end

