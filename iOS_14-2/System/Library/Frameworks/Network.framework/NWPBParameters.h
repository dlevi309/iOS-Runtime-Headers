/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NWPBEndpoint, NSData, NSMutableArray, NWPBInterface;

@interface NWPBParameters : PBCodable <NSCopying> {

	SCD_Struct_NW15* _prohibitedInterfaceSubTypes;
	SCD_Struct_NW15* _prohibitedInterfaceTypes;
	NSString* _account;
	unsigned _addressFamily;
	int _dataMode;
	NSString* _effectiveBundleID;
	NSString* _effectiveProcessUUID;
	unsigned _ipProtocol;
	NWPBEndpoint* _localEndpoint;
	NSData* _metadata;
	NSMutableArray* _preferredAgents;
	NSMutableArray* _prohibitedAgents;
	NSMutableArray* _prohibitedInterfaces;
	NSString* _realProcessUUID;
	NSMutableArray* _requiredAgents;
	NWPBInterface* _requiredInterface;
	int _requiredInterfaceType;
	unsigned _trafficClass;
	NSString* _url;
	BOOL _fastOpen;
	BOOL _keepalive;
	BOOL _longOutstandingQueries;
	unsigned _multipathService;
	BOOL _noFallback;
	BOOL _prohibitExpensive;
	BOOL _reduceBuffering;
	BOOL _reuseLocalAddress;
	BOOL _useAWDL;
	BOOL _useP2P;
	SCD_Struct_NW19 _has;

}

