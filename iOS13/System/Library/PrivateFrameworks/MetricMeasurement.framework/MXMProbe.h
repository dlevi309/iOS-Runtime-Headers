/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue, MXMProbeDelegate;
@class NSObject, MXMSampleFilter;

@interface MXMProbe : NSObject {

	/*^block*/id _updateHandler;
	/*^block*/id _stopHandler;
	NSObject*<OS_dispatch_semaphore> _stopWaiter;
	BOOL __updating;
	BOOL __shouldStop;
	MXMSampleFilter* _filter;
	NSObject*<OS_dispatch_queue> _updateQueue;
	id<MXMProbeDelegate> _delegate;

}

@property (assign) BOOL _updating;                                                  //@synthesize _updating=__updating - In the implementation block
@property (assign) BOOL _shouldStop;                                                //@synthesize _shouldStop=__shouldStop - In the implementation block
@property (nonatomic,copy) MXMSampleFilter * filter;                                //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> updateQueue;              //@synthesize updateQueue=_updateQueue - In the implementation block
@property (assign,nonatomic,__weak) id<MXMProbeDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL updating; 
+(id)probe;
-(id)init;
-(id<MXMProbeDelegate>)delegate;
-(void)setDelegate:(id<MXMProbeDelegate>)arg1 ;
-(void)setFilter:(MXMSampleFilter *)arg1 ;
-(MXMSampleFilter *)filter;
-(BOOL)_shouldStop;
-(NSObject*<OS_dispatch_queue>)updateQueue;
-(BOOL)updating;
-(BOOL)_updating;
-(void)_beginUpdates;
-(void)_stopUpdates;
-(void)stopUpdates;
-(void)setUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)performPreIterationActions;
-(void)updateNowUntilStoppedWithUpdateHandler:(/*^block*/id)arg1 stopHandler:(/*^block*/id)arg2 ;
-(id)sampleWithTimeout:(double)arg1 stopReason:(unsigned long long*)arg2 ;
-(void)_handleIncomingData:(id)arg1 ;
-(id)sampleWithTimeout:(double)arg1 ;
-(void)updateNowUntilStopped;
-(void)updateNowUntilTimeout:(double)arg1 ;
-(BOOL)waitUntilStoppedWithTimeout:(double)arg1 ;
-(void)updateNowUntilTimeout:(double)arg1 updateHandler:(/*^block*/id)arg2 stopHandler:(/*^block*/id)arg3 ;
-(void)set_updating:(BOOL)arg1 ;
-(void)set_shouldStop:(BOOL)arg1 ;
-(BOOL)_setupWaitSemaphore;
-(void)updateNowUntilStoppedWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)updateNowUntilTimeout:(double)arg1 updateHandler:(/*^block*/id)arg2 ;
-(void)waitForeverUntilStopped;
@end

