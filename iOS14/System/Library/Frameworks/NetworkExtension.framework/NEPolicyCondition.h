/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NSUUID, NSString, NWAddressEndpoint;

@interface NEPolicyCondition : NSObject <NEPrettyDescription> {

	BOOL _negative;
	unsigned char _prefix;
	unsigned short _ipProtocol;
	unsigned short _packetFilterTags;
	int _pid;
	unsigned _uid;
	unsigned _trafficClassStart;
	unsigned _trafficClassEnd;
	unsigned _clientFlags;
	unsigned _platform;
	unsigned _sdkVersion;
	unsigned _minSDKVersion;
	long long _conditionType;
	NSUUID* _applicationUUID;
	NSString* _accountIdentifier;
	NSString* _domain;
	NSString* _interfaceName;
	NWAddressEndpoint* _startAddress;
	NWAddressEndpoint* _endAddress;
	NSString* _customEntitlement;
	NSString* _agentDomain;
	NSString* _agentType;
	NSString* _signingIdentifier;

}

@property (assign) long long conditionType;                      //@synthesize conditionType=_conditionType - In the implementation block
@property (copy) NSUUID * applicationUUID;                       //@synthesize applicationUUID=_applicationUUID - In the implementation block
@property (assign) int pid;                                      //@synthesize pid=_pid - In the implementation block
@property (assign) unsigned uid;                                 //@synthesize uid=_uid - In the implementation block
@property (copy) NSString * accountIdentifier;                   //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (copy) NSString * domain;                              //@synthesize domain=_domain - In the implementation block
@property (copy) NSString * interfaceName;                       //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign) unsigned trafficClassStart;                   //@synthesize trafficClassStart=_trafficClassStart - In the implementation block
@property (assign) unsigned trafficClassEnd;                     //@synthesize trafficClassEnd=_trafficClassEnd - In the implementation block
@property (assign) unsigned short ipProtocol;                    //@synthesize ipProtocol=_ipProtocol - In the implementation block
@property (assign) unsigned char prefix;                         //@synthesize prefix=_prefix - In the implementation block
@property (assign) unsigned clientFlags;                         //@synthesize clientFlags=_clientFlags - In the implementation block
@property (copy) NWAddressEndpoint * startAddress;               //@synthesize startAddress=_startAddress - In the implementation block
@property (copy) NWAddressEndpoint * endAddress;                 //@synthesize endAddress=_endAddress - In the implementation block
@property (copy) NSString * customEntitlement;                   //@synthesize customEntitlement=_customEntitlement - In the implementation block
@property (copy) NSString * agentDomain;                         //@synthesize agentDomain=_agentDomain - In the implementation block
@property (copy) NSString * agentType;                           //@synthesize agentType=_agentType - In the implementation block
@property (assign) unsigned platform;                            //@synthesize platform=_platform - In the implementation block
@property (assign) unsigned sdkVersion;                          //@synthesize sdkVersion=_sdkVersion - In the implementation block
@property (assign) unsigned minSDKVersion;                       //@synthesize minSDKVersion=_minSDKVersion - In the implementation block
@property (copy) NSString * signingIdentifier;                   //@synthesize signingIdentifier=_signingIdentifier - In the implementation block
@property (assign) unsigned short packetFilterTags;              //@synthesize packetFilterTags=_packetFilterTags - In the implementation block
@property (getter=isNegative) BOOL negative;                     //@synthesize negative=_negative - In the implementation block
+(id)localAddress:(id)arg1 prefix:(unsigned char)arg2 ;
+(id)remoteAddress:(id)arg1 prefix:(unsigned char)arg2 ;
+(id)flowRemoteAddressStart:(id)arg1 end:(id)arg2 ;
+(id)entitlement;
+(id)customEntitlement:(id)arg1 ;
+(id)platformBinary;
+(id)isSystemProxyConnection;
+(id)domain:(id)arg1 ;
+(id)trafficClassStart:(unsigned)arg1 end:(unsigned)arg2 ;
+(id)clientFlags:(unsigned)arg1 ;
+(id)isInbound;
+(id)effectivePID:(int)arg1 ;
+(id)flowLocalAddressEmpty;
+(id)sdkVersion:(unsigned)arg1 minSDKVersion:(unsigned)arg2 platform:(unsigned)arg3 ;
+(id)fallbackTraffic;
+(id)flowRemoteAddressEmpty;
+(id)localAddressStart:(id)arg1 end:(id)arg2 ;
+(id)realApplication:(id)arg1 ;
+(id)flowIPProtocol:(unsigned short)arg1 ;
+(id)packetFilterTags:(unsigned short)arg1 ;
+(id)clientProhibitsExpensive;
+(id)remoteAddressStart:(id)arg1 end:(id)arg2 ;
+(id)allInterfaces;
+(id)localNetworks;
+(id)clientProhibitsContrained;
+(id)isListener;
+(id)flowRemoteAddress:(id)arg1 prefix:(unsigned char)arg2 ;
+(id)uid:(unsigned)arg1 ;
+(id)requiredAgentDomain:(id)arg1 agentType:(id)arg2 ;
+(id)flowLocalAddressStart:(id)arg1 end:(id)arg2 ;
+(id)accountIdentifier:(id)arg1 ;
+(id)effectiveApplication:(id)arg1 ;
+(id)flowLocalAddress:(id)arg1 prefix:(unsigned char)arg2 ;
+(id)signingIdentifier:(id)arg1 ;
+(id)ipProtocol:(unsigned short)arg1 ;
+(id)scopedInterface:(id)arg1 ;
+(id)usesModernNetworkAPI;
-(BOOL)isNegative;
-(id)initInternal;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setSigningIdentifier:(NSString *)arg1 ;
-(BOOL)validate;
-(void)setUid:(unsigned)arg1 ;
-(unsigned short)ipProtocol;
-(unsigned)platform;
-(NSString *)signingIdentifier;
-(BOOL)addTLVsToMessage:(id)arg1 ;
-(unsigned)uid;
-(void)setMinSDKVersion:(unsigned)arg1 ;
-(unsigned char)prefix;
-(int)pid;
-(id)init;
-(NSString *)agentType;
-(void)setPlatform:(unsigned)arg1 ;
-(void)setIpProtocol:(unsigned short)arg1 ;
-(unsigned short)packetFilterTags;
-(NSString *)accountIdentifier;
-(void)setSdkVersion:(unsigned)arg1 ;
-(unsigned char)conditionTypeValue;
-(long long)conditionType;
-(NSString *)agentDomain;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(NSString *)interfaceName;
-(NWAddressEndpoint *)startAddress;
-(void)setConditionType:(long long)arg1 ;
-(id)description;
-(unsigned)trafficClassStart;
-(void)setApplicationUUID:(NSUUID *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setPacketFilterTags:(unsigned short)arg1 ;
-(unsigned)clientFlags;
-(void)setClientFlags:(unsigned)arg1 ;
-(id)conditionTypeString;
-(unsigned)trafficClassEnd;
-(void)setPrefix:(unsigned char)arg1 ;
-(void)setCustomEntitlement:(NSString *)arg1 ;
-(void)setTrafficClassStart:(unsigned)arg1 ;
-(void)setTrafficClassEnd:(unsigned)arg1 ;
-(void)setPid:(int)arg1 ;
-(unsigned)minSDKVersion;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)setNegative:(BOOL)arg1 ;
-(void)setAgentType:(NSString *)arg1 ;
-(NSString *)customEntitlement;
-(NWAddressEndpoint *)endAddress;
-(NSUUID *)applicationUUID;
-(void)setAgentDomain:(NSString *)arg1 ;
-(void)setStartAddress:(NWAddressEndpoint *)arg1 ;
-(void)setEndAddress:(NWAddressEndpoint *)arg1 ;
-(unsigned)sdkVersion;
@end

