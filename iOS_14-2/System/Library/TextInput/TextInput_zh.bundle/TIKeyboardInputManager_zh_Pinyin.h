/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
*/

#import <TextInputChinese/TIKeyboardInputManagerChinesePhonetic.h>

@interface TIKeyboardInputManager_zh_Pinyin : TIKeyboardInputManagerChinesePhonetic
-(BOOL)usesAutoDeleteWord;
-(BOOL)usesPunctuationKeysForRowNavigation;
-(unsigned long long)initialSelectedIndex;
-(id)keyboardBehaviors;
-(id)validCharacterSetForAutocorrection;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(BOOL)shouldSearchCompletionForSubstrings;
-(BOOL)supportsPairedPunctutationInput;
-(BOOL)isSpecialInput:(id)arg1 ;
-(id)remapInput:(id)arg1 isFacemarkInput:(BOOL*)arg2 ;
-(BOOL)usesGeometryModelData;
-(BOOL)currentShuangpinTypeUsesSemicolon;
-(BOOL)isShuangpinSemicolon:(id)arg1 ;
@end

