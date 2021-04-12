/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTBluetoothManager.h>

@class NSSet, BluetoothManager;

@interface RTBluetoothManager_BluetoothManager : RTBluetoothManager {

	BOOL _observingConnections;
	NSSet* _connectedDevices;
	long long _carKitConnectionState;

}

@property (nonatomic,readonly) BluetoothManager * bluetoothManager; 
@property (nonatomic,retain) NSSet * connectedDevices;                           //@synthesize connectedDevices=_connectedDevices - In the implementation block
@property (assign,nonatomic) BOOL observingConnections;                          //@synthesize observingConnections=_observingConnections - In the implementation block
@property (assign,nonatomic) long long carKitConnectionState;                    //@synthesize carKitConnectionState=_carKitConnectionState - In the implementation block
-(void)dealloc;
-(NSSet *)connectedDevices;
-(void)_shutdown;
-(void)setConnectedDevices:(NSSet *)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(BluetoothManager *)bluetoothManager;
-(long long)getCarKitConnectionStateFromConnectedDevices:(id)arg1 ;
-(void)setCarKitConnectionState:(long long)arg1 ;
-(void)updateConnections;
-(void)setObservingConnections:(BOOL)arg1 ;
-(void)shouldObserveConnections;
-(void)_fetchCarKitConnectedStateWithHandler:(/*^block*/id)arg1 ;
-(BOOL)observingConnections;
-(long long)carKitConnectionState;
@end

