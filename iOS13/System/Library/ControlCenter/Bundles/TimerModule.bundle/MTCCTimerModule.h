/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/TimerModule.bundle/TimerModule
*/

#import <ControlCenterUIKit/CCUIAppLauncherModule.h>
#import <libobjc.A.dylib/MTCCTimerViewControllerDelegate.h>
#import <libobjc.A.dylib/MTCCTimerBackgroundViewControllerDelegate.h>

@class MTTimerManager, MTCCTimerViewController, MTCCTimerBackgroundViewController, NSString;

@interface MTCCTimerModule : CCUIAppLauncherModule <MTCCTimerViewControllerDelegate, MTCCTimerBackgroundViewControllerDelegate> {

	MTTimerManager* _timerManager;
	MTCCTimerViewController* _timerViewController;
	MTCCTimerBackgroundViewController* _timerBackgroundViewController;

}

@property (nonatomic,retain) MTTimerManager * timerManager;                                                  //@synthesize timerManager=_timerManager - In the implementation block
@property (nonatomic,retain) MTCCTimerViewController * timerViewController;                                  //@synthesize timerViewController=_timerViewController - In the implementation block
@property (nonatomic,retain) MTCCTimerBackgroundViewController * timerBackgroundViewController;              //@synthesize timerBackgroundViewController=_timerBackgroundViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)contentViewController;
-(double)defaultDuration;
-(void)setDefaultDuration:(double)arg1 ;
-(MTTimerManager *)timerManager;
-(void)setTimerManager:(MTTimerManager *)arg1 ;
-(id)backgroundViewController;
-(MTCCTimerViewController *)timerViewController;
-(void)setTimerViewController:(MTCCTimerViewController *)arg1 ;
-(void)timerDidChange:(id)arg1 ;
-(void)reloadTimerStateAndUpdateDuration;
-(void)reloadTimerState;
-(void)reloadTimerStateUpdateDuration:(BOOL)arg1 ;
-(MTCCTimerBackgroundViewController *)timerBackgroundViewController;
-(id)processChangesForNewState:(id)arg1 ;
-(void)timerViewController:(id)arg1 timerDidChange:(id)arg2 ;
-(void)timerViewControllerButtonTapped:(id)arg1 withEvent:(id)arg2 ;
-(void)timerBackgroundViewController:(id)arg1 timerDidChange:(id)arg2 ;
-(void)setTimerBackgroundViewController:(MTCCTimerBackgroundViewController *)arg1 ;
@end

