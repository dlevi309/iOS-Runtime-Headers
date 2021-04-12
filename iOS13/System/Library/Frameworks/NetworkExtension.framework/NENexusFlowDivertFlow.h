/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)endpoint;
-(id)parameters;
-(void)setClientID:(NSUUID *)arg1 ;
-(NSUUID *)clientID;
-(NWEndpoint *)internalEndpoint;
-(void)setInternalEndpoint:(NWEndpoint *)arg1 ;
-(NWParameters *)internalParameters;
-(void)setInternalParameters:(NWParameters *)arg1 ;
-(id)clientIdentifier;
-(NEFlowRef)flowDivertFlow;
-(void)setFlowDivertFlow:(NEFlowRef)arg1 ;
-(id)initWithFlowDivertFlow:(NEFlowRef)arg1 ;
@end

