/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBContainer.h>
#import <libobjc.A.dylib/CBContainerProtocol.h>
#import <libobjc.A.dylib/CBHIDServiceProtocol.h>
#import <libobjc.A.dylib/NightShiftSupportProtocol.h>
#import <libobjc.A.dylib/CBStatusInfoProtocol.h>

@protocol OS_dispatch_source;
@class NSMutableArray, NSObject, NSMutableDictionary, CBColorFilter, NSString;

@interface CBColorModuleiOS : CBContainer <CBContainerProtocol, CBHIDServiceProtocol, NightShiftSupportProtocol, CBStatusInfoProtocol> {

	NSMutableArray* _relevantServices;
	NSObject*<OS_dispatch_source> _rampTimer;
	NSMutableDictionary* _properties;
	SCD_Struct_CB18* _colorStruct;
	BOOL _fadeInProgress;
	BOOL _endRamp;
	SCD_Struct_CB19 _reportContext;
	BOOL _displayOn;
	unsigned _backlightService;
	NSMutableArray* _alsServices;
	NSMutableDictionary* _alsNodes;
	NSMutableArray* _filters;
	int _NSamples;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	BOOL _firstALSEventArrived;
	float _firstSampleTimeoutValue;
	BOOL _allALSEventsArrived;
	BOOL _forceColorUpdate;
	BOOL _potentiallyBustedALS;
	BOOL _continueWithFewerALSs;
	BOOL _sensorOverridden;
	SCD_Struct_CB15 _overrideColorSample;
	float _preStrobeDimPeriod;
	BOOL _dropALSColorSamples;
	CBColorFilter* _colorFilter;
	int _registeredColorALSCount;
	BOOL _aggregatedConfigApplied;
	BOOL _colorEffectsEnabled;
	BOOL _ammoliteEnabledStatus;
	unsigned long long _moduleType;

}

