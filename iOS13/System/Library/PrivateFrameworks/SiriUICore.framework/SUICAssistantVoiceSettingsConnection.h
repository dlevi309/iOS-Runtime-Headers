/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

#import <AssistantServices/AFSettingsConnection.h>

@class NSMutableDictionary;

@interface SUICAssistantVoiceSettingsConnection : AFSettingsConnection {

	NSMutableDictionary* _cachedAvailableVoices;

}

@property (nonatomic,retain) NSMutableDictionary * cachedAvailableVoices;              //@synthesize cachedAvailableVoices=_cachedAvailableVoices - In the implementation block
+(id)titlesForLanguageIdentifiers:(id)arg1 ;
+(id)shortTitlesForLanguageIdentifiers:(id)arg1 deviceLanguageLocale:(id)arg2 ;
+(id)capitalizeFirstPartOfCountry:(id)arg1 ;
+(id)outputLanguageIdentifiers;
+(id)assistantLanguageTitlesDictionary;
-(id)getAvailableVoicesForLanguage:(id)arg1 ;
-(id)nonCacheAvailableVoicesForLanguage:(id)arg1 ;
-(BOOL)languageHasBothGender:(id)arg1 ;
-(id)getAvailableDialectsForLanguage:(id)arg1 ;
-(id)_regionForLanguageIdentifier:(id)arg1 ;
-(BOOL)languageHasCustomVoice:(id)arg1 ;
-(BOOL)languageHasVoiceSelection:(id)arg1 ;
-(id)dialectForLanguageIdentifier:(id)arg1 ;
-(void)setOutputVoiceLanguage:(id)arg1 gender:(long long)arg2 ;
-(NSMutableDictionary *)cachedAvailableVoices;
-(void)setCachedAvailableVoices:(NSMutableDictionary *)arg1 ;
@end

