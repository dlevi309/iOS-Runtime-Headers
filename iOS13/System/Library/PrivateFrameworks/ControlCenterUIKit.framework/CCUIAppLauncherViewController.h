/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <ControlCenterUIKit/CCUIMenuModuleViewController.h>

@class SBFApplication, SCUIAssetProvider, CCUIAppLauncherModule;

@interface CCUIAppLauncherViewController : CCUIMenuModuleViewController {

	SBFApplication* _application;
	SCUIAssetProvider* _assetProvider;
	CCUIAppLauncherModule* _module;

}

@property (assign,nonatomic,__weak) CCUIAppLauncherModule * module;              //@synthesize module=_module - In the implementation block
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(CCUIAppLauncherModule *)module;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(void)setModule:(CCUIAppLauncherModule *)arg1 ;
-(void)buttonTouchDown:(id)arg1 forEvent:(id)arg2 ;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(id)leadingImageForMenuItem:(id)arg1 ;
-(void)_updateApplicationShortcutsActions;
-(id)_menuItemForShortcutItem:(id)arg1 ;
-(void)_activateApplicationForShortcutItem:(id)arg1 ;
@end

