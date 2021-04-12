/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/TIKeyboardInputManager.h>

@interface TIKeyboardInputManager_mul : TIKeyboardInputManager {

	BOOL _isSuspended;

}
-(void)resume;
-(void)suspend;
-(id)keyboardConfiguration;
-(BOOL)updateLanguageModelForKeyboardState;
-(void)enumerateInputModesWithBlock:(/*^block*/id)arg1 ;
-(unsigned)lexiconIDForInputMode:(id)arg1 ;
-(float)weightForInputMode:(id)arg1 ;
-(SCD_Struct_TI10)lexiconInfoForInputMode:(id)arg1 ;
-(vector<KB::LexiconInfo, std::__1::allocator<KB::LexiconInfo> >*)lexiconInformationVector;
-(LanguageModelContainer*)languageModelContainer;
-(BOOL)shouldUpdateDictionary;
-(void)loadDictionaries;
-(void)didUpdateInputModes:(id)arg1 ;
-(void)didUpdateInputModeProbabilities:(id)arg1 ;
-(void)updateLanguagePriors;
-(id)resourceInputModes;
@end

