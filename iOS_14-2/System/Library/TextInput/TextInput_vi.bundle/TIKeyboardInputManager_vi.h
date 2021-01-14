/*
* Generated on Thursday, January 14, 2021 at 2:29:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/TextInput/TextInput_vi.bundle/TextInput_vi
*/

#import <TextInput_vi/TextInput_vi-Structs.h>
#import <TextInputCore/TIKeyboardInputManager.h>

@interface TIKeyboardInputManager_vi : TIKeyboardInputManager {

	void* m_transliterator;
	BOOL m_compositionDisabled;
	BOOL m_useInternalIndex;

}
+(void)setupUnikey;
+(void)cleanupUnikey;
-(unsigned)inputIndex;
-(void)setInput:(id)arg1 ;
-(void)setInputIndex:(unsigned)arg1 ;
-(BOOL)doesComposeText;
-(void)dealloc;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 ;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(unsigned)internalIndexToExternal:(unsigned)arg1 ;
-(unsigned)externalIndexToInternal:(unsigned)arg1 ;
-(TIInputManager*)initImplementation;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned long long*)arg4 ;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)acceptInput;
-(void*)createTransliterator;
-(id)decomposeTelex:(id)arg1 ;
-(BOOL)canHandleCharacter:(unsigned short)arg1 ;
-(unsigned long long)deleteLengthForString:(id)arg1 ;
@end

