/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(unsigned long long)numberOfMatchesForRegex:(id)arg1 inString:(id)arg2 needsToLowercase:(BOOL)arg3 ;
+(id)firstMatchingKeywordForRegex:(id)arg1 inString:(id)arg2 needsToLowercase:(BOOL)arg3 ;
@end

