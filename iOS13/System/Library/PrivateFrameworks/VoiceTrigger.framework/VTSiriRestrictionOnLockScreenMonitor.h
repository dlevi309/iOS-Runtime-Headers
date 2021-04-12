/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <VoiceTrigger/VTEventMonitor.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface VTSiriRestrictionOnLockScreenMonitor : VTEventMonitor <MCProfileConnectionObserver> {

	BOOL _isRestricted;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(BOOL)isRestricted;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)_checkSiriRestrictedOnLockScreen;
-(void)_notifyObserver:(id)arg1 withRestricted:(BOOL)arg2 ;
-(void)_didReceiveRestrictionChanged:(BOOL)arg1 ;
-(void)_didReceiveRestrictionChangedInQueue:(BOOL)arg1 ;
@end

