/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NENexusFlow.h>

@class NSUUID, NWEndpoint, NWParameters;

@interface NENexusFlowDivertFlow : NENexusFlow {

	NSUUID* _clientID;
	NWEndpoint* _internalEndpoint;
	NWParameters* _internalParameters;
	NEFlowRef _flowDivertFlow;

}

@property (retain) NSUUID * clientID;                              //@synthesize clientID=_clientID - In the implementation block
@property (retain) NWEndpoint * internalEndpoint;                  //@synthesize internalEndpoint=_internalEndpoint - In the implementation block
@property (retain) NWParameters * internalParameters;              //@synthesize internalParameters=_internalParameters - In the implementation block
@property (assign) NEFlowRef flowDivertFlow;                       //@synthesize flowDivertFlow=_flowDivertFlow - In the implementation block
-(id)parameters;
-(NSUUID *)clientID;
-(void)setClientID:(NSUUID *)arg1 ;
-(id)endpoint;
-(void)setInternalEndpoint:(NWEndpoint *)arg1 ;
-(void)setInternalParameters:(NWParameters *)arg1 ;
-(NWEndpoint *)internalEndpoint;
-(id)clientIdentifier;
-(NWParameters *)internalParameters;
-(NEFlowRef)flowDivertFlow;
-(void)setFlowDivertFlow:(NEFlowRef)arg1 ;
-(id)initWithFlowDivertFlow:(NEFlowRef)arg1 ;
-(void)dealloc;
@end

