/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreBrightness/CoreBrightness-Structs.h>
@class NSMutableDictionary, SunriseSunsetProvider, NSDictionary, NSMutableArray, NSObject, NSString;

@interface NightModeControl : NSObject {

	NSMutableDictionary* _properties;
	SunriseSunsetProvider* _sunriseSunsetProvider;
	int _sunriseSunsetInfoQueryTimeout;
	NSDictionary* _sunriseSunsetInfo;
	NSMutableArray* _supportObjs;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _nextTransitionTimer;
	NSObject*<OS_dispatch_source> _transitionTimer;
	NSObject*<OS_dispatch_source> _aggdUpdateTimer;
	BLRAggdInfo _aggdKeysInfo;
	int _algoState;
	float _transitionLength;
	float _transitionLengthActual;
	float _transitionsTimesCoeff;
	float _transitionRate;
	float _minFactor;
	float _maxFactor;
	NMFactorState _factorState;
	CFTimeZoneRef _currentTimeZone;
	double _sunsetAbsolute;
	double _sunsetPreviousAbsolute;
	double _sunriseAbsolute;
	double _sunrisePreviousAbsolute;
	double _offTransitionTimeAbsoluteUnrestricted;
	double _offTransitionTimeAbsoluteUnrestrictedPrev;
	BOOL _transitionTimesValid;
	BOOL _isDaylight;
	int _currentScheduledTransitionType;
	double _displayOffTimestamp;
	double _untilNexTransitionTimestamp;
	float _inactivityTimeout;
	BOOL _checkInactivity;
	BOOL _displayOff;
	int _logLevel;
	/*^block*/id _callbackBlock;
	SCD_Struct_Ni6 _status;
	SCD_Struct_Ni5 _backupSchedule;
	BOOL _statusUpdated;
	NSString* _currentSunriseKey;
	NSString* _currentSunsetKey;
	NSString* _previousSunriseKey;
	NSString* _previousSunsetKey;
	NSString* _nextSunriseKey;
	NSString* _nextSunsetKey;
	NSString* _isDaylightKey;
	int _notifyUserAboutScheduleCounter;
	CFUserNotificationRef _enableNotification;
	BOOL _notificationInProgress;
	BOOL _revertToSunriseSunset;

}
-(void)cancelTransition;
-(void)updateTransitionTimes:(double)arg1 ;
-(id)copyPreferenceForKey:(id)arg1 user:(id)arg2 ;
-(void)setPreference:(id)arg1 forKey:(id)arg2 user:(id)arg3 ;
-(void)initiateRestrictedMaxTransition;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)initWithSupportObject:(id)arg1 queue:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)setSunPermitted:(BOOL)arg1 ;
-(void)enableBlueLightReduction:(BOOL)arg1 withOption:(int)arg2 ;
-(void)removeSupportObject:(id)arg1 ;
-(void)setMode:(int)arg1 ;
-(void)timeZoneChanged;
-(void)cancelAggdPeriodicUpdate;
-(void)setAlgoState:(int)arg1 ;
-(void)aggdKeysUpdate;
-(void)reevaluateCurrentStateWithFactorFadeOption:(float)arg1 ;
-(void)updateSunriseSunsetInfo:(id)arg1 ;
-(void)setNightModeFactor:(float)arg1 withFadePeriod:(float)arg2 ;
-(void)scheduleNextTransition:(double)arg1 withType:(int)arg2 ;
-(void)displayAlertInteractive:(BOOL)arg1 ;
-(id)copyLowPowerModeState;
-(void)setNightShiftFactorDictionary:(id)arg1 ;
-(id)getPropertyForKey:(id)arg1 ;
-(id)copyTimeStringWithHour:(int)arg1 minute:(int)arg2 second:(int)arg3 ;
-(void)transitionTimerHandler;
-(void)updateSunriseSunsetBackup;
-(void)saveStatusToPrefs:(id)arg1 ;
-(void)setSchedule:(id)arg1 ;
-(BOOL)updateTransitionTimesFromSunriseSunset:(double)arg1 ;
-(id)copyDictionaryFromStatus:(SCD_Struct_Ni8*)arg1 ;
-(void)updateOptionTimestamp:(double)arg1 ;
-(id)copyStatusDictionaryFromPrefs;
-(void)retrieveSunriseSunsetTimesFromBackup:(double)arg1 ;
-(void)reevaluateCurrentState;
-(BOOL)parseStatusDictionary:(id)arg1 intoStruct:(SCD_Struct_Ni8*)arg2 shouldUpdatePrefs:(BOOL*)arg3 ;
-(void)clockChanged;
-(void)initiateFullMinTransition;
-(void)updateStatusDictionaryWithValue:(id)arg1 forKey:(id)arg2 ;
-(void)tearDownAllTimers;
-(void)updateLowPowerModeState:(id)arg1 ;
-(void)scheduleAggdKeysUpdate;
-(void)addSupportObject:(id)arg1 ;
-(void)cancelSchedule;
-(void)initiateTransitionTo:(float)arg1 andRampLength:(float)arg2 ;
-(BOOL)updateTransitionTimesFromSchedule:(double)arg1 ;
-(void)dealloc;
-(void)initiateFullMaxTransition;
-(void)setNightModeFactor:(float)arg1 ;
@end

