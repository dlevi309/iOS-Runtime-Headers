/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIKeyboardBehaviors, TIKeyboardCandidate, NSString, TIKeyEventMap, TICharacterSetDescription;

@interface TIKeyboardInputManagerState : NSObject <NSCopying, NSSecureCoding> {

	TIKeyboardBehaviors* _keyboardBehaviors;
	SCD_Union_TI7 _mask;
	BOOL _shouldAddModifierSymbolsToWordCharacters;
	TIKeyboardCandidate* _autocorrectionRecordForInputString;
	NSString* _wordSeparator;
	unsigned long long _inputCount;
	unsigned long long _inputIndex;
	NSString* _inputString;
	TIKeyEventMap* _keyEventMap;
	NSString* _replacementForDoubleSpace;
	NSString* _shadowTyping;
	unsigned long long _initialCandidateBatchCount;
	TICharacterSetDescription* _wordCharacters;
	TICharacterSetDescription* _shortcutCompletions;
	TICharacterSetDescription* _inputsPreventingAcceptSelectedCandidate;
	TICharacterSetDescription* _inputsToReject;
	TICharacterSetDescription* _terminatorsPreventingAutocorrection;
	TICharacterSetDescription* _terminatorsDeletingAutospace;
	NSString* _searchStringForMarkedText;

}

