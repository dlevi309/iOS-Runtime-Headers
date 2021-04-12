/*
* Generated on Thursday, January 14, 2021 at 2:29:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/TextInput/TextInput_pa.bundle/TextInput_pa
*/

#import <TextInput_pa/TextInput_pa-Structs.h>
#import <TextInputCore/TIKeyboardInputManager.h>

@interface TIKeyboardInputManager_pa : TIKeyboardInputManager {

	BOOL _isPhoneticLayout;

}

@property (assign,nonatomic) BOOL isPhoneticLayout;              //@synthesize isPhoneticLayout=_isPhoneticLayout - In the implementation block
-(void)syncToLayoutState:(id)arg1 ;
-(BOOL)deletesComposedTextByComposedCharacterSequence;
-(TIInputManager*)initImplementation;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)setIsPhoneticLayout:(BOOL)arg1 ;
-(BOOL)isPhoneticLayout;
@end

