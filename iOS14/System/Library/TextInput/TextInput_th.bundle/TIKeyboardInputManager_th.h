/*
* Generated on Thursday, January 14, 2021 at 2:29:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/TextInput/TextInput_th.bundle/TextInput_th
*/

#import <TextInput_th/TextInput_th-Structs.h>
#import <TextInputCore/TIKeyboardInputManager.h>

@interface TIKeyboardInputManager_th : TIKeyboardInputManager
-(id)wordSeparator;
-(void)candidateRejected:(id)arg1 ;
-(id)keyboardBehaviors;
-(void)loadDictionaries;
-(BOOL)shouldExtendPriorWord;
-(void)textAccepted:(id)arg1 fromPredictiveInputBar:(BOOL)arg2 withInput:(id)arg3 ;
-(BOOL)supportsLearning;
-(BOOL)deletesComposedTextByComposedCharacterSequence;
-(TIInputManager*)initImplementation;
-(id)trimmedInputStem;
-(void)setWordBoundary;
@end

