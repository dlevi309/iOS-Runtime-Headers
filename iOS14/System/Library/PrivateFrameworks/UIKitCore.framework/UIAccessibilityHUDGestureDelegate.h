/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIAccessibilityHUDGestureDelegate <NSObject>
@optional
-(void)_dismissAccessibilityHUDForGestureManager:(id)arg1;
-(BOOL)_accessibilityHUDGestureManagerCancelsTouchesInView:(id)arg1;
-(void)_accessibilityHUDGestureManager:(id)arg1 showHUDItem:(id)arg2;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldTerminateHUDGestureForOtherGestureRecognizer:(id)arg2;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldBeginAtPoint:(CGPoint)arg2;

@required
-(void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(CGPoint)arg2;
-(id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(CGPoint)arg2;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;

@end

