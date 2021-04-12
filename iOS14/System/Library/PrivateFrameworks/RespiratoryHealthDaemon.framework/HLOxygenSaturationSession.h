/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealthDaemon.framework/RespiratoryHealthDaemon
*/


@protocol HLOxygenSaturationSessionDelegate, OS_dispatch_queue;
@class NSObject;

@interface HLOxygenSaturationSession : NSObject {

	id<HLOxygenSaturationSessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id<HLOxygenSaturationSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
-(void)abort;
-(void)begin;
-(id<HLOxygenSaturationSessionDelegate>)delegate;
-(void)setDelegate:(id<HLOxygenSaturationSessionDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithDelegate:(id)arg1 onQueue:(id)arg2 ;
-(void)unitTesting_deliverFeedback:(unsigned long long)arg1 ;
-(void)unitTesting_endSessionWithReason:(unsigned long long)arg1 saturation:(id)arg2 barometricPressure:(id)arg3 averageHeartRate:(id)arg4 averageHeartRateUUID:(id)arg5 ;
@end

