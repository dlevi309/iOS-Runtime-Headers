/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterModule.bundle/HomeControlCenterModule
*/

#import <libobjc.A.dylib/HUCCModuleContentViewControllerDelegate.h>
#import <libobjc.A.dylib/HFHomeManagerObserver.h>
#import <libobjc.A.dylib/CCUIContentModule.h>

@class CCUIContentModuleContext, HUCCModuleContentViewController, NSString;

@interface HUCCControlCenterModule : NSObject <HUCCModuleContentViewControllerDelegate, HFHomeManagerObserver, CCUIContentModule> {

	int _keybagLockStatusNotifyToken;
	HUCCModuleContentViewController* _contentViewController;
	CCUIContentModuleContext* _contentModuleContext;

}

@property (nonatomic,retain) HUCCModuleContentViewController * contentViewController;                                              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;                                                      //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (assign,nonatomic) int keybagLockStatusNotifyToken;                                                                      //@synthesize keybagLockStatusNotifyToken=_keybagLockStatusNotifyToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
-(id)init;
-(void)dealloc;
-(void)setContentViewController:(HUCCModuleContentViewController *)arg1 ;
-(HUCCModuleContentViewController *)contentViewController;
-(void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(BOOL)arg2 ;
-(BOOL)_isDeviceUnlocked;
-(CCUIContentModuleContext *)contentModuleContext;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1 ;
-(void)_unregisterKeybagLockStatusNotifications;
-(void)_registerKeybagLockStatusNotifications;
-(void)_updateAccessAllowedForLockState;
-(int)keybagLockStatusNotifyToken;
-(void)setKeybagLockStatusNotifyToken:(int)arg1 ;
-(BOOL)_isAccessAllowedForCurrentLockState;
-(void)_updateRegistrationForLockStatusNotification;
-(void)launchHomeAppForModuleViewController:(id)arg1 ;
-(BOOL)isDeviceUnlockedForModuleViewController:(id)arg1 ;
@end

