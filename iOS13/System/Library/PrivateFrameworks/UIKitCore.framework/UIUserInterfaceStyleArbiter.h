/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UISUserInterfaceStyleModeDelegate.h>

@class UISUserInterfaceStyleMode, _UISunScheduleController, _UICustomScheduleController, NSDate, NSBackgroundActivityScheduler, NSString;

@interface UIUserInterfaceStyleArbiter : NSObject <UISUserInterfaceStyleModeDelegate> {

	UISUserInterfaceStyleMode* _styleMode;
	long long _currentModeValue;
	long long _currentStyle;
	long long _lastProposedAutomaticStyle;
	SCD_Struct_UI8 _lastOverride;
	int _screenDimmingNotificationToken;
	BOOL _isDim;
	_UISunScheduleController* _sunScheduleController;
	_UICustomScheduleController* _customScheduleController;
	NSDate* _lastUpdateDate;
	NSBackgroundActivityScheduler* _backgroundActivityScheduler;
	int _notificationToken;

}

@property (nonatomic,readonly) long long currentStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)_init;
-(long long)currentStyle;
-(void)_updateCurrentStyleAndNotify:(BOOL)arg1 forReason:(long long)arg2 ;
-(void)_logPeriodicEvent;
-(void)toggleCurrentStyleWithOverrideTiming:(long long)arg1 ;
-(void)_updateCurrentStyleForReason:(long long)arg1 ;
-(BOOL)_updateControllersWithOldModeValue:(long long)arg1 newModeValue:(long long)arg2 ;
-(long long)_proposedStyleForCurrentMode;
-(void)_setWatchesScreenDim:(BOOL)arg1 ;
-(void)_logChangeEventWithNewMode:(long long)arg1 oldMode:(long long)arg2 newStyle:(long long)arg3 oldStyle:(long long)arg4 reason:(long long)arg5 ;
-(void)_updateScreenDimUpdatingStyle:(BOOL)arg1 ;
-(void)userInterfaceStyleModeDidChange:(id)arg1 ;
-(void)toggleCurrentStyle;
-(id)nextTransition;
@end

