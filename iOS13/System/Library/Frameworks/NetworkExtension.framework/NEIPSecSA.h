/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWAddressEndpoint, NSString, NSData;

@interface NEIPSecSA : NSObject <NSCopying> {

	BOOL _natTraversalEnabled;
	BOOL _natDetectedOnPeer;
	BOOL _natKeepaliveEnabled;
	BOOL _natKeepaliveOffloadEnabled;
	BOOL _sequencePerTrafficClass;
	unsigned short _natTraversalPort;
	unsigned short _natTraversalSrcPort;
	unsigned _spi;
	int _direction;
	int _mode;
	int _protocol;
	unsigned _replayWindowSize;
	int _encryptionAlgorithm;
	int _authenticationAlgorithm;
	unsigned _internalSAID;
	NWAddressEndpoint* _localAddress;
	NWAddressEndpoint* _remoteAddress;
	NSString* _boundInterfaceName;
	NSString* _tunnelInterfaceName;
	unsigned long long _lifetimeSeconds;
	NSData* _encryptionKey;
	NSData* _authenticationKey;
	unsigned long long _natKeepaliveIntervalSeconds;
	unsigned long long _natKeepaliveOffloadIntervalSeconds;

}

@property (assign) unsigned internalSAID;                                              //@synthesize internalSAID=_internalSAID - In the implementation block
@property (assign) unsigned spi;                                                       //@synthesize spi=_spi - In the implementation block
@property (readonly) int direction;                                                    //@synthesize direction=_direction - In the implementation block
@property (assign) int mode;                                                           //@synthesize mode=_mode - In the implementation block
@property (assign) int protocol;                                                       //@synthesize protocol=_protocol - In the implementation block
@property (retain) NWAddressEndpoint * localAddress;                                   //@synthesize localAddress=_localAddress - In the implementation block
@property (retain) NWAddressEndpoint * remoteAddress;                                  //@synthesize remoteAddress=_remoteAddress - In the implementation block
@property (retain) NSString * boundInterfaceName;                                      //@synthesize boundInterfaceName=_boundInterfaceName - In the implementation block
@property (retain) NSString * tunnelInterfaceName;                                     //@synthesize tunnelInterfaceName=_tunnelInterfaceName - In the implementation block
@property (assign) unsigned replayWindowSize;                                          //@synthesize replayWindowSize=_replayWindowSize - In the implementation block
@property (assign) unsigned long long lifetimeSeconds;                                 //@synthesize lifetimeSeconds=_lifetimeSeconds - In the implementation block
@property (assign) int encryptionAlgorithm;                                            //@synthesize encryptionAlgorithm=_encryptionAlgorithm - In the implementation block
@property (retain) NSData * encryptionKey;                                             //@synthesize encryptionKey=_encryptionKey - In the implementation block
@property (assign) int authenticationAlgorithm;                                        //@synthesize authenticationAlgorithm=_authenticationAlgorithm - In the implementation block
@property (retain) NSData * authenticationKey;                                         //@synthesize authenticationKey=_authenticationKey - In the implementation block
@property (assign) BOOL natTraversalEnabled;                                           //@synthesize natTraversalEnabled=_natTraversalEnabled - In the implementation block
@property (assign) BOOL natDetectedOnPeer;                                             //@synthesize natDetectedOnPeer=_natDetectedOnPeer - In the implementation block
@property (assign) BOOL natKeepaliveEnabled;                                           //@synthesize natKeepaliveEnabled=_natKeepaliveEnabled - In the implementation block
@property (assign) BOOL natKeepaliveOffloadEnabled;                                    //@synthesize natKeepaliveOffloadEnabled=_natKeepaliveOffloadEnabled - In the implementation block
@property (assign) unsigned long long natKeepaliveIntervalSeconds;                     //@synthesize natKeepaliveIntervalSeconds=_natKeepaliveIntervalSeconds - In the implementation block
@property (assign) unsigned long long natKeepaliveOffloadIntervalSeconds;              //@synthesize natKeepaliveOffloadIntervalSeconds=_natKeepaliveOffloadIntervalSeconds - In the implementation block
@property (assign) unsigned short natTraversalPort;                                    //@synthesize natTraversalPort=_natTraversalPort - In the implementation block
@property (assign) unsigned short natTraversalSrcPort;                                 //@synthesize natTraversalSrcPort=_natTraversalSrcPort - In the implementation block
@property (assign) BOOL sequencePerTrafficClass;                                       //@synthesize sequencePerTrafficClass=_sequencePerTrafficClass - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invalidate;
-(void)setMode:(int)arg1 ;
-(int)protocol;
-(int)mode;
-(void)setProtocol:(int)arg1 ;
-(int)direction;
-(NWAddressEndpoint *)localAddress;
-(NWAddressEndpoint *)remoteAddress;
-(void)setLocalAddress:(NWAddressEndpoint *)arg1 ;
-(void)setRemoteAddress:(NWAddressEndpoint *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setEncryptionAlgorithm:(int)arg1 ;
-(void)setLifetimeSeconds:(unsigned long long)arg1 ;
-(unsigned)spi;
-(unsigned long long)lifetimeSeconds;
-(void)setSpi:(unsigned)arg1 ;
-(void)setReplayWindowSize:(unsigned)arg1 ;
-(unsigned)replayWindowSize;
-(BOOL)sequencePerTrafficClass;
-(void)setSequencePerTrafficClass:(BOOL)arg1 ;
-(NSData *)encryptionKey;
-(int)encryptionAlgorithm;
-(id)initInboundSA;
-(void)setBoundInterfaceName:(NSString *)arg1 ;
-(void)setTunnelInterfaceName:(NSString *)arg1 ;
-(id)initOutboundSAWithSPI:(unsigned)arg1 ;
-(void)setEncryptionKey:(NSData *)arg1 ;
-(void)setAuthenticationAlgorithm:(int)arg1 ;
-(void)setAuthenticationKey:(NSData *)arg1 ;
-(void)setNatTraversalEnabled:(BOOL)arg1 ;
-(void)setNatTraversalPort:(unsigned short)arg1 ;
-(void)setNatTraversalSrcPort:(unsigned short)arg1 ;
-(void)setNatKeepaliveEnabled:(BOOL)arg1 ;
-(void)setNatKeepaliveOffloadEnabled:(BOOL)arg1 ;
-(void)setNatKeepaliveOffloadIntervalSeconds:(unsigned long long)arg1 ;
-(void)setNatKeepaliveIntervalSeconds:(unsigned long long)arg1 ;
-(void)setNatDetectedOnPeer:(BOOL)arg1 ;
-(NSString *)tunnelInterfaceName;
-(NSString *)boundInterfaceName;
-(unsigned)internalSAID;
-(void)setInternalSAID:(unsigned)arg1 ;
-(int)authenticationAlgorithm;
-(NSData *)authenticationKey;
-(BOOL)natTraversalEnabled;
-(BOOL)natDetectedOnPeer;
-(BOOL)natKeepaliveEnabled;
-(BOOL)natKeepaliveOffloadEnabled;
-(unsigned long long)natKeepaliveIntervalSeconds;
-(unsigned long long)natKeepaliveOffloadIntervalSeconds;
-(unsigned short)natTraversalPort;
-(unsigned short)natTraversalSrcPort;
-(id)createDictionary;
@end

