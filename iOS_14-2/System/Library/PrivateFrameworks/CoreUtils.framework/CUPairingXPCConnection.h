/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <libobjc.A.dylib/CUPairingDaemonXPCInterface.h>

@protocol OS_dispatch_queue;
@class CUPairingDaemon, NSObject, NSXPCConnection;

@interface CUPairingXPCConnection : NSObject <CUPairingDaemonXPCInterface> {

	CUPairingDaemon* _daemon;
	BOOL _pmEntitledDeleteIdentity;
	BOOL _pmEntitledHomeKit;
	BOOL _pmEntitledRead;
	BOOL _pmEntitledRemoveAdmin;
	BOOL _pmEntitledRemovePeer;
	BOOL _pmEntitledWrite;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _monitoring;
	NSXPCConnection* _xpcCnx;

}
-(void)connectionInvalidated;
-(void)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)deletePairingIdentityWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPairedPeersWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(int)_entitled:(id)arg1 state:(BOOL*)arg2 label:(id)arg3 ;
-(void)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)startMonitoringWithOptions:(unsigned long long)arg1 ;
-(void)getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)showWithCompletion:(/*^block*/id)arg1 ;
@end

