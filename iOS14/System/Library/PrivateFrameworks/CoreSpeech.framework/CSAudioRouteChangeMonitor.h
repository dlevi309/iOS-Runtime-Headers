/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSAudioRouteChangeMonitor : CSEventMonitor
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)jarvisConnected;
-(void)getJarvisConnected:(/*^block*/id)arg1 ;
-(void)getHearstConnected:(/*^block*/id)arg1 ;
-(BOOL)hearstConnected;
@end

