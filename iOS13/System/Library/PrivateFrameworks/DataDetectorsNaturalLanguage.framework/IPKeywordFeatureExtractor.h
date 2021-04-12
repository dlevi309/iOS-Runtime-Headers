/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
*/

#import <DataDetectorsNaturalLanguage/IPFeatureExtractor.h>

@interface IPKeywordFeatureExtractor : IPFeatureExtractor
-(id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 context:(id)arg3 ;
-(id)matchesForTextString:(id)arg1 inMessageUnit:(id)arg2 eventType:(id)arg3 ;
-(id)matchesForTextString:(id)arg1 inMessageUnit:(id)arg2 eventType:(id)arg3 keywordType:(unsigned long long)arg4 ;
-(id)_matchingKeywordsForRegex:(id)arg1 inText:(id)arg2 message:(id)arg3 eventType:(id)arg4 keywordType:(unsigned long long)arg5 ;
@end

