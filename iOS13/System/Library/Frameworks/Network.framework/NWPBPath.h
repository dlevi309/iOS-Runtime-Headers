/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NWPBInterface, NWPBEndpoint, NWPBParameters;

@interface NWPBPath : PBCodable <NSCopying> {

	NSMutableArray* _agents;
	NSString* _clientUUID;
	NWPBInterface* _delegateInterface;
	NWPBInterface* _directInterface;
	NWPBEndpoint* _endpoint;
	NWPBParameters* _parameters;
	int _status;
	BOOL _direct;
	BOOL _ipv4;
	BOOL _ipv6;
	BOOL _local;
	SCD_Struct_NW14 _has;

}

@property (nonatomic,readonly) BOOL hasEndpoint; 
@property (nonatomic,retain) NWPBEndpoint * endpoint;                        //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,readonly) BOOL hasParameters; 
@property (nonatomic,retain) NWPBParameters * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) BOOL hasClientUUID; 
@property (nonatomic,retain) NSString * clientUUID;                          //@synthesize clientUUID=_clientUUID - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                     //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectInterface; 
@property (nonatomic,retain) NWPBInterface * directInterface;                //@synthesize directInterface=_directInterface - In the implementation block
@property (nonatomic,readonly) BOOL hasDelegateInterface; 
@property (nonatomic,retain) NWPBInterface * delegateInterface;              //@synthesize delegateInterface=_delegateInterface - In the implementation block
@property (nonatomic,retain) NSMutableArray * agents;                        //@synthesize agents=_agents - In the implementation block
@property (assign,nonatomic) BOOL hasIpv4; 
@property (assign,nonatomic) BOOL ipv4;                                      //@synthesize ipv4=_ipv4 - In the implementation block
@property (assign,nonatomic) BOOL hasIpv6; 
@property (assign,nonatomic) BOOL ipv6;                                      //@synthesize ipv6=_ipv6 - In the implementation block
@property (assign,nonatomic) BOOL hasLocal; 
@property (assign,nonatomic) BOOL local;                                     //@synthesize local=_local - In the implementation block
@property (assign,nonatomic) BOOL hasDirect; 
@property (assign,nonatomic) BOOL direct;                                    //@synthesize direct=_direct - In the implementation block
+(Class)agentsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NWPBEndpoint *)endpoint;
-(id)dictionaryRepresentation;
-(int)status;
-(NWPBParameters *)parameters;
-(void)setEndpoint:(NWPBEndpoint *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setParameters:(NWPBParameters *)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(BOOL)direct;
-(void)setDirect:(BOOL)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(BOOL)local;
-(void)setLocal:(BOOL)arg1 ;
-(BOOL)hasClientUUID;
-(NSString *)clientUUID;
-(void)setClientUUID:(NSString *)arg1 ;
-(NWPBInterface *)delegateInterface;
-(BOOL)hasEndpoint;
-(BOOL)hasParameters;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(BOOL)hasDirectInterface;
-(BOOL)hasDelegateInterface;
-(void)clearAgents;
-(void)addAgents:(id)arg1 ;
-(unsigned long long)agentsCount;
-(id)agentsAtIndex:(unsigned long long)arg1 ;
-(void)setIpv4:(BOOL)arg1 ;
-(void)setHasIpv4:(BOOL)arg1 ;
-(BOOL)hasIpv4;
-(void)setIpv6:(BOOL)arg1 ;
-(void)setHasIpv6:(BOOL)arg1 ;
-(BOOL)hasIpv6;
-(void)setHasLocal:(BOOL)arg1 ;
-(BOOL)hasLocal;
-(void)setHasDirect:(BOOL)arg1 ;
-(BOOL)hasDirect;
-(NWPBInterface *)directInterface;
-(void)setDirectInterface:(NWPBInterface *)arg1 ;
-(void)setDelegateInterface:(NWPBInterface *)arg1 ;
-(NSMutableArray *)agents;
-(void)setAgents:(NSMutableArray *)arg1 ;
-(BOOL)ipv4;
-(BOOL)ipv6;
@end

