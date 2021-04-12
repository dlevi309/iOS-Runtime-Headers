/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


#import <NotesUI/NotesUI-Structs.h>
@interface ICKeyboardNotificationListener : NSObject {

	CGRect _keyboardFrame;

}

@property (assign,nonatomic) CGRect keyboardFrame;              //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
+(id)sharedListener;
-(id)init;
-(void)dealloc;
-(CGRect)keyboardFrame;
-(CGRect)currentKeyboardFrame;
-(void)handleKeyboardWillShow:(id)arg1 ;
-(void)handleKeyboardWillHide:(id)arg1 ;
-(void)setKeyboardFrame:(CGRect)arg1 ;
@end

