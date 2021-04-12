/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class NSArray, NSString;

@interface NSLinguisticTagger : NSObject {

	NSArray* _schemes;
	unsigned long long _options;
	NSString* _string;
	id _orthographyArray;
	id _tokenArray;
	void* _reserved;

}

@property (copy,readonly) NSArray * tagSchemes; 
@property (retain) NSString * string; 
@property (copy,readonly) NSString * dominantLanguage; 
+(void)enumerateTagsForString:(id)arg1 range:(NSRange)arg2 unit:(long long)arg3 scheme:(id)arg4 options:(unsigned long long)arg5 orthography:(id)arg6 usingBlock:(/*^block*/id)arg7 ;
+(id)tagsForString:(id)arg1 range:(NSRange)arg2 unit:(long long)arg3 scheme:(id)arg4 options:(unsigned long long)arg5 orthography:(id)arg6 tokenRanges:(id*)arg7 ;
+(id)tagForString:(id)arg1 atIndex:(unsigned long long)arg2 unit:(long long)arg3 scheme:(id)arg4 orthography:(id)arg5 tokenRange:(NSRange*)arg6 ;
+(id)availableTagSchemesForUnit:(long long)arg1 language:(id)arg2 ;
+(id)dominantLanguageForString:(id)arg1 ;
+(id)availableTagSchemesForLanguage:(id)arg1 ;
+(BOOL)supportsLanguage:(id)arg1 ;
-(id)_tokenDataForParagraphAtIndex:(unsigned long long)arg1 paragraphRange:(NSRange*)arg2 requireLemmas:(BOOL)arg3 requirePartsOfSpeech:(BOOL)arg4 requireNamedEntities:(BOOL)arg5 ;
-(id)_tokenDataForParagraphRange:(NSRange)arg1 requireLemmas:(BOOL)arg2 requirePartsOfSpeech:(BOOL)arg3 requireNamedEntities:(BOOL)arg4 ;
-(void)_tokenizeParagraphAtIndex:(unsigned long long)arg1 requireLemmas:(BOOL)arg2 requirePartsOfSpeech:(BOOL)arg3 requireNamedEntities:(BOOL)arg4 ;
-(BOOL)_acceptSentenceTerminatorRange:(NSRange)arg1 paragraphRange:(NSRange)arg2 tokens:(NSLTToken*)arg3 count:(unsigned long long)arg4 tokenIndex:(unsigned long long)arg5 ;
-(id)possibleTagsAtIndex:(unsigned long long)arg1 scheme:(id)arg2 tokenRange:(NSRange*)arg3 sentenceRange:(NSRange*)arg4 scores:(id*)arg5 ;
-(id)_tokenDataForParagraphAtIndex:(unsigned long long)arg1 paragraphRange:(NSRange*)arg2 tagScheme:(id)arg3 ;
-(NSString *)dominantLanguage;
-(void)_analyzePunctuationTokensInRange:(NSRange)arg1 paragraphRange:(NSRange)arg2 ;
-(void)_enumerateTagsInRange:(NSRange)arg1 scheme:(id)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)_analyzeTokensInInterwordRange:(NSRange)arg1 paragraphRange:(NSRange)arg2 ;
-(void)_analyzeTokensInWordRange:(NSRange)arg1 paragraphRange:(NSRange)arg2 ;
-(void)enumerateTagsInRange:(NSRange)arg1 scheme:(id)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)_tagAtIndex:(unsigned long long)arg1 scheme:(id)arg2 tokenRange:(NSRange*)arg3 sentenceRange:(NSRange*)arg4 ;
-(void)_calculateSentenceRangesForParagraphRange:(NSRange)arg1 ;
-(id)tagAtIndex:(unsigned long long)arg1 scheme:(id)arg2 tokenRange:(NSRange*)arg3 sentenceRange:(NSRange*)arg4 ;
-(id)tagsInRange:(NSRange)arg1 scheme:(id)arg2 options:(unsigned long long)arg3 tokenRanges:(id*)arg4 ;
-(void)_detectOrthographyIfNeededAtIndex:(unsigned long long)arg1 ;
-(id)orthographyAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)_acceptSentencesForParagraphRange:(NSRange)arg1 ;
-(id)initWithTagSchemes:(id)arg1 options:(unsigned long long)arg2 ;
-(id)description;
-(id)_tagSchemeForScheme:(id)arg1 ;
-(void)_nativeSetOrthography:(id)arg1 range:(NSRange)arg2 ;
-(void)_setOrthography:(id)arg1 range:(NSRange)arg2 ;
-(NSRange)tokenRangeAtIndex:(unsigned long long)arg1 unit:(long long)arg2 ;
-(void)stringEditedInRange:(NSRange)arg1 changeInLength:(long long)arg2 ;
-(NSString *)string;
-(NSRange)_sentenceRangeForRange:(NSRange)arg1 ;
-(NSRange)sentenceRangeForRange:(NSRange)arg1 ;
-(NSArray *)tagSchemes;
-(void)setOrthography:(id)arg1 range:(NSRange)arg2 ;
-(id)tagsInRange:(NSRange)arg1 unit:(long long)arg2 scheme:(id)arg3 options:(unsigned long long)arg4 tokenRanges:(id*)arg5 ;
-(id)tagAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 tokenRange:(NSRange*)arg4 ;
-(void)setString:(NSString *)arg1 ;
-(void)enumerateTagsInRange:(NSRange)arg1 unit:(long long)arg2 scheme:(id)arg3 options:(unsigned long long)arg4 usingBlock:(/*^block*/id)arg5 ;
-(void)dealloc;
@end

