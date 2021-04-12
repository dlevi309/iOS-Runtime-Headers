/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/

#import <libobjc.A.dylib/PRProximityEstimatorDelegate.h>
#import <libobjc.A.dylib/PRBeaconDelegate.h>

@protocol OS_os_log, OS_dispatch_queue, PRSharingSessionDelegate;
@class NSObject, PRProximityEstimator, NSMutableDictionary, PRBeacon, PRSharingChoice, NSString;

@interface PRSharingSession : NSObject <PRProximityEstimatorDelegate, PRBeaconDelegate> {

	NSObject*<OS_os_log> _logger;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	PRProximityEstimator* _btProxEstimator;
	NSMutableDictionary* _trackedBTPeers;
	NSMutableDictionary* _trackedBTPeersDevice;
	PRBeacon* _nearbyDaemonSession;
	BOOL _needToRestart;
	/*^block*/id _reportWatchdog;
	BOOL _scoresReported;
	PRSharingChoice* _sharingChoiceEstimator;
	id<PRSharingSessionDelegate> _delegate;

}

@property (__weak) id<PRSharingSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PRSharingSessionDelegate>)delegate;
-(void)setDelegate:(id<PRSharingSessionDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)startInitiating;
-(void)stopInitiating;
-(BOOL)addRssiSample:(double)arg1 channel:(unsigned)arg2 forPeer:(id)arg3 peerDeviceModel:(id)arg4 withError:(id*)arg5 ;
-(void)didFailWithError:(id)arg1 ;
-(void)invokeDelegateBlock:(/*^block*/id)arg1 ;
-(void)startWatchDogWithDuration:(long long)arg1 ;
-(void)watchDogTimedOut;
-(void)onNewSharingChoiceScores:(id)arg1 ;
-(void)stopProx;
-(BOOL)trackNewBTPeer:(id)arg1 withDviceModel:(id)arg2 error:(id*)arg3 ;
-(void)logScores:(id)arg1 ;
-(void)estimator:(id)arg1 didEstimateProximity:(long long)arg2 toPeer:(id)arg3 ;
-(void)beacon:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)beacon:(id)arg1 didFailWithError:(id)arg2 ;
-(void)beacon:(id)arg1 didOutputRangeResults:(id)arg2 ;
@end

