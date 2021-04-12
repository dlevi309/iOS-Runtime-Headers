/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
*/

#import <TextInputChinese/TIKeyboardInputManagerChinesePhonetic.h>

@interface TIKeyboardInputManager_zh_Pinyin : TIKeyboardInputManagerChinesePhonetic
-(id)keyboardBehaviors;
-(BOOL)usesAutoDeleteWord;
-(BOOL)usesPunctuationKeysForRowNavigation;
-(unsigned long long)initialSelectedIndex;
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

