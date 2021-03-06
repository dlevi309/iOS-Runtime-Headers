/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <libobjc.A.dylib/CUPairingManagerXPCInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSXPCListenerEndpoint;

@interface CUPairingManager : NSObject <CUPairingManagerXPCInterface> {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	BOOL _monitoring;
	unsigned long long _monitorOptions;
	NSXPCConnection* _xpcCnx;
	BOOL _targetUserSession;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _identityCreatedHandler;
	/*^block*/id _identityDeletedHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _pairedPeerAddedHandler;
	/*^block*/id _pairedPeerRemovedHandler;
	/*^block*/id _pairedPeerChangedHandler;
	NSXPCListenerEndpoint* _testListenerEndpoint;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id identityCreatedHandler;                                   //@synthesize identityCreatedHandler=_identityCreatedHandler - In the implementation block
@property (nonatomic,copy) id identityDeletedHandler;                                   //@synthesize identityDeletedHandler=_identityDeletedHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                      //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                      //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id pairedPeerAddedHandler;                                   //@synthesize pairedPeerAddedHandler=_pairedPeerAddedHandler - In the implementation block
@property (nonatomic,copy) id pairedPeerRemovedHandler;                                 //@synthesize pairedPeerRemovedHandler=_pairedPeerRemovedHandler - In the implementation block
@property (nonatomic,copy) id pairedPeerChangedHandler;                                 //@synthesize pairedPeerChangedHandler=_pairedPeerChangedHandler - In the implementation block
@property (assign,nonatomic) BOOL targetUserSession;                                    //@synthesize targetUserSession=_targetUserSession - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * testListenerEndpoint;              //@synthesize testListenerEndpoint=_testListenerEndpoint - In the implementation block
-(void)setTestListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)_invalidate;
-(void)setIdentityDeletedHandler:(id)arg1 ;
-(void)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)targetUserSession;
-(void)setTargetUserSession:(BOOL)arg1 ;
-(void)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)deletePairingIdentityWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(id)identityCreatedHandler;
-(void)getPairedPeersWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPairedPeerChangedHandler:(id)arg1 ;
-(void)_startMonitoringWithOptions:(unsigned long long)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)pairedPeerChangedHandler;
-(void)_savePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)pairingIdentityCreated:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)pairedPeerAddedHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_removePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)startMonitoringWithOptions:(unsigned long long)arg1 ;
-(int)_ensureXPCStarted;
-(void)getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_getPairedPeersWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPairedPeerRemovedHandler:(id)arg1 ;
-(NSXPCListenerEndpoint *)testListenerEndpoint;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)pairingIdentityDeletedWithOptions:(unsigned long long)arg1 ;
-(void)_getPairingIdentityWithOptions:(unsigned long long)arg1 tryCount:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(void)_interrupted;
-(void)_invalidated;
-(void)pairedPeerChanged:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_showWithCompletion:(/*^block*/id)arg1 ;
-(void)setIdentityCreatedHandler:(id)arg1 ;
-(void)invalidate;
-(void)pairedPeerAdded:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setPairedPeerAddedHandler:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_deletePairingIdentityWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)invalidationHandler;
-(void)pairedPeerRemoved:(id)arg1 options:(unsigned long long)arg2 ;
-(id)pairedPeerRemovedHandler;
-(void)showWithCompletion:(/*^block*/id)arg1 ;
-(id)identityDeletedHandler;
-(id)interruptionHandler;
-(void)dealloc;
@end

