/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealth.framework/RespiratoryHealth
*/


@protocol HKRPUserDefaultsSyncProviding;
@class HKObserverSet, NSUserDefaults, NSString;

@interface HKRPOxygenSaturationSettings : NSObject {

	HKObserverSet* _observers;
	NSUserDefaults* _userDefaults;
	id<HKRPUserDefaultsSyncProviding> _userDefaultsSyncProvider;

}

@property (nonatomic,readonly) NSString * bloodOxygenLocalizedPaneTitle; 
@property (nonatomic,readonly) NSString * bloodOxygenSectionTitle; 
@property (nonatomic,readonly) NSString * backgroundMeasurementsHeader; 
@property (nonatomic,readonly) NSString * bloodOxygenMeasurementsTitle; 
@property (nonatomic,readonly) NSString * backgroundMeasurementsTitle; 
@property (nonatomic,readonly) NSString * backgroundMeasurementsValue; 
@property (nonatomic,readonly) NSString * backgroundMeasurementsFooter; 
@property (nonatomic,readonly) NSString * backgroundMeasurementsDetailOptionsTitle; 
@property (nonatomic,readonly) NSString * backgroundMeasurementsDetailSleepTitle; 
@property (nonatomic,readonly) NSString * backgroundMeasurementsDetailTheaterTitle; 
@property (nonatomic,readonly) NSString * backgroundMeasurementsDetailOptionsFooter; 
@property (nonatomic,readonly) NSString * learnMoreAboutBloodOxygenURL; 
@property (assign,nonatomic) BOOL oxygenSaturationDisabled; 
@property (assign,nonatomic) BOOL backgroundMeasurementsEnabled; 
@property (assign,nonatomic) BOOL backgroundMeasurementsDuringSleepMode; 
@property (assign,nonatomic) BOOL backgroundMeasurementsDuringTheaterMode; 
+(id)standardSettings;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_startObservingDefaults;
-(void)addObserver:(id)arg1 queue:(id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)reset;
-(void)dealloc;
-(void)_stopObservingAllDefaults;
-(id)initWithUserDefaults:(id)arg1 userDefaultsSyncProvider:(id)arg2 ;
-(void)_setOxygenSaturationDisabled:(BOOL)arg1 ;
-(void)_setBackgroundMeasurementsEnabled:(BOOL)arg1 ;
-(void)_setBackgroundMeasurementsDuringSleepMode:(BOOL)arg1 ;
-(void)_setBackgroundMeasurementsDuringTheaterMode:(BOOL)arg1 ;
-(id)_settingsToObserve;
-(void)_notifySettingsDidChange;
-(BOOL)oxygenSaturationDisabled;
-(void)setOxygenSaturationDisabled:(BOOL)arg1 ;
-(BOOL)backgroundMeasurementsEnabled;
-(void)setBackgroundMeasurementsEnabled:(BOOL)arg1 ;
-(BOOL)backgroundMeasurementsDuringSleepMode;
-(void)setBackgroundMeasurementsDuringSleepMode:(BOOL)arg1 ;
-(BOOL)backgroundMeasurementsDuringTheaterMode;
-(void)setBackgroundMeasurementsDuringTheaterMode:(BOOL)arg1 ;
-(void)activateDefaultValuesIfNeeded;
-(NSString *)bloodOxygenLocalizedPaneTitle;
-(NSString *)bloodOxygenSectionTitle;
-(NSString *)backgroundMeasurementsHeader;
-(NSString *)bloodOxygenMeasurementsTitle;
-(NSString *)backgroundMeasurementsTitle;
-(NSString *)backgroundMeasurementsValue;
-(NSString *)backgroundMeasurementsFooter;
-(NSString *)learnMoreAboutBloodOxygenURL;
-(NSString *)backgroundMeasurementsDetailOptionsTitle;
-(NSString *)backgroundMeasurementsDetailSleepTitle;
-(NSString *)backgroundMeasurementsDetailTheaterTitle;
-(NSString *)backgroundMeasurementsDetailOptionsFooter;
@end

