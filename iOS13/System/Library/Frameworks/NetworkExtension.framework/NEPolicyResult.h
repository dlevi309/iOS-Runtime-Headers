/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NSString, NSUUID, NSArray;

@interface NEPolicyResult : NSObject <NEPrettyDescription> {

	unsigned _skipOrder;
	unsigned _passFlags;
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
@property (assign) unsigned controlUnit;                       //@synthesize controlUnit=_controlUnit - In the implementation block
@property (copy) NSString * interfaceName;                     //@synthesize interfaceName=_interfaceName - In the implementation block
@property (copy) NSUUID * agentUUID;                           //@synthesize agentUUID=_agentUUID - In the implementation block
@property (copy) NSUUID * serviceUUID;                         //@synthesize serviceUUID=_serviceUUID - In the implementation block
@property (assign) unsigned serviceData;                       //@synthesize serviceData=_serviceData - In the implementation block
@property (copy) NSArray * routeRules;                         //@synthesize routeRules=_routeRules - In the implementation block
+(id)drop;
+(id)pass;
+(id)divertSocketToControlUnit:(unsigned)arg1 ;
+(id)allowUnentitled;
+(id)skipWithOrder:(unsigned)arg1 ;
+(id)tunnelIPToInterfaceName:(id)arg1 secondaryResultType:(long long)arg2 ;
+(id)scopeSocketToInterfaceName:(id)arg1 ;
+(id)filterWithControlUnit:(unsigned)arg1 ;
+(id)prohibitFilters;
+(id)triggerScopedService:(id)arg1 data:(unsigned)arg2 ;
+(id)routeRules:(id)arg1 ;
+(id)netAgentUUID:(id)arg1 ;
+(id)scopedNetworkAgent:(id)arg1 ;
+(id)scopeToDirectInterface;
+(id)passWithFlags:(unsigned)arg1 ;
-(id)init;
-(id)description;
-(long long)resultType;
-(void)setResultType:(long long)arg1 ;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(BOOL)validate;
-(id)initInternal;
-(NSUUID *)agentUUID;
-(void)setAgentUUID:(NSUUID *)arg1 ;
-(unsigned)serviceData;
-(void)setServiceData:(unsigned)arg1 ;
-(NSUUID *)serviceUUID;
-(void)setServiceUUID:(NSUUID *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(unsigned)controlUnit;
-(void)setControlUnit:(unsigned)arg1 ;
-(BOOL)addTLVsToMessage:(id)arg1 ;
-(void)setPassFlags:(unsigned)arg1 ;
-(void)setSkipOrder:(unsigned)arg1 ;
-(void)setSecondaryResultType:(long long)arg1 ;
-(void)setRouteRules:(NSArray *)arg1 ;
-(id)resultTypeString;
-(id)secondaryResultTypeString;
-(unsigned char)resultTypeValue;
-(unsigned char)secondaryResultTypeValue;
-(long long)secondaryResultType;
-(unsigned)skipOrder;
-(unsigned)passFlags;
-(NSArray *)routeRules;
@end

