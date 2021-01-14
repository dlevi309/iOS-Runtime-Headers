/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNVehicleMonitorDelegate;
@interface MNVehicleMonitor : NSObject {

	id<MNVehicleMonitorDelegate> _delegate;
	int _vehicleConnectedToken;
	int _vehicleDisconnectedToken;
	BOOL _isMonitoring;

}

@property (assign,nonatomic,__weak) id<MNVehicleMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)stopMonitoring;
-(id<MNVehicleMonitorDelegate>)delegate;
-(void)startMonitoring;
-(void)setDelegate:(id<MNVehicleMonitorDelegate>)arg1 ;
-(void)dealloc;
@end

