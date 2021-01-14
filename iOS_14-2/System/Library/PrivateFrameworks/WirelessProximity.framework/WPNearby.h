/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/

#import <WirelessProximity/WPClient.h>

@protocol WPNearbyDelegate;
@class NSMutableDictionary, NSArray;

@interface WPNearby : WPClient {

	long long _btBandwidthState;
	id<WPNearbyDelegate> _delegate;
	NSMutableDictionary* _transfers;
	NSArray* _leCapablePeers;

}

@property (assign,nonatomic,__weak) id<WPNearbyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) long long btBandwidthState;                                  //@synthesize btBandwidthState=_btBandwidthState - In the implementation block
@property (retain) NSMutableDictionary * transfers;                             //@synthesize transfers=_transfers - In the implementation block
@property (retain) NSArray * leCapablePeers;                                    //@synthesize leCapablePeers=_leCapablePeers - In the implementation block
@property (assign) long long connectionUseCase; 
@property (assign) long long maxAllowedConnectionDelayMs; 
+(long long)holdVouchers;
+(unsigned char)clientTypeFromNearbyType:(long long)arg1 ;
+(long long)nearbyTypeFromClientType:(unsigned char)arg1 ;
-(void)connectedDevice:(id)arg1 withError:(id)arg2 shouldDiscover:(BOOL)arg3 ;
-(void)updatedNotificationState:(BOOL)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 withPeripheral:(id)arg4 ;
-(void)central:(id)arg1 subscribed:(BOOL)arg2 toCharacteristic:(id)arg3 inService:(id)arg4 ;
-(void)stateDidChange:(long long)arg1 ;
-(void)lostPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)sentData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 withError:(id)arg5 ;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)discoveredCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2 ;
-(void)stoppedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)bandwidthStateUpdated:(id)arg1 ;
-(void)foundPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)sentData:(id)arg1 toEndpoint:(id)arg2 forPeripheral:(id)arg3 withError:(id)arg4 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(void)disconnectedDeviceOverLEPipe:(id)arg1 withError:(id)arg2 ;
-(void)receivedData:(id)arg1 fromEndpoint:(id)arg2 forPeripheral:(id)arg3 ;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(void)disconnectFromPeer:(id)arg1 ;
-(void)connectedDeviceOverLEPipe:(id)arg1 ;
-(void)connectToPeer:(id)arg1 withOptions:(id)arg2 ;
-(void)populateClientGATT:(/*^block*/id)arg1 ;
-(NSArray *)leCapablePeers;
-(void)setTransfers:(NSMutableDictionary *)arg1 ;
-(void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 priority:(long long)arg3 ;
-(void)startScanningForType:(long long)arg1 data:(id)arg2 mask:(id)arg3 peers:(id)arg4 scanMode:(long long)arg5 ;
-(id)init;
-(id<WPNearbyDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)startAdvertisingOfType:(long long)arg1 data:(id)arg2 priority:(long long)arg3 mode:(long long)arg4 ;
-(void)failedToStartTrackingPeer:(id)arg1 error:(id)arg2 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 ;
-(void)disconnectedDevice:(id)arg1 withError:(id)arg2 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)deviceDiscovered:(id)arg1 ;
-(void)stopScanningForType:(long long)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)setDelegate:(id<WPNearbyDelegate>)arg1 ;
-(void)startScanningForType:(long long)arg1 data:(id)arg2 mask:(id)arg3 peers:(id)arg4 scanMode:(long long)arg5 rssi:(id)arg6 duplicates:(BOOL)arg7 scanCache:(BOOL)arg8 ;
-(void)receivedData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 ;
-(void)startAdvertisingOfType:(long long)arg1 data:(id)arg2 priority:(long long)arg3 mode:(long long)arg4 options:(id)arg5 ;
-(id)clientAsString;
-(NSMutableDictionary *)transfers;
-(void)stopAdvertisingOfType:(long long)arg1 ;
-(void)startedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)updateAdvertisingRequest:(id)arg1 withUpdate:(/*^block*/id)arg2 ;
-(void)invalidate;
-(void)setBtBandwidthState:(long long)arg1 ;
-(void)connectToPeer:(id)arg1 ;
-(void)startScanningForType:(long long)arg1 data:(id)arg2 mask:(id)arg3 peers:(id)arg4 scanMode:(long long)arg5 rssi:(id)arg6 duplicates:(BOOL)arg7 ;
-(void)stopTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(void)sendData:(id)arg1 toPeer:(id)arg2 ;
-(void)setLeCapablePeers:(NSArray *)arg1 ;
-(void)startTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(long long)btBandwidthState;
@end

