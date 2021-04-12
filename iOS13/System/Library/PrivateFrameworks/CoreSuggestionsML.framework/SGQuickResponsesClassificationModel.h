/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/

#import <CoreSuggestionsML/CoreSuggestionsML-Structs.h>
#import <CoreSuggestionsML/SGQuickResponsesModel.h>

@interface SGQuickResponsesClassificationModel : SGQuickResponsesModel
+(id)newTransformerInstanceForLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3 ;
+(id)newTransformerInstanceForLanguage:(id)arg1 withDictionary:(id)arg2 withSeed:(unsigned long long)arg3 forMode:(unsigned long long)arg4 ;
+(id)featurizerWithMethods:(id)arg1 bucketSize:(unsigned long long)arg2 characterNGramRange:(NSRange)arg3 tokenNGramRange:(NSRange)arg4 ;
+(id)newTransformerInstanceForConfig:(id)arg1 seed:(unsigned long long)arg2 useSeed:(BOOL)arg3 ;
@end

