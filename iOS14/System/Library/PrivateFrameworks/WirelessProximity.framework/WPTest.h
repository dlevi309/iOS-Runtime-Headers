/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/

#import <WirelessProximity/WPClient.h>

@protocol WPTestDelegate;
@class NSMutableDictionary;

@interface WPTest : WPClient {

	id<WPTestDelegate> _delegate;
	NSMutableDictionary* _transfers;

}

@property (assign,nonatomic,__weak) id<WPTestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMutableDictionary * transfers;                           //@synthesize transfers=_transfers - In the implementation block
+(long long)holdVouchers;
-(void)connectedDevice:(id)arg1 withError:(id)arg2 shouldDiscover:(BOOL)arg3 ;
-(void)central:(id)arg1 subscribed:(BOOL)arg2 toCharacteristic:(id)arg3 inService:(id)arg4 ;
-(void)stateDidChange:(long long)arg1 ;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2 ;
-(void)sentData:(id)arg1 toEndpoint:(id)arg2 forPeripheral:(id)arg3 withError:(id)arg4 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(void)disconnectedDeviceOverLEPipe:(id)arg1 withError:(id)arg2 ;
-(void)receivedData:(id)arg1 fromEndpoint:(id)arg2 forPeripheral:(id)arg3 ;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(void)disconnectFromPeer:(id)arg1 ;
-(void)connectedDeviceOverLEPipe:(id)arg1 ;
-(void)connectToPeer:(id)arg1 withOptions:(id)arg2 ;
-(void)setTransfers:(NSMutableDictionary *)arg1 ;
-(id)init;
-(id<WPTestDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)disconnectedDevice:(id)arg1 withError:(id)arg2 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)deviceDiscovered:(id)arg1 ;
-(void)stopScanningForType:(unsigned char)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)setDelegate:(id<WPTestDelegate>)arg1 ;
-(void)startScanningForType:(unsigned char)arg1 data:(id)arg2 mask:(id)arg3 peers:(id)arg4 scanMode:(long long)arg5 rssi:(id)arg6 duplicates:(BOOL)arg7 scanCache:(BOOL)arg8 ;
-(void)receivedData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 ;
-(void)startAdvertisingOfType:(unsigned char)arg1 data:(id)arg2 priority:(long long)arg3 mode:(long long)arg4 options:(id)arg5 ;
-(id)clientAsString;
-(NSMutableDictionary *)transfers;
-(void)stopAdvertisingOfType:(unsigned char)arg1 ;
-(void)invalidate;
-(void)sendData:(id)arg1 toPeer:(id)arg2 ;
@end

