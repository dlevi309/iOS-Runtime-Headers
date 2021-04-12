/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKSessionDelegate, CRKGrowthFunction;
@class CATStateMachine, CRKRemoteEndpoint, CATTransport, CRKTransportPreflightOperation, NSDictionary;

@interface CRKSession : NSObject {

	CATStateMachine* mFSM;
	double mCurrentBackoffInterval;
	BOOL _requiresBeacon;
	id<CRKSessionDelegate> _delegate;
	CRKRemoteEndpoint* _endpoint;
	id<CRKGrowthFunction> _backoffGrowthFunction;
	CATTransport* _transport;
	double _lostBeaconTimeout;
	double _willLoseBeaconWarningTimeout;
	CRKTransportPreflightOperation* _transportPreflightOperation;

}

@property (nonatomic,readonly) id<CRKGrowthFunction> backoffGrowthFunction;                             //@synthesize backoffGrowthFunction=_backoffGrowthFunction - In the implementation block
@property (nonatomic,retain) CATStateMachine * stateMachine; 
@property (nonatomic,retain) CATTransport * transport;                                                  //@synthesize transport=_transport - In the implementation block
@property (assign,nonatomic) double lostBeaconTimeout;                                                  //@synthesize lostBeaconTimeout=_lostBeaconTimeout - In the implementation block
@property (assign,nonatomic) double willLoseBeaconWarningTimeout;                                       //@synthesize willLoseBeaconWarningTimeout=_willLoseBeaconWarningTimeout - In the implementation block
@property (nonatomic,retain) CRKTransportPreflightOperation * transportPreflightOperation;              //@synthesize transportPreflightOperation=_transportPreflightOperation - In the implementation block
@property (assign,nonatomic,__weak) id<CRKSessionDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) CRKRemoteEndpoint * endpoint;                                                      //@synthesize endpoint=_endpoint - In the implementation block
@property (assign,nonatomic) BOOL requiresBeacon;                                                       //@synthesize requiresBeacon=_requiresBeacon - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stateDictionary; 
-(CATTransport *)transport;
-(id<CRKSessionDelegate>)delegate;
-(void)setStateMachine:(CATStateMachine *)arg1 ;
-(id)initWithEndpoint:(id)arg1 ;
-(void)connect;
-(void)setTransport:(CATTransport *)arg1 ;
-(CRKRemoteEndpoint *)endpoint;
-(NSDictionary *)stateDictionary;
-(void)setDelegate:(id<CRKSessionDelegate>)arg1 ;
-(void)rejected;
-(CATStateMachine *)stateMachine;
-(void)invalidate;
-(void)didConnect;
-(void)registerDefaults;
-(void)foundBeacon;
-(void)lostBeacon;
-(void)enterOutOfRange;
-(void)enterNoNetwork;
-(void)enterBackoffCanConnect;
-(void)exitBackoffCanConnect;
-(void)delegateDidBecomeConnectable;
-(void)delegateDidBecomeNotConnectable;
-(void)tryConnecting;
-(void)cancelConnectionAttempt;
-(void)delegateConnected;
-(void)delegateDidLoseBeacon;
-(void)resetBackoff;
-(void)delegateDisconnected;
-(void)delegateInvalidated;
-(void)delegateWillLoseBeacon;
-(BOOL)requiresBeacon;
-(double)willLoseBeaconWarningTimeout;
-(CRKTransportPreflightOperation *)transportPreflightOperation;
-(void)failedToConnect;
-(id)studentSocketOptions;
-(void)startPreflightingTransport:(id)arg1 ;
-(void)stopPreflightingTransport;
-(double)lostBeaconTimeout;
-(id<CRKGrowthFunction>)backoffGrowthFunction;
-(void)backoffDidFinish;
-(void)setTransportPreflightOperation:(CRKTransportPreflightOperation *)arg1 ;
-(void)transportPreflightOperationDidFinish:(id)arg1 ;
-(void)processFinishedTransportPreflightOperation:(id)arg1 ;
-(void)setRequiresBeacon:(BOOL)arg1 ;
-(void)localWiFiBecameAvailable;
-(void)localWiFiBecameUnavailable;
-(void)lostConnection;
-(void)setLostBeaconTimeout:(double)arg1 ;
-(void)setWillLoseBeaconWarningTimeout:(double)arg1 ;
@end

