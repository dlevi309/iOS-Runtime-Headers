/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


#import <TextInputCore/TextInputCore-Structs.h>
@class NSString, NSMutableDictionary, TIInputMode;

@interface TIKeyboardFeatureSpecialization : NSObject {

	NSString* m_softwareLayout;
	USetRef m_precomposedCharacterSet;
	USetRef m_acceptableCharacterSet;
	NSMutableDictionary* m_compositionMaps;
	NSMutableDictionary* m_reverseCompositionMaps;
	BOOL _useRelaxedOVSPolicy;
	TIInputMode* _inputMode;
	long long _currentUserInterfaceIdiom;

}

@property (nonatomic,readonly) TIInputMode * inputMode;                        //@synthesize inputMode=_inputMode - In the implementation block
@property (assign,nonatomic) long long currentUserInterfaceIdiom;              //@synthesize currentUserInterfaceIdiom=_currentUserInterfaceIdiom - In the implementation block
@property (assign,nonatomic) BOOL useRelaxedOVSPolicy;                         //@synthesize useRelaxedOVSPolicy=_useRelaxedOVSPolicy - In the implementation block
+(id)createSpecializationForInputMode:(id)arg1 ;
+(USetRef)createAcceptableCharacterSetForKeyboardLocale:(id)arg1 ;
-(BOOL)canHandleKeyHitTest;
-(TIInputMode *)inputMode;
-(id)replacementForDoubleSpace;
-(id)wordSeparator;
-(id)terminatorsDeletingAutospace;
-(id)sentencePrefixingCharacters;
-(id)wordCharacters;
-(id)layoutTags;
-(id)initWithInputMode:(id)arg1 ;
-(id)keyboardBehaviors;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(BOOL)shouldConvertAutocorrectionCandidatesToFullWidth;
-(id)nonstopPunctuationCharacters;
-(id)sentenceTrailingCharacters;
-(BOOL)doesComposeText;
-(id)allAccentKeyStrings;
-(id)sentenceDelimitingCharacters;
-(void)dealloc;
-(BOOL)shouldExtendPriorWord;
-(void)setCurrentUserInterfaceIdiom:(long long)arg1 ;
-(void)reloadPrecomposedCharacterSetWithIdiom:(long long)arg1 ;
-(BOOL)supportsLearning;
-(BOOL)shouldLearnLowercaseAtBeginningOfSentence;
-(id)accentKeyStringForKeyboardState:(id)arg1 ;
-(long long)currentUserInterfaceIdiom;
-(BOOL)useRelaxedOVSPolicy;
-(void)setUseRelaxedOVSPolicy:(BOOL)arg1 ;
-(TIInputManager*)createInputManager;
-(id)dictionaryInputMode;
-(USetRef)createAcceptableCharacterSet;
-(void)specializeInputManager:(TIInputManager*)arg1 forLayoutState:(id)arg2 ;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(unsigned long long)maxPriorWordTokensAfterTrimming;
-(BOOL)acceptsCharacter:(unsigned)arg1 ;
-(BOOL)dictionaryUsesExternalEncoding;
-(BOOL)shouldConvertCandidateToExternal;
-(BOOL)allowsAutocorrectionOfValidWords;
-(id)compositionMapForLayout:(id)arg1 reverse:(BOOL)arg2 ;
-(const USetRef)precomposedCharacterSet;
@end

