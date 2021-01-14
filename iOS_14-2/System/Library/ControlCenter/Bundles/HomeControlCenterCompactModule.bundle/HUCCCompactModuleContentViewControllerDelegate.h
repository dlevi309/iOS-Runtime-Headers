/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterCompactModule.bundle/HomeControlCenterCompactModule
*/

@class CCUIContentModuleContext;


@protocol HUCCCompactModuleContentViewControllerDelegate <NSObject>
@property (nonatomic,readonly) CCUIContentModuleContext * contentModuleContext; 
@required
-(CCUIContentModuleContext *)contentModuleContext;
-(void)moduleContentViewController:(id)arg1 viewWillAppear:(BOOL)arg2;
-(void)moduleContentViewController:(id)arg1 viewDidDisappear:(BOOL)arg2;
-(void)launchHomeAppForModuleViewController:(id)arg1;
-(BOOL)isDeviceUnlockedForModuleViewController:(id)arg1;

@end

