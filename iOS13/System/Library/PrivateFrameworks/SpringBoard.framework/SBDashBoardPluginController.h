/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CSExternalAppearanceProviding.h>
#import <libobjc.A.dylib/CSExternalBehaviorProviding.h>
#import <libobjc.A.dylib/CSExternalEventHandling.h>
#import <libobjc.A.dylib/SBLockScreenPluginManagerDelegate.h>
#import <libobjc.A.dylib/SBLockScreenPluginPresenting.h>

@class CSCoverSheetViewController, SBDashBoardPluginViewController, SBLockScreenPluginManager, NSString, NSSet, _UILegibilitySettings, UIColor;

@interface SBDashBoardPluginController : NSObject <CSExternalAppearanceProviding, CSExternalBehaviorProviding, CSExternalEventHandling, SBLockScreenPluginManagerDelegate, SBLockScreenPluginPresenting> {

	CSCoverSheetViewController* _coverSheetViewController;
	SBDashBoardPluginViewController* _pluginViewController;
	long long _pluginViewControllerPresentationStyle;
	SBLockScreenPluginManager* _pluginManager;

}

@property (nonatomic,readonly) id<SBLockScreenActionProvider> lockScreenActionProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * appearanceIdentifier; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,copy,readonly) NSSet * components; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
-(void)dealloc;
-(void)_activate;
-(NSSet *)components;
-(UIColor *)backgroundColor;
-(BOOL)handleEvent:(id)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)_deactivate;
-(long long)backgroundStyle;
-(NSString *)appearanceIdentifier;
-(unsigned long long)restrictedCapabilities;
-(long long)notificationBehavior;
-(long long)participantState;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(NSString *)coverSheetIdentifier;
-(long long)scrollingStrategy;
-(long long)proximityDetectionMode;
-(void)enableLockScreenPluginWithContext:(id)arg1 ;
-(void)disableLockScreenPluginWithContext:(id)arg1 ;
-(id)initWithCoverSheetViewController:(id)arg1 ;
-(void)_setPluginViewController:(id)arg1 ;
-(void)_dismissPluginViewController:(id)arg1 withStyle:(long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_presentPluginViewController:(id)arg1 withStyle:(long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)pluginManager:(id)arg1 didLoadPlugin:(id)arg2 ;
-(void)pluginManager:(id)arg1 willUnloadPlugin:(id)arg2 ;
-(void)pluginManager:(id)arg1 activePluginDidChange:(id)arg2 ;
-(void)pluginManager:(id)arg1 displayedPluginDidUpdateAppearance:(id)arg2 ;
-(void)pluginManager:(id)arg1 displayedPluginDidChangeFromPlugin:(id)arg2 toPlugin:(id)arg3 ;
-(BOOL)pluginManager:(id)arg1 plugin:(id)arg2 handleAction:(id)arg3 ;
-(id<SBLockScreenActionProvider>)lockScreenActionProvider;
@end

