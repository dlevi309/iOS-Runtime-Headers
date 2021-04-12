/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/TextInput/TextInput_ta.bundle/TextInput_ta
*/

#import <TextInput_ta/TextInput_ta-Structs.h>
#import <TextInputCore/TIKeyboardFeatureSpecialization.h>

@interface TIKeyboardFeatureSpecialization_ta : TIKeyboardFeatureSpecialization {

	BOOL _qwertyLayout;

}

@property (assign,getter=isQwertyLayout,nonatomic) BOOL qwertyLayout;              //@synthesize qwertyLayout=_qwertyLayout - In the implementation block
-(BOOL)doesComposeText;
-(id)nonstopPunctuationCharacters;
-(void)specializeInputManager:(TIInputManager*)arg1 forLayoutState:(id)arg2 ;
-(BOOL)dictionaryUsesExternalEncoding;
-(BOOL)shouldConvertCandidateToExternal;
-(BOOL)allowsAutocorrectionOfValidWords;
-(void)setQwertyLayout:(BOOL)arg1 ;
-(BOOL)isQwertyLayout;
@end

