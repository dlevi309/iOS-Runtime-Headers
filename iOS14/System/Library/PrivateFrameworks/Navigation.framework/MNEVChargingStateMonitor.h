/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/VGVirtualGarageObserver.h>

@protocol MNEVChargingStateMonitorDelegate;
@class NSDate, NSTimer, NSMeasurement;

@interface MNEVChargingStateMonitor : NSObject <VGVirtualGarageObserver> {

	id<MNEVChargingStateMonitorDelegate> _delegate;
	BOOL _shouldShowChargingInfo;
	NSDate* _startDate;
	NSTimer* _timer;
	NSMeasurement* _targetBatteryCharge;

}

@property (nonatomic,readonly) NSMeasurement * targetBatteryCharge;                             //@synthesize targetBatteryCharge=_targetBatteryCharge - In the implementation block
@property (assign,nonatomic,__weak) id<MNEVChargingStateMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<MNEVChargingStateMonitorDelegate>)delegate;
-(void)setDelegate:(id<MNEVChargingStateMonitorDelegate>)arg1 ;
-(void)updateForLocation:(id)arg1 ;
-(void)_startTimer;
-(void)virtualGarageDidUpdate:(id)arg1 ;
-(void)dealloc;
-(void)_consumeUpdatedVirtualGarage:(id)arg1 forceDelegateCallback:(BOOL)arg2 ;
-(void)_notifyShouldShowChargingInfo;
-(id)initWithTargetBatteryCharge:(id)arg1 ;
-(NSMeasurement *)targetBatteryCharge;
@end

