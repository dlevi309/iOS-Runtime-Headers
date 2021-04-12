/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSPhraseSpotterEnabledMonitor : CSEventMonitor {

	int _notifyToken;
	BOOL _isPhraseSpotterEnabled;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)isEnabled;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 withEnabled:(BOOL)arg2 ;
-(void)_phraseSpotterEnabledDidChange;
-(BOOL)_checkPhraseSpotterEnabled;
-(void)_didReceivePhraseSpotterSettingChangedInQueue:(BOOL)arg1 ;
@end

