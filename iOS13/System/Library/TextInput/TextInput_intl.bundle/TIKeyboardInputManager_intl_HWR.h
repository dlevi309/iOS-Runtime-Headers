/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/TextInput/TextInput_intl.bundle/TextInput_intl
*/

#import <TextInputCore/TIKeyboardInputManager.h>

@class TIHandwritingStrokes, NSArray, CHRecognizer;

@interface TIKeyboardInputManager_intl_HWR : TIKeyboardInputManager {

	TIHandwritingStrokes* _userDrawing;
	NSArray* _candidates;

}

@property (nonatomic,readonly) CHRecognizer * recognizer; 
@property (nonatomic,retain) TIHandwritingStrokes * userDrawing;              //@synthesize userDrawing=_userDrawing - In the implementation block
@property (nonatomic,retain) NSArray * candidates;                            //@synthesize candidates=_candidates - In the implementation block
-(unsigned)inputCount;
-(NSArray *)candidates;
-(id)candidateResultSet;
-(id)keyboardBehaviors;
-(void)clearInput;
-(BOOL)usesCandidateSelection;
-(BOOL)canHandleKeyHitTest;
-(void)setCandidates:(NSArray *)arg1 ;
-(BOOL)usesAutoDeleteWord;
-(BOOL)shouldExtendPriorWord;
-(BOOL)suppliesCompletions;
-(id)defaultCandidate;
-(unsigned long long)initialSelectedIndex;
-(id)handleKeyboardInput:(id)arg1 ;
-(void)deleteFromInputWithContext:(id)arg1 ;
-(void)loadDictionaries;
-(BOOL)supportsLearning;
-(void)syncMarkedTextForKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)inputLocationChanged;
-(CHRecognizer *)recognizer;
-(BOOL)isDummyCandidate:(id)arg1 ;
-(void)updateCandidates;
-(TIHandwritingStrokes *)userDrawing;
-(void)setUserDrawing:(TIHandwritingStrokes *)arg1 ;
-(id)recognitionResultsForStrokes:(id)arg1 context:(id)arg2 ;
-(id)addInputObject:(id)arg1 withContext:(id)arg2 ;
@end

