/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSMutableArray;

@interface SBBluetoothController : NSObject {

	NSMutableArray* _devices;
	BOOL _tetheringConnected;

}
+(id)sharedInstance;
-(BOOL)canReportBatteryLevel;
-(int)batteryLevel;
-(void)bluetoothDeviceInitiatedVoiceControl:(id)arg1 ;
-(void)startWatchingForDevices;
-(void)addDeviceNotification:(id)arg1 ;
-(void)removeDeviceNotification:(id)arg1 ;
-(BOOL)tetheringConnected;
-(void)bluetoothDeviceEndedVoiceControl:(id)arg1 ;
-(id)firstBTDeviceToReportBatteryLevel;
-(void)connectionChanged:(id)arg1 ;
-(void)stopWatchingForDevices;
-(id)deviceForAudioRoute:(id)arg1 ;
-(void)updateTetheringConnected;
-(void)iapDeviceChanged:(id)arg1 ;
-(void)noteDevicesChanged;
-(void)batteryChanged:(id)arg1 ;
-(void)updateBattery;
-(void)dealloc;
@end

