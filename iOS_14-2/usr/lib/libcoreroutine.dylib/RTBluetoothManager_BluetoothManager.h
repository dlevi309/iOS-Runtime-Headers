/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)_shutdown;
-(BluetoothManager *)bluetoothManager;
-(NSSet *)connectedDevices;
-(void)dealloc;
-(void)setConnectedDevices:(NSSet *)arg1 ;
-(long long)getCarKitConnectionStateFromConnectedDevices:(id)arg1 ;
-(void)setCarKitConnectionState:(long long)arg1 ;
-(void)updateConnections;
-(void)setObservingConnections:(BOOL)arg1 ;
-(void)shouldObserveConnections;
-(void)_fetchCarKitConnectedStateWithHandler:(/*^block*/id)arg1 ;
-(BOOL)observingConnections;
-(long long)carKitConnectionState;
@end

