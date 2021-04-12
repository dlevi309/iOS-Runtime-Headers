/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)suppliesCompletions;
-(BOOL)acceptInputString:(id)arg1 ;
-(BOOL)usesAutoDeleteWord;
-(BOOL)usesCandidateSelection;
-(BOOL)hasCandidates;
-(unsigned)inputIndex;
-(void)clearInput;
-(unsigned long long)initialSelectedIndex;
-(id)searchStringForMarkedText;
-(void)setInputIndex:(unsigned)arg1 ;
-(id)keyboardBehaviors;
-(unsigned)inputCount;
-(id)candidateResultSet;
-(void)loadDictionaries;
-(NSMutableString *)searchString;
-(BOOL)shouldExtendPriorWord;
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

