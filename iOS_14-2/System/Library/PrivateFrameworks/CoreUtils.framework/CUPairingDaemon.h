/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTestMode:(BOOL)arg1 ;
-(void)_invalidate;
-(id)detailedDescription;
-(void)_removeDups:(id)arg1 ;
-(int)deleteIdentityWithOptions:(unsigned long long)arg1 ;
-(id)_copyPairedPeersWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(id)_findHomeKitExPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3 ;
-(id)init;
-(id)_findHomeKitPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3 ;
-(id)_copyOrCreateWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(int)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 ;
-(id)_copyHomeKitWithOptionsKeychain:(unsigned long long)arg1 error:(int*)arg2 ;
-(int)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(BOOL)arg3 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(id)_copyIdentityWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(void)_activate;
-(int)_deleteIdentityWithOptions:(unsigned long long)arg1 ;
-(BOOL)testMode;
-(NSXPCListenerEndpoint *)testListenerEndpoint;
-(NSString *)description;
-(int)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(BOOL)arg3 ;
-(id)copyIdentityWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(id)copyPairedPeersWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)_copyHomeKitExWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(void)_connectionInvalidated:(id)arg1 ;
-(int)_savePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(BOOL)arg3 ;
-(id)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3 ;
-(void)reset;
-(id)_copyHomeKitWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(void)invalidate;
-(id)_copyHomeKitWithOptionsHAP:(unsigned long long)arg1 error:(int*)arg2 ;
-(int)_removePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(BOOL)arg3 ;
-(void)_rpIdentityUpdate;
-(id)_findPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3 ;
-(void)dealloc;
-(int)_saveIdentity:(id)arg1 options:(unsigned long long)arg2 ;
@end

