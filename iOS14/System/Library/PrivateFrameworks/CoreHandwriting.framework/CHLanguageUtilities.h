/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@interface CHLanguageUtilities : NSObject
+(unsigned)normalizeLMTokenIDForWord:(id)arg1 tokenID:(unsigned)arg2 isFromPattern:(BOOL)arg3 score:(double*)arg4 languageModel:(void*)arg5 ;
+(id)tokensRangesForString:(id)arg1 outTokenIDs:(id*)arg2 languageModel:(void*)arg3 ;
+(id)splitStringIntoSubtokensForLexicon:(id)arg1 minLength:(long long)arg2 ;
+(BOOL)findPartialMatchInPhraseLexicon:(LXLexiconRef)arg1 token:(id)arg2 contextBeforeToken:(id)arg3 ;
+(id)transliterateStringUsingICUTransliterator:(id)arg1 _icuTransliterator:(void*)arg2 ;
@end

