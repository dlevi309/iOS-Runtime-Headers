/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/HearingAidsModule.bundle/HearingAidsModule
*/


@protocol CCUIContentModule <NSObject>
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
@optional
-(UIViewController*<CCUIContentModuleContentViewController>)contentViewController;
-(void)setContentModuleContext:(id)arg1;
-(id)contentViewControllerForContext:(id)arg1;
-(id)backgroundViewControllerForContext:(id)arg1;
-(UIViewController*<CCUIContentModuleBackgroundViewController>)backgroundViewController;

@end

