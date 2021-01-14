/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BCBatteryDeviceObserving.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class STBatteryStatusDomainPublisher, BCBatteryDeviceController, NSString;

@interface SBSystemStatusBatteryDataProvider : NSObject <BCBatteryDeviceObserving, BSInvalidatable> {

	BOOL _shouldExposeNotChargingState;
	STBatteryStatusDomainPublisher* _batteryDataPublisher;
	BCBatteryDeviceController* _batteryDeviceController;

}

@property (nonatomic,readonly) STBatteryStatusDomainPublisher * batteryDataPublisher;              //@synthesize batteryDataPublisher=_batteryDataPublisher - In the implementation block
@property (nonatomic,readonly) BCBatteryDeviceController * batteryDeviceController;                //@synthesize batteryDeviceController=_batteryDeviceController - In the implementation block
@property (assign,nonatomic) BOOL shouldExposeNotChargingState;                                    //@synthesize shouldExposeNotChargingState=_shouldExposeNotChargingState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_registerForNotifications;
-(void)_updateShouldExposeNotChargingState;
-(id)init;
-(void)_updateData;
-(BCBatteryDeviceController *)batteryDeviceController;
-(void)setShouldExposeNotChargingState:(BOOL)arg1 ;
-(BOOL)shouldExposeNotChargingState;
-(BOOL)_isInNotChargingState;
-(void)connectedDevicesDidChange:(id)arg1 ;
-(void)_noteNotChargingStatusChanged;
-(void)invalidate;
-(STBatteryStatusDomainPublisher *)batteryDataPublisher;
-(void)dealloc;
@end

