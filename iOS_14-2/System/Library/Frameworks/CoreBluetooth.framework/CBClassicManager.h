/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/

#import <CoreBluetooth/CBManager.h>

@class NSMapTable;

@interface CBClassicManager : CBManager {

	BOOL _inquiryState;
	BOOL _discoverable;
	BOOL _connectable;
	BOOL _isInquiryRunning;
	BOOL _testMode;
	/*^block*/id _connectCallback;
	/*^block*/id _disconnectCallback;
	/*^block*/id _serviceAddedHandler;
	/*^block*/id _inquiryServiceAddedHandler;
	NSMapTable* _peers;
	long long _powerState;
	/*^block*/id _classicPeerDiscovered;
	/*^block*/id _sdpRecordAddedHandler;
	/*^block*/id _pairingStatusHandler;
	/*^block*/id _connectionStatusHandler;

}

@property (nonatomic,retain,readonly) NSMapTable * peers;              //@synthesize peers=_peers - In the implementation block
@property (nonatomic,readonly) BOOL isInquiryRunning;                  //@synthesize isInquiryRunning=_isInquiryRunning - In the implementation block
@property (readonly) BOOL inquiryState;                                //@synthesize inquiryState=_inquiryState - In the implementation block
@property (readonly) BOOL discoverable;                                //@synthesize discoverable=_discoverable - In the implementation block
@property (readonly) BOOL connectable;                                 //@synthesize connectable=_connectable - In the implementation block
@property (readonly) long long powerState;                             //@synthesize powerState=_powerState - In the implementation block
@property (assign,nonatomic) BOOL testMode;                            //@synthesize testMode=_testMode - In the implementation block
@property (copy) id classicPeerDiscovered;                             //@synthesize classicPeerDiscovered=_classicPeerDiscovered - In the implementation block
@property (copy) id sdpRecordAddedHandler;                             //@synthesize sdpRecordAddedHandler=_sdpRecordAddedHandler - In the implementation block
@property (copy) id pairingStatusHandler;                              //@synthesize pairingStatusHandler=_pairingStatusHandler - In the implementation block
@property (copy) id connectionStatusHandler;                           //@synthesize connectionStatusHandler=_connectionStatusHandler - In the implementation block
@property (copy) id connectCallback;                                   //@synthesize connectCallback=_connectCallback - In the implementation block
@property (copy) id disconnectCallback;                                //@synthesize disconnectCallback=_disconnectCallback - In the implementation block
@property (copy) id serviceAddedHandler;                               //@synthesize serviceAddedHandler=_serviceAddedHandler - In the implementation block
@property (copy) id inquiryServiceAddedHandler;                        //@synthesize inquiryServiceAddedHandler=_inquiryServiceAddedHandler - In the implementation block
-(void)removeService:(id)arg1 ;
-(void)addService:(id)arg1 ;
-(id)peerWithInfo:(id)arg1 ;
-(BOOL)isMsgAllowedWhenOff:(unsigned short)arg1 ;
-(NSMapTable *)peers;
-(long long)powerState;
-(void)setPairingStatusHandler:(id)arg1 ;
-(void)setTestMode:(BOOL)arg1 ;
-(void)startInquiryWithOptions:(id)arg1 classicPeerDiscovered:(/*^block*/id)arg2 ;
-(id)classicPeerDiscovered;
-(void)handleLocalDeviceStateUpdatedMsg:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setSdpRecordAddedHandler:(id)arg1 ;
-(id)peerWithIdentifier:(id)arg1 ;
-(BOOL)setBTPowerState:(BOOL)arg1 ;
-(void)orphanClassicPeers;
-(void)setConnectionStatusHandler:(id)arg1 ;
-(void)removeServiceFromInquiryList:(id)arg1 ;
-(void)removeAACPClient:(unsigned short)arg1 ;
-(void)addAACPClient:(unsigned short)arg1 aacpClientAdded:(/*^block*/id)arg2 ;
-(void)addServiceToInquiryList:(id)arg1 ;
-(void)addService:(id)arg1 sdpRecord:(id)arg2 sdpRecordAddedHandler:(/*^block*/id)arg3 ;
-(void)setBTConnectable:(BOOL)arg1 ;
-(void)setBTDiscoverable:(BOOL)arg1 ;
-(void)handlePeerDisconnectionCompleted:(id)arg1 ;
-(id)initWithQueue:(id)arg1 options:(id)arg2 ;
-(BOOL)discoverable;
-(id)serviceAddedHandler;
-(BOOL)testMode;
-(void)handleServiceAddedToInquiryList:(id)arg1 ;
-(void)setServiceAddedHandler:(id)arg1 ;
-(void)removeAllServices;
-(id)sdpRecordAddedHandler;
-(void)setClassicPeerDiscovered:(id)arg1 ;
-(void)cancelPeerConnection:(id)arg1 force:(BOOL)arg2 ;
-(void)handlePeerConnectionCompleted:(id)arg1 ;
-(id)disconnectCallback;
-(id)retrievePeerWithAddress:(id)arg1 ;
-(void)stopInquiry;
-(id)connectionStatusHandler;
-(BOOL)inquiryState;
-(void)handleSDPRecordAdded:(id)arg1 ;
-(void)handlePeerDiscovered:(id)arg1 ;
-(void)setDisconnectCallback:(id)arg1 ;
-(id)inquiryServiceAddedHandler;
-(BOOL)secureBluetooth:(BOOL)arg1 withAuthData:(id)arg2 ;
-(void)handlePeerConnectionStateUpdated:(id)arg1 ;
-(void)removeAllServicesFromInquiryList;
-(void)connectPeer:(id)arg1 options:(id)arg2 ;
-(id)retrievePairedPeersWithOptions:(id)arg1 ;
-(id)connectCallback;
-(void)handleServiceAddedToSDP:(id)arg1 ;
-(id)classicPeerWithInfo:(id)arg1 ;
-(void)handleMsg:(unsigned short)arg1 args:(id)arg2 ;
-(BOOL)isInquiryRunning;
-(void)cancelPeerConnection:(id)arg1 ;
-(BOOL)connectable;
-(void)forEachClassicPeer:(/*^block*/id)arg1 ;
-(void)setInquiryServiceAddedHandler:(id)arg1 ;
-(id)pairingStatusHandler;
-(void)setConnectCallback:(id)arg1 ;
-(void)dealloc;
-(void)cancelPeerConnection:(id)arg1 options:(id)arg2 ;
-(BOOL)isMsgAllowedAlways:(unsigned short)arg1 ;
@end

