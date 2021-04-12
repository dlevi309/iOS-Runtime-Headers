/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NPTunnelDelegate.h>
#import <libobjc.A.dylib/NEAppProxyProviderContainerDelegate.h>

@protocol NSPManagerDelegate, OS_nw_endpoint;
@class NWPathEvaluator, NPKeyBag, NSDictionary, NSPConfiguration, NSPFlowDivert, NSMutableDictionary, NSArray, NSString, NSPAppRule, NSMutableArray, NSObject;

@interface NSPManager : NSObject <NPTunnelDelegate, NEAppProxyProviderContainerDelegate> {

	os_unfair_lock_s lock;
	BOOL _disableIdleTimeout;
	BOOL _isObserving;
	BOOL _testFetchDaypass;
	unsigned _nextFlowID;
	unsigned _tunnelCount;
	NWPathEvaluator* _pathEvaluator;
	/*^block*/id _changeHandler;
	/*^block*/id _connectionInfoSetHandler;
	/*^block*/id _tunnelConnectedHandler;
	NPKeyBag* _keybag;
	NWPathEvaluator* _policyEvaluator;
	NSDictionary* _appRules;
	NPKeyBag* _inUseKeybag;
	NSPConfiguration* _configuration;
	NSPFlowDivert* _flowDivert;
	NSMutableDictionary* _flowInfoMap;
	NSArray* _currentAgents;
	NSMutableDictionary* _fallbackCounts;
	id<NSPManagerDelegate> _delegate;
	NSString* _signingIdentifier;
	NSPAppRule* _matchingAppRule;
	NSMutableArray* _knownFlows;
	/*^block*/id _pendingCancellationHandler;
	NSArray* _testLatencyMap;
	unsigned long long _testLatencyMapIndex;
	NSObject*<OS_nw_endpoint> _currentTunnelEndpoint;

}

