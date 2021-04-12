/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/TextInput/TextInput_el.bundle/TextInput_el
*/

#import <TextInput_el/TextInput_el-Structs.h>
#import <TextInputCore/TIKeyboardFeatureSpecialization.h>

@interface TIKeyboardFeatureSpecialization_el : TIKeyboardFeatureSpecialization
-(id)sentencePrefixingCharacters;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(id)nonstopPunctuationCharacters;
-(id)sentenceTrailingCharacters;
-(BOOL)doesComposeText;
-(id)sentenceDelimitingCharacters;
-(TIInputManager*)createInputManager;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
@end

