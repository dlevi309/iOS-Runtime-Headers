/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSPhraseSpotterEnabledMonitor : CSEventMonitor {

	int _notifyToken;
	BOOL _isPhraseSpotterEnabled;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 withEnabled:(BOOL)arg2 ;
-(void)_phraseSpotterEnabledDidChange;
-(BOOL)isEnabled;
-(BOOL)_checkPhraseSpotterEnabled;
-(void)_didReceivePhraseSpotterSettingChangedInQueue:(BOOL)arg1 ;
@end

