/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/

#import <SiriCore/SiriCoreSiriBackgroundConnectionDelegate.h>
#import <SiriCore/SiriCoreSiriConnection.h>
@class NSURL, NSError, NSString;


@protocol SiriCoreSiriConnection <NSObject>
@property (assign,nonatomic,__weak) id<SiriCoreSiriConnectionDelegate> delegate; 
@property (nonatomic,copy) NSURL * url; 
@property (assign,nonatomic) BOOL prefersWWAN; 
@property (assign,nonatomic) BOOL skipPeer; 
@property (assign,nonatomic) BOOL useWiFiHint; 
@property (nonatomic,copy) NSError * skipPeerError; 
@property (assign,nonatomic) BOOL forceReconnect; 
@property (nonatomic,copy) NSString * aceHost; 
@property (nonatomic,copy) NSString * languageCode; 
@property (assign,nonatomic) double timeout; 
@property (nonatomic,copy) NSString * assistantIdentifier; 
@property (nonatomic,copy) NSString * peerAssistantIdentifier; 
@property (nonatomic,copy) NSString * peerType; 
@property (nonatomic,copy) NSString * peerVersion; 
@property (nonatomic,copy) NSString * productTypePrefix; 
@property (assign,nonatomic) BOOL usesProxyConnection; 
@property (assign,nonatomic) BOOL deviceIsInWalkaboutExperimentGroup; 
@property (assign,nonatomic) BOOL siriConnectionUsesPeerManagedSync; 
@property (nonatomic,retain) Class peerProviderClass; 
@property (nonatomic,copy) NSString * connectionId; 
@property (assign,nonatomic) BOOL imposePolicyBan; 
@required
-(id<SiriCoreSiriConnectionDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSString *)languageCode;
-(void)start;
-(NSURL *)url;
-(double)timeout;
-(void)setTimeout:(double)arg1;
-(void)setUrl:(id)arg1;
-(void)setAssistantIdentifier:(id)arg1;
-(NSString *)assistantIdentifier;
-(void)setLanguageCode:(id)arg1;
-(NSString *)connectionId;
-(void)barrier:(/*^block*/id)arg1;
-(void)setPeerAssistantIdentifier:(id)arg1;
-(void)setAceHost:(id)arg1;
-(NSString *)peerAssistantIdentifier;
-(NSString *)aceHost;
-(void)setConnectionId:(id)arg1;
-(NSString *)peerType;
-(void)probeConnection;
-(void)setPrefersWWAN:(BOOL)arg1;
-(BOOL)useWiFiHint;
-(BOOL)skipPeer;
-(BOOL)prefersWWAN;
-(BOOL)forceReconnect;
-(void)setUseWiFiHint:(BOOL)arg1;
-(BOOL)imposePolicyBan;
-(void)setSendPings:(BOOL)arg1;
-(void)sendCommands:(id)arg1 errorHandler:(/*^block*/id)arg2;
-(void)setPeerType:(id)arg1;
-(NSString *)peerVersion;
-(void)setPeerVersion:(id)arg1;
-(NSString *)productTypePrefix;
-(void)setProductTypePrefix:(id)arg1;
-(BOOL)usesProxyConnection;
-(void)setUsesProxyConnection:(BOOL)arg1;
-(BOOL)siriConnectionUsesPeerManagedSync;
-(void)setSiriConnectionUsesPeerManagedSync:(BOOL)arg1;
-(Class)peerProviderClass;
-(void)setPeerProviderClass:(Class)arg1;
-(BOOL)deviceIsInWalkaboutExperimentGroup;
-(void)setDeviceIsInWalkaboutExperimentGroup:(BOOL)arg1;
-(void)setSkipPeer:(BOOL)arg1;
-(void)setForceReconnect:(BOOL)arg1;
-(void)setImposePolicyBan:(BOOL)arg1;
-(void)sendCommand:(id)arg1 errorHandler:(/*^block*/id)arg2;
-(void)cancelSynchronously:(BOOL)arg1 onQueue:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)getAnalysisInfo:(/*^block*/id)arg1;
-(void)getConnectionMetricsSynchronously:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(NSError *)skipPeerError;
-(void)setSkipPeerError:(id)arg1;

@end


@protocol OS_dispatch_queue, SiriCoreSiriConnectionDelegate, OS_dispatch_group;
@class NSURL, NSError, NSString, NSObject, NSMutableSet, SiriCoreSiriBackgroundConnection, NSMutableArray, NWPathEvaluator, SAConnectionPolicy;

