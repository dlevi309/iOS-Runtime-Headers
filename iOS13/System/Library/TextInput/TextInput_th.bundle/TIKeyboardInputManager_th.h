/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/TextInput/TextInput_th.bundle/TextInput_th
*/

#import <TextInput_th/TextInput_th-Structs.h>
#import <TextInputCore/TIKeyboardInputManager.h>

@interface TIKeyboardInputManager_th : TIKeyboardInputManager
-(id)keyboardBehaviors;
-(BOOL)shouldExtendPriorWord;
-(id)wordSeparator;
-(void)candidateRejected:(id)arg1 ;
-(void)textAccepted:(id)arg1 fromPredictiveInputBar:(BOOL)arg2 withInput:(id)arg3 ;
-(void)loadDictionaries;
-(BOOL)supportsLearning;
-(BOOL)deletesComposedTextByComposedCharacterSequence;
-(TIInputManager*)initImplementation;
-(id)trimmedInputStem;
-(void)setWordBoundary;
@end

