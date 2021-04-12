/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)fetchMostRecentlyStoredScreenLockEventOnlyIfValueIsUnlocked;
+(id)fetchMostRecentPastEventForStream:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)receiveNotificationEvent:(id)arg1 ;
-(void)deactivate;
-(BOOL)isInternalBuild;
-(BOOL)didQualifyingScreenLockEndInEligibilityPeriod;
-(void)setFirstWakeUINotificationEnabled:(BOOL)arg1 ;
-(void)setSoftwareUpdateUINotificationEnabled:(BOOL)arg1 ;
-(BOOL)isUINotificationEnabledForKey:(id)arg1 ;
-(void)setUINotificationEligibility;
-(id)convertUTCToLocalTimeString:(id)arg1 ;
-(id)getNextSWUpdatePrediction;
-(void)showUINotification:(id)arg1 ;
-(id)firstWakeupEventWithValue:(BOOL)arg1 ;
-(void)recordFirstWakeup:(id)arg1 ;
-(BOOL)isFirstBacklightOn;
-(BOOL)eligibleForFirstWakeUINotification;
-(BOOL)SoftwareUpdateUINotificationEnabled;
-(void)showSoftwareUpdateUINotification;
-(BOOL)FirstWakeUINotificationEnabled;
-(void)showFirstWakeupUINotification;
-(void)handleScreenUnlockEvent;
-(void)setupNotificationEligiblityPeriod;
-(void)handleBacklightTurnedOffEvent;
-(void)handleBacklightTurnedOnEvent;
-(void)registerHandleBacklightEvents;
-(void)setInternalSettingsChangedNotficationHandler;
-(void)unregisterHandleBacklightEvents;
@end

