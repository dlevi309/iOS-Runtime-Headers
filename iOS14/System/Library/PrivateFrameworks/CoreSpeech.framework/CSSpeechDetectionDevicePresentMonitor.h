/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSpeechDetectionDevicePresentMonitor : CSEventMonitor
+(id)sharedInstance;
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)isPresent;
-(void)_startObservingSystemControllerLifecycle;
-(void)_startObservingSpeechDetectionVADPresence;
-(void)_systemControllerDied:(id)arg1 ;
-(void)handleSpeechDetectionVADPresentChange:(id)arg1 ;
@end

