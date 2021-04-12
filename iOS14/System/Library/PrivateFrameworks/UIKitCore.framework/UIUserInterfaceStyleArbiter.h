/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_UI9 _lastOverride;
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
-(void)_setWatchesScreenDim:(BOOL)arg1 ;
-(id)nextTransition;
-(void)userInterfaceStyleModeDidChange:(id)arg1 ;
-(long long)_proposedStyleForCurrentMode;
-(void)_logChangeEventWithNewMode:(long long)arg1 oldMode:(long long)arg2 newStyle:(long long)arg3 oldStyle:(long long)arg4 reason:(long long)arg5 ;
-(long long)currentStyle;
-(void)_updateCurrentStyleAndNotify:(BOOL)arg1 forReason:(long long)arg2 ;
-(void)_logPeriodicEvent;
-(void)_updateScreenDimUpdatingStyle:(BOOL)arg1 ;
-(BOOL)_updateControllersWithOldModeValue:(long long)arg1 newModeValue:(long long)arg2 ;
-(id)_init;
-(void)toggleCurrentStyleWithOverrideTiming:(long long)arg1 ;
-(void)toggleCurrentStyle;
-(void)_updateCurrentStyleForReason:(long long)arg1 ;
@end

