/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)loadView;
-(SBLockScreenPlugin *)plugin;
-(id)initWithPlugin:(id)arg1 ;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)handleVolumeDownButtonPress;
@end

