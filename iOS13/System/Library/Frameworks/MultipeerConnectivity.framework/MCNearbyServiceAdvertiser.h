/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
*/

#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol MCNearbyServiceAdvertiserDelegate, OS_dispatch_queue;
@class MCPeerID, NSDictionary, NSString, NSNetService, NSData, NSMutableDictionary, NSObject;

@interface MCNearbyServiceAdvertiser : NSObject <NSNetServiceDelegate> {

	id<MCNearbyServiceAdvertiserDelegate> _delegate;
	BOOL _isAdvertising;
	BOOL _wasAdvertising;
	BOOL _AWDLDisabled;
	MCPeerID* _myPeerID;
	NSDictionary* _discoveryInfo;
	NSString* _serviceType;
	NSString* _formattedServiceType;
	NSNetService* _networkServer;
	NSData* _TXTRecordData;
	NSMutableDictionary* _peers;
	long long _outgoingInviteID;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSMutableDictionary* _invites;

}

@property (nonatomic,copy) NSString * serviceType;                                               //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSString * formattedServiceType;                                      //@synthesize formattedServiceType=_formattedServiceType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * peers;                                        //@synthesize peers=_peers - In the implementation block
@property (nonatomic,copy) NSDictionary * discoveryInfo;                                         //@synthesize discoveryInfo=_discoveryInfo - In the implementation block
@property (nonatomic,retain) NSNetService * networkServer;                                       //@synthesize networkServer=_networkServer - In the implementation block
@property (nonatomic,retain) NSData * TXTRecordData;                                             //@synthesize TXTRecordData=_TXTRecordData - In the implementation block
@property (assign,nonatomic) long long outgoingInviteID;                                         //@synthesize outgoingInviteID=_outgoingInviteID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                             //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * invites;                                      //@synthesize invites=_invites - In the implementation block
@property (assign,nonatomic) BOOL isAdvertising;                                                 //@synthesize isAdvertising=_isAdvertising - In the implementation block
@property (assign,nonatomic) BOOL wasAdvertising;                                                //@synthesize wasAdvertising=_wasAdvertising - In the implementation block
@property (assign,getter=isAWDLDisabled,nonatomic) BOOL AWDLDisabled;                            //@synthesize AWDLDisabled=_AWDLDisabled - In the implementation block
@property (assign,nonatomic,__weak) id<MCNearbyServiceAdvertiserDelegate> delegate; 
@property (nonatomic,readonly) MCPeerID * myPeerID;                                              //@synthesize myPeerID=_myPeerID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id<MCNearbyServiceAdvertiserDelegate>)delegate;
-(void)setDelegate:(id<MCNearbyServiceAdvertiserDelegate>)arg1 ;
-(NSString *)serviceType;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setTXTRecordData:(NSData *)arg1 ;
-(NSData *)TXTRecordData;
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(NSMutableDictionary *)peers;
-(BOOL)isAdvertising;
-(void)setPeers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)invites;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setIsAdvertising:(BOOL)arg1 ;
-(MCPeerID *)myPeerID;
-(void)applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)applicationWillEnterForegroundNotification:(id)arg1 ;
-(BOOL)isAWDLDisabled;
-(void)setAWDLDisabled:(BOOL)arg1 ;
-(id)txtRecordDataWithDiscoveryInfo:(id)arg1 ;
-(void)applicationWillTerminateNotification:(id)arg1 ;
-(NSDictionary *)discoveryInfo;
-(id)makeTXTRecordDataWithDiscoveryInfo:(id)arg1 ;
-(NSNetService *)networkServer;
-(NSString *)formattedServiceType;
-(void)setNetworkServer:(NSNetService *)arg1 ;
-(void)syncStartAdvertisingPeer;
-(void)syncStopAdvertisingPeer;
-(void)setWasAdvertising:(BOOL)arg1 ;
-(void)stopAdvertisingPeer;
-(BOOL)wasAdvertising;
-(void)syncSendData:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)syncSendDictionary:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)syncCloseConnectionForPeer:(id)arg1 ;
-(void)syncHandleInvite:(id)arg1 fromPeer:(id)arg2 ;
-(void)syncHandleInviteConnect:(id)arg1 fromPeer:(id)arg2 ;
-(void)parseIDString:(id*)arg1 displayName:(id*)arg2 fromIdentifier:(id)arg3 ;
-(void)syncReceivedData:(id)arg1 fromPeer:(id)arg2 ;
-(void)syncAttachConnection:(id)arg1 toPeer:(id)arg2 ;
-(void)syncHandleIncomingInputStream:(id)arg1 outputStream:(id)arg2 ;
-(id)initWithPeer:(id)arg1 discoveryInfo:(id)arg2 serviceType:(id)arg3 ;
-(void)startAdvertisingPeer;
-(void)setDiscoveryInfo:(NSDictionary *)arg1 ;
-(void)setFormattedServiceType:(NSString *)arg1 ;
-(long long)outgoingInviteID;
-(void)setOutgoingInviteID:(long long)arg1 ;
-(void)setInvites:(NSMutableDictionary *)arg1 ;
@end
