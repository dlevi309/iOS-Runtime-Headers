/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)inputsToReject;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(void)setInSplitKeyboardMode:(BOOL)arg1 ;
-(BOOL)isWubi:(id)arg1 ;
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
-(TIKeyboardCandidate *)autoConfirmationCandidate;
-(void)setAutoConfirmationCandidate:(TIKeyboardCandidate *)arg1 ;
@end

