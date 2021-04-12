/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/


@protocol BSServiceConnectionHost, SASSignalServerDelegate;
@class BSServiceConnectionEndpointInjector, BSServiceConnection, NSMutableArray;

@interface SASSignalServer : NSObject {

	BOOL _invalidated;
	BSServiceConnectionEndpointInjector* _workspaceServiceInjector;
	BSServiceConnection*<BSServiceConnectionHost> _connection;
	NSMutableArray* _waitForConnectBlocks;
	id<SASSignalServerDelegate> _weak_delegate;

}

@property (nonatomic,retain) BSServiceConnectionEndpointInjector * workspaceServiceInjector;              //@synthesize workspaceServiceInjector=_workspaceServiceInjector - In the implementation block
@property (nonatomic,retain) BSServiceConnection*<BSServiceConnectionHost> connection;                    //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL invalidated;                                                            //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,retain) NSMutableArray * waitForConnectBlocks;                                       //@synthesize waitForConnectBlocks=_waitForConnectBlocks - In the implementation block
@property (assign,nonatomic,__weak) id<SASSignalServerDelegate> weak_delegate;                            //@synthesize weak_delegate=_weak_delegate - In the implementation block
+(id)interface;
+(id)serviceQuality;
+(id)serverForConnection:(id)arg1 ;
-(void)_setConnection:(id)arg1 ;
-(BSServiceConnection*<BSServiceConnectionHost>)connection;
-(void)setConnection:(BSServiceConnection*<BSServiceConnectionHost>)arg1 ;
-(BOOL)invalidated;
-(void)setInvalidated:(BOOL)arg1 ;
-(NSMutableArray *)waitForConnectBlocks;
-(void)setWaitForConnectBlocks:(NSMutableArray *)arg1 ;
-(BSServiceConnectionEndpointInjector *)workspaceServiceInjector;
-(void)setWorkspaceServiceInjector:(BSServiceConnectionEndpointInjector *)arg1 ;
-(id<SASSignalServerDelegate>)weak_delegate;
-(void)setWeak_delegate:(id<SASSignalServerDelegate>)arg1 ;
-(oneway void)buttonLongPressFromButtonIdentifier:(id)arg1 context:(id)arg2 ;
-(oneway void)activationRequestFromButtonIdentifier:(id)arg1 context:(id)arg2 ;
-(oneway void)buttonTapFromButtonIdentifier:(id)arg1 ;
-(oneway void)deactivationRequestFromButtonIdentifier:(id)arg1 context:(id)arg2 options:(id)arg3 ;
-(oneway void)prewarmFromButtonIdentifier:(id)arg1 longPressInterval:(id)arg2 ;
-(oneway void)cancelPrewarmFromButtonIdentifier:(id)arg1 ;
-(oneway void)buttonDownFromButtonIdentifier:(id)arg1 timestamp:(id)arg2 ;
-(oneway void)buttonUpFromButtonIdentifier:(id)arg1 timestamp:(id)arg2 ;
-(oneway void)activationRequestFromDirectActionEvent:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)activationRequestFromContinuityWithContext:(id)arg1 ;
-(oneway void)activationRequestFromBreadcrumb;
-(oneway void)activationRequestFromSimpleActivation:(id)arg1 ;
-(oneway void)activationRequestFromSpotlightWithContext:(id)arg1 ;
-(oneway void)activationRequestFromTestingWithContext:(id)arg1 ;
-(oneway void)unregisterNonButtonSourceWithType:(id)arg1 withUUID:(id)arg2 ;
-(oneway void)registerNonButtonSourceWithType:(id)arg1 withUUID:(id)arg2 ;
-(oneway void)unregisterButtonIdentifier:(id)arg1 withUUID:(id)arg2 ;
-(oneway void)registerButtonIdentifier:(id)arg1 withUUID:(id)arg2 ;
-(oneway void)activationRequestFromDirectActionEvent:(id)arg1 context:(id)arg2 ;
-(oneway void)prewarmFromButtonIdentifier:(id)arg1 ;
-(void)_registerSourceForIdentifier:(id)arg1 ;
-(void)_unregisterSourceForIdentifier:(id)arg1 ;
-(void)_activationRequestFromDirectActionEvent:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

