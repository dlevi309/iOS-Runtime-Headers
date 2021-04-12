/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


#import <CoreSuggestionsML/CoreSuggestionsML-Structs.h>
@interface SGLanguageDetection : NSObject
+(id)dominantLanguageTagFromText:(id)arg1 ;
+(id)languageForLocaleIdentifier:(id)arg1 ;
+(id)detectLanguageFromText:(id)arg1 ;
+(id)detectLanguageFromLanguageTags:(id)arg1 ;
+(id)_defaultLanguage;
+(id)detectLanguageFromText:(id)arg1 withMaxLength:(unsigned long long)arg2 withMaxTags:(unsigned long long)arg3 withMinimumCount:(unsigned long long)arg4 withMinimumAgreement:(double)arg5 ;
+(id)detectLanguageFromLanguageTags:(id)arg1 withMinimumCount:(unsigned long long)arg2 withMinimumAgreement:(double)arg3 ;
+(id)dominantLanguageTagFromText:(id)arg1 withMaxLength:(unsigned long long)arg2 withMaxTags:(unsigned long long)arg3 withMinimumCount:(unsigned long long)arg4 withMinimumAgreement:(double)arg5 ;
+(id)dominantLanguageTagFromLanguageTags:(id)arg1 ;
+(id)dominantLanguageTagFromLanguageTags:(id)arg1 withMinimumCount:(unsigned long long)arg2 withMinimumAgreement:(double)arg3 ;
+(id)languageTagsFromText:(id)arg1 withMaxLength:(unsigned long long)arg2 withMaxTags:(unsigned long long)arg3 ;
+(NSRange)tokenRangeForText:(id)arg1 maxTruncatedLength:(unsigned long long)arg2 tagger:(id)arg3 taggerOptions:(unsigned long long)arg4 prevTextTokenMaxRange:(unsigned long long)arg5 originalLengthShortfall:(unsigned long long)arg6 lowercaseText:(id)arg7 lowercaseRange:(NSRange)arg8 ;
+(void)logMatchingForRange:(NSRange)arg1 lowercaseRange:(NSRange)arg2 text:(id)arg3 lowercaseText:(id)arg4 ;
@end

