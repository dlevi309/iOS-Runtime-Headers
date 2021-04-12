/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/


@protocol BSServiceConnectionHost, SASPresentationServerDelegate;
@class BSServiceConnectionEndpointInjector, BSServiceConnection, NSMutableArray;

@interface SASPresentationServer : NSObject {

	BOOL _invalidated;
	BSServiceConnectionEndpointInjector* _workspaceServiceInjector;
	BSServiceConnection*<BSServiceConnectionHost> _connection;
	NSMutableArray* _waitForConnectBlocks;
	id<SASPresentationServerDelegate> _weak_delegate;
	long long _presentationIdentifier;

}

@property (nonatomic,retain) BSServiceConnectionEndpointInjector * workspaceServiceInjector;              //@synthesize workspaceServiceInjector=_workspaceServiceInjector - In the implementation block
@property (nonatomic,retain) BSServiceConnection*<BSServiceConnectionHost> connection;                    //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL invalidated;                                                            //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,retain) NSMutableArray * waitForConnectBlocks;                                       //@synthesize waitForConnectBlocks=_waitForConnectBlocks - In the implementation block
@property (assign,nonatomic,__weak) id<SASPresentationServerDelegate> weak_delegate;                      //@synthesize weak_delegate=_weak_delegate - In the implementation block
@property (assign,nonatomic) long long presentationIdentifier;                                            //@synthesize presentationIdentifier=_presentationIdentifier - In the implementation block
+(id)serviceQuality;
+(id)interface;
+(void)_unregisterConnection:(id)arg1 ;
+(id)serverForConnection:(id)arg1 ;
-(id)bulletinForIdentifier:(id)arg1 ;
-(oneway void)didPresentSiri;
-(id<SASPresentationServerDelegate>)weak_delegate;
-(id)init;
-(BOOL)invalidated;
-(id)bulletinsOnLockScreen;
-(id)allBulletins;
-(void)setWeak_delegate:(id<SASPresentationServerDelegate>)arg1 ;
-(oneway void)speechRequestCancelledFromSiriOrb;
-(oneway void)didDismiss;
-(void)setInvalidated:(BOOL)arg1 ;
-(BSServiceConnectionEndpointInjector *)workspaceServiceInjector;
-(void)setWaitForConnectBlocks:(NSMutableArray *)arg1 ;
-(id)description;
-(void)setPresentationIdentifier:(long long)arg1 ;
-(BSServiceConnection*<BSServiceConnectionHost>)connection;
-(NSMutableArray *)waitForConnectBlocks;
-(oneway void)speechRequestStartedFromSiriOrb;
-(oneway void)registerPresentationIdentifier:(id)arg1 ;
-(oneway void)failedToPresentSiriWithError:(id)arg1 ;
-(void)_setConnection:(id)arg1 ;
-(void)setConnection:(BSServiceConnection*<BSServiceConnectionHost>)arg1 ;
-(oneway void)resetSiriToActive;
-(oneway void)pong;
-(long long)presentationIdentifier;
-(void)setWorkspaceServiceInjector:(BSServiceConnectionEndpointInjector *)arg1 ;
-(oneway void)willDismiss;
-(oneway void)unregisterPresentationIdentifier:(id)arg1 ;
-(void)dealloc;
-(oneway void)handleMarkBulletinWithIdentifier:(id)arg1 asRead:(id)arg2 ;
@end

