/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


#import <CoreSuggestionsML/CoreSuggestionsML-Structs.h>
@interface SGLanguageDetection : NSObject
+(id)languageForLocaleIdentifier:(id)arg1 ;
+(id)languageTagsFromText:(id)arg1 withMaxLength:(unsigned long long)arg2 withMaxTags:(unsigned long long)arg3 ;
+(NSRange)tokenRangeForText:(id)arg1 maxTruncatedLength:(unsigned long long)arg2 tagger:(id)arg3 taggerOptions:(unsigned long long)arg4 prevTextTokenMaxRange:(unsigned long long)arg5 originalLengthShortfall:(unsigned long long)arg6 lowercaseText:(id)arg7 lowercaseRange:(NSRange)arg8 ;
+(id)detectLanguageFromText:(id)arg1 ;
+(id)detectLanguageFromText:(id)arg1 withMaxLength:(unsigned long long)arg2 withMaxTags:(unsigned long long)arg3 withMinimumCount:(unsigned long long)arg4 withMinimumAgreement:(double)arg5 ;
+(id)dominantLanguageTagFromLanguageTags:(id)arg1 ;
+(id)dominantLanguageTagFromText:(id)arg1 ;
+(void)logMatchingForRange:(NSRange)arg1 lowercaseRange:(NSRange)arg2 text:(id)arg3 lowercaseText:(id)arg4 ;
+(id)defaultLanguage;
+(id)dominantLanguageTagFromText:(id)arg1 withMaxLength:(unsigned long long)arg2 withMaxTags:(unsigned long long)arg3 withMinimumCount:(unsigned long long)arg4 withMinimumAgreement:(double)arg5 ;
+(id)detectLanguageFromLanguageTags:(id)arg1 withMinimumCount:(unsigned long long)arg2 withMinimumAgreement:(double)arg3 ;
+(id)dominantLanguageTagFromLanguageTags:(id)arg1 withMinimumCount:(unsigned long long)arg2 withMinimumAgreement:(double)arg3 ;
+(id)detectLanguageFromLanguageTags:(id)arg1 ;
@end

