/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/


#import <AccessibilitySharedSupport/AccessibilitySharedSupport-Structs.h>
@interface AXSSLanguageTagger : NSObject
+(id)_allLangIDs;
+(int)langIDforLangCode:(id)arg1 ;
+(SCD_Struct_AX4*)_languageHintsEvenlyDistributedWithProbability:(float)arg1 excludingHints:(id)arg2 ;
+(id)langCodeForlangId:(int)arg1 ;
+(id)_overrideLanguageDetection:(id)arg1 ;
+(id)languageTagsForContent:(id)arg1 ;
+(id)primaryLanguageForContent:(id)arg1 ;
+(void*)_scriptTaggerForContent:(id)arg1 ;
+(BOOL)_isNewline:(id)arg1 ;
+(NSRange)_manuallyProcessContent:(id)arg1 tokenRange:(NSRange)arg2 currentRange:(NSRange)arg3 ;
+(void)_tagRange:(NSRange)arg1 document:(id)arg2 tags:(id)arg3 createdFromNewline:(BOOL)arg4 ;
+(SCD_Struct_AX4*)_calculateLanguageHintsForContent:(id)arg1 ;
+(void)_hypothesesForContent:(id)arg1 withHints:(SCD_Struct_AX4*)arg2 guesses:(SCD_Struct_AX4*)arg3 ;
+(void*)_taggerForContent:(id)arg1 tagScheme:(id)arg2 ;
+(id)_createTagForContent:(id)arg1 tokenRange:(NSRange)arg2 document:(id)arg3 createdFromNewline:(BOOL)arg4 ;
+(id)_languageTagForDateIfNecessary:(id)arg1 ;
+(id)_dialectWithHighestProbability:(SCD_Struct_AX4*)arg1 ;
+(id)_secondaryDialects:(SCD_Struct_AX4*)arg1 ;
+(float)_systemLanguageProbabilityForContent:(id)arg1 ;
+(void*)_tokenTaggerForContent:(id)arg1 ;
+(NSRange)_extendRange:(NSRange)arg1 forContent:(id)arg2 withRange:(NSRange)arg3 ;
+(id)markupLanguageTagForAttributedString:(id)arg1 ;
+(void*)_languageTaggerForContent:(id)arg1 ;
@end

