/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBLockScreenPluginAgent.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBLockScreenActionProvider.h>

@protocol SBLockScreenPluginManagerDelegate;
@class NSMutableDictionary, SBLockScreenPlugin, CSLockScreenTestPluginSettings, NSString;

@interface SBLockScreenPluginManager : NSObject <SBLockScreenPluginAgent, PTSettingsKeyObserver, SBLockScreenActionProvider> {

	NSMutableDictionary* _plugins;
	SBLockScreenPlugin* _activePlugin;
	SBLockScreenPlugin* _displayedPlugin;
	id<SBLockScreenPluginManagerDelegate> _delegate;
	CSLockScreenTestPluginSettings* _testSettings;
	BOOL _enabled;

}

@property (nonatomic,readonly) SBLockScreenPlugin * activePlugin;                                //@synthesize activePlugin=_activePlugin - In the implementation block
@property (nonatomic,readonly) SBLockScreenPlugin * displayedPlugin;                             //@synthesize displayedPlugin=_displayedPlugin - In the implementation block
@property (assign,nonatomic,__weak) id<SBLockScreenPluginManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                      //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)setEnabled:(BOOL)arg1 ;
-(id<SBLockScreenPluginManagerDelegate>)delegate;
-(void)setDelegate:(id<SBLockScreenPluginManagerDelegate>)arg1 ;
-(BOOL)isEnabled;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)handleEvent:(long long)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)pluginController:(id)arg1 updateAppearance:(id)arg2 ;
-(void)deactivatePluginController:(id)arg1 ;
-(id)lockScreenActionContext;
-(BOOL)enableLockScreenPluginWithContext:(id)arg1 ;
-(BOOL)disableLockScreenPluginWithContext:(id)arg1 ;
-(void)activatePluginController:(id)arg1 ;
-(BOOL)pluginController:(id)arg1 sendAction:(id)arg2 ;
-(void)_handleUIRelock;
-(void)_refreshLockScreenPlugin;
-(BOOL)_loadLockScreenPluginWithContext:(id)arg1 ;
-(BOOL)_handlePluginDisabled:(id)arg1 withContext:(id)arg2 ;
-(BOOL)_sendEventToPlugin:(/*^block*/id)arg1 ;
-(id)_highestPriorityPluginIgnoringViewDisplay:(BOOL)arg1 ;
-(void)_setActivePlugin:(id)arg1 displayedPlugin:(id)arg2 ;
-(id)_pluginForPluginController:(id)arg1 ;
-(SBLockScreenPlugin *)activePlugin;
-(SBLockScreenPlugin *)displayedPlugin;
@end

