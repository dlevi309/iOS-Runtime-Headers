/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class SBLockScreenPluginAction;


@protocol SBLockScreenPluginController <SBPluginBundleController,SBUIOptionalLegibility>
@property (assign,nonatomic,__weak) id<SBLockScreenPluginAgent> pluginAgent; 
@property (nonatomic,readonly) long long pluginPriority; 
@property (nonatomic,readonly) UIViewController*<SBLockScreenPluginViewController> pluginViewController; 
@property (nonatomic,readonly) id<SBLockScreenPluginAppearance> pluginAppearance; 
@property (nonatomic,retain,readonly) SBLockScreenPluginAction * pluginUnlockAction; 
@optional
-(void)pluginWillActivateWithContext:(id)arg1;
-(void)pluginDidDeactivateWithContext:(id)arg1;
-(BOOL)pluginHandleEvent:(long long)arg1;
-(void)updateForPresentation:(id)arg1;
-(SBLockScreenPluginAction *)pluginUnlockAction;

@required
-(UIViewController*<SBLockScreenPluginViewController>)pluginViewController;
-(void)setPluginAgent:(id)arg1;
-(id<SBLockScreenPluginAgent>)pluginAgent;
-(long long)pluginPriority;
-(id<SBLockScreenPluginAppearance>)pluginAppearance;

@end