@property (readonly) unsigned long long moduleType;                 //@synthesize moduleType=_moduleType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyIdentifiers;
-(BOOL)handleHIDEvent:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(int)getVid:(IOHIDServiceClientRef)arg1 ;
-(id)copyPropertyInternalForKey:(id)arg1 ;
-(BOOL)removeHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(id)copyPreferenceForKey:(id)arg1 user:(id)arg2 ;
-(void)updateAvailability;
-(id)copyPropertyForKey:(id)arg1 ;
-(void)timerRoutine:(id)arg1 ;
-(void)setPreference:(id)arg1 forKey:(id)arg2 user:(id)arg3 ;
-(void)CAStrengthUpdate:(float)arg1 withPeriod:(float)arg2 ;
-(BOOL)carryLogCommentHandler:(id)arg1 ;
-(BOOL)preStrobeDimPeriodPropertyHandler:(id)arg1 ;
-(void)initColorStruct;
-(BOOL)parseAdaptationModeMappingArray:(id)arg1 strengths:(float*)arg2 strengthNum:(int)arg3 ;
-(int)getPid:(IOHIDServiceClientRef)arg1 ;
-(id)init;
-(void)inputAmbientColorSample:(SCD_Struct_CB17*)arg1 force:(BOOL)arg2 trust:(BOOL)arg3 ;
-(void)handleDisplayBrightnessFactorZero:(id)arg1 ;
-(BOOL)carryLogEnabledHandler:(id)arg1 ;
-(BOOL)start;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(BOOL)BLRCCTRangePropertyHandler:(id)arg1 ;
-(BOOL)CoreBrightnessFeaturesDisabledPropertyHandler:(id)arg1 ;
-(void)BLRFactorUpdate:(float)arg1 withPeriod:(float)arg2 shouldForceUpdate:(BOOL)arg3 ;
-(id)initWithBacklight:(unsigned)arg1 andModuleType:(unsigned long long)arg2 ;
-(BOOL)CAModeMappingHandler:(id)arg1 ;
-(id)getRegistryIDForHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(BOOL)CAStrengthPropertyHandler:(id)arg1 ;
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 ;
-(BOOL)CAStrengthRampPeriodTweakPropertyHandler:(id)arg1 ;
-(void)colorRampRoutine:(const SCD_Struct_CB20*)arg1 ;
-(BOOL)CAAABSensorOverridePropertyHandler:(id)arg1 ;
-(BOOL)convertNSData:(id)arg1 toUint32:(unsigned*)arg2 ;
-(void)applyAggregatedConfig:(BOOL)arg1 ;
-(void)stop;
-(BOOL)colorFilterModeHandler:(id)arg1 ;
-(void)reportCommitWithStop:(BOOL)arg1 ;
-(BOOL)CAFixedStrengthPropertyHandler:(id)arg1 ;
-(void)armFirstALSSampleTimer;
-(unsigned long long)moduleType;
-(BOOL)carryLogCommitHandler:(id)arg1 ;
-(void)setPreferences:(id)arg1 forKey:(id)arg2 ;
-(void)reportResetTimerWithStop:(BOOL)arg1 ;
-(void)commitPowerLogReport:(SCD_Struct_CB26*)arg1 ;
-(BOOL)BLRFactorPropertyHandler:(id)arg1 ;
-(BOOL)displayBrightnessFactorPropertyHandler:(id)arg1 ;
-(id)newArrayFromDoubles:(double*)arg1 size:(int)arg2 ;
-(void)debugPrintColorSampleAsRGB:(id)arg1 ;
-(void)activateColorAdaptation;
-(BOOL)setPropertyInternal:(id)arg1 forKey:(id)arg2 ;
-(BOOL)preStrobePropertyHandler:(id)arg1 ;
-(void)loadBacklightProperties;
-(void)filterInitialize;
-(id)newArrayFromIntegers:(int*)arg1 size:(int)arg2 ;
-(void)updateActivity;
-(BOOL)applyAggregatedConfigPropertyHandler:(id)arg1 ;
-(void)sendNotificationForKey:(id)arg1 andValue:(id)arg2 ;
-(id)copyPreferencesForKey:(id)arg1 ;
-(BOOL)CAWeakestColorAdaptationModePropertyHandler:(id)arg1 ;
-(void)cancelFirstSampleTimeout;
-(void)setNightShiftFactorDictionary:(id)arg1 ;
-(id)newAdaptationModeMappingDictionary:(float*)arg1 strengthNum:(int)arg2 ;
-(BOOL)serializedAggregatedConfigPropertyHandler:(id)arg1 ;
-(void)reportToAggd:(SCD_Struct_CB26*)arg1 ;
-(void)displayBrightnessFactorUpdate:(float)arg1 ;
-(void)handleHIDEventInternal:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(void)handleFilterNotificationForKey:(id)arg1 withProperty:(id)arg2 ;
-(void)BLRFactorUpdate:(float)arg1 ;
-(id)newAdaptationModeMappingArray:(float*)arg1 strengthNum:(int)arg2 ;
-(BOOL)BLRCCTTargetPropertyHandler:(id)arg1 ;
-(void)handleALSEvent:(id)arg1 ;
-(BOOL)CAFadesEnabledHandler:(id)arg1 ;
-(void)processColorSample:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(void)firstALSSampleTimeout;
-(BOOL)colorRampPeriodOverrideHandler:(id)arg1 ;
-(void)reportInitialize;
-(BOOL)CAEnabledPropertyHandler:(id)arg1 ;
-(BOOL)CALabShiftPropertyHandler:(id)arg1 ;
-(id)newAggregatedConfigFromSerializedConfig:(id)arg1 ;
-(id)copyLocalAggregatedConfig;
-(BOOL)CAWeakestColorAdaptationModeAnimatedPropertyHandler:(id)arg1 ;
-(BOOL)parseAdaptationModeMappingDictionary:(id)arg1 strengths:(float*)arg2 strengthNum:(int)arg3 ;
-(BOOL)addHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(BOOL)startNewTimerWithFreq:(float)arg1 ;
-(void)dealloc;
-(BOOL)ammolitePropertyHandler:(id)arg1 key:(id)arg2 ;
@end

