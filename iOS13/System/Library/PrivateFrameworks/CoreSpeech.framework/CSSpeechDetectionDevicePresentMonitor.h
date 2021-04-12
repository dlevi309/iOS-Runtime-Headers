/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSpeechDetectionDevicePresentMonitor : CSEventMonitor
+(id)sharedInstance;
-(id)init;
-(BOOL)isPresent;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_startObservingSystemControllerLifecycle;
-(void)_startObservingSpeechDetectionVADPresence;
-(void)handleSpeechDetectionVADPresentChange:(id)arg1 ;
-(void)_systemControllerDied:(id)arg1 ;
@end

