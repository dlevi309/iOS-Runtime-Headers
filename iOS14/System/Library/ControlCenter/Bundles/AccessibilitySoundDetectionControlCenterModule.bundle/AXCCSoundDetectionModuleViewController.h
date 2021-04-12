/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/AccessibilitySoundDetectionControlCenterModule.bundle/AccessibilitySoundDetectionControlCenterModule
*/

#import <ControlCenterUIKit/CCUIMenuModuleViewController.h>

@protocol AXCCSoundDetectionModuleViewControllerDelegate;
@class CCUIContentModuleContext, CCUIToggleModule;

@interface AXCCSoundDetectionModuleViewController : CCUIMenuModuleViewController {

	CCUIContentModuleContext* _contentModuleContext;
	CCUIToggleModule* _module;
	id<AXCCSoundDetectionModuleViewControllerDelegate> _soundDetectionDelegate;

}

@property (nonatomic,retain) CCUIToggleModule * module;                                                                     //@synthesize module=_module - In the implementation block
@property (assign,nonatomic,__weak) id<AXCCSoundDetectionModuleViewControllerDelegate> soundDetectionDelegate;              //@synthesize soundDetectionDelegate=_soundDetectionDelegate - In the implementation block
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(void)setModule:(CCUIToggleModule *)arg1 ;
-(void)setContentModuleContext:(id)arg1 ;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(id)contentModuleContext;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(CCUIToggleModule *)module;
-(void)setSoundDetectionDelegate:(id<AXCCSoundDetectionModuleViewControllerDelegate>)arg1 ;
-(id<AXCCSoundDetectionModuleViewControllerDelegate>)soundDetectionDelegate;
-(void)_axSettingsDidChange;
-(BOOL)_isHeySiriRunning;
-(void)_showConfirmationAlertForType:(id)arg1 ;
-(void)_confirmedEnableSoundDetection:(BOOL)arg1 ;
-(void)_configureMenuItems;
-(void)_confirmedToggleSoundDetectionStatusForType:(id)arg1 ;
-(void)_toggleSoundDetectionStatusForType:(id)arg1 ;
@end

