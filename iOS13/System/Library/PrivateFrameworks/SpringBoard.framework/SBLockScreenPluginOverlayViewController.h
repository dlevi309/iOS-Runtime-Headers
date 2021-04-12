/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBLockOverlayViewController.h>

@class SBLockScreenPlugin;

@interface SBLockScreenPluginOverlayViewController : SBLockOverlayViewController {

	SBLockScreenPlugin* _plugin;

}
+(BOOL)_pluginNeedsOverlay:(id)arg1 ;
-(void)loadView;
-(id)initWithPlugin:(id)arg1 ;
-(id)_newOverlayView;
@end

