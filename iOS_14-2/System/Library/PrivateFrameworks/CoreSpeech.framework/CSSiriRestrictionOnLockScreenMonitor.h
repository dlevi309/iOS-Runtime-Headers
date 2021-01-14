/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface CSSiriRestrictionOnLockScreenMonitor : CSEventMonitor <MCProfileConnectionObserver> {

	BOOL _isRestricted;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_stopMonitoring;
-(BOOL)isRestricted;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 withRestricted:(BOOL)arg2 ;
-(void)_didReceiveRestrictionChangedInQueue:(BOOL)arg1 ;
-(BOOL)_checkSiriRestrictedOnLockScreen;
-(void)_didReceiveRestrictionChanged:(BOOL)arg1 ;
@end

