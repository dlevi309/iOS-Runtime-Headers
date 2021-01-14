/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(Class)viewControllerClass;
-(UITouch *)triggeringTouch;
-(UIKeyboardInputMode *)currentInputModeForDictation;
-(BOOL)includeBarHeight;
-(void)setCurrentInputModeForDictation:(UIKeyboardInputMode *)arg1 ;
-(void)setTriggeringTouch:(UITouch *)arg1 ;
-(void)dealloc;
@end

