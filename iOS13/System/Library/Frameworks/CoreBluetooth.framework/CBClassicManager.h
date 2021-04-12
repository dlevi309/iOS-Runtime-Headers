/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/

#import <CoreBluetooth/CBManager.h>

@class NSMapTable, NSMutableSet, NSMutableDictionary;

@interface CBClassicManager : CBManager {

	BOOL _inquiryState;
	BOOL _discoverable;
	BOOL _connectable;
	BOOL _isInquiryRunning;
	BOOL _testMode;
	/*^block*/id _connectCallback;
	/*^block*/id _disconnectCallback;
	NSMapTable* _peers;
	NSMutableSet* _sdpServices;
	NSMutableSet* _inquiryServices;
	NSMutableDictionary* _sdpRecords;
	/*^block*/id _classicPeerDiscovered;
	/*^block*/id _servicesAdded;
	/*^block*/id _inquiryServicesAdded;
	/*^block*/id _sdpRecordAdded;
	/*^block*/id _connectRFCOMMCallback;
	long long _powerState;

}

@property (nonatomic,retain,readonly) NSMapTable * peers;                            //@synthesize peers=_peers - In the implementation block
@property (nonatomic,readonly) BOOL isInquiryRunning;                                //@synthesize isInquiryRunning=_isInquiryRunning - In the implementation block
@property (nonatomic,retain,readonly) NSMutableSet * sdpServices;                    //@synthesize sdpServices=_sdpServices - In the implementation block
@property (nonatomic,retain,readonly) NSMutableSet * inquiryServices;                //@synthesize inquiryServices=_inquiryServices - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * sdpRecords;              //@synthesize sdpRecords=_sdpRecords - In the implementation block
@property (nonatomic,copy) id classicPeerDiscovered;                                 //@synthesize classicPeerDiscovered=_classicPeerDiscovered - In the implementation block
@property (nonatomic,copy) id servicesAdded;                                         //@synthesize servicesAdded=_servicesAdded - In the implementation block
@property (nonatomic,copy) id inquiryServicesAdded;                                  //@synthesize inquiryServicesAdded=_inquiryServicesAdded - In the implementation block
@property (nonatomic,copy) id sdpRecordAdded;                                        //@synthesize sdpRecordAdded=_sdpRecordAdded - In the implementation block
@property (copy) id connectRFCOMMCallback;                                           //@synthesize connectRFCOMMCallback=_connectRFCOMMCallback - In the implementation block
@property (readonly) BOOL inquiryState;                                              //@synthesize inquiryState=_inquiryState - In the implementation block
@property (readonly) BOOL discoverable;                                              //@synthesize discoverable=_discoverable - In the implementation block
@property (readonly) BOOL connectable;                                               //@synthesize connectable=_connectable - In the implementation block
@property (readonly) long long powerState;                                           //@synthesize powerState=_powerState - In the implementation block
@property (assign,nonatomic) BOOL testMode;                                          //@synthesize testMode=_testMode - In the implementation block
@property (copy) id connectCallback;                                                 //@synthesize connectCallback=_connectCallback - In the implementation block
@property (copy) id disconnectCallback;                                              //@synthesize disconnectCallback=_disconnectCallback - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSMapTable *)peers;
-(BOOL)testMode;
-(void)setTestMode:(BOOL)arg1 ;
-(long long)powerState;
-(void)removeService:(id)arg1 ;
-(BOOL)connectable;
-(void)cancelPeerConnection:(id)arg1 ;
-(void)handleMsg:(unsigned short)arg1 args:(id)arg2 ;
-(id)peerWithInfo:(id)arg1 ;
-(void)orphanClassicPeers;
-(void)forEachClassicPeer:(/*^block*/id)arg1 ;
-(id)classicPeerWithInfo:(id)arg1 ;
-(void)setClassicPeerDiscovered:(id)arg1 ;
-(id)servicesAdded;
-(void)setServicesAdded:(id)arg1 ;
-(id)inquiryServicesAdded;
-(void)setInquiryServicesAdded:(id)arg1 ;
-(id)sdpRecordAdded;
-(void)setSdpRecordAdded:(id)arg1 ;
-(void)cancelPeerConnection:(id)arg1 force:(BOOL)arg2 ;
-(void)handlePeerDiscovered:(id)arg1 ;
-(void)handlePeerConnectionCompleted:(id)arg1 ;
-(void)handlePeerDisconnectionCompleted:(id)arg1 ;
-(void)handleServicesAddedToSDP:(id)arg1 ;
-(void)handleServicesAddedToInquiryList:(id)arg1 ;
-(void)handleSDPRecordAdded:(id)arg1 ;
-(id)classicPeerDiscovered;
-(id)peerWithIdentifier:(id)arg1 ;
-(id)connectCallback;
-(id)disconnectCallback;
-(id)initWithQueue:(id)arg1 options:(id)arg2 ;
-(void)setBTConnectable:(BOOL)arg1 ;
-(void)setBTDiscoverable:(BOOL)arg1 ;
-(void)setBTPowerState:(BOOL)arg1 ;
-(void)handleLocalDeviceStateUpdatedMsg:(id)arg1 ;
-(void)startInquiryWithOptions:(id)arg1 classicPeerDiscovered:(/*^block*/id)arg2 ;
-(void)stopInquiry;
-(id)retrievePairedPeersWithOptions:(id)arg1 ;
-(void)addServices:(id)arg1 servicesAdded:(/*^block*/id)arg2 ;
-(void)removeAllServices;
-(void)addServicesToInquiryList:(id)arg1 servicesAdded:(/*^block*/id)arg2 ;
-(void)removeServiceFromInquiryList:(id)arg1 ;
-(void)removeAllServicesFromInquiryList;
-(void)addService:(id)arg1 sdpRecord:(id)arg2 sdpRecordAdded:(/*^block*/id)arg3 ;
-(void)connectPeer:(id)arg1 options:(id)arg2 ;
-(void)addAAPClient:(unsigned short)arg1 aapClientAdded:(/*^block*/id)arg2 ;
-(void)removeAAPClient:(unsigned short)arg1 ;
-(BOOL)inquiryState;
-(BOOL)discoverable;
-(void)setConnectCallback:(id)arg1 ;
-(void)setDisconnectCallback:(id)arg1 ;
-(BOOL)isInquiryRunning;
-(NSMutableSet *)sdpServices;
-(NSMutableSet *)inquiryServices;
-(NSMutableDictionary *)sdpRecords;
-(id)connectRFCOMMCallback;
-(void)setConnectRFCOMMCallback:(id)arg1 ;
@end

