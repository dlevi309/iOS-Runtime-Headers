/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

@class NSUUID, NSString;


@protocol VCConnectionProtocol <NSObject>
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
@property (assign) int priority; 
@property (readonly) unsigned type; 
@property (readonly) NSString * localInterfaceTypeString; 
@property (readonly) NSString * remoteInterfaceTypeString; 
@property (assign) unsigned uplinkBitrateCap; 
@property (assign) unsigned downlinkBitrateCap; 
@required
-(unsigned)type;
-(NSUUID *)connectionUUID;
-(int)priority;
-(void)setPriority:(int)arg1;
-(int)remoteConnectionType;
-(BOOL)serverIsDegraded;
-(int)connectionId;
-(BOOL)isRelay;
-(int)localCellTech;
-(int)remoteCellTech;
-(BOOL)isLocalOnWiFi;
-(BOOL)isRemoteOnWiFi;
-(BOOL)isLocalOnCellular;
-(BOOL)isRemoteOnCellular;
-(BOOL)isSameAsConnection:(id)arg1;
-(BOOL)isOnSameInterfacesWithConnection:(id)arg1;
-(void)getSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1;
-(BOOL)matchesSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1;
-(BOOL)isIPv6;
-(int)connectionMTU;
-(void)setConnectionMTU:(int)arg1;
-(BOOL)isVPN;
-(int)localConnectionType;
-(void)setLocalCellTech:(int)arg1;
-(void)setRemoteCellTech:(int)arg1;
-(NSString *)localInterfaceTypeString;
-(NSString *)remoteInterfaceTypeString;
-(unsigned)uplinkBitrateCap;
-(void)setUplinkBitrateCap:(unsigned)arg1;
-(unsigned)downlinkBitrateCap;
-(void)setDownlinkBitrateCap:(unsigned)arg1;

@end

