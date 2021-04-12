/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/


@class NSUserDefaults, HKObserverSet, NSArray, NSDateComponents;

@interface HKMCSettingsManager : NSObject {

	NSUserDefaults* _menstrualCyclesDefaults;
	HKObserverSet* _observers;
	NSArray* _allSettingsToObserve;
	int _hiddenDisplayTypesNotifyToken;
	int _analysisSettingsNotifyToken;
	int _notificationSettingsNotifyToken;

}

@property (assign,nonatomic) BOOL menstruationProjectionsEnabled; 
@property (assign,nonatomic) BOOL fertileWindowProjectionsEnabled; 
@property (assign,nonatomic) long long minimumAnalysisStartDayIndex; 
@property (assign,nonatomic) BOOL menstruationNotificationsEnabled; 
@property (assign,nonatomic) BOOL fertileWindowNotificationsEnabled; 
@property (nonatomic,readonly) BOOL notificationsEnabled; 
@property (nonatomic,retain) NSDateComponents * menstruationNotificationTimeOfDay; 
@property (nonatomic,retain) NSDateComponents * fertileWindowNotificationTimeOfDay; 
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)notificationsEnabled;
-(void)_startObservingDefaults;
-(void)addObserver:(id)arg1 queue:(id)arg2 ;
-(void)_startObservingNPSNotifications;
-(void)_stopObservingAllDefaults;
-(void)_stopObservingNPSNotifications;
-(void)_analysisSettingsDidUpdate;
-(void)_notificationSettingsDidUpdate;
-(void)_hiddenDisplayTypesDidUpdate;
-(BOOL)menstruationNotificationsEnabled;
-(BOOL)fertileWindowNotificationsEnabled;
-(void)setHidden:(BOOL)arg1 forDisplayTypeIdentifiers:(id)arg2 ;
-(void)_setTestDefaults:(id)arg1 ;
-(BOOL)menstruationProjectionsEnabled;
-(void)setMenstruationProjectionsEnabled:(BOOL)arg1 ;
-(BOOL)fertileWindowProjectionsEnabled;
-(void)setFertileWindowProjectionsEnabled:(BOOL)arg1 ;
-(long long)minimumAnalysisStartDayIndex;
-(void)setMinimumAnalysisStartDayIndex:(long long)arg1 ;
-(void)setMenstruationNotificationsEnabled:(BOOL)arg1 ;
-(NSDateComponents *)menstruationNotificationTimeOfDay;
-(void)setMenstruationNotificationTimeOfDay:(NSDateComponents *)arg1 ;
-(void)setFertileWindowNotificationsEnabled:(BOOL)arg1 ;
-(NSDateComponents *)fertileWindowNotificationTimeOfDay;
-(void)setFertileWindowNotificationTimeOfDay:(NSDateComponents *)arg1 ;
-(void)setHidden:(BOOL)arg1 forDisplayTypeIdentifier:(id)arg2 ;
-(void)setMenstruationTrackingDisplayTypesHidden:(BOOL)arg1 ;
-(void)setFertilityTrackingDisplayTypesHidden:(BOOL)arg1 ;
-(BOOL)hiddenForDisplayTypeIdentifier:(id)arg1 ;
-(void)resetAllSettings;
@end

