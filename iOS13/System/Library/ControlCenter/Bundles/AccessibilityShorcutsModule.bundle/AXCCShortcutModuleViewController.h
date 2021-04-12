/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/AccessibilityShorcutsModule.bundle/AccessibilityShorcutsModule
*/

#import <AccessibilityShorcutsModule/AccessibilityShorcutsModule-Structs.h>
#import <ControlCenterUIKit/CCUIMenuModuleViewController.h>

@protocol AXCCShortcutModuleViewControllerDelegate;
@class CCUIContentModuleContext, CCUIToggleModule;

@interface AXCCShortcutModuleViewController : CCUIMenuModuleViewController {

	BOOL _suppressGuidedAccess;
	BOOL _moduleNeedsLiveUpdates;
	CCUIContentModuleContext* _contentModuleContext;
	CCUIToggleModule* _module;
	id<AXCCShortcutModuleViewControllerDelegate> _shortcutDelegate;

}

@property (assign,nonatomic,__weak) CCUIToggleModule * module;                                                  //@synthesize module=_module - In the implementation block
@property (assign,nonatomic,__weak) id<AXCCShortcutModuleViewControllerDelegate> shortcutDelegate;              //@synthesize shortcutDelegate=_shortcutDelegate - In the implementation block
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(CCUIToggleModule *)module;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(void)setModule:(CCUIToggleModule *)arg1 ;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(id)contentModuleContext;
-(void)setContentModuleContext:(id)arg1 ;
-(void)_updateShortcutActions;
-(void)_updateShortcutActionsIfVisible;
-(void)_updateShortcutActions:(BOOL)arg1 ;
-(id)visibleShortcuts;
-(id)_menuItemOpenAccessibilityShortcutSettings;
-(id)_menuItemForOption:(id)arg1 ;
-(id<AXCCShortcutModuleViewControllerDelegate>)shortcutDelegate;
-(void)_toggleOption:(long long)arg1 ;
-(BOOL)_shouldShowOption:(int)arg1 ;
-(void)_toggleVoiceOver;
-(void)_toggleWhiteOnBlack;
-(void)_toggleReduceWhitePoint;
-(void)_toggleColorFilter;
-(void)_toggleGrayscale;
-(void)_toggleZoom;
-(void)_toggleAssistiveTouch;
-(void)_toggleSwitchOver;
-(void)_toggleTouchAccommodations;
-(void)_toggleGuidedAccess;
-(void)_toggleClassicInvertColors;
-(void)_toggleCommandAndControl;
-(void)_toggleFullKeyboardAccess;
-(void)_promptToDisableBrightnessFilters:(/*^block*/id)arg1 data:(id)arg2 ;
-(void)_toggleWhiteOnBlackOffMainThread;
-(BOOL)_hasScreenSwitch;
-(id)_titlesForVisibleShortcuts;
-(void)_toggleDisplayAppearance;
-(BOOL)switchControlRendersDeviceUnusable;
-(void)setShortcutDelegate:(id<AXCCShortcutModuleViewControllerDelegate>)arg1 ;
@end

