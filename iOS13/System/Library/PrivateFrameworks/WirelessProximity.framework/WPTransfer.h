/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/

#import <WirelessProximity/WPClient.h>

@protocol WPTransferDelegate;
@class NSUUID, NSMutableSet, NSMutableData;

@interface WPTransfer : WPClient {

	BOOL _advertising;
	BOOL _scanning;
	BOOL _connectedToPeripheral;
	BOOL _unsubscribeComing;
	BOOL _advertiserConnected;
	BOOL _sentEOM;
	BOOL _sendingTransferComplete;
	id<WPTransferDelegate> _delegate;
	NSUUID* _currentPeripheralUUID;
	NSMutableSet* _ignoredDevices;
	NSMutableData* _notificationData;
	NSUUID* _currentlySubscribedCentral;
	long long _lockScanTimer;

}

@property (__weak) id<WPTransferDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL advertising;                                 //@synthesize advertising=_advertising - In the implementation block
@property (assign) BOOL scanning;                                    //@synthesize scanning=_scanning - In the implementation block
@property (assign) BOOL connectedToPeripheral;                       //@synthesize connectedToPeripheral=_connectedToPeripheral - In the implementation block
@property (assign) BOOL unsubscribeComing;                           //@synthesize unsubscribeComing=_unsubscribeComing - In the implementation block
@property (assign) BOOL advertiserConnected;                         //@synthesize advertiserConnected=_advertiserConnected - In the implementation block
@property (assign) BOOL sentEOM;                                     //@synthesize sentEOM=_sentEOM - In the implementation block
@property (retain) NSUUID * currentPeripheralUUID;                   //@synthesize currentPeripheralUUID=_currentPeripheralUUID - In the implementation block
@property (retain) NSMutableSet * ignoredDevices;                    //@synthesize ignoredDevices=_ignoredDevices - In the implementation block
@property (retain) NSMutableData * notificationData;                 //@synthesize notificationData=_notificationData - In the implementation block
@property (retain) NSUUID * currentlySubscribedCentral;              //@synthesize currentlySubscribedCentral=_currentlySubscribedCentral - In the implementation block
@property (assign) long long lockScanTimer;                          //@synthesize lockScanTimer=_lockScanTimer - In the implementation block
@property (assign) BOOL sendingTransferComplete;                     //@synthesize sendingTransferComplete=_sendingTransferComplete - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(id<WPTransferDelegate>)delegate;
-(void)setDelegate:(id<WPTransferDelegate>)arg1 ;
-(void)stopAdvertising;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)stopScan;
-(void)receivedData:(id)arg1 ;
-(void)stateDidChange:(long long)arg1 ;
-(id)clientAsString;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 machName:(id)arg3 ;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(NSMutableSet *)ignoredDevices;
-(void)setIgnoredDevices:(NSMutableSet *)arg1 ;
-(void)receivedData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 ;
-(void)disconnectedDevice:(id)arg1 withError:(id)arg2 ;
-(void)connectedDevice:(id)arg1 withError:(id)arg2 shouldDiscover:(BOOL)arg3 ;
-(void)sentData:(id)arg1 toEndpoint:(id)arg2 forPeripheral:(id)arg3 withError:(id)arg4 ;
-(void)central:(id)arg1 subscribed:(BOOL)arg2 toCharacteristic:(id)arg3 inService:(id)arg4 ;
-(void)populateClientGATT:(/*^block*/id)arg1 ;
-(void)discoveredCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2 ;
-(void)updatedNotificationState:(BOOL)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 withPeripheral:(id)arg4 ;
-(void)sentData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 withError:(id)arg5 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 machName:(id)arg3 options:(id)arg4 ;
-(BOOL)advertising;
-(void)setScanning:(BOOL)arg1 ;
-(void)setAdvertising:(BOOL)arg1 ;
-(NSUUID *)currentPeripheralUUID;
-(void)setCurrentPeripheralUUID:(NSUUID *)arg1 ;
-(void)setConnectedToPeripheral:(BOOL)arg1 ;
-(NSMutableData *)notificationData;
-(BOOL)scanning;
-(void)setUnsubscribeComing:(BOOL)arg1 ;
-(void)transferFailed:(id)arg1 ;
-(void)setSentEOM:(BOOL)arg1 ;
-(NSUUID *)currentlySubscribedCentral;
-(BOOL)advertiserConnected;
-(BOOL)connectedToPeripheral;
-(void)setSendingTransferComplete:(BOOL)arg1 ;
-(BOOL)sendingTransferComplete;
-(BOOL)sentEOM;
-(void)setCurrentlySubscribedCentral:(NSUUID *)arg1 ;
-(void)setAdvertiserConnected:(BOOL)arg1 ;
-(void)startAdvertising;
-(BOOL)unsubscribeComing;
-(void)startScan;
-(void)ignoreDevice;
-(void)setNotificationData:(NSMutableData *)arg1 ;
-(long long)lockScanTimer;
-(void)setLockScanTimer:(long long)arg1 ;
@end

