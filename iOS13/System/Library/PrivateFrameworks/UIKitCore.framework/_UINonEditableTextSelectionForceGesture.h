/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UITextSelectionForceGesture.h>
#import <UIKitCore/_UIKeyboardTextSelectionGestureControllerDelegate.h>

@protocol _UINonEditableTextSelectionForceGestureDelegate;
@class _UIKeyboardTextSelectionController, _UIKeyboardTextSelectionGestureController, NSString, UIKeyboardTaskQueue;

@interface _UINonEditableTextSelectionForceGesture : _UITextSelectionForceGesture <_UIKeyboardTextSelectionGestureControllerDelegate> {

	id<_UINonEditableTextSelectionForceGestureDelegate> forceGestureDelegate;
	_UIKeyboardTextSelectionController* _textSelectionController;
	_UIKeyboardTextSelectionGestureController* _gestureController;

}

@property (nonatomic,retain) _UIKeyboardTextSelectionController * textSelectionController;                          //@synthesize textSelectionController=_textSelectionController - In the implementation block
@property (nonatomic,retain) _UIKeyboardTextSelectionGestureController * gestureController;                         //@synthesize gestureController=_gestureController - In the implementation block
@property (assign,nonatomic) id<_UINonEditableTextSelectionForceGestureDelegate> forceGestureDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIKeyboardTaskQueue * taskQueue; 
@property (nonatomic,readonly) double timestampOfLastTouchesEnded; 
-(void)dealloc;
-(BOOL)_shouldDelayUntilForceLevelRequirementIsMet;
-(UIKeyboardTaskQueue *)taskQueue;
-(id)initWithTextInput:(id)arg1 ;
-(void)setTextSelectionController:(_UIKeyboardTextSelectionController *)arg1 ;
-(_UIKeyboardTextSelectionController *)textSelectionController;
-(void)willBeginGesture;
-(id<_UINonEditableTextSelectionForceGestureDelegate>)forceGestureDelegate;
-(void)setForceGestureDelegate:(id<_UINonEditableTextSelectionForceGestureDelegate>)arg1 ;
-(_UIKeyboardTextSelectionGestureController *)gestureController;
-(void)setGestureController:(_UIKeyboardTextSelectionGestureController *)arg1 ;
@end

