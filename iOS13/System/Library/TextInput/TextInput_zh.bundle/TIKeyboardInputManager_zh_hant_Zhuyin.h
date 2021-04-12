/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
*/

#import <TextInput_zh/TextInput_zh-Structs.h>
#import <TextInputChinese/TIKeyboardInputManagerChinesePhonetic.h>

@interface TIKeyboardInputManager_zh_hant_Zhuyin : TIKeyboardInputManagerChinesePhonetic {

	BOOL _liveConversionForceEnabled;
	BOOL _dynamic;
	BOOL _assertDefaultKeyPlane;

}

@property (assign,getter=isDynamic,nonatomic) BOOL dynamic;                                          //@synthesize dynamic=_dynamic - In the implementation block
@property (assign,getter=isAssertDefaultKeyPlane,nonatomic) BOOL assertDefaultKeyPlane;              //@synthesize assertDefaultKeyPlane=_assertDefaultKeyPlane - In the implementation block
@property (assign,nonatomic) BOOL liveConversionForceEnabled;                                        //@synthesize liveConversionForceEnabled=_liveConversionForceEnabled - In the implementation block
-(BOOL)isDynamic;
-(void)setDynamic:(BOOL)arg1 ;
-(BOOL)liveConversionEnabled;
-(id)keyboardBehaviors;
-(BOOL)supportsNumberKeySelection;
-(BOOL)acceptInputString:(id)arg1 ;
-(BOOL)usesLiveConversion;
-(BOOL)delayedCandidateList;
-(id)keyEventMap;
-(unsigned long long)initialSelectedIndex;
-(void)setAssertDefaultKeyPlane:(BOOL)arg1 ;
-(id)inputsToReject;
-(id)validCharacterSetForAutocorrection;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3 ;
-(id)handleKeyboardInput:(id)arg1 ;
-(BOOL)supportsCandidateGeneration;
-(void)commitComposition;
-(void)syncToLayoutState:(id)arg1 ;
-(id)keyboardConfigurationLayoutTag;
-(BOOL)keyboardConfigurationAssertDefaultKeyPlane;
-(id)didAcceptCandidate:(id)arg1 ;
-(TIInputManager*)initImplementation;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(int)inputMethodType;
-(BOOL)shouldSearchCompletionForSubstrings;
-(BOOL)_shouldCommitInputDirectly:(id)arg1 ;
-(BOOL)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)arg1 ;
-(id)phoneticSortingMethod;
-(id)composedTextForSelectedCandidate:(id)arg1 remainingInput:(id)arg2 ;
-(BOOL)isLiveConversion;
-(BOOL)liveConversionForceEnabled;
-(void)setLiveConversionForceEnabled:(BOOL)arg1 ;
-(BOOL)isAssertDefaultKeyPlane;
-(BOOL)shouldInsertFirstToneMark;
@end

