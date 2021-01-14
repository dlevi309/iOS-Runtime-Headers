/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
*/


#import <DataDetectorsNaturalLanguage/DataDetectorsNaturalLanguage-Structs.h>
@interface IPRegexToolbox : NSObject
+(id)emailSubjectPrefixRegex;
+(id)regexPatternForLanguageID:(id)arg1 eventVocabularyArray:(id)arg2 ;
+(id)regularExpressionWithKey:(id)arg1 generator:(/*^block*/id)arg2 ;
+(id)matchingKeywordResultsForRegex:(id)arg1 inString:(id)arg2 needsToLowercase:(BOOL)arg3 ;
+(BOOL)isRangeInsideQuotationMarks:(NSRange)arg1 text:(id)arg2 limitToSurroundingText:(BOOL)arg3 ;
+(BOOL)isRangeNearbyExclusionKeyword:(NSRange)arg1 text:(id)arg2 limitToSurroundingText:(BOOL)arg3 language:(id)arg4 ;
+(id)regexPatternWithPrefix:(id)arg1 suffix:(id)arg2 choices:(id)arg3 ;
+(id)regexPatternByUncapturingPattern:(id)arg1 ;
+(unsigned long long)numberOfMatchesForRegex:(id)arg1 inString:(id)arg2 needsToLowercase:(BOOL)arg3 ;
+(id)firstMatchingKeywordForRegex:(id)arg1 inString:(id)arg2 needsToLowercase:(BOOL)arg3 ;
@end

