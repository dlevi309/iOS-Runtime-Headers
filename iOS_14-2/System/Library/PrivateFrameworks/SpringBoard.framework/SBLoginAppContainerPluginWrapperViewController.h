/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIViewController.h>

@class SBLockScreenPlugin, SBLockScreenPluginOverlayViewController, SBLoginAppContainerOverlayWrapperView, SBLoginAppContainerPluginWrapperView;

@interface SBLoginAppContainerPluginWrapperViewController : UIViewController {

	SBLockScreenPlugin* _plugin;
	SBLockScreenPluginOverlayViewController* _overlayController;
	SBLoginAppContainerOverlayWrapperView* _overlayWrapperView;
	SBLoginAppContainerPluginWrapperView* _containerView;

}

@property (nonatomic,retain,readonly) SBLockScreenPlugin * plugin;              //@synthesize plugin=_plugin - In the implementation block
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(SBLockScreenPlugin *)plugin;
-(id)initWithPlugin:(id)arg1 ;
-(void)loadView;
@end

