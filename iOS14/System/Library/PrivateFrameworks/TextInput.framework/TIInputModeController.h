/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@class NSArray, NSString;

@interface TIInputModeController : NSObject {

	NSArray* _supportedInputModeIdentifiers;
	NSArray* _supportedInputModeLanguageAndRegions;
	NSString* currentLocale;
	NSArray* preferredLanguages;
	NSArray* enabledInputModes;
	NSArray* defaultInputModes;
	NSArray* inputModesForTesting;

}

@property (nonatomic,copy) NSString * currentLocale; 
@property (nonatomic,copy) NSArray * preferredLanguages; 
@property (nonatomic,copy) NSArray * enabledInputModes; 
@property (nonatomic,copy) NSArray * defaultInputModes; 
@property (nonatomic,copy) NSArray * inputModesForTesting; 
@property (readonly) NSArray * supportedInputModeIdentifiers; 
@property (readonly) NSArray * supportedInputModeLanguageAndRegions; 
@property (readonly) NSArray * enabledInputModeIdentifiers; 
+(id)_inputModesForLocale:(id)arg1 language:(id)arg2 modeFetcher:(/*^block*/id)arg3 ;
+(id)sharedInputModeController;
-(NSString *)currentLocale;
-(NSArray *)defaultInputModes;
-(id)defaultEnabledInputModesForCurrentLocale;
-(NSArray *)enabledInputModeIdentifiers;
-(void)setDefaultInputModes:(NSArray *)arg1 ;
-(NSArray *)preferredLanguages;
-(id)suggestedDictationLanguagesForDeviceLanguage;
-(BOOL)identifierIsValidSystemInputMode:(id)arg1 ;
-(id)suggestedDictationLanguageForDeviceLanguage;
-(void)setInputModesForTesting:(NSArray *)arg1 ;
-(void)setPreferredLanguages:(NSArray *)arg1 ;
-(NSArray *)enabledInputModes;
-(void)setEnabledInputModes:(NSArray *)arg1 ;
-(void)setInputModeIdentifiersForTesting:(id)arg1 ;
-(NSArray *)supportedInputModeLanguageAndRegions;
-(void)setCurrentLocale:(NSString *)arg1 ;
-(id)defaultDictationLanguagesForKeyboardLanguage:(id)arg1 ;
-(NSArray *)inputModesForTesting;
-(NSArray *)supportedInputModeIdentifiers;
@end

