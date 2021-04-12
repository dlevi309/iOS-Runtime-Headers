/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCConnectionProtocol.h>

@class IDSDataChannelLinkContext, VCDatagramChannelIDS, NSString, NSData, NSUUID;

@interface VCConnectionIDS : NSObject <VCConnectionProtocol> {

	IDSDataChannelLinkContext* _linkContext;
	unsigned _datagramChannelToken;
	VCDatagramChannelIDS* _datagramChannel;
	int _priority;
	unsigned _type;
	int _localCellTech;
	int _remoteCellTech;
	int _connectionMTU;
	unsigned _uplinkBitrateCap;
	unsigned _downlinkBitrateCap;
	BOOL _isLocalConstrained;
	BOOL _isRemoteConstrained;

}

@property (readonly) unsigned datagramChannelToken;                       //@synthesize datagramChannelToken=_datagramChannelToken - In the implementation block
@property (readonly) VCDatagramChannelIDS * datagramChannel;              //@synthesize datagramChannel=_datagramChannel - In the implementation block
@property (readonly) unsigned char linkID; 
@property (readonly) NSString * relaySessionToken; 
@property (readonly) NSData * sharedDigestKey; 
@property (readonly) BOOL isLocalConstrained;                             //@synthesize isLocalConstrained=_isLocalConstrained - In the implementation block
@property (readonly) BOOL isRemoteConstrained;                            //@synthesize isRemoteConstrained=_isRemoteConstrained - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL isLocalOnWiFi; 
@property (readonly) BOOL isRemoteOnWiFi; 
@property (readonly) BOOL isLocalOnCellular; 
@property (readonly) BOOL isRemoteOnCellular; 
@property (readonly) BOOL isIPv6; 
@property (assign) int connectionMTU; 
@property (readonly) int connectionId; 
@property (readonly) BOOL isRelay; 
@property (readonly) BOOL isVPN; 
@property (readonly) BOOL serverIsDegraded; 
@property (readonly) NSUUID * connectionUUID; 
@property (readonly) int localConnectionType; 
@property (readonly) int remoteConnectionType; 
@property (assign) int localCellTech; 
@property (assign) int remoteCellTech; 
@property (assign) int priority;                                          //@synthesize priority=_priority - In the implementation block
@property (readonly) unsigned type;                                       //@synthesize type=_type - In the implementation block
@property (readonly) NSString * localInterfaceTypeString; 
@property (readonly) NSString * remoteInterfaceTypeString; 
@property (assign) unsigned uplinkBitrateCap;                             //@synthesize uplinkBitrateCap=_uplinkBitrateCap - In the implementation block
@property (assign) unsigned downlinkBitrateCap;                           //@synthesize downlinkBitrateCap=_downlinkBitrateCap - In the implementation block
+(unsigned)worstCaseNetworkOverheadInBytesWithNumOfStreamId:(int)arg1 isPriorityIncluded:(BOOL)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(unsigned)type;
-(NSUUID *)connectionUUID;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(NSString *)relaySessionToken;
-(unsigned char)linkID;
-(int)remoteConnectionType;
-(BOOL)serverIsDegraded;
-(int)connectionId;
-(BOOL)isRelay;
-(int)localCellTech;
-(int)remoteCellTech;
-(int)networkOverheadInBytesWithNumOfStreamId:(int)arg1 isPriorityIncluded:(BOOL)arg2 ;
-(BOOL)isLocalOnWiFi;
-(BOOL)isRemoteOnWiFi;
-(BOOL)isLocalOnCellular;
-(BOOL)isRemoteOnCellular;
-(BOOL)isSameAsConnection:(id)arg1 ;
-(BOOL)isOnSameInterfacesWithConnection:(id)arg1 ;
-(void)getSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 ;
-(BOOL)matchesSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 ;
-(BOOL)isIPv6;
-(int)connectionMTU;
-(void)setConnectionMTU:(int)arg1 ;
-(BOOL)isVPN;
-(int)localConnectionType;
-(void)setLocalCellTech:(int)arg1 ;
-(void)setRemoteCellTech:(int)arg1 ;
-(NSString *)localInterfaceTypeString;
-(NSString *)remoteInterfaceTypeString;
-(unsigned)uplinkBitrateCap;
-(void)setUplinkBitrateCap:(unsigned)arg1 ;
-(unsigned)downlinkBitrateCap;
-(void)setDownlinkBitrateCap:(unsigned)arg1 ;
-(id)initWithLinkContext:(id)arg1 dataChannelToken:(unsigned)arg2 ;
-(BOOL)isLocalConstrained;
-(BOOL)isRemoteConstrained;
-(id)connectionQRSessionID;
-(BOOL)isOnSameQRSessionWithConnection:(id)arg1 ;
-(BOOL)matchesChannelTokenWithSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 ;
-(NSData *)sharedDigestKey;
-(void)setCellularMTU:(int)arg1 ;
-(BOOL)isOnSameInterfacesAndQRSessionWithConnection:(id)arg1 ;
-(unsigned)datagramChannelToken;
-(VCDatagramChannelIDS *)datagramChannel;
@end

