/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface UIKeyboardPreferencesController : NSObject

@property (nonatomic,readonly) UIKeyboardPreferencesController*<TIPreferencesControllerActions> preferencesActions; 
@property (assign) long long handBias; 
@property (assign) BOOL enableProKeyboard; 
+(id)sharedPreferencesController;
+(id)valueForPreferenceKey:(id)arg1 domain:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(int)arg2 ;
-(id)valueForKey:(int)arg1 ;
-(BOOL)boolForKey:(int)arg1 ;
-(BOOL)isPasswordAutoFillAllowed;
-(UIKeyboardPreferencesController*<TIPreferencesControllerActions>)preferencesActions;
-(BOOL)boolForPreferenceKey:(id)arg1 ;
-(id)valueForPreferenceKey:(id)arg1 ;
-(double)rivenSizeFactor:(double)arg1 ;
-(void)setEnabledDictationLanguages:(id)arg1 ;
-(BOOL)allEnabledInputModesAreValid;
-(void)saveInputModes:(id)arg1 ;
-(void)setLanguageAwareInputModeLastUsed:(id)arg1 ;
-(void)setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(void)setLastUsedDictationLanguages:(id)arg1 ;
-(BOOL)enableProKeyboard;
-(void)_configurePreferences;
-(void)preferencesControllerChanged:(id)arg1 ;
-(void)synchronizePreferences;
-(void)touchSynchronizePreferencesTimer;
-(BOOL)isPreferenceKeyLockedDown:(id)arg1 ;
-(BOOL)spaceConfirmationEnabled;
-(void)setEnableProKeyboard:(BOOL)arg1 ;
-(long long)handBias;
-(void)setHandBias:(long long)arg1 ;
-(BOOL)isFirstReachableKeyboardInteraction;
-(void)performedFirstReachableKeyboardInteraction;
@end

