/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/TextInput/TextInput_ta.bundle/TextInput_ta
*/

#import <TextInput_ta/TextInput_ta-Structs.h>
#import <TextInputCore/TIKeyboardInputManager.h>

@interface TIKeyboardInputManager_ta : TIKeyboardInputManager {

	void* _internalToExternalTransliterator;
	void* _externalToInternalTransliterator;
	BOOL _isQWERTYLayout;

}
-(void)dealloc;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(void)syncToLayoutState:(id)arg1 ;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned long long*)arg4 ;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)configureTransliterators;
-(void)closeTransliterators;
-(void)initTransliteratorsWithID:(id)arg1 ;
@end

