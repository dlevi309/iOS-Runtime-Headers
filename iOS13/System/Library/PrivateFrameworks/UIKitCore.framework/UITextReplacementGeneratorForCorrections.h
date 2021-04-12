/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITextReplacementGenerator.h>

@class UITextChecker, TIKeyboardCandidate;

@interface UITextReplacementGeneratorForCorrections : UITextReplacementGenerator {

	BOOL _showRevertingAutocorrectionInPredictionView;
	BOOL _forceHistoryReplacement;
	BOOL _forceAutocorrectionGuesses;
	BOOL _forceSpellingGuesses;
	UITextChecker* _textChecker;
	TIKeyboardCandidate* _autocorrectionRecord;
	unsigned long long _maxEditDistance;
	unsigned long long _maxCountAfterAutocorrectionGuesses;
	unsigned long long _maxCountAfterSpellingGuesses;

}

@property (nonatomic,retain) UITextChecker * textChecker;                                        //@synthesize textChecker=_textChecker - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * autocorrectionRecord;                         //@synthesize autocorrectionRecord=_autocorrectionRecord - In the implementation block
@property (assign,nonatomic) BOOL forceHistoryReplacement;                                       //@synthesize forceHistoryReplacement=_forceHistoryReplacement - In the implementation block
@property (assign,nonatomic) unsigned long long maxEditDistance;                                 //@synthesize maxEditDistance=_maxEditDistance - In the implementation block
@property (assign,nonatomic) unsigned long long maxCountAfterAutocorrectionGuesses;              //@synthesize maxCountAfterAutocorrectionGuesses=_maxCountAfterAutocorrectionGuesses - In the implementation block
@property (assign,nonatomic) BOOL forceAutocorrectionGuesses;                                    //@synthesize forceAutocorrectionGuesses=_forceAutocorrectionGuesses - In the implementation block
@property (assign,nonatomic) unsigned long long maxCountAfterSpellingGuesses;                    //@synthesize maxCountAfterSpellingGuesses=_maxCountAfterSpellingGuesses - In the implementation block
@property (assign,nonatomic) BOOL forceSpellingGuesses;                                          //@synthesize forceSpellingGuesses=_forceSpellingGuesses - In the implementation block
-(id)init;
-(id)replacements;
-(void)setTextChecker:(UITextChecker *)arg1 ;
-(void)setAutocorrectionRecord:(TIKeyboardCandidate *)arg1 ;
-(void)setForceHistoryReplacement:(BOOL)arg1 ;
-(void)setForceAutocorrectionGuesses:(BOOL)arg1 ;
-(void)setForceSpellingGuesses:(BOOL)arg1 ;
-(void)setMaxCountAfterAutocorrectionGuesses:(unsigned long long)arg1 ;
-(void)setMaxCountAfterSpellingGuesses:(unsigned long long)arg1 ;
-(void)setMaxEditDistance:(unsigned long long)arg1 ;
-(BOOL)isStringToReplaceMisspelled;
-(UITextChecker *)textChecker;
-(BOOL)isStringMisspelled:(id)arg1 ;
-(TIKeyboardCandidate *)autocorrectionRecord;
-(unsigned long long)maxCountAfterAutocorrectionGuesses;
-(unsigned long long)maxEditDistance;
-(unsigned long long)maxCountAfterSpellingGuesses;
-(BOOL)forceSpellingGuesses;
-(BOOL)forceHistoryReplacement;
-(id)addReplacementRevertingAutocorrectionToReplacements:(id)arg1 ;
-(void)addPreviouslySuggestedAutocorrectionToReplacements:(id)arg1 ;
-(BOOL)forceAutocorrectionGuesses;
-(void)addAutocorrectionGuessesToReplacements:(id)arg1 ;
-(void)addSpellingGuessesForString:(id)arg1 ToReplacements:(id)arg2 ;
@end

