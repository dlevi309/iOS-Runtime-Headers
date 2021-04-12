/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@protocol OS_dispatch_queue;
@class CUTWeakReference, NSObject, NSString;

@interface _IDSContinuity : NSObject <IDSDaemonListenerProtocol> {

	id _delegateContext;
	CUTWeakReference* _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	long long _state;

}

@property (readonly) long long state;                               //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)continuityDidDiscoverType:(long long)arg1 withData:(id)arg2 fromPeer:(id)arg3 ;
-(void)continuityDidStopTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(void)continuityDidLosePeer:(id)arg1 ;
-(void)continuityDidStartScanningForType:(long long)arg1 ;
-(void)continuityDidStartTrackingPeer:(id)arg1 error:(id)arg2 ;
-(void)continuityDidStartTrackingPeer:(id)arg1 forType:(long long)arg2 error:(id)arg3 ;
-(void)continuityDidStartAdvertisingOfType:(long long)arg1 ;
-(void)continuityDidStopAdvertisingOfType:(long long)arg1 ;
-(void)_handleReconnect;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 ;
-(void)stopScanningForType:(long long)arg1 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 boostedScan:(BOOL)arg4 duplicates:(BOOL)arg5 ;
-(void)stopAdvertisingOfType:(long long)arg1 ;
-(void)continuityDidStopScanningForType:(long long)arg1 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 ;
-(void)continuityDidStopAdvertisingOfType:(long long)arg1 withError:(id)arg2 ;
-(void)continuityDidUpdateStateToState:(long long)arg1 ;
-(void)continuityDidLosePeer:(id)arg1 forType:(long long)arg2 ;
-(long long)state;
-(void)continuityDidStopTrackingPeer:(id)arg1 ;
-(void)stopTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(void)_callDelegateWithBlock:(/*^block*/id)arg1 ;
-(void)continuityDidFailToStartScanningForType:(long long)arg1 withError:(id)arg2 ;
-(void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3 ;
-(void)startTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 delegateContext:(id)arg3 ;
-(void)dealloc;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(BOOL)arg5 duplicates:(BOOL)arg6 ;
-(void)_daemonDied:(id)arg1 ;
-(void)continuityDidFailToStartAdvertisingOfType:(long long)arg1 withError:(id)arg2 ;
@end

