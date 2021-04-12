/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class CUHomeKitManager, NSData, NSMutableSet, NSXPCListener, NSObject, NSXPCListenerEndpoint, NSString;

@interface CUPairingDaemon : NSObject <NSXPCListenerDelegate> {

	CUHomeKitManager* _homeKitManager;
	int _rpIdentityNotifier;
	NSData* _rpSelfIRK;
	unsigned long long _stateHandle;
	NSMutableSet* _xpcConnections;
	NSXPCListener* _xpcListener;
	BOOL _testMode;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                  //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * testListenerEndpoint; 
@property (assign,nonatomic) BOOL testMode;                                               //@synthesize testMode=_testMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPairingDaemon;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)_activate;
-(void)invalidate;
-(void)_invalidate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)reset;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activate;
-(id)detailedDescription;
-(void)_connectionInvalidated:(id)arg1 ;
-(void)_rpIdentityUpdate;
-(NSXPCListenerEndpoint *)testListenerEndpoint;
-(id)copyIdentityWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(id)_copyHomeKitWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(id)_copyHomeKitWithOptionsHAP:(unsigned long long)arg1 error:(int*)arg2 ;
-(id)_copyHomeKitWithOptionsKeychain:(unsigned long long)arg1 error:(int*)arg2 ;
-(id)_copyHomeKitExWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(id)_copyOrCreateWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(id)_copyIdentityWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(int)deleteIdentityWithOptions:(unsigned long long)arg1 ;
-(int)_deleteIdentityWithOptions:(unsigned long long)arg1 ;
-(int)_saveIdentity:(id)arg1 options:(unsigned long long)arg2 ;
-(id)copyPairedPeersWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(id)_copyPairedPeersWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(void)_removeDups:(id)arg1 ;
-(id)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3 ;
-(id)_findHomeKitPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3 ;
-(id)_findHomeKitExPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3 ;
-(id)_findPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3 ;
-(int)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 ;
-(int)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(BOOL)arg3 ;
-(int)_savePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(BOOL)arg3 ;
-(int)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 ;
-(int)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(BOOL)arg3 ;
-(int)_removePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(BOOL)arg3 ;
-(BOOL)testMode;
-(void)setTestMode:(BOOL)arg1 ;
@end

