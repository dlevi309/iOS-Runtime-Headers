/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTLanguageCodeUpdateMonitor : VTEventMonitor {

	int _notifyToken;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_didReceiveLanguageCodeUpdate;
-(void)_notifyObserver:(id)arg1 withLanguageCode:(id)arg2 ;
@end

