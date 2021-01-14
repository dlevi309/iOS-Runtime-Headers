/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASLanguageDetection : NSObject
+(id)languageForLocaleIdentifier:(id)arg1 ;
+(id)detectLanguageFromTextWithMaxLength:(id)arg1 maxLength:(unsigned long long)arg2 minimumProbability:(double)arg3 ;
+(id)detectLanguageFromTextIfMultilingual:(id)arg1 ;
+(SCD_Struct_PA2*)_hintsForLanguageIds:(id)arg1 totalProbability:(float)arg2 ;
+(id)languageStringForLanguageId:(int)arg1 ;
+(id)detectLanguageFromTextHeuristicallyWithLanguages:(id)arg1 languages:(id)arg2 defaultLanguage:(id)arg3 ;
+(id)_dominantLanguageTagFromTextWithMaxLength:(id)arg1 maxLength:(unsigned long long)arg2 minimumProbability:(double)arg3 ;
+(id)detectLanguageFromText:(id)arg1 ;
+(id)dominantLanguageTagFromLanguageTags:(id)arg1 ;
+(id)detectLanguageFromTextHeuristically:(id)arg1 ;
+(BOOL)_userIsMultilingual;
+(id)dominantLanguageTagFromText:(id)arg1 ;
+(id)defaultLanguage;
+(id)userLanguagesWithKeyboardDefaults:(id)arg1 ;
+(id)_dominantLanguageTagFromTextWithMaxLength:(id)arg1 maxLength:(unsigned long long)arg2 minimumProbability:(double)arg3 hints:(SCD_Struct_PA2*)arg4 hintsCount:(unsigned long long)arg5 ;
+(int)_languageIdForLanguageString:(id)arg1 ;
+(id)detectLanguageFromLanguageTags:(id)arg1 ;
+(id)dominantLanguageTagFromLanguageTags:(id)arg1 minimumCount:(unsigned long long)arg2 minimumAgreement:(double)arg3 ;
+(id)userLanguages;
@end