@interface SiriCoreSiriConnection : NSObject <SiriCoreSiriBackgroundConnectionDelegate, SiriCoreSiriConnection> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isCanceled;
	id<SiriCoreSiriConnectionDelegate> _delegate;
	NSURL* _url;
	BOOL _prefersWWAN;
	NSString* _aceHost;
	NSString* _languageCode;
	double _timeout;
	BOOL _sendPings;
	NSString* _assistantIdentifier;
	NSString* _peerAssistantIdentifier;
	NSString* _connectionId;
	BOOL _isCanceledInternal;
	NSMutableSet* _pendingBackgroundConnections;
	NSMutableSet* _comatoseBackgroundConnections;
	NSMutableSet* _scheduledRoutes;
	SiriCoreSiriBackgroundConnection* _activeBackgroundConnection;
	NSObject*<OS_dispatch_group> _activeConnectionGroup;
	NSString* _peerType;
	NSString* _peerVersion;
	NSString* _productTypePrefix;
	BOOL _usesProxyConnection;
	BOOL _deviceIsInWalkaboutExperimentGroup;
	BOOL _siriConnectionUsesPeerManagedSync;
	Class _peerProviderClass;
	NSMutableArray* _connMethodUsedHistory;
	BOOL _imposePolicyBan;
	NWPathEvaluator* _evaluator;
	NSString* _savedURLHostForEvaluator;
	NSString* _savedPortForEvaluator;
	BOOL _skipPeer;
	BOOL _useWiFiHint;
	BOOL _forceReconnect;
	NSError* _skipPeerError;
	SAConnectionPolicy* _connectionPolicy;

}

