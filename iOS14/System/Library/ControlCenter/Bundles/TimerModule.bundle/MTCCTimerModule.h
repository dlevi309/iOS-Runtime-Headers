/*
* Generated on Thursday, January 14, 2021 at 2:29:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTimerViewController:(MTCCTimerViewController *)arg1 ;
-(MTCCTimerViewController *)timerViewController;
-(void)setDefaultDuration:(double)arg1 ;
-(id)init;
-(MTCCTimerBackgroundViewController *)timerBackgroundViewController;
-(id)backgroundViewController;
-(double)defaultDuration;
-(id)contentViewController;
-(void)timerDidChange:(id)arg1 ;
-(void)setTimerBackgroundViewController:(MTCCTimerBackgroundViewController *)arg1 ;
-(MTTimerManager *)timerManager;
-(void)reloadTimerState;
-(void)setTimerManager:(MTTimerManager *)arg1 ;
-(id)processChangesForNewState:(id)arg1 ;
-(void)timerBackgroundViewController:(id)arg1 timerDidChange:(id)arg2 ;
-(void)timerViewController:(id)arg1 timerDidChange:(id)arg2 ;
-(void)reloadTimerStateAndUpdateDuration;
-(void)reloadTimerStateUpdateDuration:(BOOL)arg1 ;
-(void)timerViewControllerButtonTapped:(id)arg1 withEvent:(id)arg2 ;
@end

