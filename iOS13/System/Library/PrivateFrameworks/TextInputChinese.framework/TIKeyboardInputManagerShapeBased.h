/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
*/

#import <TextInputChinese/TIKeyboardInputManagerChinese.h>
#import <libobjc.A.dylib/TIKeyboardInputManagerChineseCompletion.h>

@class NSMutableString, NSString;

@interface TIKeyboardInputManagerShapeBased : TIKeyboardInputManagerChinese <TIKeyboardInputManagerChineseCompletion> {

	NSMutableString* _searchString;
	BOOL _keepRemainingInput;
	NSString* _remainingInput;
	BOOL _previousActionWasAutoConfirmation;

}

@property (nonatomic,readonly) NSMutableString * searchString;                    //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) NSString * remainingInput;                           //@synthesize remainingInput=_remainingInput - In the implementation block
@property (assign,nonatomic) BOOL previousActionWasAutoConfirmation;              //@synthesize previousActionWasAutoConfirmation=_previousActionWasAutoConfirmation - In the implementation block
-(unsigned)inputCount;
-(BOOL)hasCandidates;
-(id)candidateResultSet;
-(id)keyboardBehaviors;
-(void)clearInput;
-(BOOL)usesCandidateSelection;
-(BOOL)acceptInputString:(id)arg1 ;
-(id)searchStringForMarkedText;
-(NSMutableString *)searchString;
-(BOOL)usesAutoDeleteWord;
-(BOOL)shouldExtendPriorWord;
-(BOOL)suppliesCompletions;
-(unsigned)inputIndex;
-(unsigned long long)initialSelectedIndex;
-(void)setInputIndex:(unsigned)arg1 ;
-(void)loadDictionaries;
-(BOOL)supportsLearning;
-(id)keyboardConfigurationLayoutTag;
-(id)rawInputString;
-(void)inputLocationChanged;
-(id)didAcceptCandidate:(id)arg1 ;
-(NSString *)remainingInput;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)acceptInput;
-(id)sortingMethods;
-(BOOL)isHardwareKeyboardAutocorrectionEnabled;
-(BOOL)shouldLookForCompletionCandidates;
-(id)formattedSearchString;
-(void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(BOOL)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(BOOL)arg2 ;
-(void)cancelCandidatesThread;
-(id)markedTextWithAutoconvertedCandidates;
-(void)setRemainingInput:(NSString *)arg1 ;
-(BOOL)previousActionWasAutoConfirmation;
-(void)setPreviousActionWasAutoConfirmation:(BOOL)arg1 ;
@end

