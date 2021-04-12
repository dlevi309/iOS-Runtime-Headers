/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
*/

#import <TextInput_ja/TextInput_ja-Structs.h>
#import <TextInput_ja/TIKeyboardInputManager_ja.h>

@class NSMutableArray, NSString, TIMathSymbolPunctuationController;

@interface TIKeyboardInputManager_ja_Romaji : TIKeyboardInputManager_ja {

	NSMutableArray* _externalIndexToInternalIndexMappingArray;
	unsigned long long _externalInputIndex;
	NSString* _externalString;
	TIMathSymbolPunctuationController* _mathSymbolPunctuationController;

}
+(Class)wordSearchClass;
-(void)dealloc;
-(unsigned)inputCount;
-(void)clearInput;
-(BOOL)usesCandidateSelection;
-(id)inputString;
-(unsigned)inputIndex;
-(BOOL)shouldFixupIncompleteRomaji;
-(void)updateState;
-(void)setInputIndex:(unsigned)arg1 ;
-(id)wordCharacters;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 ;
-(NSRange)analysisStringRange;
-(id)validCharacterSetForAutocorrection;
-(id)handleKeyboardInput:(id)arg1 ;
-(void)loadDictionaries;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)inputLocationChanged;
-(id)remainingInput;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)checkAutocorrectionDictionaries;
-(id)liveConversionTextInputManager;
-(id)transliterate:(id)arg1 ;
-(unsigned long long)actualInternalInputIndex;
-(id)_convertStringWithBoundary:(unsigned long long)arg1 ;
-(unsigned long long)remainingInputLengthOfCandidate:(id)arg1 ;
-(id)displayString:(id)arg1 ;
@end

