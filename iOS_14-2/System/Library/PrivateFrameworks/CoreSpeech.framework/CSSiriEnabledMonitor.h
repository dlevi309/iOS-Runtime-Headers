/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSiriEnabledMonitor : CSEventMonitor {

	BOOL _isSiriEnabled;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 withEnabled:(BOOL)arg2 ;
-(BOOL)fetchIsEnabled;
-(BOOL)isEnabled;
-(void)_didReceiveSiriSettingChanged:(BOOL)arg1 ;
@end

