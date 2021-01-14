/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCConnection.h>
#import <libobjc.A.dylib/VCConnectionProtocol.h>

@class NSUUID, NSString;

@interface VCConnectionLegacy : VCConnection <VCConnectionProtocol> {

	unsigned _type;
	int _priority;
	BOOL _waitToBeNominated;
	tagCONNRESULT* _connectionResult;
	BOOL isLocalConstrained;
	BOOL isLocalExpensive;
	BOOL isRemoteConstrained;
	BOOL isRemoteExpensive;
	BOOL isLocalDelegated;
	BOOL isRemoteDelegated;
	BOOL isLocalOn5G;
	BOOL isRemoteOn5G;

}

@property (readonly) tagCONNRESULT* connectionResult;                   //@synthesize connectionResult=_connectionResult - In the implementation block
@property (assign) BOOL waitToBeNominated;                              //@synthesize waitToBeNominated=_waitToBeNominated - In the implementation block
@property (readonly) unsigned short relayChannelNumber; 
@property (readonly) BOOL isUpgraded; 
@property (readonly) BOOL isReplaceOnly; 
@property (readonly) BOOL isLocalOnWiFi; 
@property (readonly) BOOL isRemoteOnWiFi; 
@property (readonly) BOOL isLocalOnCellular; 
@property (readonly) BOOL isRemoteOnCellular; 
@property (readonly) BOOL isLocalOn5G; 
@property (readonly) BOOL isRemoteOn5G; 
@property (readonly) BOOL isLocalExpensive; 
@property (readonly) BOOL isRemoteExpensive; 
@property (readonly) BOOL isLocalConstrained; 
@property (readonly) BOOL isRemoteConstrained; 
@property (readonly) BOOL isLocalDelegated; 
@property (readonly) BOOL isRemoteDelegated; 
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
@property (assign) int priority;                                        //@synthesize priority=_priority - In the implementation block
@property (readonly) unsigned type;                                     //@synthesize type=_type - In the implementation block
@property (readonly) NSString * localInterfaceTypeString; 
@property (readonly) NSString * remoteInterfaceTypeString; 
@property (assign) unsigned uplinkBitrateCap; 
@property (assign) unsigned downlinkBitrateCap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)remoteConnectionType;
-(BOOL)serverIsDegraded;
-(BOOL)isVPN;
-(BOOL)isIPv6;
-(NSString *)description;
-(int)cellularMTU;
-(id)copy;
-(int)connectionId;
-(BOOL)isRelay;
-(NSUUID *)connectionUUID;
-(unsigned)type;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(void)dealloc;
-(int)localCellTech;
-(int)remoteCellTech;
-(id)initWithConnectionResult:(tagCONNRESULT*)arg1 type:(unsigned)arg2 ;
-(tagCONNRESULT*)connectionResult;
-(BOOL)waitToBeNominated;
-(BOOL)isLocalOnWiFi;
-(BOOL)isRemoteOnWiFi;
-(id)ipportToString:(tagIPPORT*)arg1 ;
-(unsigned short)relayChannelNumber;
-(BOOL)isLocalOnCellular;
-(BOOL)isRemoteOnCellular;
-(tagIPPORT)IPPortForNWConnection:(id)arg1 ;
-(BOOL)isRemoteIPPort:(tagIPPORT*)arg1 ;
-(BOOL)isSameAsConnection:(id)arg1 ;
-(BOOL)isOnSameInterfacesWithConnection:(id)arg1 ;
-(void)getSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 ;
-(BOOL)matchesSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 ;
-(BOOL)isLocalOn5G;
-(BOOL)isRemoteOn5G;
-(BOOL)isLocalExpensive;
-(BOOL)isRemoteExpensive;
-(BOOL)isLocalConstrained;
-(BOOL)isRemoteConstrained;
-(BOOL)isLocalDelegated;
-(BOOL)isRemoteDelegated;
-(int)connectionMTU;
-(void)setConnectionMTU:(int)arg1 ;
-(int)localConnectionType;
-(void)setLocalCellTech:(int)arg1 ;
-(void)setRemoteCellTech:(int)arg1 ;
-(NSString *)localInterfaceTypeString;
-(NSString *)remoteInterfaceTypeString;
-(unsigned)uplinkBitrateCap;
-(void)setUplinkBitrateCap:(unsigned)arg1 ;
-(unsigned)downlinkBitrateCap;
-(void)setDownlinkBitrateCap:(unsigned)arg1 ;
-(id)initWithCandidatePair:(tagCANDIDATEPAIR*)arg1 ;
-(BOOL)isLocalIPPort:(tagIPPORT*)arg1 ;
-(BOOL)isOnSameIPPortWithConnection:(id)arg1 ;
-(BOOL)isUpgraded;
-(BOOL)isReplaceOnly;
-(void)setWaitToBeNominated:(BOOL)arg1 ;
@end

