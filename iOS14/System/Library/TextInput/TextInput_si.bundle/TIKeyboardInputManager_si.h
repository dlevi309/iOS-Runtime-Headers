/*
* Generated on Thursday, January 14, 2021 at 2:29:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/TextInput/TextInput_si.bundle/TextInput_si
*/

#import <TextInput_si/TextInput_si-Structs.h>
#import <TextInputCore/TIKeyboardInputManager.h>

@interface TIKeyboardInputManager_si : TIKeyboardInputManager {

	unsigned short _lastTypedChar;

}

@property (assign,nonatomic) unsigned short lastTypedChar;              //@synthesize lastTypedChar=_lastTypedChar - In the implementation block
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3 ;
-(void)deleteFromInputWithContext:(id)arg1 ;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned long long*)arg4 ;
-(void)setLastTypedChar:(unsigned short)arg1 ;
-(unsigned short)composedCharacterWithInputCharacter:(unsigned short)arg1 ;
-(unsigned short)lastTypedChar;
@end

