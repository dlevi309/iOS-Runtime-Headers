/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <VoiceTrigger/VoiceTrigger-Structs.h>
#import <VoiceTrigger/VTEventMonitor.h>

@interface VTAudioRouteChangeMonitor : VTEventMonitor {

	unsigned long long _hearstConnection;
	opaqueCMSessionRef _cmSession;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 ;
-(id)_CMSessionDispatchQueue;
-(unsigned long long)_updateHearstConnectionStatus;
-(BOOL)_hasInEarDetectSupport:(CFDictionaryRef)arg1 ;
-(BOOL)_isActiveRoute:(CFDictionaryRef)arg1 ;
-(BOOL)_hasDoAPSupport:(CFDictionaryRef)arg1 ;
-(void)updateExternalRouteConnectionStatus;
-(unsigned long long)hearstConnectionStatus;
@end

