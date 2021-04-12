/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/_DKNotificationReceiver.h>
#import <libobjc.A.dylib/_DKInstantMonitor.h>
#import <libobjc.A.dylib/_DKHistoricalMonitor.h>

@class _DKPeriod, NSString, _DKEvent, NSDate;

@interface _DKUserIsFirstBacklightOnAfterWakeupMonitor : _DKMonitor <_DKNotificationReceiver, _DKInstantMonitor, _DKHistoricalMonitor> {

	_DKPeriod* eligibleForNotification;
	int displayStatusNotifyToken;
	int internalSettingChangedNotificationToken;
	BOOL _enabled;
	BOOL _FirstWakeUINotificationEnabled;
	BOOL _SoftwareUpdateUINotificationEnabled;

}

@property (assign,nonatomic) BOOL FirstWakeUINotificationEnabled;                                                             //@synthesize FirstWakeUINotificationEnabled=_FirstWakeUINotificationEnabled - In the implementation block
@property (assign,setter=oftwareUpdateUINotificationEnabled,nonatomic) BOOL SoftwareUpdateUINotificationEnabled;              //@synthesize SoftwareUpdateUINotificationEnabled=_SoftwareUpdateUINotificationEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id instantHandler; 
@property (nonatomic,readonly) _DKEvent * currentEvent; 
@property (nonatomic,copy) id historicalHandler; 
@property (nonatomic,copy) id shutdownHandler; 
@property (nonatomic,readonly) NSDate * lastUpdate; 
+(id)eventStream;
+(id)prettyPrintDateAsLocalTime:(id)arg1 ;
+(id)fetchMostRecentPastEventForStream:(id)arg1 ;
+(id)fetchMostRecentlyStoredScreenLockEventOnlyIfValueIsUnlocked;
-(void)handleBacklightTurnedOffEvent;
-(void)receiveNotificationEvent:(id)arg1 ;
-(id)getNextSWUpdatePrediction;
-(void)start;
-(void)setFirstWakeUINotificationEnabled:(BOOL)arg1 ;
-(BOOL)eligibleForFirstWakeUINotification;
-(BOOL)isFirstBacklightOn;
-(void)handleScreenUnlockEvent;
-(void)setupNotificationEligiblityPeriod;
-(BOOL)SoftwareUpdateUINotificationEnabled;
-(void)stop;
-(void)deactivate;
-(BOOL)FirstWakeUINotificationEnabled;
-(id)firstWakeupEventWithValue:(BOOL)arg1 ;
-(void)handleBacklightTurnedOnEvent;
-(BOOL)didQualifyingScreenLockEndInEligibilityPeriod;
-(void)setSoftwareUpdateUINotificationEnabled:(BOOL)arg1 ;
-(BOOL)isInternalBuild;
-(void)showSoftwareUpdateUINotification;
-(void)recordFirstWakeup:(id)arg1 ;
-(void)showUINotification:(id)arg1 ;
-(void)unregisterHandleBacklightEvents;
-(void)setUINotificationEligibility;
-(void)setInternalSettingsChangedNotficationHandler;
-(void)showFirstWakeupUINotification;
-(id)convertUTCToLocalTimeString:(id)arg1 ;
-(BOOL)isUINotificationEnabledForKey:(id)arg1 ;
-(void)registerHandleBacklightEvents;
-(void)dealloc;
@end

