/*
* Generated on Thursday, January 14, 2021 at 2:29:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/TextInput/TextInput_ko.bundle/TextInput_ko
*/

#import <TextInput_ko/TextInput_ko-Structs.h>
#import <TextInputCore/TIKeyboardInputManager.h>

@interface TIKeyboardInputManager_ko : TIKeyboardInputManager {

	Hangul2SetAutomata* _batchConverter;
	BOOL _deleteSyllable;

}

@property (nonatomic,readonly) Hangul2SetAutomata* batchConverter; 
-(BOOL)canHandleKeyHitTest;
-(void)setInput:(id)arg1 ;
-(void)clearInput;
-(void)setInputIndex:(unsigned)arg1 ;
-(BOOL)doesComposeText;
-(void)dealloc;
-(BOOL)shouldExtendPriorWord;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 ;
-(void)textAccepted:(id)arg1 fromPredictiveInputBar:(BOOL)arg2 withInput:(id)arg3 ;
-(BOOL)supportsLearning;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(BOOL)acceptsCharacter:(unsigned)arg1 ;
-(BOOL)dictionaryUsesExternalEncoding;
-(void)syncToLayoutState:(id)arg1 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(TIInputManager*)initImplementation;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)acceptInput;
-(Hangul2SetAutomata*)batchConverter;
-(id)composeJamo:(id)arg1 ;
@end

