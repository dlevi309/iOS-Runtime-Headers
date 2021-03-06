/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/


@interface RKUtilities : NSObject
+(id)addLikelySubtagsForLocaleIdentifier:(id)arg1 ;
+(BOOL)prefixInArray:(id)arg1 withArray:(id)arg2 ;
+(BOOL)suffixInArray:(id)arg1 withArray:(id)arg2 ;
+(BOOL)tokenInArray:(id)arg1 withArray:(id)arg2 ;
+(id)normalizeForPersonalization:(id)arg1 ;
+(id)canonicalLanguageAndScriptCodeIdentifierForIdentifier:(id)arg1 ;
+(id)removeEmoji:(id)arg1 ;
+(id)stripDiacritics:(id)arg1 ;
+(BOOL)RKRepairStringNeeded:(id)arg1 ;
+(id)getDeviceModel;
+(BOOL)isDeviceSupportedForLSTMBasedLanguageIdentification:(id)arg1 ;
+(id)stripPunctuations:(id)arg1 ;
+(id)removeMultipleWhitespaces:(id)arg1 ;
+(BOOL)isLanguageSupportedByNSLinguisticTaggerForLanguageIdentification:(id)arg1 ;
+(BOOL)isLanguageSupportedBySmartPunctuation:(id)arg1 ;
+(id)stripEmojiSkinTones:(id)arg1 ;
+(BOOL)isLanguageSupportedForLemmatization:(id)arg1 ;
+(BOOL)isLanguageSupportedForPartOfSpeech:(id)arg1 ;
@end

