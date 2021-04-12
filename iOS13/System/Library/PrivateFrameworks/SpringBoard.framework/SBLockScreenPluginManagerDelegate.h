/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBLockScreenPluginManagerDelegate <NSObject>
@required
-(void)pluginManager:(id)arg1 didLoadPlugin:(id)arg2;
-(void)pluginManager:(id)arg1 willUnloadPlugin:(id)arg2;
-(void)pluginManager:(id)arg1 activePluginDidChange:(id)arg2;
-(void)pluginManager:(id)arg1 displayedPluginDidUpdateAppearance:(id)arg2;
-(void)pluginManager:(id)arg1 displayedPluginDidChangeFromPlugin:(id)arg2 toPlugin:(id)arg3;
-(BOOL)pluginManager:(id)arg1 plugin:(id)arg2 handleAction:(id)arg3;

@end

