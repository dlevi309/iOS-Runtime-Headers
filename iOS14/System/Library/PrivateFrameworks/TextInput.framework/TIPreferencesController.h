/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/TIPreferencesControllerActions.h>

@class NSArray, NSMutableDictionary, NSTimer, NSString;

@interface TIPreferencesController : NSObject <TIPreferencesControllerActions> {

	NSMutableDictionary* _configuredDomains;
	NSMutableDictionary* _configuredPreferences;
	NSMutableDictionary* _cachedMCRestrictedValue;
	NSTimer* _synchronizePreferencesTimer;
	BOOL isInternalInstall;
	BOOL _inhibitGlobalNotification;
	BOOL _ignoreNextSyncNotification;

}

@property (assign,nonatomic) BOOL isInternalInstall; 
@property (assign,nonatomic) BOOL ignoreNextSyncNotification;                            //@synthesize ignoreNextSyncNotification=_ignoreNextSyncNotification - In the implementation block
@property (assign,nonatomic) BOOL inhibitGlobalNotification;                             //@synthesize inhibitGlobalNotification=_inhibitGlobalNotification - In the implementation block
@property (nonatomic,copy) NSArray * inputModeSelectionSequence; 
@property (assign,nonatomic) BOOL predictionEnabled; 
@property (assign,nonatomic) BOOL automaticMinimizationEnabled; 
@property (assign,nonatomic) BOOL keyboardShownByTouch; 
@property (assign,nonatomic) CGPoint keyboardPosition; 
@property (assign,nonatomic) CGPoint floatingKeyboardPosition; 
@property (assign,nonatomic) unsigned long long floatingKeyboardDockedEdge; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPreferencesController;
+(void)registerPreferredLanguagesForInputModes:(id)arg1 replacingInputModes:(id)arg2 ;
-(BOOL)isPreferenceKeyLockedDown:(id)arg1 ;
-(BOOL)automaticMinimizationEnabled;
-(void)setIsInternalInstall:(BOOL)arg1 ;
-(void)synchronizePreferences;
-(BOOL)inhibitGlobalNotification;
-(void)_configureKey:(id)arg1 domain:(id)arg2 defaultValue:(id)arg3 ;
-(void)didUnseeHardwareKeyboard:(id)arg1 ;
-(void)managedKeyboardSettingDidChange:(id)arg1 ;
-(id)init;
-(void)updateEnabledDictationLanguages:(id)arg1 ;
-(CGPoint)keyboardPosition;
-(void)setValue:(id)arg1 forKey:(int)arg2 ;
-(void)touchSynchronizePreferencesTimer;
-(void)didTriggerOneTimeAction:(id)arg1 ;
-(BOOL)allEnabledInputModesAreValid;
-(void)_configurePreferences;
-(void)clearSynchronizePreferencesTimer;
-(id)valueForKey:(int)arg1 ;
-(BOOL)isKeyLockedDown:(int)arg1 ;
-(void)updateLastUsedInputMode:(id)arg1 ;
-(BOOL)boolForPreferenceKey:(id)arg1 ;
-(void)setKeyboardShownByTouch:(BOOL)arg1 ;
-(void)updateInputModes:(id)arg1 ;
-(void)_pushValue:(id)arg1 toPreference:(id)arg2 domain:(id)arg3 ;
-(void)updateLastUsedDictationLanguages:(id)arg1 ;
-(BOOL)predictionEnabled;
-(unsigned long long)floatingKeyboardDockedEdge;
-(void)updateLastUsedKeyboards:(id)arg1 ;
-(void)setFloatingKeyboardPosition:(CGPoint)arg1 ;
-(BOOL)_isOneTimeAction:(id)arg1 ;
-(void)setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(void)synchronizeDomainIfNeedsGet:(id)arg1 ;
-(void)_configureKey:(id)arg1 domain:(id)arg2 defaultValue:(id)arg3 fallbackKey:(id)arg4 ;
-(void)updateKeyboardIsSplit:(BOOL)arg1 locked:(BOOL)arg2 ;
-(void)setInhibitGlobalNotification:(BOOL)arg1 ;
-(void)_configureDomain:(id)arg1 notification:(id)arg2 ;
-(void)updateLastUsedLayout:(id)arg1 ;
-(BOOL)keyboardShownByTouch;
-(void)setPredictionEnabled:(BOOL)arg1 ;
-(void)performWithWriteability:(BOOL)arg1 operations:(/*^block*/id)arg2 ;
-(CGPoint)floatingKeyboardPosition;
-(void)setFloatingKeyboardDockedEdge:(unsigned long long)arg1 ;
-(BOOL)boolForKey:(int)arg1 ;
-(void)_configureKey:(id)arg1 domain:(id)arg2 fallbackKey:(id)arg3 ;
-(BOOL)isInternalInstall;
-(BOOL)ignoreNextSyncNotification;
-(void)preferencesChangedCallback:(id)arg1 ;
-(void)updateVisceral:(id)arg1 ;
-(void)setKeyboardPosition:(CGPoint)arg1 ;
-(void)setInputModeSelectionSequence:(NSArray *)arg1 ;
-(void)updateKeyboardHandBias:(id)arg1 ;
-(void)updateDidPerformFirstReachableKeyboardInteraction;
-(NSArray *)inputModeSelectionSequence;
-(void)updateKeyboardIsFloating:(BOOL)arg1 ;
-(void)updateEnableProKeyboard:(BOOL)arg1 ;
-(void)setAutomaticMinimizationEnabled:(BOOL)arg1 ;
-(id)valueForPreferenceKey:(id)arg1 ;
-(void)_configureDomains;
-(void)setIgnoreNextSyncNotification:(BOOL)arg1 ;
-(int)MCValueForManagedPreferenceKey:(id)arg1 ;
-(void)setValue:(id)arg1 forManagedPreferenceKey:(id)arg2 ;
-(BOOL)oneTimeActionCompleted:(id)arg1 ;
-(void)didSeeHardwareKeyboard:(id)arg1 ;
-(void)dealloc;
@end

