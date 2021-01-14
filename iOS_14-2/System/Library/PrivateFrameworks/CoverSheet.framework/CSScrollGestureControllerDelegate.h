/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@protocol CSScrollGestureControllerDelegate <NSObject>
@optional
-(void)controllerWillCancelHorizontalScrolling:(id)arg1;
-(void)controllerDidCancelHorizontalScrolling:(id)arg1;

@required
-(BOOL)controller:(id)arg1 shouldAllowPanScrollingWithSystemGestureRecognizer:(id)arg2;

@end

