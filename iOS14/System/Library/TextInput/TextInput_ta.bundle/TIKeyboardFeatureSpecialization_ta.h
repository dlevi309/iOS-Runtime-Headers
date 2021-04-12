/*
* Generated on Thursday, January 14, 2021 at 2:29:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/TextInput/TextInput_ta.bundle/TextInput_ta
*/

#import <TextInput_ta/TextInput_ta-Structs.h>
#import <TextInputCore/TIKeyboardFeatureSpecialization.h>

@interface TIKeyboardFeatureSpecialization_ta : TIKeyboardFeatureSpecialization {

	BOOL _qwertyLayout;

}

@property (assign,getter=isQwertyLayout,nonatomic) BOOL qwertyLayout;              //@synthesize qwertyLayout=_qwertyLayout - In the implementation block
-(id)nonstopPunctuationCharacters;
-(BOOL)doesComposeText;
-(void)specializeInputManager:(TIInputManager*)arg1 forLayoutState:(id)arg2 ;
-(BOOL)dictionaryUsesExternalEncoding;
-(BOOL)shouldConvertCandidateToExternal;
-(BOOL)allowsAutocorrectionOfValidWords;
-(void)setQwertyLayout:(BOOL)arg1 ;
-(BOOL)isQwertyLayout;
@end

