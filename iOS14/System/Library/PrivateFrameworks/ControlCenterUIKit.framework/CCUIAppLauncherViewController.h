/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <ControlCenterUIKit/CCUIMenuModuleViewController.h>

@class SCUIAssetProvider, CCUIAppLauncherModule;

@interface CCUIAppLauncherViewController : CCUIMenuModuleViewController {

	SCUIAssetProvider* _assetProvider;
	CCUIAppLauncherModule* _module;

}

@property (assign,nonatomic,__weak) CCUIAppLauncherModule * module;              //@synthesize module=_module - In the implementation block
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(id)_assetProvider;
-(id)leadingImageForMenuItem:(id)arg1 ;
-(void)buttonTouchDown:(id)arg1 forEvent:(id)arg2 ;
-(void)setModule:(CCUIAppLauncherModule *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(CCUIAppLauncherModule *)module;
-(id)_menuItemForShortcutItem:(id)arg1 ;
-(void)_activateApplicationForShortcutItem:(id)arg1 ;
-(void)_updateApplicationShortcutsActions;
@end

