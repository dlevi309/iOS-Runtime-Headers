/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TIKeyboardInputManagerWrapper.h>

@interface TIKeyboardInputManagerPolymorph : TIKeyboardInputManagerWrapper
-(void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 ;
-(void)setInputManagerForInputMode:(id)arg1 withKeyboardState:(id)arg2 class:(Class)arg3 ;
-(void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)syncToKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setInputManagerForKeyboardState:(id)arg1 ;
-(void)dealloc;
-(void)handleKeyboardState:(id)arg1 ;
@end

