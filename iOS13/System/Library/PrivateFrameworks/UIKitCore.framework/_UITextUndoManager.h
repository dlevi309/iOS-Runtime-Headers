/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <Foundation/NSUndoManager.h>

@class UITextInputController;

@interface _UITextUndoManager : NSUndoManager {

	UITextInputController* _inputController;

}

@property (assign,nonatomic,__weak) UITextInputController * inputController;              //@synthesize inputController=_inputController - In the implementation block
-(void)removeAllActions;
-(UITextInputController *)inputController;
-(void)setInputController:(UITextInputController *)arg1 ;
@end

