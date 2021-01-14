/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBLockOverlayViewController.h>

@class SBLockScreenPlugin;

@interface SBLockScreenPluginOverlayViewController : SBLockOverlayViewController {

	SBLockScreenPlugin* _plugin;

}
+(BOOL)_pluginNeedsOverlay:(id)arg1 ;
-(id)initWithPlugin:(id)arg1 ;
-(void)loadView;
-(id)_newOverlayView;
@end

