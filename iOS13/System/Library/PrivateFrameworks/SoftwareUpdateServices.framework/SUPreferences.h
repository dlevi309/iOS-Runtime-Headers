/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/


@protocol SUPreferencesObserver;
#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
@class NSNumber, NSString, NSDate;

@interface SUPreferences : NSObject {

	id<SUPreferencesObserver> _observer;
	BOOL _disableManagedRequest;
	BOOL _disableUserWiFiOnlyPeriod;
	BOOL _disableBuildNumberComparison;
	BOOL _allowSameBuildUpdates;
	BOOL _disableAvailabilityAlerts;
	BOOL _disableAutoDownload;
	BOOL _simulateAutoDownload;
	BOOL _disableAutoSU;
	BOOL _scanWeeklyInternally;
	BOOL _forceFullReplacement;
	BOOL _disableFullReplacementFallback;
	NSNumber* _updateDelayInterval;
	BOOL _shouldDelayUpdates;
	BOOL _shouldDelayInMinutes;
	NSNumber* _unmetConstraints;
	NSNumber* _mandatorySUFlags;
	NSString* _requestedPMV;
	NSDate* _autoSUStart;
	NSDate* _autoSUEnd;
	NSDate* _autoSUUnlockStart;
	NSDate* _autoSUUnlockEnd;
	NSNumber* _autoSUStartDelta;
	NSNumber* _autoSUEndDelta;
	NSNumber* _autoSUUnlockStartDelta;
	NSNumber* _autoSUUnlockEndDelta;
	BOOL _autoUpdateForceOn;
	BOOL _autoUpdateForceOff;
	BOOL _automaticUpdateV2Enabled;
	NSNumber* _bannerDelay;
	BOOL _autoDownloadDeletedBuild;
	BOOL _backgroundDLKnownBuilds;

}

