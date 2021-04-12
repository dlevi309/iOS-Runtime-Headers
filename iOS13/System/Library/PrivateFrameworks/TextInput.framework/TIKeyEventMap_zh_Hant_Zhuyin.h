/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TIKeyEventMap_zh_Phonetic.h>

@interface TIKeyEventMap_zh_Hant_Zhuyin : TIKeyEventMap_zh_Phonetic
+(id)sharedInstance;
+(BOOL)supportsSecureCoding;
-(id)remapKeyWithString:(id)arg1 stringWithoutModifiers:(id)arg2 modifierFlags:(unsigned long long)arg3 keyboardState:(id)arg4 ;
-(id)punctuationMap;
-(BOOL)shouldInsertZhuyinCharacterAfter:(id)arg1 ;
-(BOOL)isZhuyinCharacterBeforeInsertionPointOfKeyboardState:(id)arg1 ;
@end

