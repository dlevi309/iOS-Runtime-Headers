/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/


@class NSDictionary, NSMutableDictionary, NSString;

@interface VTUIStringsHelper : NSObject {

	NSDictionary* _localizedStringTable;
	NSMutableDictionary* _languageLocalizedStringTables;
	NSString* _siriLanguageCode;
	NSString* _heySiriTriggerPhrase;

}

@property (nonatomic,readonly) NSString * heySiriTriggerPhrase;              //@synthesize heySiriTriggerPhrase=_heySiriTriggerPhrase - In the implementation block
+(void)initialize;
+(id)sharedStringsHelper;
-(id)init;
-(void)localeDidChange:(id)arg1 ;
-(void)setSiriLanguage:(id)arg1 ;
-(NSString *)heySiriTriggerPhrase;
-(void)setupForCurrentLocaleAndSiriLanguage;
-(id)uiLocalizedStringForKey:(id)arg1 ;
-(id)_bundleStringTableForLanguages:(id)arg1 inLocalizedStringsFileName:(id)arg2 ;
-(id)_bundleStringTableForAllValidLanguages:(id)arg1 inLocalizedStringsFileName:(id)arg2 ;
-(id)_siriLanguageSubstitutedString:(id)arg1 ;
-(id)uiLocalizedStringForKey:(id)arg1 languageCode:(id)arg2 ;
-(id)siriLanguageStringForKey:(id)arg1 ;
-(id)localizedAudioStringForKey:(id)arg1 ;
@end

