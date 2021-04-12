/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

#import <NetworkExtension/NEAppProxyProviderContainer.h>

@class NSPConfiguration, NEPolicySession, NEFlowDivertFileHandle;

@interface NSPFlowDivert : NEAppProxyProviderContainer {

	BOOL _shouldResetPolicies;
	BOOL _started;
	NSPConfiguration* _configuration;
	NEPolicySession* _policySession;
	NEFlowDivertFileHandle* _flowDivertControlHandle;
	NEFlowDivertFileHandle* _flowDivertDataHandle;

}

@property (retain) NEPolicySession * policySession;                               //@synthesize policySession=_policySession - In the implementation block
@property (retain) NEFlowDivertFileHandle * flowDivertControlHandle;              //@synthesize flowDivertControlHandle=_flowDivertControlHandle - In the implementation block
@property (retain) NEFlowDivertFileHandle * flowDivertDataHandle;                 //@synthesize flowDivertDataHandle=_flowDivertDataHandle - In the implementation block
@property (assign) BOOL started;                                                  //@synthesize started=_started - In the implementation block
@property (assign) BOOL shouldResetPolicies;                                      //@synthesize shouldResetPolicies=_shouldResetPolicies - In the implementation block
@property (nonatomic,retain) NSPConfiguration * configuration;                    //@synthesize configuration=_configuration - In the implementation block
-(void)didStartWithError:(id)arg1 ;
-(BOOL)started;
-(id)createPolicySession;
-(void)addPolicy:(id)arg1 ;
-(void)setShouldResetPolicies:(BOOL)arg1 ;
-(void)stop;
-(void)setPolicySession:(NEPolicySession *)arg1 ;
-(id)getExecutableConditions:(id)arg1 ;
-(NEFlowDivertFileHandle *)flowDivertDataHandle;
-(NSPConfiguration *)configuration;
-(BOOL)shouldInstallFlowDivert:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 providerClass:(Class)arg2 configuration:(id)arg3 ;
-(id)getAgentResults:(id)arg1 ;
-(id)getAgentResultsForSelf;
-(void)setFlowDivertDataHandle:(NEFlowDivertFileHandle *)arg1 ;
-(void)teardown;
-(void)addPoliciesForDivertDNSOnly:(id)arg1 domainConditions:(id)arg2 divertResult:(id)arg3 ;
-(void)didFailWithError:(id)arg1 ;
-(BOOL)resetPolicies:(BOOL)arg1 ;
-(id)createFlowDivertSocketHandles;
-(NEFlowDivertFileHandle *)flowDivertControlHandle;
-(id)getEffectiveAppRules:(id)arg1 ;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)destroyPolicySession;
-(NEPolicySession *)policySession;
-(void)setStarted:(BOOL)arg1 ;
-(void)setFlowDivertControlHandle:(NEFlowDivertFileHandle *)arg1 ;
-(void)destroyFlowDivertSocketHandles;
-(void)setConfiguration:(NSPConfiguration *)arg1 ;
-(BOOL)shouldResetPolicies;
-(void)addPoliciesForAgent:(id)arg1 conditions:(id)arg2 ;
@end

