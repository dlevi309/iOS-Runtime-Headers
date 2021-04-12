/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextIndirectEditableInteraction.h>
#import <UIKitCore/_UIKeyboardTextSelectionGestureControllerDelegate.h>

@class _UIKeyboardTextSelectionController, UIKeyboardTaskQueue, NSString;

@interface UITextIndirectNonEditableInteraction : UITextIndirectEditableInteraction <_UIKeyboardTextSelectionGestureControllerDelegate> {

	_UIKeyboardTextSelectionController* _textSelectionController;

}

@property (nonatomic,readonly) UIKeyboardTaskQueue * taskQueue; 
@property (nonatomic,readonly) _UIKeyboardTextSelectionController * textSelectionController; 
@property (nonatomic,readonly) double timestampOfLastTouchesEnded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishSetup;
-(UIKeyboardTaskQueue *)taskQueue;
-(void)didEndGesture;
-(_UIKeyboardTextSelectionController *)textSelectionController;
-(void)willBeginGesture;
-(BOOL)shouldAllowWithTouchTypes:(id)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(id)initWithView:(id)arg1 ;
-(void)dealloc;
-(void)_setupControllersIfNecessaryWithView:(id)arg1 ;
@end