@property (nonatomic,copy) SAConnectionPolicy * connectionPolicy;                             //@synthesize connectionPolicy=_connectionPolicy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SiriCoreSiriConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSURL * url;                                                       //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL prefersWWAN;                                                //@synthesize prefersWWAN=_prefersWWAN - In the implementation block
@property (assign,nonatomic) BOOL skipPeer;                                                   //@synthesize skipPeer=_skipPeer - In the implementation block
@property (assign,nonatomic) BOOL useWiFiHint;                                                //@synthesize useWiFiHint=_useWiFiHint - In the implementation block
@property (nonatomic,copy) NSError * skipPeerError;                                           //@synthesize skipPeerError=_skipPeerError - In the implementation block
@property (assign,nonatomic) BOOL forceReconnect;                                             //@synthesize forceReconnect=_forceReconnect - In the implementation block
@property (nonatomic,copy) NSString * aceHost;                                                //@synthesize aceHost=_aceHost - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                                           //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,nonatomic) double timeout;                                                  //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) NSString * assistantIdentifier;                                    //@synthesize assistantIdentifier=_assistantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * peerAssistantIdentifier;                                //@synthesize peerAssistantIdentifier=_peerAssistantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * peerType;                                               //@synthesize peerType=_peerType - In the implementation block
@property (nonatomic,copy) NSString * peerVersion;                                            //@synthesize peerVersion=_peerVersion - In the implementation block
@property (nonatomic,copy) NSString * productTypePrefix;                                      //@synthesize productTypePrefix=_productTypePrefix - In the implementation block
@property (assign,nonatomic) BOOL usesProxyConnection;                                        //@synthesize usesProxyConnection=_usesProxyConnection - In the implementation block
@property (assign,nonatomic) BOOL deviceIsInWalkaboutExperimentGroup;                         //@synthesize deviceIsInWalkaboutExperimentGroup=_deviceIsInWalkaboutExperimentGroup - In the implementation block
@property (assign,nonatomic) BOOL siriConnectionUsesPeerManagedSync;                          //@synthesize siriConnectionUsesPeerManagedSync=_siriConnectionUsesPeerManagedSync - In the implementation block
@property (nonatomic,retain) Class peerProviderClass;                                         //@synthesize peerProviderClass=_peerProviderClass - In the implementation block
@property (nonatomic,copy) NSString * connectionId;                                           //@synthesize connectionId=_connectionId - In the implementation block
@property (assign,nonatomic) BOOL imposePolicyBan;                                            //@synthesize imposePolicyBan=_imposePolicyBan - In the implementation block
-(id)init;
-(void)dealloc;
-(id<SiriCoreSiriConnectionDelegate>)delegate;
-(void)setDelegate:(id<SiriCoreSiriConnectionDelegate>)arg1 ;
-(NSString *)languageCode;
-(void)start;
-(id)initWithQueue:(id)arg1 ;
-(NSURL *)url;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setAssistantIdentifier:(NSString *)arg1 ;
-(NSString *)assistantIdentifier;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)connectionId;
-(void)_cancelSynchronously:(/*^block*/id)arg1 ;
-(void)barrier:(/*^block*/id)arg1 ;
-(void)setPeerAssistantIdentifier:(NSString *)arg1 ;
-(void)setAceHost:(NSString *)arg1 ;
-(void)setConnectionPolicy:(SAConnectionPolicy *)arg1 ;
-(NSString *)peerAssistantIdentifier;
-(NSString *)aceHost;
-(SAConnectionPolicy *)connectionPolicy;
-(void)setConnectionId:(NSString *)arg1 ;
-(NSString *)peerType;
-(void)probeConnection;
-(id)analysisInfo;
-(void)setPrefersWWAN:(BOOL)arg1 ;
-(BOOL)useWiFiHint;
-(BOOL)skipPeer;
-(BOOL)prefersWWAN;
-(void)siriBackgroundConnection:(id)arg1 willStartWithConnectionType:(id)arg2 ;
-(BOOL)forceReconnect;
-(void)siriBackgroundConnectionDidClose:(id)arg1 ;
-(void)siriBackgroundConnection:(id)arg1 didEncounterError:(id)arg2 analysisInfo:(id)arg3 ;
-(void)setUseWiFiHint:(BOOL)arg1 ;
-(void)siriBackgroundConnection:(id)arg1 didOpenWithConnectionType:(id)arg2 routeId:(id)arg3 delay:(double)arg4 ;
-(void)siriBackgroundConnection:(id)arg1 willStartConnectionWithHTTPHeader:(id)arg2 ;
-(void)siriBackgroundConnection:(id)arg1 didReceiveAceObject:(id)arg2 ;
-(BOOL)imposePolicyBan;
-(void)setSendPings:(BOOL)arg1 ;
-(void)sendCommands:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)setPeerType:(NSString *)arg1 ;
-(NSString *)peerVersion;
-(void)setPeerVersion:(NSString *)arg1 ;
-(NSString *)productTypePrefix;
-(void)setProductTypePrefix:(NSString *)arg1 ;
-(BOOL)usesProxyConnection;
-(void)setUsesProxyConnection:(BOOL)arg1 ;
-(BOOL)siriConnectionUsesPeerManagedSync;
-(void)setSiriConnectionUsesPeerManagedSync:(BOOL)arg1 ;
-(Class)peerProviderClass;
-(void)setPeerProviderClass:(Class)arg1 ;
-(BOOL)deviceIsInWalkaboutExperimentGroup;
-(void)setDeviceIsInWalkaboutExperimentGroup:(BOOL)arg1 ;
-(void)setSkipPeer:(BOOL)arg1 ;
-(void)setForceReconnect:(BOOL)arg1 ;
-(void)setImposePolicyBan:(BOOL)arg1 ;
-(id)_pathEvaluator:(id)arg1 port:(id)arg2 ;
-(id)_connectionInfoForRoute:(id)arg1 policy:(id)arg2 ;
-(void)_startBackgroundConnectionWithRoute:(id)arg1 policy:(id)arg2 ;
-(void)_scheduleBackgroundConnectionWithRoute:(id)arg1 delay:(double)arg2 policy:(id)arg3 ;
-(void)_accessPotentiallyActiveConnections:(/*^block*/id)arg1 ;
-(void)_waitForActiveConnection:(/*^block*/id)arg1 ;
-(id)_activeOrAnyPendingConnection;
-(void)_recordConnectionMethodForMetrics:(id)arg1 ;
-(void)_handleLastEventFromBackgroundConnection:(id)arg1 pendingConnectionExhaustionHandler:(/*^block*/id)arg2 ;
-(void)siriBackgroundConnection:(id)arg1 didEncounterIntermediateError:(id)arg2 ;
-(void)sendCommand:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)cancelSynchronously:(BOOL)arg1 onQueue:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)getAnalysisInfo:(/*^block*/id)arg1 ;
-(void)getConnectionMetricsSynchronously:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(NSError *)skipPeerError;
-(void)setSkipPeerError:(NSError *)arg1 ;
@end

