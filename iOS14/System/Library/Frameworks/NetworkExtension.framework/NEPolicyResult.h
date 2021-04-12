/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NSString, NSUUID, NSArray;

@interface NEPolicyResult : NSObject <NEPrettyDescription> {

	unsigned _skipOrder;
	unsigned _passFlags;
	unsigned _dropFlags;
	unsigned _controlUnit;
	unsigned _serviceData;
	long long _resultType;
	long long _secondaryResultType;
	NSString* _interfaceName;
	NSUUID* _agentUUID;
	NSUUID* _serviceUUID;
	NSArray* _routeRules;

}

@property (assign) long long resultType;                       //@synthesize resultType=_resultType - In the implementation block
@property (assign) long long secondaryResultType;              //@synthesize secondaryResultType=_secondaryResultType - In the implementation block
@property (assign) unsigned skipOrder;                         //@synthesize skipOrder=_skipOrder - In the implementation block
@property (assign) unsigned passFlags;                         //@synthesize passFlags=_passFlags - In the implementation block
@property (assign) unsigned dropFlags;                         //@synthesize dropFlags=_dropFlags - In the implementation block
@property (assign) unsigned controlUnit;                       //@synthesize controlUnit=_controlUnit - In the implementation block
@property (copy) NSString * interfaceName;                     //@synthesize interfaceName=_interfaceName - In the implementation block
@property (copy) NSUUID * agentUUID;                           //@synthesize agentUUID=_agentUUID - In the implementation block
@property (copy) NSUUID * serviceUUID;                         //@synthesize serviceUUID=_serviceUUID - In the implementation block
@property (assign) unsigned serviceData;                       //@synthesize serviceData=_serviceData - In the implementation block
@property (copy) NSArray * routeRules;                         //@synthesize routeRules=_routeRules - In the implementation block
+(id)skipWithOrder:(unsigned)arg1 ;
+(id)prohibitFilters;
+(id)routeRules:(id)arg1 ;
+(id)drop;
+(id)tunnelIPToInterfaceName:(id)arg1 secondaryResultType:(long long)arg2 ;
+(id)scopeToDirectInterface;
+(id)scopedNetworkAgent:(id)arg1 ;
+(id)scopeSocketToInterfaceName:(id)arg1 ;
+(id)passWithFlags:(unsigned)arg1 ;
+(id)divertSocketToControlUnit:(unsigned)arg1 ;
+(id)pass;
+(id)triggerScopedService:(id)arg1 data:(unsigned)arg2 ;
+(id)dropWithFlags:(unsigned)arg1 ;
+(id)netAgentUUID:(id)arg1 ;
+(id)filterWithControlUnit:(unsigned)arg1 ;
+(id)allowUnentitled;
-(id)initInternal;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setResultType:(long long)arg1 ;
-(BOOL)validate;
-(NSUUID *)serviceUUID;
-(BOOL)addTLVsToMessage:(id)arg1 ;
-(void)setControlUnit:(unsigned)arg1 ;
-(id)init;
-(void)setSecondaryResultType:(long long)arg1 ;
-(NSUUID *)agentUUID;
-(long long)resultType;
-(NSArray *)routeRules;
-(void)setAgentUUID:(NSUUID *)arg1 ;
-(NSString *)interfaceName;
-(unsigned)skipOrder;
-(unsigned char)secondaryResultTypeValue;
-(void)setRouteRules:(NSArray *)arg1 ;
-(id)resultTypeString;
-(void)setSkipOrder:(unsigned)arg1 ;
-(id)description;
-(void)setServiceData:(unsigned)arg1 ;
-(unsigned)passFlags;
-(long long)secondaryResultType;
-(unsigned char)resultTypeValue;
-(void)setPassFlags:(unsigned)arg1 ;
-(unsigned)serviceData;
-(void)setServiceUUID:(NSUUID *)arg1 ;
-(id)secondaryResultTypeString;
-(void)setDropFlags:(unsigned)arg1 ;
-(unsigned)controlUnit;
-(void)setInterfaceName:(NSString *)arg1 ;
-(unsigned)dropFlags;
@end

