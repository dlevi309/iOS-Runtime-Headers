/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSAudioRouteChangeMonitor : CSEventMonitor
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)getHearstConnected:(/*^block*/id)arg1 ;
-(BOOL)hearstConnected;
-(void)getJarvisConnected:(/*^block*/id)arg1 ;
-(BOOL)jarvisConnected;
@end

