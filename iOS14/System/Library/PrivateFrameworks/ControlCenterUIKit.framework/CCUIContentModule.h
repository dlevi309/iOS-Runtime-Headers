/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/


@protocol CCUIContentModule <NSObject>
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
@optional
-(id)backgroundViewControllerForContext:(id)arg1;
-(id)contentViewControllerForContext:(id)arg1;
-(UIViewController*<CCUIContentModuleBackgroundViewController>)backgroundViewController;
-(void)setContentModuleContext:(id)arg1;
-(UIViewController*<CCUIContentModuleContentViewController>)contentViewController;

@end

