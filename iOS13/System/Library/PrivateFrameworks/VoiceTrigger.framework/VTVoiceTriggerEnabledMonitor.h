/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTVoiceTriggerEnabledMonitor : VTEventMonitor {

	int _notifyToken;
	BOOL _isVoiceTriggerEnabled;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)isEnabled;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 withEnabled:(BOOL)arg2 ;
-(BOOL)_checkVoiceTriggerEnabled;
-(void)_didReceiveVoiceTriggerSettingChanged:(BOOL)arg1 ;
-(void)_didReceiveVoiceTriggerSettingChangedInQueue:(BOOL)arg1 ;
@end

