/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <VoiceTrigger/VoiceTrigger-Structs.h>
#import <VoiceTrigger/VTEventMonitor.h>

@interface VTAudioRouteChangeMonitor : VTEventMonitor {

	unsigned long long _hearstConnection;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 ;
-(id)_CMSessionDispatchQueue;
-(unsigned long long)_updateHearstConnectionStatus;
-(void)updateExternalRouteConnectionStatus;
-(unsigned long long)hearstConnectionStatus;
-(BOOL)_hasInEarDetectSupport:(CFDictionaryRef)arg1 ;
-(BOOL)_isActiveRoute:(CFDictionaryRef)arg1 ;
-(BOOL)_hasDoAPSupport:(CFDictionaryRef)arg1 ;
@end

