/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIAccessibilityHUDGestureDelegate <NSObject>
@optional
-(void)_accessibilityHUDGestureManager:(id)arg1 showHUDItem:(id)arg2;
-(void)_dismissAccessibilityHUDForGestureManager:(id)arg1;
-(BOOL)_accessibilityHUDGestureManagerCancelsTouchesInView:(id)arg1;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldBeginAtPoint:(CGPoint)arg2;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldTerminateHUDGestureForOtherGestureRecognizer:(id)arg2;

@required
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
-(id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(CGPoint)arg2;
-(void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(CGPoint)arg2;

@end

