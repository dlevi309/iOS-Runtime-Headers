/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBLockScreenPluginManagerDelegate <NSObject>
@required
-(void)pluginManager:(id)arg1 displayedPluginDidChangeFromPlugin:(id)arg2 toPlugin:(id)arg3;
-(void)pluginManager:(id)arg1 willUnloadPlugin:(id)arg2;
-(BOOL)pluginManager:(id)arg1 plugin:(id)arg2 handleAction:(id)arg3;
-(void)pluginManager:(id)arg1 activePluginDidChange:(id)arg2;
-(void)pluginManager:(id)arg1 displayedPluginDidUpdateAppearance:(id)arg2;
-(void)pluginManager:(id)arg1 didLoadPlugin:(id)arg2;

@end

