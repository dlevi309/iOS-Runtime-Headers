/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString, NSArray;

@interface UITextChecker : NSObject {

	id _reserved;
	long long _usdt;
	NSString* _checkerWarmingLanguage;

}

@property (nonatomic,retain) NSArray * ignoredWords; 
+(id)openUserDictionary:(id)arg1 ;
+(void)_setWords:(id)arg1 inDictionary:(id)arg2 ;
+(long long)uniqueSpellDocumentTag;
+(id)_wordsInDictionary:(id)arg1 ;
+(BOOL)hasLearnedWord:(id)arg1 ;
+(id)_dictionaryEntryForName:(id)arg1 ;
+(void)setString:(id)arg1 isExemptFromChecker:(BOOL)arg2 ;
+(id)availableLanguages;
+(void)learnWord:(id)arg1 ;
+(BOOL)_learnWord:(id)arg1 inDictionary:(id)arg2 ;
+(id)bestLanguageForString:(id)arg1 fromAlternatives:(id)arg2 currentLanguage:(id)arg3 ;
+(BOOL)_isWord:(id)arg1 inDictionary:(id)arg2 ;
+(BOOL)_forgetWord:(id)arg1 inDictionary:(id)arg2 ;
+(CFSetRef)createDictHashTable:(BOOL)arg1 ;
+(id)bestLanguageForString:(id)arg1 fromAlternatives:(id)arg2 currentLanguage:(id)arg3 insertionPointIndex:(unsigned long long)arg4 scriptForBestLanguage:(id*)arg5 ;
+(void)unlearnWord:(id)arg1 ;
+(void)_setDictionaryEntry:(id)arg1 forName:(id)arg2 ;
+(id)dictionaryInfo:(id)arg1 ;
-(NSRange)rangeOfMisspelledWordInString:(id)arg1 range:(NSRange)arg2 startingAt:(long long)arg3 wrap:(BOOL)arg4 language:(id)arg5 ;
-(void)_setLanguageDictionaryName:(id)arg1 ;
-(id)init;
-(NSArray *)ignoredWords;
-(id)_initWithAsynchronousLoading:(BOOL)arg1 ;
-(BOOL)canChangeCaseOfFirstLetterInString:(id)arg1 toUpperCase:(BOOL)arg2 language:(id)arg3 ;
-(void)releaseAllLexicons;
-(id)_checker;
-(id)suggestWordInLanguage:(id)arg1 ;
-(void)_setDocumentDictionaryName:(id)arg1 ;
-(NSRange)_chunkAndCheckGrammarInString:(id)arg1 language:(id)arg2 usingChecker:(id)arg3 details:(id*)arg4 ;
-(NSRange)_chunkAndFindMisspelledWordInString:(id)arg1 languages:(id)arg2 learnedDictionaries:(id)arg3 wordCount:(long long*)arg4 correction:(id*)arg5 usingChecker:(id)arg6 ;
-(BOOL)isWordInUserDictionaries:(id)arg1 caseSensitive:(BOOL)arg2 ;
-(id)guessesForWordRange:(NSRange)arg1 inString:(id)arg2 language:(id)arg3 ;
-(NSRange)checkGrammarOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(BOOL)arg4 details:(id*)arg5 ;
-(id)_nameOfDictionaryForDocumentTag:(long long)arg1 ;
-(BOOL)_doneLoading;
-(id)completionsForPartialWordRange:(NSRange)arg1 inString:(id)arg2 language:(id)arg3 ;
-(id)alternativesForPinyinInputString:(id)arg1 ;
-(id)correctionForWordRange:(NSRange)arg1 inString:(id)arg2 language:(id)arg3 ;
-(NSRange)checkSpellingOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(BOOL)arg4 correction:(id*)arg5 ;
-(NSRange)rangeOfMisspelledWordInString:(id)arg1 range:(NSRange)arg2 startingAt:(long long)arg3 wrap:(BOOL)arg4 languages:(id)arg5 ;
-(void)ignoreWord:(id)arg1 ;
-(void)setIgnoredWords:(NSArray *)arg1 ;
-(void)resetAllLanguageModels;
-(long long)adjustOffsetToNextWordBoundaryInString:(id)arg1 startingAt:(long long)arg2 ;
-(void)initGlobals;
-(void)initUserDictionaries;
-(NSRange)checkSpellingOfString:(id)arg1 startingAt:(long long)arg2 languages:(id)arg3 wrap:(BOOL)arg4 correction:(id*)arg5 ;
-(void)dealloc;
-(id)stringForInputString:(id)arg1 language:(id)arg2 ;
@end

