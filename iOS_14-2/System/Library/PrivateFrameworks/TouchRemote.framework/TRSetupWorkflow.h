/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/


@class TRNearbyDevice, TRSession, NSSet, UIViewController, TROperationQueue;

@interface TRSetupWorkflow : NSObject {

	/*^block*/id _startedHandler;
	/*^block*/id _configurationStageStartedHandler;
	/*^block*/id _networkStageStartedHandler;
	/*^block*/id _activationStageStartedHandler;
	/*^block*/id _completionHandler;
	/*^block*/id _failureHandler;
	TRNearbyDevice* _nearbyDevice;
	unsigned long long _state;
	TRSession* _session;
	NSSet* _unauthenticatedAccountServices;
	UIViewController* _presentingViewController;
	TROperationQueue* _operationQueue;

}

@property (nonatomic,retain) TRNearbyDevice * nearbyDevice;                            //@synthesize nearbyDevice=_nearbyDevice - In the implementation block
@property (assign) unsigned long long state;                                           //@synthesize state=_state - In the implementation block
@property (retain) TRSession * session;                                                //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSSet * unauthenticatedAccountServices;                   //@synthesize unauthenticatedAccountServices=_unauthenticatedAccountServices - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) TROperationQueue * operationQueue;                        //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,copy) id startedHandler;                                          //@synthesize startedHandler=_startedHandler - In the implementation block
@property (nonatomic,copy) id configurationStageStartedHandler;                        //@synthesize configurationStageStartedHandler=_configurationStageStartedHandler - In the implementation block
@property (nonatomic,copy) id networkStageStartedHandler;                              //@synthesize networkStageStartedHandler=_networkStageStartedHandler - In the implementation block
@property (nonatomic,copy) id activationStageStartedHandler;                           //@synthesize activationStageStartedHandler=_activationStageStartedHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id failureHandler;                                          //@synthesize failureHandler=_failureHandler - In the implementation block
+(void)initialize;
-(void)setOperationQueue:(TROperationQueue *)arg1 ;
-(TROperationQueue *)operationQueue;
-(void)setCompletionHandler:(id)arg1 ;
-(void)start;
-(TRSession *)session;
-(id)completionHandler;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setSession:(TRSession *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(id)failureHandler;
-(void)setFailureHandler:(id)arg1 ;
-(void)cancel;
-(void)setUnauthenticatedAccountServices:(NSSet *)arg1 ;
-(id)startedHandler;
-(void)setStartedHandler:(id)arg1 ;
-(void)_abortSetupWithErrorCode:(long long)arg1 userInfo:(id)arg2 ;
-(void)_performHandshakeOperation;
-(void)_performConfigurationOperation;
-(id)configurationStageStartedHandler;
-(void)_performNetworkOperation;
-(void)_performActivationOperation;
-(id)networkStageStartedHandler;
-(id)activationStageStartedHandler;
-(void)_performAuthenticationOperation;
-(NSSet *)unauthenticatedAccountServices;
-(void)_performCompletionOperation;
-(void)_releaseHandlers;
-(void)setConfigurationStageStartedHandler:(id)arg1 ;
-(void)setNetworkStageStartedHandler:(id)arg1 ;
-(void)setActivationStageStartedHandler:(id)arg1 ;
-(id)initWithNearbyDevice:(id)arg1 presentingViewController:(id)arg2 ;
-(TRNearbyDevice *)nearbyDevice;
-(void)setNearbyDevice:(TRNearbyDevice *)arg1 ;
@end