@property (nonatomic,readonly) NWPathEvaluator * policyEvaluator;                          //@synthesize policyEvaluator=_policyEvaluator - In the implementation block
@property (retain) NSDictionary * appRules;                                                //@synthesize appRules=_appRules - In the implementation block
@property (retain) NPKeyBag * keybag;                                                      //@synthesize keybag=_keybag - In the implementation block
@property (retain) NPKeyBag * inUseKeybag;                                                 //@synthesize inUseKeybag=_inUseKeybag - In the implementation block
@property (retain) NSPConfiguration * configuration;                                       //@synthesize configuration=_configuration - In the implementation block
@property (retain) NSPFlowDivert * flowDivert;                                             //@synthesize flowDivert=_flowDivert - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * flowInfoMap;                            //@synthesize flowInfoMap=_flowInfoMap - In the implementation block
@property (assign,nonatomic) BOOL isObserving;                                             //@synthesize isObserving=_isObserving - In the implementation block
@property (nonatomic,retain) NSArray * currentAgents;                                      //@synthesize currentAgents=_currentAgents - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * fallbackCounts;                       //@synthesize fallbackCounts=_fallbackCounts - In the implementation block
@property (assign,nonatomic,__weak) id<NSPManagerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * signingIdentifier;                               //@synthesize signingIdentifier=_signingIdentifier - In the implementation block
@property (retain) NSPAppRule * matchingAppRule;                                           //@synthesize matchingAppRule=_matchingAppRule - In the implementation block
@property (nonatomic,readonly) NSMutableArray * knownFlows;                                //@synthesize knownFlows=_knownFlows - In the implementation block
@property (nonatomic,copy) id pendingCancellationHandler;                                  //@synthesize pendingCancellationHandler=_pendingCancellationHandler - In the implementation block
@property (retain) NSArray * testLatencyMap;                                               //@synthesize testLatencyMap=_testLatencyMap - In the implementation block
@property (assign) BOOL testFetchDaypass;                                                  //@synthesize testFetchDaypass=_testFetchDaypass - In the implementation block
@property (assign) unsigned long long testLatencyMapIndex;                                 //@synthesize testLatencyMapIndex=_testLatencyMapIndex - In the implementation block
@property (assign,nonatomic) unsigned nextFlowID;                                          //@synthesize nextFlowID=_nextFlowID - In the implementation block
@property (assign,nonatomic) unsigned tunnelCount;                                         //@synthesize tunnelCount=_tunnelCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_endpoint> currentTunnelEndpoint;              //@synthesize currentTunnelEndpoint=_currentTunnelEndpoint - In the implementation block
@property (nonatomic,readonly) NWPathEvaluator * pathEvaluator;                            //@synthesize pathEvaluator=_pathEvaluator - In the implementation block
@property (nonatomic,readonly) BOOL currentNetworkHasProxies; 
@property (nonatomic,readonly) BOOL isEnabled; 
@property (nonatomic,copy) id changeHandler;                                               //@synthesize changeHandler=_changeHandler - In the implementation block
@property (nonatomic,copy) id connectionInfoSetHandler;                                    //@synthesize connectionInfoSetHandler=_connectionInfoSetHandler - In the implementation block
@property (nonatomic,copy) id tunnelConnectedHandler;                                      //@synthesize tunnelConnectedHandler=_tunnelConnectedHandler - In the implementation block
@property (readonly) double timeIntervalSinceLastUsage; 
@property (assign) BOOL disableIdleTimeout;                                                //@synthesize disableIdleTimeout=_disableIdleTimeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL isFirstTunnel; 
+(id)sharedManager;
-(id)init;
-(id<NSPManagerDelegate>)delegate;
-(void)setDelegate:(id<NSPManagerDelegate>)arg1 ;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isEnabled;
-(void)setChangeHandler:(id)arg1 ;
-(void)setConfiguration:(NSPConfiguration *)arg1 ;
-(NSPConfiguration *)configuration;
-(id)changeHandler;
-(NWPathEvaluator *)pathEvaluator;
-(void)stopWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isObserving;
-(NPKeyBag *)keybag;
-(void)container:(id)arg1 didStartWithError:(id)arg2 ;
-(void)container:(id)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(/*^block*/id)arg2 ;
-(NSDictionary *)appRules;
-(void)setAppRules:(NSDictionary *)arg1 ;
-(void)setIsObserving:(BOOL)arg1 ;
-(double)timeIntervalSinceLastUsage;
-(NSString *)signingIdentifier;
-(BOOL)currentNetworkHasProxies;
-(BOOL)shouldSetConfigurationToAppRule:(id)arg1 edgeSet:(id)arg2 ;
-(void)setConnectionInfo:(id)arg1 forIdentifier:(id)arg2 ;
-(id)getConnectionInfoForIdentifier:(id)arg1 ;
-(void)fetchStateForClient:(id)arg1 withPeerEndpoint:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)disableIdleTimeout;
-(void)setDisableIdleTimeout:(BOOL)arg1 ;
-(void)setKeybag:(NPKeyBag *)arg1 ;
-(BOOL)useTestLatencyMap;
-(unsigned long long)getTestLatencyRTT:(id)arg1 parameters:(networkParameters*)arg2 ;
-(BOOL)isFirstTunnel;
-(void)tunnel:(id)arg1 flowDidFallbackWithReason:(long long)arg2 ;
-(void)sendUsageReport:(id)arg1 ;
-(void)tunnelDidConnect:(id)arg1 ;
-(void)tunnelIsReady:(id)arg1 ;
-(void)tunnelDidCancel:(id)arg1 ;
-(id)instantiateFlowWithTunnel:(id)arg1 inputProtocol:(nw_protocol*)arg2 ;
-(id)instantiateTunnelWithEndpoint:(id)arg1 parameters:(id)arg2 ;
-(id)createTransformsForEndpoint:(id)arg1 parameters:(id)arg2 ;
-(BOOL)useTestDaypass;
-(void)resetTestLatencyMapIndex:(unsigned long long)arg1 ;
-(void)setMatchingAppRule:(NSPAppRule *)arg1 ;
-(id)createAppRuleMapWithRules:(id)arg1 ;
-(NSPAppRule *)matchingAppRule;
-(NSPFlowDivert *)flowDivert;
-(void)setFlowDivert:(NSPFlowDivert *)arg1 ;
-(void)handlePolicyUpdate;
-(NPKeyBag *)inUseKeybag;
-(id)tunnelConnectedHandler;
-(void)setTunnelConnectedHandler:(id)arg1 ;
-(id)connectionInfoSetHandler;
-(id)createReplacementEndpointForEndpoint:(id)arg1 properties:(id)arg2 ;
-(id)getAppRuleMatchingParameters:(id)arg1 flowProperties:(id)arg2 ;
-(void)setInUseKeybag:(NPKeyBag *)arg1 ;
-(id)buildTestLatencyMap:(id)arg1 ;
-(void)container:(id)arg1 didFailWithError:(id)arg2 ;
-(void)container:(id)arg1 didSetTunnelConfiguration:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)waitForTunnelsToCancelWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startWithConfiguration:(id)arg1 appRules:(id)arg2 delegate:(id)arg3 ;
-(void)ingestTestLatencyMap:(id)arg1 local:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setConnectionInfoSetHandler:(id)arg1 ;
-(NWPathEvaluator *)policyEvaluator;
-(NSMutableDictionary *)flowInfoMap;
-(void)setFlowInfoMap:(NSMutableDictionary *)arg1 ;
-(NSArray *)currentAgents;
-(void)setCurrentAgents:(NSArray *)arg1 ;
-(NSMutableDictionary *)fallbackCounts;
-(NSMutableArray *)knownFlows;
-(id)pendingCancellationHandler;
-(void)setPendingCancellationHandler:(id)arg1 ;
-(NSArray *)testLatencyMap;
-(void)setTestLatencyMap:(NSArray *)arg1 ;
-(BOOL)testFetchDaypass;
-(void)setTestFetchDaypass:(BOOL)arg1 ;
-(unsigned long long)testLatencyMapIndex;
-(void)setTestLatencyMapIndex:(unsigned long long)arg1 ;
-(unsigned)nextFlowID;
-(void)setNextFlowID:(unsigned)arg1 ;
-(unsigned)tunnelCount;
-(void)setTunnelCount:(unsigned)arg1 ;
-(NSObject*<OS_nw_endpoint>)currentTunnelEndpoint;
-(void)setCurrentTunnelEndpoint:(NSObject*<OS_nw_endpoint>)arg1 ;
@end

