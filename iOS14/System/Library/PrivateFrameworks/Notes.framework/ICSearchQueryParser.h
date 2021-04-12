/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/


#import <Notes/Notes-Structs.h>
@interface ICSearchQueryParser : NSObject
+(id)tokenizer;
+(id)tokensFromString:(id)arg1 language:(id)arg2 ;
+(id)_queryStringForSingleTokenString:(id)arg1 queryFields:(id)arg2 matchType:(unsigned char)arg3 queryFlags:(id)arg4 ;
+(id)spellCheckerGuessesForSearchString:(id)arg1 inRange:(NSRange)arg2 language:(id)arg3 ;
+(id)spellChecker;
+(id)expandedTokensForSearchString:(id)arg1 language:(id)arg2 ;
+(id)queryStringForExpandedTokens:(id)arg1 queryFields:(id)arg2 matchType:(unsigned char)arg3 ;
+(id)queryStringForSearchString:(id)arg1 queryFields:(id)arg2 matchType:(unsigned char)arg3 ;
+(id)prefixMatchingQueryStringForSearchString:(id)arg1 enableSpellCheckSPI:(BOOL)arg2 languageForSpellchecking:(id)arg3 expandedTokens:(id*)arg4 ;
@end

