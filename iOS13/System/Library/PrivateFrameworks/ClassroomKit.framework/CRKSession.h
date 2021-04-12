/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CATTransportDelegate.h>
#import <libobjc.A.dylib/CATRemoteTransportDelegate.h>

@protocol CRKSessionDelegate, CRKGrowthFunction;
@class CATStateMachine, CATRemoteTransport, CRKRemoteEndpoint, CATTransport, NSString;

@interface CRKSession : NSObject <CATTransportDelegate, CATRemoteTransportDelegate> {

	CATStateMachine* mFSM;
	CATRemoteTransport* mTransport;
	double mCurrentBackoffInterval;
	BOOL _allowUntrustedConnections;
	BOOL _requiresBeacon;
	id<CRKSessionDelegate> _delegate;
	CRKRemoteEndpoint* _endpoint;
	id<CRKGrowthFunction> _backoffGrowthFunction;
	double _lostBeaconTimeout;
	double _willLoseBeaconWarningTimeout;
	double _failedConnectionRetryInterval;

}

@property (nonatomic,readonly) id<CRKGrowthFunction> backoffGrowthFunction;              //@synthesize backoffGrowthFunction=_backoffGrowthFunction - In the implementation block
@property (nonatomic,retain) CATStateMachine * stateMachine; 
@property (nonatomic,retain) CATTransport * transport; 
@property (assign,nonatomic) double lostBeaconTimeout;                                   //@synthesize lostBeaconTimeout=_lostBeaconTimeout - In the implementation block
@property (assign,nonatomic) double willLoseBeaconWarningTimeout;                        //@synthesize willLoseBeaconWarningTimeout=_willLoseBeaconWarningTimeout - In the implementation block
@property (assign,nonatomic) double failedConnectionRetryInterval;                       //@synthesize failedConnectionRetryInterval=_failedConnectionRetryInterval - In the implementation block
@property (assign,nonatomic,__weak) id<CRKSessionDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) CRKRemoteEndpoint * endpoint;                                       //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,readonly) BOOL allowUntrustedConnections;                           //@synthesize allowUntrustedConnections=_allowUntrustedConnections - In the implementation block
@property (assign,nonatomic) BOOL requiresBeacon;                                        //@synthesize requiresBeacon=_requiresBeacon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id<CRKSessionDelegate>)delegate;
-(void)setDelegate:(id<CRKSessionDelegate>)arg1 ;
-(CRKRemoteEndpoint *)endpoint;
-(id)initWithEndpoint:(id)arg1 ;
-(CATTransport *)transport;
-(void)setTransport:(CATTransport *)arg1 ;
-(void)connect;
-(void)didConnect;
-(CATStateMachine *)stateMachine;
-(void)setStateMachine:(CATStateMachine *)arg1 ;
-(void)rejected;
-(void)transport:(id)arg1 encounteredTrustDecisionWhileTryingToSecure:(id)arg2 ;
-(void)transportDidInvalidate:(id)arg1 ;
-(void)transportDidConnect:(id)arg1 ;
-(void)transport:(id)arg1 didInterruptWithError:(id)arg2 ;
-(void)registerDefaults;
-(void)foundBeacon;
-(void)lostBeacon;
-(void)enterOutOfRange;
-(void)localWiFiBecameAvailable;
-(void)localWiFiBecameUnavailable;
-(void)lostConnection;
-(void)enterNoNetwork;
-(void)enterBackoffCanConnect;
-(void)backoffDidFinish;
-(void)exitBackoffCanConnect;
-(void)delegateDidBecomeConnectable;
-(void)delegateDidBecomeNotConnectable;
-(void)tryConnecting;
-(void)failedToConnect;
-(void)resetBackoff;
-(void)cancelConnectionAttempt;
-(void)delegateConnected;
-(void)delegateDidLoseBeacon;
-(void)delegateDisconnected;
-(void)delegateInvalidated;
-(void)delegateWillLoseBeacon;
-(BOOL)requiresBeacon;
-(double)willLoseBeaconWarningTimeout;
-(id)studentSocketOptions;
-(double)lostBeaconTimeout;
-(id<CRKGrowthFunction>)backoffGrowthFunction;
-(BOOL)allowUntrustedConnections;
-(double)failedConnectionRetryInterval;
-(void)setRequiresBeacon:(BOOL)arg1 ;
-(void)setLostBeaconTimeout:(double)arg1 ;
-(void)setWillLoseBeaconWarningTimeout:(double)arg1 ;
-(void)setFailedConnectionRetryInterval:(double)arg1 ;
@end

