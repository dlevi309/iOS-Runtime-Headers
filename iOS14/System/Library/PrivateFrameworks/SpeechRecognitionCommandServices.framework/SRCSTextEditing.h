/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices
*/


@protocol SRCSTextEditingProviderProtocol;
#import <SpeechRecognitionCommandServices/SpeechRecognitionCommandServices-Structs.h>
@interface SRCSTextEditing : NSObject {

	id<SRCSTextEditingProviderProtocol> _provider;
	double _delayAfterSelectionBeforeExecutingAction;

}

@property (__weak) id<SRCSTextEditingProviderProtocol> provider;                 //@synthesize provider=_provider - In the implementation block
@property (assign) double delayAfterSelectionBeforeExecutingAction;              //@synthesize delayAfterSelectionBeforeExecutingAction=_delayAfterSelectionBeforeExecutingAction - In the implementation block
+(id)wordsFromString:(id)arg1 ;
+(long long)doesArrayOfWords:(id)arg1 containArrayOfArrayWords:(id)arg2 ;
-(void)selectAll;
-(void)setProvider:(id<SRCSTextEditingProviderProtocol>)arg1 ;
-(id)init;
-(id<SRCSTextEditingProviderProtocol>)provider;
-(void)unselect;
-(void)deleteAll;
-(void)deleteSelection;
-(void)setDelayAfterSelectionBeforeExecutingAction:(double)arg1 ;
-(id)markerRangeForEnumerationType:(long long)arg1 desiredBlock:(int)arg2 count:(unsigned long long)arg3 options:(int)arg4 ;
-(id)actOnStrings:(id)arg1 ambiguityResolution:(id)arg2 substringSearchGranularity:(int)arg3 alwaysCallActionOnClosestMatch:(BOOL)arg4 options:(id)arg5 actionBlock:(/*^block*/id)arg6 ;
-(void)selectCurrentWord;
-(void)selectCurrentCharacter;
-(void)selectPreviousCharacterWithCount:(long long)arg1 ;
-(void)selectNextCharacterWithCount:(long long)arg1 ;
-(void)selectPreviousWordWithCount:(long long)arg1 ;
-(void)selectNextWordWithCount:(long long)arg1 ;
-(void)selectCurrentSentence;
-(void)selectPreviousSentenceWithCount:(long long)arg1 ;
-(void)selectNextSentenceWithCount:(long long)arg1 ;
-(void)selectCurrentParagraph;
-(void)selectPreviousParagraphWithCount:(long long)arg1 ;
-(void)selectNextParagraphWithCount:(long long)arg1 ;
-(void)selectCurrentLine;
-(void)selectPreviousLineWithCount:(long long)arg1 ;
-(void)selectNextLineWithCount:(long long)arg1 ;
-(void)extendSelectionToEnd;
-(void)extendSelectionToBeginning;
-(void)extendSelectionForwardCharactersWithCount:(long long)arg1 ;
-(void)extendSelectionBackwardCharactersWithCount:(long long)arg1 ;
-(void)extendSelectionForwardWordsWithCount:(long long)arg1 ;
-(void)extendSelectionBackwardWordsWithCount:(long long)arg1 ;
-(void)extendSelectionForwardSentencesWithCount:(long long)arg1 ;
-(void)extendSelectionBackwardSentencesWithCount:(long long)arg1 ;
-(void)extendSelectionForwardParagraphsWithCount:(long long)arg1 ;
-(void)extendSelectionBackwardParagraphsWithCount:(long long)arg1 ;
-(void)extendSelectionForwardLinesWithCount:(long long)arg1 ;
-(void)extendSelectionBackwardLinesWithCount:(long long)arg1 ;
-(void)selectFromPhraseVariants:(id)arg1 insertionString:(id)arg2 recognizedParameters:(id)arg3 commandIdentifer:(id)arg4 ;
-(void)selectFromPhraseVariants:(id)arg1 throughPhraseVariants:(id)arg2 recognizedParameters:(id)arg3 commandIdentifer:(id)arg4 ;
-(void)moveToStartOfSelection;
-(void)moveToEndOfSelection;
-(void)moveToStartOfWordWithCount:(long long)arg1 ;
-(void)moveToEndOfWordWithCount:(long long)arg1 ;
-(void)moveToStartOfSentenceWithCount:(long long)arg1 ;
-(void)moveToEndOfSentenceWithCount:(long long)arg1 ;
-(void)moveToStartOfParagraphWithCount:(long long)arg1 ;
-(void)moveToEndOfParagraphWithCount:(long long)arg1 ;
-(void)moveToStartOfLineWithCount:(long long)arg1 ;
-(void)moveToEndOfLineWithCount:(long long)arg1 ;
-(void)moveToStartOfTextArea;
-(void)moveToEndOfTextArea;
-(void)moveForwardCharactersWithCount:(long long)arg1 ;
-(void)moveBackwardCharactersWithCount:(long long)arg1 ;
-(void)moveForwardWordsWithCount:(long long)arg1 ;
-(void)moveBackwardWordsWithCount:(long long)arg1 ;
-(void)moveForwardSentencesWithCount:(long long)arg1 ;
-(void)moveBackwardSentencesWithCount:(long long)arg1 ;
-(void)moveForwardParagraphsWithCount:(long long)arg1 ;
-(void)moveBackwardParagraphsWithCount:(long long)arg1 ;
-(void)moveForwardLinesWithCount:(long long)arg1 ;
-(void)moveBackwardLinesWithCount:(long long)arg1 ;
-(void)deletePreviousCharacterWithCount:(long long)arg1 ;
-(void)deleteNextCharacterWithCount:(long long)arg1 ;
-(void)deleteCurrentWord;
-(void)deletePreviousWordWithCount:(long long)arg1 ;
-(void)deleteNextWordWithCount:(long long)arg1 ;
-(void)deleteCurrentSentence;
-(void)deletePreviousSentenceWithCount:(long long)arg1 ;
-(void)deleteNextSentenceWithCount:(long long)arg1 ;
-(void)deleteCurrentParagraph;
-(void)deletePreviousParagraphWithCount:(long long)arg1 ;
-(void)deleteNextParagraphWithCount:(long long)arg1 ;
-(void)deleteCurrentLine;
-(void)deletePreviousLineWithCount:(long long)arg1 ;
-(void)deleteNextLineWithCount:(long long)arg1 ;
-(void)applyFormatWithCommandIdentifier:(id)arg1 ;
-(void)pasteboardPaste;
-(void)pasteboardCopy;
-(void)pasteboardCut;
-(void)correctSelection;
-(id)_strippedPhraseStringsFromStrings:(id)arg1 ;
-(id)_prunedStringsFromCandidateStrings:(id)arg1 ;
-(double)delayAfterSelectionBeforeExecutingAction;
-(id)_capitalizedStringFromString:(id)arg1 ;
-(id)orderedPhraseMatchesFromStrings:(id)arg1 forwardDirection:(BOOL)arg2 referenceLocation:(long long)arg3 substringSearchGranularity:(int)arg4 ;
-(long long)_indexOfFirstPhraseMatchResultPairBeforeInsertion:(BOOL)arg1 fromArray:(id)arg2 ;
-(void)selectFromPhraseVariants:(id)arg1 insertionString:(id)arg2 commandIdentifer:(id)arg3 ;
-(void)selectFromPhraseVariants:(id)arg1 throughPhraseVariants:(id)arg2 commandIdentifer:(id)arg3 ;
-(void)selectPreviousTextInsertion;
-(NSRange)_rangeOfWordBasedSearchString:(id)arg1 inString:(id)arg2 withRange:(NSRange)arg3 forwardSearchDirection:(BOOL)arg4 ;
-(BOOL)_range:(NSRange)arg1 includesRange:(NSRange)arg2 ;
-(id)visiblePhraseMatchesFromStrings:(id)arg1 substringSearchGranularity:(int)arg2 ;
-(NSRange)rangeOfStrings:(id)arg1 referenceRange:(NSRange)arg2 ambiguityResolution:(id)arg3 substringSearchGranularity:(int)arg4 foundStringRef:(id*)arg5 ;
-(id)markerRangeForLineInDesiredBlock:(int)arg1 count:(unsigned long long)arg2 options:(int)arg3 ;
-(NSRange)_findRangeForEnumerationType:(long long)arg1 atRelativeIncrement:(long long)arg2 fromPosition:(id)arg3 options:(unsigned long long)arg4 ;
@end
