/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIRotatingAlertControllerDelegate <NSObject>
@optional
-(void)sheet:(id)arg1 presentingViewControllerWillChange:(id)arg2;
-(void)sheet:(id)arg1 presentingViewControllerDidChange:(id)arg2;

@required
-(id)hostViewForSheet:(id)arg1;
-(CGRect*)initialPresentationRectInHostViewForSheet:(id)arg1;
-(CGRect*)presentationRectInHostViewForSheet:(id)arg1;

@end

