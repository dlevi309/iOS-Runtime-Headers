/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/FBProcessObserver.h>
#import <libobjc.A.dylib/SBLockScreenPluginAgent.h>
#import <libobjc.A.dylib/SBLockScreenPluginController.h>

@protocol SBLockScreenPluginController, SBLockScreenPluginAgent, SBLockScreenPluginDelegate;
@class SBLockScreenPluginAction, BSPluginBundle, NSString, FBProcess, SBLockScreenPluginAppearanceContext, NSMutableArray, SBLockOverlayContext, CSAppearance, CSBehavior, _UILegibilitySettings;

@interface SBLockScreenPlugin : NSObject <FBProcessObserver, SBLockScreenPluginAgent, SBLockScreenPluginController> {

	BSPluginBundle* _bundle;
	NSString* _bundleName;
	FBProcess* _process;
	id<SBLockScreenPluginController> _controller;
	id<SBLockScreenPluginAgent> _agent;
	SBLockScreenPluginAppearanceContext* _appearance;
	NSMutableArray* _lifecycleObservers;
	SBLockOverlayContext* _overlay;
	/*^block*/id _auxiliaryActivationAnimationBlock;
	/*^block*/id _auxiliaryDeactivationAnimationBlock;
	id<SBLockScreenPluginDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBLockScreenPluginDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                                  //@synthesize bundleName=_bundleName - In the implementation block
@property (nonatomic,readonly) id<SBLockScreenPluginController> controller;                                           //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) UIViewController*<SBLockScreenPluginViewController> viewController; 
@property (nonatomic,readonly) SBLockScreenPluginAppearanceContext * appearance; 
@property (nonatomic,readonly) SBLockScreenPluginAction * unlockAction; 
@property (nonatomic,readonly) CSAppearance * coverSheetAppearance; 
@property (nonatomic,readonly) CSBehavior * coverSheetBehavior; 
@property (nonatomic,retain) SBLockOverlayContext * overlay;                                                          //@synthesize overlay=_overlay - In the implementation block
@property (nonatomic,copy) id auxiliaryActivationAnimationBlock;                                                      //@synthesize auxiliaryActivationAnimationBlock=_auxiliaryActivationAnimationBlock - In the implementation block
@property (nonatomic,copy) id auxiliaryDeactivationAnimationBlock;                                                    //@synthesize auxiliaryDeactivationAnimationBlock=_auxiliaryDeactivationAnimationBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBLockScreenPluginAgent> pluginAgent;                                          //@synthesize agent=_agent - In the implementation block
@property (nonatomic,readonly) long long pluginPriority; 
@property (nonatomic,readonly) UIViewController*<SBLockScreenPluginViewController> pluginViewController; 
@property (nonatomic,readonly) id<SBLockScreenPluginAppearance> pluginAppearance; 
@property (nonatomic,retain,readonly) SBLockScreenPluginAction * pluginUnlockAction; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
+(id)_pluginBundleForPluginWithName:(id)arg1 ;
+(id)pluginWithName:(id)arg1 activationContext:(id)arg2 ;
-(id)succinctDescription;
-(id<SBLockScreenPluginDelegate>)delegate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)name;
-(void)setDelegate:(id<SBLockScreenPluginDelegate>)arg1 ;
-(NSString *)description;
-(UIViewController*<SBLockScreenPluginViewController>)viewController;
-(void)setOverlay:(SBLockOverlayContext *)arg1 ;
-(BOOL)pluginController:(id)arg1 sendAction:(id)arg2 ;
-(SBLockOverlayContext *)overlay;
-(void)processDidExit:(id)arg1 ;
-(void)deactivatePluginController:(id)arg1 ;
-(void)_updateAppearance:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(SBLockScreenPluginAppearanceContext *)appearance;
-(void)pluginController:(id)arg1 updateAppearance:(id)arg2 ;
-(void)activatePluginController:(id)arg1 ;
-(id<SBLockScreenPluginController>)controller;
-(id)succinctDescriptionBuilder;
-(UIViewController*<SBLockScreenPluginViewController>)pluginViewController;
-(void)dealloc;
-(CSAppearance *)coverSheetAppearance;
-(CSBehavior *)coverSheetBehavior;
-(BOOL)handleDashBoardEvent:(id)arg1 ;
-(BOOL)isCapabilityRestricted:(unsigned long long)arg1 ;
-(id)initWithBundle:(id)arg1 activationContext:(id)arg2 ;
-(id<SBLockScreenPluginAgent>)pluginAgent;
-(void)setPluginAgent:(id<SBLockScreenPluginAgent>)arg1 ;
-(long long)pluginPriority;
-(id<SBLockScreenPluginAppearance>)pluginAppearance;
-(void)pluginWillActivateWithContext:(id)arg1 ;
-(void)pluginDidDeactivateWithContext:(id)arg1 ;
-(BOOL)pluginHandleEvent:(long long)arg1 ;
-(SBLockScreenPluginAction *)pluginUnlockAction;
-(id)overrideForElement:(long long)arg1 ;
-(SBLockScreenPluginAction *)unlockAction;
-(BOOL)isElementHidden:(long long)arg1 ;
-(void)addLifecycleObserver:(id)arg1 ;
-(void)removeLifecycleObserver:(id)arg1 ;
-(void)enumerateLifecycleObserversUsingBlock:(/*^block*/id)arg1 ;
-(id)auxiliaryActivationAnimationBlock;
-(void)setAuxiliaryActivationAnimationBlock:(id)arg1 ;
-(id)auxiliaryDeactivationAnimationBlock;
-(void)setAuxiliaryDeactivationAnimationBlock:(id)arg1 ;
@end

