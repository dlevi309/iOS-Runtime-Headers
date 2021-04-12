/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

@class UIViewController;


@protocol SXViewControllerPresenting <NSObject>
@property (nonatomic,readonly) UIViewController * controller; 
@required
-(UIViewController *)controller;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4;
-(void)popOrDismissViewControllerAnimated:(BOOL)arg1;

@end

