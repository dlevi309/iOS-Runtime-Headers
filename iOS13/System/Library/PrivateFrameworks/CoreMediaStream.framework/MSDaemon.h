/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/


@protocol OS_dispatch_queue;
@class NSObject, NSTimer;

@interface MSDaemon : NSObject {

	BOOL _stabilizedIsBusy;
	int _busyCount;
	int _UIBusyCount;
	NSObject*<OS_dispatch_queue> _idleCountQueue;
	NSTimer* _hysteresisTimer;

}

@property (assign,nonatomic) int busyCount;                                            //@synthesize busyCount=_busyCount - In the implementation block
@property (assign,nonatomic) int UIBusyCount;                                          //@synthesize UIBusyCount=_UIBusyCount - In the implementation block
@property (nonatomic,retain) NSTimer * hysteresisTimer;                                //@synthesize hysteresisTimer=_hysteresisTimer - In the implementation block
@property (assign,nonatomic) BOOL stabilizedIsBusy;                                    //@synthesize stabilizedIsBusy=_stabilizedIsBusy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> idleCountQueue;              //@synthesize idleCountQueue=_idleCountQueue - In the implementation block
-(id)init;
-(BOOL)isBusy;
-(int)busyCount;
-(void)setBusyCount:(int)arg1 ;
-(void)releasePowerAssertion;
-(void)retainPowerAssertion;
-(void)retainBusy;
-(void)releaseBusy;
-(void)retainUIBusy;
-(void)releaseUIBusy;
-(void)setUIBusyCount:(int)arg1 ;
-(int)UIBusyCount;
-(void)didIdle;
-(void)didUnidle;
-(void)_didChangeIdleBusyState:(BOOL)arg1 ;
-(void)_hysteresisTimerDidFire:(id)arg1 ;
-(void)stabilizedDidIdle;
-(void)stabilizedDidUnidle;
-(NSObject*<OS_dispatch_queue>)idleCountQueue;
-(void)setIdleCountQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSTimer *)hysteresisTimer;
-(void)setHysteresisTimer:(NSTimer *)arg1 ;
-(BOOL)stabilizedIsBusy;
-(void)setStabilizedIsBusy:(BOOL)arg1 ;
@end

