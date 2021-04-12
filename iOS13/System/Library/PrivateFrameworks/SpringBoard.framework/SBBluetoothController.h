/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSMutableArray;

@interface SBBluetoothController : NSObject {

	NSMutableArray* _devices;
	BOOL _tetheringConnected;

}
+(id)sharedInstance;
-(void)dealloc;
-(int)batteryLevel;
-(void)startWatchingForDevices;
-(BOOL)tetheringConnected;
-(void)stopWatchingForDevices;
-(id)firstBTDeviceToReportBatteryLevel;
-(void)iapDeviceChanged:(id)arg1 ;
-(void)connectionChanged:(id)arg1 ;
-(void)addDeviceNotification:(id)arg1 ;
-(void)removeDeviceNotification:(id)arg1 ;
-(void)batteryChanged:(id)arg1 ;
-(void)bluetoothDeviceInitiatedVoiceControl:(id)arg1 ;
-(void)bluetoothDeviceEndedVoiceControl:(id)arg1 ;
-(void)noteDevicesChanged;
-(void)updateTetheringConnected;
-(void)updateBattery;
-(BOOL)canReportBatteryLevel;
-(id)deviceForAudioRoute:(id)arg1 ;
@end