@property (assign,nonatomic) id<SUPreferencesObserver> observer;                                           //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) BOOL disableManagedRequest;                                                 //@synthesize disableManagedRequest=_disableManagedRequest - In the implementation block
@property (nonatomic,readonly) BOOL disableUserWiFiOnlyPeriod;                                             //@synthesize disableUserWiFiOnlyPeriod=_disableUserWiFiOnlyPeriod - In the implementation block
@property (nonatomic,readonly) BOOL disableBuildNumberComparison;                                          //@synthesize disableBuildNumberComparison=_disableBuildNumberComparison - In the implementation block
@property (nonatomic,readonly) BOOL allowSameBuildUpdates;                                                 //@synthesize allowSameBuildUpdates=_allowSameBuildUpdates - In the implementation block
@property (nonatomic,readonly) BOOL disableAvailabilityAlerts;                                             //@synthesize disableAvailabilityAlerts=_disableAvailabilityAlerts - In the implementation block
@property (getter=isAutoDownloadDisabled,nonatomic,readonly) BOOL disableAutoDownload;                     //@synthesize disableAutoDownload=_disableAutoDownload - In the implementation block
@property (nonatomic,readonly) BOOL simulateAutoDownload;                                                  //@synthesize simulateAutoDownload=_simulateAutoDownload - In the implementation block
@property (getter=isAutoSUDisabled,nonatomic,readonly) BOOL disableAutoSU;                                 //@synthesize disableAutoSU=_disableAutoSU - In the implementation block
@property (nonatomic,readonly) BOOL scanWeeklyInternally;                                                  //@synthesize scanWeeklyInternally=_scanWeeklyInternally - In the implementation block
@property (nonatomic,readonly) BOOL forceFullReplacement;                                                  //@synthesize forceFullReplacement=_forceFullReplacement - In the implementation block
@property (nonatomic,readonly) BOOL disableFullReplacementFallback;                                        //@synthesize disableFullReplacementFallback=_disableFullReplacementFallback - In the implementation block
@property (nonatomic,readonly) NSNumber * updateDelayInterval;                                             //@synthesize updateDelayInterval=_updateDelayInterval - In the implementation block
@property (nonatomic,readonly) BOOL shouldDelayUpdates;                                                    //@synthesize shouldDelayUpdates=_shouldDelayUpdates - In the implementation block
@property (nonatomic,readonly) BOOL shouldDelayInMinutes;                                                  //@synthesize shouldDelayInMinutes=_shouldDelayInMinutes - In the implementation block
@property (nonatomic,readonly) NSNumber * unmetConstraints;                                                //@synthesize unmetConstraints=_unmetConstraints - In the implementation block
@property (nonatomic,readonly) NSNumber * mandatorySUFlags;                                                //@synthesize mandatorySUFlags=_mandatorySUFlags - In the implementation block
@property (nonatomic,readonly) NSString * requestedPMV;                                                    //@synthesize requestedPMV=_requestedPMV - In the implementation block
@property (nonatomic,readonly) BOOL backgroundDLKnownBuilds;                                               //@synthesize backgroundDLKnownBuilds=_backgroundDLKnownBuilds - In the implementation block
@property (nonatomic,readonly) NSNumber * autoSUStartDelta;                                                //@synthesize autoSUStartDelta=_autoSUStartDelta - In the implementation block
@property (nonatomic,readonly) NSNumber * autoSUEndDelta;                                                  //@synthesize autoSUEndDelta=_autoSUEndDelta - In the implementation block
@property (nonatomic,readonly) NSNumber * autoSUUnlockStartDelta;                                          //@synthesize autoSUUnlockStartDelta=_autoSUUnlockStartDelta - In the implementation block
@property (nonatomic,readonly) NSNumber * autoSUUnlockEndDelta;                                            //@synthesize autoSUUnlockEndDelta=_autoSUUnlockEndDelta - In the implementation block
@property (nonatomic,readonly) BOOL autoUpdateForceOn;                                                     //@synthesize autoUpdateForceOn=_autoUpdateForceOn - In the implementation block
@property (nonatomic,readonly) BOOL autoUpdateForceOff;                                                    //@synthesize autoUpdateForceOff=_autoUpdateForceOff - In the implementation block
@property (assign,setter=enableAutomaticUpdateV2:,nonatomic) BOOL isAutomaticUpdateV2Enabled;              //@synthesize automaticUpdateV2Enabled=_automaticUpdateV2Enabled - In the implementation block
@property (nonatomic,readonly) NSNumber * bannerDelay;                                                     //@synthesize bannerDelay=_bannerDelay - In the implementation block
@property (nonatomic,readonly) BOOL autoDownloadDeletedBuild;                                              //@synthesize autoDownloadDeletedBuild=_autoDownloadDeletedBuild - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id<SUPreferencesObserver>)observer;
-(void)setObserver:(id<SUPreferencesObserver>)arg1 ;
-(void)reload;
-(BOOL)isAutomaticUpdateV2Enabled;
-(void)enableAutomaticUpdateV2:(BOOL)arg1 ;
-(BOOL)disableBuildNumberComparison;
-(BOOL)allowSameBuildUpdates;
-(BOOL)forceFullReplacement;
-(NSString *)requestedPMV;
-(BOOL)disableFullReplacementFallback;
-(BOOL)disableAvailabilityAlerts;
-(BOOL)disableUserWiFiOnlyPeriod;
-(void)_loadPreferences;
-(BOOL)_getBooleanPreferenceForKey:(id)arg1 withDefaultValue:(BOOL)arg2 ;
-(id)_copyNumberPreferenceForKey:(id)arg1 ;
-(id)_copyStringPreferenceForKey:(id)arg1 ;
-(id)_mandatorySUFlagsForPreferences;
-(void*)_copyPreferenceForKey:(CFStringRef)arg1 ofType:(unsigned long long)arg2 ;
-(void)_setBooleanPreferenceForKey:(id)arg1 value:(BOOL)arg2 ;
-(id)_createDatePreferencesForKey:(id)arg1 ;
-(BOOL)isKeySetInPreferences:(id)arg1 ;
-(BOOL)disableManagedRequest;
-(BOOL)isAutoDownloadDisabled;
-(BOOL)simulateAutoDownload;
-(BOOL)isAutoSUDisabled;
-(BOOL)scanWeeklyInternally;
-(NSNumber *)updateDelayInterval;
-(BOOL)shouldDelayUpdates;
-(NSNumber *)unmetConstraints;
-(BOOL)shouldDelayInMinutes;
-(NSNumber *)mandatorySUFlags;
-(NSNumber *)autoSUStartDelta;
-(NSNumber *)autoSUEndDelta;
-(NSNumber *)autoSUUnlockStartDelta;
-(NSNumber *)autoSUUnlockEndDelta;
-(BOOL)autoUpdateForceOn;
-(BOOL)autoUpdateForceOff;
-(NSNumber *)bannerDelay;
-(BOOL)autoDownloadDeletedBuild;
-(BOOL)backgroundDLKnownBuilds;
@end

