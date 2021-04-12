/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIKeyboardTextSelectionController.h>

@interface _UIKeyboardAsyncTextSelectionController : _UIKeyboardTextSelectionController {

	BOOL _shouldDelayShowSelectionCommands;

}
-(void)showSelectionCommands;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)endFloatingCursor;
-(void)selectPositionAtPoint:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)selectTextWithGranularity:(long long)arg1 atPoint:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)selectTextWithGranularity:(long long)arg1 atPoint:(CGPoint)arg2 executionContext:(id)arg3 ;
-(void)selectPositionAtPoint:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 withBoundary:(long long)arg2 executionContext:(id)arg3 ;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)selectPositionAtPoint:(CGPoint)arg1 granularity:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)showSelectionView;
-(BOOL)cursorPositionIsContainedByRange:(id)arg1 ;
-(CGRect)caretRectForLeftmostSelectedPosition;
-(CGRect)caretRectForRightmostSelectedPosition;
-(BOOL)shouldAllowSelectionGestureWithTouchType:(long long)arg1 atPoint:(CGPoint)arg2 toProgressToState:(long long)arg3 ;
-(void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4 ;
-(void)setRangedSelectionShouldShowGrabbers:(BOOL)arg1 ;
-(void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(long long)arg1 initialExtentPoint:(CGPoint)arg2 executionContext:(id)arg3 ;
-(void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
@end