@property (nonatomic,readonly) BOOL hasAccount; 
@property (nonatomic,retain) NSString * account;                                                 //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) BOOL hasEffectiveBundleID; 
@property (nonatomic,retain) NSString * effectiveBundleID;                                       //@synthesize effectiveBundleID=_effectiveBundleID - In the implementation block
@property (nonatomic,readonly) BOOL hasEffectiveProcessUUID; 
@property (nonatomic,retain) NSString * effectiveProcessUUID;                                    //@synthesize effectiveProcessUUID=_effectiveProcessUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasRealProcessUUID; 
@property (nonatomic,retain) NSString * realProcessUUID;                                         //@synthesize realProcessUUID=_realProcessUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;                                                     //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL hasIpProtocol; 
@property (assign,nonatomic) unsigned ipProtocol;                                                //@synthesize ipProtocol=_ipProtocol - In the implementation block
@property (assign,nonatomic) BOOL hasAddressFamily; 
@property (assign,nonatomic) unsigned addressFamily;                                             //@synthesize addressFamily=_addressFamily - In the implementation block
@property (assign,nonatomic) BOOL hasTrafficClass; 
@property (assign,nonatomic) unsigned trafficClass;                                              //@synthesize trafficClass=_trafficClass - In the implementation block
@property (assign,nonatomic) BOOL hasDataMode; 
@property (assign,nonatomic) int dataMode;                                                       //@synthesize dataMode=_dataMode - In the implementation block
@property (assign,nonatomic) BOOL hasRequiredInterfaceType; 
@property (assign,nonatomic) int requiredInterfaceType;                                          //@synthesize requiredInterfaceType=_requiredInterfaceType - In the implementation block
@property (assign,nonatomic) BOOL hasProhibitExpensive; 
@property (assign,nonatomic) BOOL prohibitExpensive;                                             //@synthesize prohibitExpensive=_prohibitExpensive - In the implementation block
@property (assign,nonatomic) BOOL hasFastOpen; 
@property (assign,nonatomic) BOOL fastOpen;                                                      //@synthesize fastOpen=_fastOpen - In the implementation block
@property (assign,nonatomic) BOOL hasReduceBuffering; 
@property (assign,nonatomic) BOOL reduceBuffering;                                               //@synthesize reduceBuffering=_reduceBuffering - In the implementation block
@property (assign,nonatomic) BOOL hasLongOutstandingQueries; 
@property (assign,nonatomic) BOOL longOutstandingQueries;                                        //@synthesize longOutstandingQueries=_longOutstandingQueries - In the implementation block
@property (assign,nonatomic) BOOL hasUseAWDL; 
@property (assign,nonatomic) BOOL useAWDL;                                                       //@synthesize useAWDL=_useAWDL - In the implementation block
@property (assign,nonatomic) BOOL hasUseP2P; 
@property (assign,nonatomic) BOOL useP2P;                                                        //@synthesize useP2P=_useP2P - In the implementation block
@property (assign,nonatomic) BOOL hasReuseLocalAddress; 
@property (assign,nonatomic) BOOL reuseLocalAddress;                                             //@synthesize reuseLocalAddress=_reuseLocalAddress - In the implementation block
@property (assign,nonatomic) BOOL hasNoFallback; 
@property (assign,nonatomic) BOOL noFallback;                                                    //@synthesize noFallback=_noFallback - In the implementation block
@property (assign,nonatomic) BOOL hasMultipath; 
@property (assign,nonatomic) unsigned multipathService;                                          //@synthesize multipathService=_multipathService - In the implementation block
@property (assign,nonatomic) BOOL hasKeepalive; 
@property (assign,nonatomic) BOOL keepalive;                                                     //@synthesize keepalive=_keepalive - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalEndpoint; 
@property (nonatomic,retain) NWPBEndpoint * localEndpoint;                                       //@synthesize localEndpoint=_localEndpoint - In the implementation block
@property (nonatomic,readonly) BOOL hasRequiredInterface; 
@property (nonatomic,retain) NWPBInterface * requiredInterface;                                  //@synthesize requiredInterface=_requiredInterface - In the implementation block
@property (nonatomic,readonly) unsigned long long prohibitedInterfaceTypesCount; 
@property (nonatomic,readonly) int* prohibitedInterfaceTypes; 
@property (nonatomic,readonly) unsigned long long prohibitedInterfaceSubTypesCount; 
@property (nonatomic,readonly) int* prohibitedInterfaceSubTypes; 
@property (nonatomic,retain) NSMutableArray * prohibitedInterfaces;                              //@synthesize prohibitedInterfaces=_prohibitedInterfaces - In the implementation block
@property (nonatomic,retain) NSMutableArray * prohibitedAgents;                                  //@synthesize prohibitedAgents=_prohibitedAgents - In the implementation block
@property (nonatomic,retain) NSMutableArray * requiredAgents;                                    //@synthesize requiredAgents=_requiredAgents - In the implementation block
@property (nonatomic,retain) NSMutableArray * preferredAgents;                                   //@synthesize preferredAgents=_preferredAgents - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) NSData * metadata;                                                  //@synthesize metadata=_metadata - In the implementation block
+(Class)prohibitedInterfacesType;
+(Class)prohibitedAgentsType;
+(Class)requiredAgentsType;
+(Class)preferredAgentsType;
-(void)setEffectiveBundleID:(NSString *)arg1 ;
-(void)setTrafficClass:(unsigned)arg1 ;
-(BOOL)hasTrafficClass;
-(id)dictionaryRepresentation;
-(BOOL)hasEffectiveBundleID;
-(NSString *)account;
-(unsigned)ipProtocol;
-(void)setEffectiveProcessUUID:(NSString *)arg1 ;
-(int)dataMode;
-(BOOL)reduceBuffering;
-(void)setAccount:(NSString *)arg1 ;
-(BOOL)hasIpProtocol;
-(void)setHasIpProtocol:(BOOL)arg1 ;
-(void)setIpProtocol:(unsigned)arg1 ;
-(int)requiredInterfaceType;
-(NWPBInterface *)requiredInterface;
-(unsigned)trafficClass;
-(BOOL)hasMetadata;
-(void)setReduceBuffering:(BOOL)arg1 ;
-(void)setReuseLocalAddress:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRequiredInterface:(NWPBInterface *)arg1 ;
-(void)setMetadata:(NSData *)arg1 ;
-(NSString *)url;
-(NSString *)effectiveProcessUUID;
-(void)setUseAWDL:(BOOL)arg1 ;
-(BOOL)useAWDL;
-(BOOL)hasUseP2P;
-(id)description;
-(BOOL)keepalive;
-(BOOL)hasEffectiveProcessUUID;
-(BOOL)hasRealProcessUUID;
-(void)setHasAddressFamily:(BOOL)arg1 ;
-(BOOL)hasAddressFamily;
-(void)setHasDataMode:(BOOL)arg1 ;
-(BOOL)hasDataMode;
-(id)dataModeAsString:(int)arg1 ;
-(BOOL)reuseLocalAddress;
-(int)StringAsDataMode:(id)arg1 ;
-(void)setHasRequiredInterfaceType:(BOOL)arg1 ;
-(BOOL)hasRequiredInterfaceType;
-(id)requiredInterfaceTypeAsString:(int)arg1 ;
-(int)StringAsRequiredInterfaceType:(id)arg1 ;
-(void)setProhibitExpensive:(BOOL)arg1 ;
-(void)setHasProhibitExpensive:(BOOL)arg1 ;
-(BOOL)hasProhibitExpensive;
-(void)setFastOpen:(BOOL)arg1 ;
-(void)setHasFastOpen:(BOOL)arg1 ;
-(BOOL)hasFastOpen;
-(void)setHasReduceBuffering:(BOOL)arg1 ;
-(BOOL)hasReduceBuffering;
-(void)setLongOutstandingQueries:(BOOL)arg1 ;
-(void)setHasLongOutstandingQueries:(BOOL)arg1 ;
-(BOOL)hasLongOutstandingQueries;
-(void)setHasUseAWDL:(BOOL)arg1 ;
-(BOOL)hasUseAWDL;
-(void)setHasUseP2P:(BOOL)arg1 ;
-(void)setHasReuseLocalAddress:(BOOL)arg1 ;
-(BOOL)hasReuseLocalAddress;
-(void)setNoFallback:(BOOL)arg1 ;
-(void)setHasNoFallback:(BOOL)arg1 ;
-(BOOL)hasNoFallback;
-(void)setHasMultipath:(BOOL)arg1 ;
-(BOOL)hasMultipath;
-(void)setKeepalive:(BOOL)arg1 ;
-(void)setHasKeepalive:(BOOL)arg1 ;
-(BOOL)hasKeepalive;
-(BOOL)hasLocalEndpoint;
-(BOOL)hasRequiredInterface;
-(unsigned long long)prohibitedInterfaceTypesCount;
-(int*)prohibitedInterfaceTypes;
-(void)addRequiredAgents:(id)arg1 ;
-(void)clearProhibitedInterfaceTypes;
-(void)addProhibitedInterfaceTypes:(int)arg1 ;
-(int)prohibitedInterfaceTypesAtIndex:(unsigned long long)arg1 ;
-(void)setProhibitedInterfaceTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)prohibitedInterfaceTypesAsString:(int)arg1 ;
-(int)StringAsProhibitedInterfaceTypes:(id)arg1 ;
-(unsigned long long)prohibitedInterfaceSubTypesCount;
-(int*)prohibitedInterfaceSubTypes;
-(void)clearProhibitedInterfaceSubTypes;
-(void)addProhibitedInterfaceSubTypes:(int)arg1 ;
-(int)prohibitedInterfaceSubTypesAtIndex:(unsigned long long)arg1 ;
-(void)setProhibitedInterfaceSubTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)prohibitedInterfaceSubTypesAsString:(int)arg1 ;
-(void)clearProhibitedInterfaces;
-(int)StringAsProhibitedInterfaceSubTypes:(id)arg1 ;
-(void)addProhibitedInterfaces:(id)arg1 ;
-(unsigned long long)prohibitedInterfacesCount;
-(id)prohibitedInterfacesAtIndex:(unsigned long long)arg1 ;
-(void)clearProhibitedAgents;
-(void)addProhibitedAgents:(id)arg1 ;
-(unsigned long long)prohibitedAgentsCount;
-(id)prohibitedAgentsAtIndex:(unsigned long long)arg1 ;
-(void)clearRequiredAgents;
-(void)setHasTrafficClass:(BOOL)arg1 ;
-(unsigned long long)requiredAgentsCount;
-(id)requiredAgentsAtIndex:(unsigned long long)arg1 ;
-(void)clearPreferredAgents;
-(void)addPreferredAgents:(id)arg1 ;
-(unsigned long long)preferredAgentsCount;
-(id)preferredAgentsAtIndex:(unsigned long long)arg1 ;
-(NSString *)realProcessUUID;
-(void)setRealProcessUUID:(NSString *)arg1 ;
-(BOOL)prohibitExpensive;
-(BOOL)longOutstandingQueries;
-(BOOL)noFallback;
-(NSMutableArray *)requiredAgents;
-(NSMutableArray *)prohibitedInterfaces;
-(void)setProhibitedInterfaces:(NSMutableArray *)arg1 ;
-(NSMutableArray *)prohibitedAgents;
-(void)setProhibitedAgents:(NSMutableArray *)arg1 ;
-(void)setRequiredAgents:(NSMutableArray *)arg1 ;
-(NSMutableArray *)preferredAgents;
-(void)setPreferredAgents:(NSMutableArray *)arg1 ;
-(BOOL)hasUrl;
-(NSString *)effectiveBundleID;
-(void)setAddressFamily:(unsigned)arg1 ;
-(BOOL)useP2P;
-(void)setUrl:(NSString *)arg1 ;
-(NWPBEndpoint *)localEndpoint;
-(unsigned long long)hash;
-(void)setDataMode:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)fastOpen;
-(void)setLocalEndpoint:(NWPBEndpoint *)arg1 ;
-(unsigned)addressFamily;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasAccount;
-(void)setUseP2P:(BOOL)arg1 ;
-(void)setMultipathService:(unsigned)arg1 ;
-(NSData *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRequiredInterfaceType:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned)multipathService;
@end

