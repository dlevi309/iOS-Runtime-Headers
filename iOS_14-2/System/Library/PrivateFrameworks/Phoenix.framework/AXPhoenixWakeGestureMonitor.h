/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
*/

#import <Phoenix/AXPhoenixEventMonitor.h>
#import <libobjc.A.dylib/CMWakeGestureDelegate.h>

@class CMWakeGestureManager, NSString;

@interface AXPhoenixWakeGestureMonitor : AXPhoenixEventMonitor <CMWakeGestureDelegate> {

	double _wakeGestureTimestamp;
	double _dismissalTimestamp;
	CMWakeGestureManager* _gestureManager;

}

@property (assign,nonatomic) double wakeGestureTimestamp;                        //@synthesize wakeGestureTimestamp=_wakeGestureTimestamp - In the implementation block
@property (assign,nonatomic) double dismissalTimestamp;                          //@synthesize dismissalTimestamp=_dismissalTimestamp - In the implementation block
@property (nonatomic,retain) CMWakeGestureManager * gestureManager;              //@synthesize gestureManager=_gestureManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2 ;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)setGestureManager:(CMWakeGestureManager *)arg1 ;
-(CMWakeGestureManager *)gestureManager;
-(double)wakeGestureTimestamp;
-(double)dismissalTimestamp;
-(void)setWakeGestureTimestamp:(double)arg1 ;
-(void)setDismissalTimestamp:(double)arg1 ;
-(void)_didReceiveWakeGesture;
-(void)_didReceiveSleepGesture;
-(BOOL)isDeviceHandheld;
@end

