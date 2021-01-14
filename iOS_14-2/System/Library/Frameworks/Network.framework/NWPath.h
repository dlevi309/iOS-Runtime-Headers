/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <libobjc.A.dylib/NWPrettyDescription.h>

@protocol OS_nw_path;
@class NSObject, NSArray, NSString, NWInterface, NSUUID, NWParameters, NWEndpoint, NWBrowseDescriptor, NWAdvertiseDescriptor;

@interface NWPath : NSObject <NWPrettyDescription> {

	NSObject*<OS_nw_path> _internalPath;

}

@property (readonly) NSObject*<OS_nw_path> internalPath;                                                 //@synthesize internalPath=_internalPath - In the implementation block
@property (nonatomic,readonly) unsigned fallbackInterfaceIndex; 
@property (nonatomic,readonly) BOOL fallbackIsWeak; 
@property (nonatomic,readonly) BOOL fallbackEligible; 
@property (nonatomic,readonly) NSArray * dnsServersAsStrings; 
@property (nonatomic,readonly) NSArray * gateways; 
@property (nonatomic,readonly) NSArray * flows; 
@property (nonatomic,readonly) NSString * statusAsString; 
@property (nonatomic,readonly) NWInterface * connectedInterface; 
@property (getter=isListener,nonatomic,readonly) BOOL listener; 
@property (getter=isViable,nonatomic,readonly) BOOL viable; 
@property (nonatomic,readonly) NSUUID * clientID; 
@property (nonatomic,readonly) NWInterface * interface; 
@property (nonatomic,readonly) NWInterface * scopedInterface; 
@property (nonatomic,readonly) NWInterface * fallbackInterface; 
@property (getter=isFlowDivert,nonatomic,readonly) BOOL flowDivert; 
@property (nonatomic,readonly) unsigned flowDivertControlUnit; 
@property (nonatomic,readonly) unsigned flowDivertAggregateUnit; 
@property (getter=isFiltered,nonatomic,readonly) BOOL filtered; 
@property (nonatomic,readonly) unsigned filterControlUnit; 
@property (nonatomic,readonly) int dnsServiceID; 
@property (getter=isLocal,nonatomic,readonly) BOOL local; 
@property (getter=isDirect,nonatomic,readonly) BOOL direct; 
@property (nonatomic,readonly) unsigned policyID; 
@property (getter=isRoaming,nonatomic,readonly) BOOL roaming; 
@property (nonatomic,readonly) long long mtu; 
@property (nonatomic,readonly) long long maximumDatagramSize; 
@property (nonatomic,readonly) unsigned long long secondsSinceInterfaceChange; 
@property (nonatomic,readonly) long long reason; 
@property (nonatomic,readonly) NSString * reasonDescription; 
@property (nonatomic,copy,readonly) NSString * privateDescription; 
@property (nonatomic,readonly) NWParameters * derivedParameters; 
@property (nonatomic,readonly) BOOL supportsIPv4; 
@property (nonatomic,readonly) BOOL supportsIPv6; 
@property (nonatomic,readonly) BOOL supportsDNS; 
@property (getter=isEligibleForCrazyIvan46,nonatomic,readonly) BOOL eligibleForCrazyIvan46; 
@property (nonatomic,readonly) NWEndpoint * endpoint; 
@property (nonatomic,readonly) NWParameters * parameters; 
@property (nonatomic,readonly) NWEndpoint * effectiveLocalEndpoint; 
@property (nonatomic,readonly) NWEndpoint * effectiveRemoteEndpoint; 
@property (nonatomic,readonly) NSArray * proxySettings; 
@property (nonatomic,readonly) NSArray * dnsServers; 
@property (nonatomic,readonly) NSArray * dnsSearchDomains; 
@property (nonatomic,readonly) BOOL hasBrowseDescriptor; 
@property (nonatomic,readonly) NWBrowseDescriptor * browseDescriptor; 
@property (nonatomic,readonly) BOOL hasAdvertiseDescriptor; 
@property (nonatomic,readonly) NWAdvertiseDescriptor * advertiseDescriptor; 
@property (getter=isPerAppVPN,nonatomic,readonly) BOOL perAppVPN; 
@property (nonatomic,readonly) long long status; 
@property (getter=isExpensive,nonatomic,readonly) BOOL expensive; 
@property (getter=isConstrained,nonatomic,readonly) BOOL constrained; 
+(id)pathWithProtocolBufferData:(id)arg1 ;
+(id)pathForClientID:(id)arg1 ;
+(id)createStringFromStatus:(long long)arg1 ;
+(id)allClientIDs;
-(BOOL)supportsIPv6;
-(BOOL)fallbackEligible;
-(long long)mtu;
-(NSArray *)dnsServers;
-(NWParameters *)parameters;
-(BOOL)isLocal;
-(unsigned long long)secondsSinceInterfaceChange;
-(BOOL)supportsIPv4;
-(NSUUID *)clientID;
-(BOOL)usesNetworkAgentType:(Class)arg1 ;
-(id)copyFlowDivertToken;
-(unsigned)filterControlUnit;
-(BOOL)isDirect;
-(NSString *)privateDescription;
-(BOOL)hasBrowseDescriptor;
-(id)genericNetworkAgentsWithDomain:(id)arg1 type:(id)arg2 ;
-(id)init;
-(BOOL)hasAdvertiseDescriptor;
-(NWBrowseDescriptor *)browseDescriptor;
-(NWInterface *)scopedInterface;
-(id)initWithPath:(id)arg1 ;
-(id)createProtocolBufferObject;
-(NWEndpoint *)effectiveRemoteEndpoint;
-(NWEndpoint *)endpoint;
-(NWInterface *)interface;
-(BOOL)hasUnsatisfiedFallbackAgent;
-(NWParameters *)derivedParameters;
-(BOOL)isFiltered;
-(BOOL)isEligibleForCrazyIvan46;
-(id)delegateInterface;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NWAdvertiseDescriptor *)advertiseDescriptor;
-(BOOL)isRoaming;
-(NSArray *)flows;
-(BOOL)isViable;
-(BOOL)unsatisfiedVoluntaryAgentMatchesAddress:(id)arg1 triggerImmediately:(BOOL*)arg2 ;
-(id)description;
-(unsigned)fallbackInterfaceIndex;
-(BOOL)fallbackIsWeak;
-(BOOL)usesInterfaceType:(long long)arg1 ;
-(unsigned)flowDivertControlUnit;
-(NSObject*<OS_nw_path>)internalPath;
-(long long)reason;
-(NWInterface *)fallbackInterface;
-(BOOL)isEqualToPath:(id)arg1 ;
-(id)networkAgentsOfType:(Class)arg1 ;
-(BOOL)isPerAppVPN;
-(NSArray *)gateways;
-(NWEndpoint *)effectiveLocalEndpoint;
-(BOOL)isFlowDivert;
-(NSArray *)proxySettings;
-(BOOL)isListener;
-(BOOL)usesNetworkAgent:(id)arg1 ;
-(unsigned)flowDivertAggregateUnit;
-(long long)maximumDatagramSize;
-(id)inactiveNetworkAgentUUIDsOnlyVoluntary:(BOOL)arg1 ;
-(unsigned)policyID;
-(BOOL)supportsDNS;
-(BOOL)shouldProbeConnectivity;
-(BOOL)isConstrained;
-(BOOL)isLinkQualityAbort;
-(NSString *)reasonDescription;
-(NWInterface *)connectedInterface;
-(BOOL)isListenerInterfaceSpecific;
-(NSArray *)dnsSearchDomains;
-(BOOL)isExpensive;
-(NSString *)statusAsString;
-(NSArray *)dnsServersAsStrings;
-(int)dnsServiceID;
-(long long)status;
@end

