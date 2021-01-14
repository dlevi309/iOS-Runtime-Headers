/*
* Generated on Thursday, January 14, 2021 at 2:29:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)usesCandidateSelection;
-(id)wordCharacters;
-(unsigned)inputIndex;
-(BOOL)shouldFixupIncompleteRomaji;
-(void)clearInput;
-(void)updateState;
-(void)setInputIndex:(unsigned)arg1 ;
-(id)inputString;
-(unsigned)inputCount;
-(void)loadDictionaries;
-(void)dealloc;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 ;
-(NSRange)analysisStringRange;
-(id)validCharacterSetForAutocorrection;
-(id)handleKeyboardInput:(id)arg1 ;
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
@end

