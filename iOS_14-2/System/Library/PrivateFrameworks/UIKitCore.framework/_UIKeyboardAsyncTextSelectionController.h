/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIKeyboardTextSelectionController.h>

@interface _UIKeyboardAsyncTextSelectionController : _UIKeyboardTextSelectionController {

	BOOL _shouldDelayShowSelectionCommands;

}
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)showSelectionView;
-(void)setRangedSelectionShouldShowGrabbers:(BOOL)arg1 ;
-(void)selectTextWithGranularity:(long long)arg1 atPoint:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)showSelectionCommands;
-(BOOL)cursorPositionIsContainedByRange:(id)arg1 ;
-(void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
-(CGRect)caretRectForLeftmostSelectedPosition;
-(void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(long long)arg1 initialExtentPoint:(CGPoint)arg2 executionContext:(id)arg3 ;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 ;
-(CGRect)caretRectForRightmostSelectedPosition;
-(void)selectPositionAtPoint:(CGPoint)arg1 granularity:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)selectPositionAtPoint:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 withBoundary:(long long)arg2 executionContext:(id)arg3 ;
-(void)endFloatingCursor;
-(void)selectTextWithGranularity:(long long)arg1 atPoint:(CGPoint)arg2 executionContext:(id)arg3 ;
-(void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4 ;
-(BOOL)shouldAllowSelectionGestureWithTouchType:(long long)arg1 atPoint:(CGPoint)arg2 toProgressToState:(long long)arg3 ;
-(void)selectPositionAtPoint:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)modifySelectionWithExtentPoint:(CGPoint)arg1 executionContext:(id)arg2 ;
@end

