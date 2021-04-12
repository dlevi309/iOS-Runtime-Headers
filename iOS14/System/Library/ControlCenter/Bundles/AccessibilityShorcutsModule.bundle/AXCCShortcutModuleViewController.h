/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setModule:(CCUIToggleModule *)arg1 ;
-(void)setContentModuleContext:(id)arg1 ;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(id)contentModuleContext;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(CCUIToggleModule *)module;
-(void)setShortcutDelegate:(id<AXCCShortcutModuleViewControllerDelegate>)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id<AXCCShortcutModuleViewControllerDelegate>)shortcutDelegate;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)dealloc;
-(BOOL)_hasScreenSwitch;
-(void)_toggleAssistiveTouch;
-(void)_toggleVoiceOver;
-(void)_toggleClassicInvertColors;
-(void)_toggleZoom;
-(void)_toggleFullKeyboardAccess;
-(void)_updateShortcutActions;
-(void)_updateShortcutActionsIfVisible;
-(void)_updateShortcutActions:(BOOL)arg1 ;
-(id)visibleShortcuts;
-(id)_menuItemOpenAccessibilityShortcutSettings;
-(id)_menuItemForOption:(id)arg1 ;
-(void)_toggleOption:(long long)arg1 ;
-(BOOL)_shouldShowOption:(int)arg1 ;
-(void)_toggleWhiteOnBlack;
-(void)_toggleReduceWhitePoint;
-(void)_toggleColorFilter;
-(void)_toggleGrayscale;
-(void)_toggleSwitchOver;
-(void)_toggleTouchAccommodations;
-(void)_toggleGuidedAccess;
-(void)_toggleIncreaseContrast;
-(void)_toggleReduceTransparency;
-(void)_toggleCommandAndControl;
-(void)_toggleWhiteOnBlackOffMainThread;
-(id)_titlesForVisibleShortcuts;
-(void)_toggleDisplayAppearance;
-(BOOL)switchControlRendersDeviceUnusable;
-(void)_promptToDisableBrightnessFilters:(/*^block*/id)arg1 data:(id)arg2 ;
@end

