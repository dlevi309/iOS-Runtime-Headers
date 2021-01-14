/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/


#import <TextInputUI/TextInputUI-Structs.h>
@class TIKeyboardInputManagerStub;

@interface TUIKeyboardBackendController : NSObject {

	TIKeyboardInputManagerStub* _inputManager;

}

@property (nonatomic,retain) TIKeyboardInputManagerStub * inputManager;              //@synthesize inputManager=_inputManager - In the implementation block
+(id)sharedInstance;
-(void)setInputManager:(TIKeyboardInputManagerStub *)arg1 ;
-(void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)syncToKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performHitTestForTouchEvents:(id)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(TIKeyboardInputManagerStub *)inputManager;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 requestToken:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

