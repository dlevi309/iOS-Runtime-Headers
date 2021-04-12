/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIKeyboardTaskQueue, _UIKeyboardTextSelectionController;


@protocol _UIKeyboardTextSelectionGestureControllerDelegate <NSObject>
@property (nonatomic,readonly) UIKeyboardTaskQueue * taskQueue; 
@property (nonatomic,readonly) _UIKeyboardTextSelectionController * textSelectionController; 
@property (nonatomic,readonly) double timestampOfLastTouchesEnded; 
@optional
-(BOOL)hasMarkedText;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3;
-(void)setTwoFingerTapTimestamp:(double)arg1;
-(double)timestampOfLastTouchesEnded;
-(BOOL)transitionInProgress;
-(void)willBeginGesture;
-(void)didEndGesture;
-(BOOL)shouldAllowTwoFingerSelectionGestureOnView:(id)arg1;

@required
-(UIKeyboardTaskQueue *)taskQueue;
-(_UIKeyboardTextSelectionController *)textSelectionController;

@end

