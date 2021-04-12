/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
*/

#import <TextInputChinese/TIKeyboardInputManagerShapeBased.h>
#import <libobjc.A.dylib/TIKeyboardInputManagerChineseCompletion.h>

@class TIKeyboardCandidate;

@interface TIKeyboardInputManagerWubi : TIKeyboardInputManagerShapeBased <TIKeyboardInputManagerChineseCompletion> {

	TIKeyboardCandidate* _autoConfirmationCandidate;

}

@property (nonatomic,retain) TIKeyboardCandidate * autoConfirmationCandidate;              //@synthesize autoConfirmationCandidate=_autoConfirmationCandidate - In the implementation block
+(Class)wordSearchClass;
-(BOOL)acceptInputString:(id)arg1 ;
-(void)setInSplitKeyboardMode:(BOOL)arg1 ;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(id)inputsToReject;
-(void)openCandidateGenerationContextWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)closeCandidateGenerationContextWithResults:(id)arg1 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)checkAutocorrectionDictionaries;
-(int)inputMethodType;
-(BOOL)supportsPairedPunctutationInput;
-(id)formattedSearchString;
-(void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(BOOL)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(BOOL)arg2 ;
-(BOOL)isWubi:(id)arg1 ;
-(TIKeyboardCandidate *)autoConfirmationCandidate;
-(void)setAutoConfirmationCandidate:(TIKeyboardCandidate *)arg1 ;
@end

