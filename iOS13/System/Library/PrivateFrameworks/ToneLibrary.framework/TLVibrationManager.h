/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


#import <ToneLibrary/ToneLibrary-Structs.h>
@class TLAccessQueue, NSMutableDictionary, NSDictionary, NPSDomainAccessor;

@interface TLVibrationManager : NSObject {

	TLAccessQueue* _accessQueue;
	unsigned long long _specialBehaviors;
	NSMutableDictionary* _cachedSystemVibrationIdentifiers;
	NSMutableDictionary* _cachedSystemVibrationCompleteSubdirectories;
	NSDictionary* _cachedUserGeneratedVibrationPatterns;
	NSDictionary* _synchronizedVibrationPatternFromToneIdentifierMapping;
	NPSDomainAccessor* _transientNanoPreferencesDomainAccessor;
	BOOL _needsRefresh;
	BOOL _allowsAutoRefresh;

}

@property (nonatomic,readonly) BOOL needsRefresh;                                          //@synthesize needsRefresh=_needsRefresh - In the implementation block
@property (assign,nonatomic) BOOL allowsAutoRefresh;                                       //@synthesize allowsAutoRefresh=_allowsAutoRefresh - In the implementation block
@property (nonatomic,readonly) BOOL shouldVibrateForCurrentRingerSwitchState; 
@property (nonatomic,readonly) BOOL shouldVibrateOnRing; 
@property (nonatomic,readonly) BOOL shouldVibrateOnSilent; 
+(id)sharedVibrationManager;
+(void)_handleVibrationPreferencesDidChangeNotificationForPreferencesKinds:(unsigned long long)arg1 atInitiativeOfVibrationManager:(id)arg2 ;
+(void)_handleVibrateOnRingOrSilentDidChangeNotification;
-(id)init;
-(void)dealloc;
-(BOOL)refresh;
-(BOOL)vibrationWithIdentifierIsValid:(id)arg1 ;
-(id)nameOfVibrationWithIdentifier:(id)arg1 ;
-(void)_setCurrentVibrationWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2 ;
-(long long)_currentVibrationWatchAlertPolicyForAlertType:(long long)arg1 ;
-(id)defaultVibrationIdentifierForAlertType:(long long)arg1 ;
-(void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(long long)arg2 topic:(id)arg3 ;
-(void)_performBlockInAccessQueue:(/*^block*/id)arg1 ;
-(id)_newServiceConnection;
-(id)_initWithSpecialBehaviors:(unsigned long long)arg1 ;
-(BOOL)_isUnitTestingModeEnabled;
-(id)_userGeneratedVibrationPatterns;
-(id)currentVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2 ;
-(id)_systemWideVibrationPatternPreferenceKeyForAlertType:(long long)arg1 ;
-(id)_defaultVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2 correspondingToneIdentifier:(id)arg3 ;
-(id)_currentVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2 ;
-(id)_defaultPreferablyNonSilentVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2 correspondingToneIdentifier:(id)arg3 ;
-(id)_currentVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2 correspondingToneIdentifier:(id)arg3 allowsNoneDefaultToAnyActualVibrationSubstitution:(BOOL)arg4 ;
-(id)_sanitizeVibrationIdentifier:(id)arg1 forAlertType:(long long)arg2 topic:(id)arg3 correspondingToneIdentifier:(id)arg4 useDefaultVibrationAsFallback:(BOOL)arg5 allowsNoneDefaultToAnyActualVibrationSubstitution:(BOOL)arg6 didFallback:(BOOL*)arg7 ;
-(id)_currentVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2 correspondingToneIdentifier:(id)arg3 ;
-(void)_didSetVibrationPreferenceSuccessfullyWithKey:(id)arg1 inDomain:(id)arg2 usingPreferencesOfKind:(unsigned long long)arg3 ;
-(id)currentVibrationIdentifierForAlertType:(long long)arg1 ;
-(id)patternForVibrationWithIdentifier:(id)arg1 repeating:(BOOL)arg2 ;
-(id)defaultVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2 ;
-(BOOL)_areSynchronizedVibrationsAllowedForAlertType:(long long)arg1 ;
-(id)_synchronizedVibrationIdentifierForToneIdentifier:(id)arg1 ;
-(id)_patternForSystemVibrationWithIdentifier:(id)arg1 shouldLogAssetPath:(BOOL)arg2 ;
-(id)_systemVibrationIdentifiersForSubdirectory:(id)arg1 ;
-(id)noneVibrationPattern;
-(id)_completeSystemVibrationsSubdirectoryForSubdirectory:(id)arg1 ;
-(id)_localizedNameForVibrationWithIdentifier:(id)arg1 ;
-(id)patternForVibrationWithIdentifier:(id)arg1 ;
-(id)_nameOfVibrationWithIdentifier:(id)arg1 ;
-(id)_retrieveUserGeneratedVibrationPatternsUsingService;
-(void)_handleUserGeneratedVibrationsDidChangeNotification;
-(BOOL)_setUserGeneratedVibrationPatternsUsingService:(id)arg1 error:(id*)arg2 ;
-(void)_didChangeUserGeneratedVibrationPatterns;
-(BOOL)_saveUserGeneratedVibrationPatterns:(id)arg1 error:(id*)arg2 ;
-(BOOL)_removeAllUserGeneratedVibrationPatternsUsingServiceWithError:(id*)arg1 ;
-(BOOL)shouldVibrateOnSilent;
-(BOOL)shouldVibrateOnRing;
-(BOOL)_booleanPreferenceForKey:(CFStringRef)arg1 defaultValue:(BOOL)arg2 ;
-(unsigned long long)_storedSystemVibrationDataMigrationVersion;
-(void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(long long)arg2 ;
-(void)_makeSystemVibrationDataMigrationVersionCurrentIfNecessary;
-(long long)_currentVibrationWatchAlertPolicyForAlertType:(long long)arg1 topic:(id)arg2 ;
-(long long)_currentVibrationWatchAlertPolicyForAlertType:(long long)arg1 topic:(id)arg2 didFindPersistedWatchAlertPolicy:(BOOL*)arg3 ;
-(id)_currentVibrationWatchAlertPolicyPreferenceKeyForAlertType:(long long)arg1 topic:(id)arg2 ;
-(void)_setCurrentVibrationWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2 topic:(id)arg3 ;
-(void)setAllowsAutoRefresh:(BOOL)arg1 ;
-(id)currentVibrationNameForAlertType:(long long)arg1 ;
-(id)currentVibrationPatternForAlertType:(long long)arg1 ;
-(id)defaultVibrationNameForAlertType:(long long)arg1 ;
-(id)defaultVibrationPatternForAlertType:(long long)arg1 ;
-(BOOL)hasSpecificDefaultVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2 ;
-(id)noneVibrationName;
-(id)allUserSelectableSystemVibrationIdentifiers;
-(id)allUserGeneratedVibrationIdentifiers;
-(BOOL)_vibrationIsSettableForAlertType:(long long)arg1 ;
-(id)_sanitizeVibrationIdentifier:(id)arg1 forAlertType:(long long)arg2 topic:(id)arg3 correspondingToneIdentifier:(id)arg4 didFallbackToCurrentVibrationIdentifier:(BOOL*)arg5 ;
-(id)addUserGeneratedVibrationPattern:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(BOOL)setName:(id)arg1 forUserGeneratedVibrationWithIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteUserGeneratedVibrationPatternWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)_numberOfUserGeneratedVibrations;
-(BOOL)_removeAllUserGeneratedVibrationsWithError:(id*)arg1 ;
-(BOOL)shouldVibrateForCurrentRingerSwitchState;
-(BOOL)_migrateLegacySettings;
-(BOOL)needsRefresh;
-(BOOL)allowsAutoRefresh;
-(id)currentVibrationIdentifierForAlertType:(long long)arg1 accountIdentifier:(id)arg2 ;
-(void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(long long)arg2 accountIdentifier:(id)arg3 ;
-(long long)_currentVibrationWatchAlertPolicyForAlertType:(long long)arg1 accountIdentifier:(id)arg2 ;
-(void)_setCurrentVibrationWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2 accountIdentifier:(id)arg3 ;
@end

