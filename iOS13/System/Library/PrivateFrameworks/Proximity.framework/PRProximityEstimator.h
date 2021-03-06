/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/


@protocol OS_os_log, OS_dispatch_queue, PRProximityEstimatorDelegate;
@class NSObject, NSMutableDictionary;

@interface PRProximityEstimator : NSObject {

	BOOL usingST;
	NSObject*<OS_os_log> _logger;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSMutableDictionary* devicesMonitered;
	id<PRProximityEstimatorDelegate> _delegate;

}

@property (__weak,readonly) id<PRProximityEstimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<PRProximityEstimatorDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)invokeDelegateBlock:(/*^block*/id)arg1 ;
-(id)initSingleThresholdEstmatorWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(BOOL)addRssiSample:(double)arg1 channel:(unsigned)arg2 forPeer:(id)arg3 withError:(id*)arg4 ;
-(BOOL)stopEstimatingProximityFor:(id)arg1 withError:(id*)arg2 ;
-(BOOL)startEstimatingProximityFor:(id)arg1 peerDeviceModel:(id)arg2 withError:(id*)arg3 ;
@end

