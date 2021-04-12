/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextIndirectEditableInteraction.h>
#import <UIKitCore/_UIKeyboardTextSelectionGestureControllerDelegate.h>

@class _UIKeyboardTextSelectionController, NSString, UIKeyboardTaskQueue;

@interface UITextIndirectNonEditableInteraction : UITextIndirectEditableInteraction <_UIKeyboardTextSelectionGestureControllerDelegate> {

	_UIKeyboardTextSelectionController* _textSelectionController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIKeyboardTaskQueue * taskQueue; 
@property (nonatomic,readonly) _UIKeyboardTextSelectionController * textSelectionController; 
@property (nonatomic,readonly) double timestampOfLastTouchesEnded; 
-(void)dealloc;
-(id)initWithView:(id)arg1 ;
-(UIKeyboardTaskQueue *)taskQueue;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(_UIKeyboardTextSelectionController *)textSelectionController;
-(void)willBeginGesture;
-(void)didEndGesture;
-(void)finishSetup;
-(void)_setupControllersIfNecessaryWithView:(id)arg1 ;
-(BOOL)shouldAllowWithTouchTypes:(id)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
@end

