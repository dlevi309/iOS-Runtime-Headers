/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterModule.bundle/HomeControlCenterModule
*/

@class CCUIContentModuleContext;


@protocol HUCCModuleContentViewControllerDelegate <NSObject>
@property (nonatomic,readonly) CCUIContentModuleContext * contentModuleContext; 
@required
-(CCUIContentModuleContext *)contentModuleContext;
-(void)launchHomeAppForModuleViewController:(id)arg1;
-(BOOL)isDeviceUnlockedForModuleViewController:(id)arg1;

@end

