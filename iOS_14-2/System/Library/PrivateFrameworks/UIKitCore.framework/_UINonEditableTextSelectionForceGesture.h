/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UITextSelectionForceGesture.h>
#import <UIKitCore/_UIKeyboardTextSelectionGestureControllerDelegate.h>

@protocol _UINonEditableTextSelectionForceGestureDelegate;
@class _UIKeyboardTextSelectionController, _UIKeyboardTextSelectionGestureController, UIKeyboardTaskQueue, NSString;

@interface _UINonEditableTextSelectionForceGesture : _UITextSelectionForceGesture <_UIKeyboardTextSelectionGestureControllerDelegate> {

	id<_UINonEditableTextSelectionForceGestureDelegate> forceGestureDelegate;
	_UIKeyboardTextSelectionController* _textSelectionController;
	_UIKeyboardTextSelectionGestureController* _gestureController;

}

@property (nonatomic,retain) _UIKeyboardTextSelectionController * textSelectionController;                          //@synthesize textSelectionController=_textSelectionController - In the implementation block
@property (nonatomic,retain) _UIKeyboardTextSelectionGestureController * gestureController;                         //@synthesize gestureController=_gestureController - In the implementation block
@property (assign,nonatomic) id<_UINonEditableTextSelectionForceGestureDelegate> forceGestureDelegate; 
@property (nonatomic,readonly) UIKeyboardTaskQueue * taskQueue; 
@property (nonatomic,readonly) double timestampOfLastTouchesEnded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTextSelectionController:(_UIKeyboardTextSelectionController *)arg1 ;
-(_UIKeyboardTextSelectionGestureController *)gestureController;
-(UIKeyboardTaskQueue *)taskQueue;
-(void)setForceGestureDelegate:(id<_UINonEditableTextSelectionForceGestureDelegate>)arg1 ;
-(_UIKeyboardTextSelectionController *)textSelectionController;
-(void)willBeginGesture;
-(id)initWithTextInput:(id)arg1 ;
-(BOOL)_shouldDelayUntilForceLevelRequirementIsMet;
-(id<_UINonEditableTextSelectionForceGestureDelegate>)forceGestureDelegate;
-(void)dealloc;
-(void)setGestureController:(_UIKeyboardTextSelectionGestureController *)arg1 ;
@end

