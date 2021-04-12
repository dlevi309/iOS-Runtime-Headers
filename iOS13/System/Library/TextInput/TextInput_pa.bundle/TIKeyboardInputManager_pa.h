/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/TextInput/TextInput_pa.bundle/TextInput_pa
*/

#import <TextInputCore/TIKeyboardInputManager.h>

@interface TIKeyboardInputManager_pa : TIKeyboardInputManager {

	BOOL _isPhoneticLayout;

}

@property (assign,nonatomic) BOOL isPhoneticLayout;              //@synthesize isPhoneticLayout=_isPhoneticLayout - In the implementation block
-(void)syncToLayoutState:(id)arg1 ;
-(BOOL)deletesComposedTextByComposedCharacterSequence;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)setIsPhoneticLayout:(BOOL)arg1 ;
-(BOOL)isPhoneticLayout;
@end

