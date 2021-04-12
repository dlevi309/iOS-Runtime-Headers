/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@protocol CSScrollGestureControllerDelegate <NSObject>
@optional
-(void)controllerWillCancelHorizontalScrolling:(id)arg1;
-(void)controllerDidCancelHorizontalScrolling:(id)arg1;

@required
-(BOOL)controller:(id)arg1 shouldAllowPanScrollingWithSystemGestureRecognizer:(id)arg2;

@end

