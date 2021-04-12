/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


#import <NotesUI/NotesUI-Structs.h>
@interface ICKeyboardNotificationListener : NSObject {

	CGRect _keyboardFrame;

}

@property (assign,nonatomic) CGRect keyboardFrame;              //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
+(id)sharedListener;
-(id)init;
-(CGRect)keyboardFrame;
-(void)setKeyboardFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)handleKeyboardWillShow:(id)arg1 ;
-(void)handleKeyboardWillHide:(id)arg1 ;
-(CGRect)currentKeyboardFrame;
@end

