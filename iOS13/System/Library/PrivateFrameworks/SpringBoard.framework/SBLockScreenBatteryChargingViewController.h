/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@protocol SBLockScreenBatteryChargingViewControllerDelegate;
@class CSBatteryChargingView, NSTimer, NSMutableArray;

@interface SBLockScreenBatteryChargingViewController : CSCoverSheetViewControllerBase {

	BOOL _shouldDisplayBattery;
	CSBatteryChargingView* _chargingView;
	NSTimer* _visibilityTimer;
	NSMutableArray* _connectedDevices;
	id<SBLockScreenBatteryChargingViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBLockScreenBatteryChargingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<SBLockScreenBatteryChargingViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBLockScreenBatteryChargingViewControllerDelegate>)arg1 ;
-(void)loadView;
-(long long)presentationStyle;
-(id)chargingView;
-(BOOL)batteryVisible;
-(void)_clearVisibilityTimer;
-(void)_visibilityTimerFired:(id)arg1 ;
-(id)initForDisplayOfBattery:(BOOL)arg1 ;
-(void)presentWithAnimation:(BOOL)arg1 ;
-(void)prepareForDismissalWithAnimation:(BOOL)arg1 ;
-(void)showChargeLevelWithBatteryVisible:(BOOL)arg1 ;
@end

