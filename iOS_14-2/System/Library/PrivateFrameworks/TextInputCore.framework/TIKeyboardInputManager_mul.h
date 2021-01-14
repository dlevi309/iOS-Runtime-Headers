/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/TIKeyboardInputManager.h>

@interface TIKeyboardInputManager_mul : TIKeyboardInputManager {

	BOOL _isSuspended;

}
-(void)suspend;
-(vector<KB::LexiconInfo, std::__1::allocator<KB::LexiconInfo> >*)lexiconInformationVector;
-(id)resourceInputModes;
-(void)enumerateInputModesWithBlock:(/*^block*/id)arg1 ;
-(LanguageModelContainer*)languageModelContainer;
-(unsigned)lexiconIDForInputMode:(id)arg1 ;
-(SCD_Struct_TI10)lexiconInfoForInputMode:(id)arg1 ;
-(BOOL)shouldUpdateDictionary;
-(void)didUpdateInputModes:(id)arg1 ;
-(float)weightForInputMode:(id)arg1 ;
-(void)loadDictionaries;
-(void)updateLanguagePriors;
-(void)resume;
-(void)didUpdateInputModeProbabilities:(id)arg1 ;
-(id)keyboardConfiguration;
-(BOOL)updateLanguageModelForKeyboardState;
@end