@property (assign,nonatomic) BOOL canHandleKeyHitTest; 
@property (assign,nonatomic) BOOL ignoresDeadKeys; 
@property (assign,nonatomic) BOOL shouldExtendPriorWord; 
@property (assign,nonatomic) BOOL suppliesCompletions; 
@property (assign,nonatomic) BOOL supportsSetPhraseBoundary; 
@property (assign,nonatomic) BOOL suppressCompletionsForFieldEditor; 
@property (assign,nonatomic) BOOL usesAutoDeleteWord; 
@property (assign,nonatomic) BOOL usesCandidateSelection; 
@property (assign,nonatomic) BOOL usesAutocorrectionLists; 
@property (assign,nonatomic) BOOL commitsAcceptedCandidate; 
@property (assign,nonatomic) BOOL newInputAcceptsUserSelectedCandidate; 
@property (assign,nonatomic) unsigned long long autoquoteType; 
@property (assign,nonatomic) BOOL usesContinuousPath; 
@property (assign,nonatomic) BOOL usesContinuousPathProgressiveCandidates; 
@property (assign,nonatomic) BOOL insertsSpaceAfterPredictiveInput; 
@property (assign,nonatomic) BOOL shouldFixupIncompleteRomaji; 
@property (nonatomic,copy) NSString * replacementForDoubleSpace;                                             //@synthesize replacementForDoubleSpace=_replacementForDoubleSpace - In the implementation block
@property (nonatomic,copy) NSString * wordSeparator;                                                         //@synthesize wordSeparator=_wordSeparator - In the implementation block
@property (assign,nonatomic) unsigned long long initialCandidateBatchCount;                                  //@synthesize initialCandidateBatchCount=_initialCandidateBatchCount - In the implementation block
@property (nonatomic,retain) TIKeyboardBehaviors * keyboardBehaviors;                                        //@synthesize keyboardBehaviors=_keyboardBehaviors - In the implementation block
@property (assign,nonatomic) BOOL shouldAddModifierSymbolsToWordCharacters;                                  //@synthesize shouldAddModifierSymbolsToWordCharacters=_shouldAddModifierSymbolsToWordCharacters - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * wordCharacters;                                       //@synthesize wordCharacters=_wordCharacters - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * shortcutCompletions;                                  //@synthesize shortcutCompletions=_shortcutCompletions - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * inputsPreventingAcceptSelectedCandidate;              //@synthesize inputsPreventingAcceptSelectedCandidate=_inputsPreventingAcceptSelectedCandidate - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * inputsToReject;                                       //@synthesize inputsToReject=_inputsToReject - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * terminatorsPreventingAutocorrection;                  //@synthesize terminatorsPreventingAutocorrection=_terminatorsPreventingAutocorrection - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * terminatorsDeletingAutospace;                         //@synthesize terminatorsDeletingAutospace=_terminatorsDeletingAutospace - In the implementation block
@property (nonatomic,copy) NSString * inputString;                                                           //@synthesize inputString=_inputString - In the implementation block
@property (assign,nonatomic) unsigned long long inputIndex;                                                  //@synthesize inputIndex=_inputIndex - In the implementation block
@property (assign,nonatomic) unsigned long long inputCount;                                                  //@synthesize inputCount=_inputCount - In the implementation block
@property (assign,nonatomic) BOOL nextInputWouldStartSentence; 
@property (assign,nonatomic) BOOL inputStringIsExemptFromChecker; 
@property (assign,nonatomic) BOOL suppressPlaceholderCandidate; 
@property (assign,nonatomic) BOOL supportsNumberKeySelection; 
@property (assign,nonatomic) BOOL usesPunctuationKeysForRowNavigation; 
@property (nonatomic,retain) TIKeyboardCandidate * autocorrectionRecordForInputString;                       //@synthesize autocorrectionRecordForInputString=_autocorrectionRecordForInputString - In the implementation block
@property (nonatomic,copy) NSString * shadowTyping;                                                          //@synthesize shadowTyping=_shadowTyping - In the implementation block
@property (nonatomic,copy) NSString * searchStringForMarkedText;                                             //@synthesize searchStringForMarkedText=_searchStringForMarkedText - In the implementation block
@property (nonatomic,retain) TIKeyEventMap * keyEventMap;                                                    //@synthesize keyEventMap=_keyEventMap - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)inputCount;
-(void)setInputCount:(unsigned long long)arg1 ;
-(BOOL)usesContinuousPath;
-(TIKeyboardBehaviors *)keyboardBehaviors;
-(BOOL)supportsNumberKeySelection;
-(BOOL)usesCandidateSelection;
-(void)setUsesCandidateSelection:(BOOL)arg1 ;
-(BOOL)canHandleKeyHitTest;
-(BOOL)acceptInputString:(id)arg1 ;
-(BOOL)usesContinuousPathProgressiveCandidates;
-(BOOL)usesLiveConversion;
-(BOOL)delayedCandidateList;
-(NSString *)searchStringForMarkedText;
-(NSString *)inputString;
-(BOOL)usesAutoDeleteWord;
-(BOOL)supportsSetPhraseBoundary;
-(TIKeyEventMap *)keyEventMap;
-(void)setSearchStringForMarkedText:(NSString *)arg1 ;
-(BOOL)suppressPlaceholderCandidate;
-(BOOL)shouldExtendPriorWord;
-(BOOL)usesAutocorrectionLists;
-(BOOL)nextInputWouldStartSentence;
-(unsigned long long)autoquoteType;
-(BOOL)suppressCompletionsForFieldEditor;
-(BOOL)suppliesCompletions;
-(BOOL)usesPunctuationKeysForRowNavigation;
-(BOOL)shouldDeleteAutospaceBeforeTerminator:(id)arg1 ;
-(BOOL)shouldSuppressAutocorrectionWithTerminator:(id)arg1 ;
-(BOOL)newInputAcceptsUserSelectedCandidate;
-(BOOL)inputStringAcceptsCurrentCandidateIfSelected:(id)arg1 ;
-(BOOL)stringEndsWord:(id)arg1 ;
-(BOOL)inputStringIsExemptFromChecker;
-(NSString *)wordSeparator;
-(NSString *)replacementForDoubleSpace;
-(unsigned long long)inputIndex;
-(NSString *)shadowTyping;
-(BOOL)insertsSpaceAfterPredictiveInput;
-(BOOL)commitsAcceptedCandidate;
-(BOOL)shouldFixupIncompleteRomaji;
-(TIKeyboardCandidate *)autocorrectionRecordForInputString;
-(unsigned long long)initialCandidateBatchCount;
-(BOOL)ignoresDeadKeys;
-(void)setCanHandleKeyHitTest:(BOOL)arg1 ;
-(void)setCommitsAcceptedCandidate:(BOOL)arg1 ;
-(void)setNewInputAcceptsUserSelectedCandidate:(BOOL)arg1 ;
-(void)setIgnoresDeadKeys:(BOOL)arg1 ;
-(void)setInputStringIsExemptFromChecker:(BOOL)arg1 ;
-(void)setNextInputWouldStartSentence:(BOOL)arg1 ;
-(void)setShouldExtendPriorWord:(BOOL)arg1 ;
-(void)setSuppliesCompletions:(BOOL)arg1 ;
-(void)setSupportsNumberKeySelection:(BOOL)arg1 ;
-(void)setUsesPunctuationKeysForRowNavigation:(BOOL)arg1 ;
-(void)setSupportsSetPhraseBoundary:(BOOL)arg1 ;
-(void)setSuppressCompletionsForFieldEditor:(BOOL)arg1 ;
-(void)setUsesAutoDeleteWord:(BOOL)arg1 ;
-(void)setUsesAutocorrectionLists:(BOOL)arg1 ;
-(void)setSuppressPlaceholderCandidate:(BOOL)arg1 ;
-(void)setAutoquoteType:(unsigned long long)arg1 ;
-(void)setUsesContinuousPath:(BOOL)arg1 ;
-(void)setUsesLiveConversion:(BOOL)arg1 ;
-(void)setDelayedCandidateList:(BOOL)arg1 ;
-(void)setUsesContinuousPathProgressiveCandidates:(BOOL)arg1 ;
-(void)setInsertsSpaceAfterPredictiveInput:(BOOL)arg1 ;
-(void)setShouldFixupIncompleteRomaji:(BOOL)arg1 ;
-(void)setAutocorrectionRecordForInputString:(TIKeyboardCandidate *)arg1 ;
-(void)setWordSeparator:(NSString *)arg1 ;
-(void)setInputIndex:(unsigned long long)arg1 ;
-(void)setInputString:(NSString *)arg1 ;
-(void)setKeyboardBehaviors:(TIKeyboardBehaviors *)arg1 ;
-(void)setKeyEventMap:(TIKeyEventMap *)arg1 ;
-(void)setReplacementForDoubleSpace:(NSString *)arg1 ;
-(void)setShadowTyping:(NSString *)arg1 ;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(void)setShouldAddModifierSymbolsToWordCharacters:(BOOL)arg1 ;
-(void)setInitialCandidateBatchCount:(unsigned long long)arg1 ;
-(TICharacterSetDescription *)wordCharacters;
-(void)setWordCharacters:(TICharacterSetDescription *)arg1 ;
-(TICharacterSetDescription *)shortcutCompletions;
-(void)setShortcutCompletions:(TICharacterSetDescription *)arg1 ;
-(TICharacterSetDescription *)inputsPreventingAcceptSelectedCandidate;
-(void)setInputsPreventingAcceptSelectedCandidate:(TICharacterSetDescription *)arg1 ;
-(TICharacterSetDescription *)inputsToReject;
-(void)setInputsToReject:(TICharacterSetDescription *)arg1 ;
-(TICharacterSetDescription *)terminatorsPreventingAutocorrection;
-(void)setTerminatorsPreventingAutocorrection:(TICharacterSetDescription *)arg1 ;
-(TICharacterSetDescription *)terminatorsDeletingAutospace;
-(void)setTerminatorsDeletingAutospace:(TICharacterSetDescription *)arg1 ;
@end

