/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UISpecializedInputMode.h>

@class UITouch, UIKeyboardInputMode;

@interface UIDictationInputMode : UISpecializedInputMode {

	UITouch* _triggeringTouch;
	UIKeyboardInputMode* _currentInputModeForDictation;

}

@property (nonatomic,retain) UITouch * triggeringTouch;                                       //@synthesize triggeringTouch=_triggeringTouch - In the implementation block
@property (nonatomic,retain) UIKeyboardInputMode * currentInputModeForDictation;              //@synthesize currentInputModeForDictation=_currentInputModeForDictation - In the implementation block
+(BOOL)currentInputModeSupportsDictation;
-(void)dealloc;
-(BOOL)includeBarHeight;
-(Class)viewControllerClass;
-(UITouch *)triggeringTouch;
-(void)setTriggeringTouch:(UITouch *)arg1 ;
-(UIKeyboardInputMode *)currentInputModeForDictation;
-(void)setCurrentInputModeForDictation:(UIKeyboardInputMode *)arg1 ;
@end

