/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface UIKeyboardPreferencesController : NSObject

@property (nonatomic,readonly) UIKeyboardPreferencesController*<TIPreferencesControllerActions> preferencesActions; 
@property (assign) long long handBias; 
@property (assign) long long visceral; 
@property (assign) BOOL enableProKeyboard; 
+(id)sharedPreferencesController;
+(id)valueForPreferenceKey:(id)arg1 domain:(id)arg2 ;
-(BOOL)isPreferenceKeyLockedDown:(id)arg1 ;
-(void)synchronizePreferences;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(void)setValue:(id)arg1 forKey:(int)arg2 ;
-(void)touchSynchronizePreferencesTimer;
-(BOOL)useHardwareGlobeKeyAsEmojiKey;
-(BOOL)allEnabledInputModesAreValid;
-(long long)handBias;
-(void)_configurePreferences;
-(id)valueForKey:(int)arg1 ;
-(BOOL)boolForPreferenceKey:(id)arg1 ;
-(void)performedFirstReachableKeyboardInteraction;
-(void)setHandBias:(long long)arg1 ;
-(void)setEnabledDictationLanguages:(id)arg1 ;
-(void)setLastUsedDictationLanguages:(id)arg1 ;
-(BOOL)isPasswordAutoFillAllowed;
-(void)setEnableProKeyboard:(BOOL)arg1 ;
-(void)setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(BOOL)spaceConfirmationEnabled;
-(void)saveInputModes:(id)arg1 ;
-(BOOL)boolForKey:(int)arg1 ;
-(long long)visceral;
-(void)setLanguageAwareInputModeLastUsed:(id)arg1 ;
-(void)preferencesControllerChanged:(id)arg1 ;
-(BOOL)defaultGlobeAsEmojiKeySetting;
-(id)valueForPreferenceKey:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(UIKeyboardPreferencesController*<TIPreferencesControllerActions>)preferencesActions;
-(BOOL)isFirstReachableKeyboardInteraction;
-(BOOL)enableProKeyboard;
-(double)rivenSizeFactor:(double)arg1 ;
-(void)setVisceral:(long long)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

