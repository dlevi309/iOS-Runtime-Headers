/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <SPOwner/SPPowerMonitorDelegate.h>

@protocol SPMonitorsWrapperDelegate, OS_dispatch_queue;
@class NSObject, SPNetworkMonitor, NSDate, NSString;

@interface SPMonitorsWrapper : NSObject <SPPowerMonitorDelegate> {

	BOOL _isRunning;
	id<SPMonitorsWrapperDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	SPNetworkMonitor* _networkMonitor;
	NSDate* _lastStateChangeDate;
	NSDate* _nextStateChangeDate;

}

@property (assign,nonatomic,__weak) id<SPMonitorsWrapperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                 //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) SPNetworkMonitor * networkMonitor;                          //@synthesize networkMonitor=_networkMonitor - In the implementation block
@property (nonatomic,retain) NSDate * lastStateChangeDate;                               //@synthesize lastStateChangeDate=_lastStateChangeDate - In the implementation block
@property (nonatomic,retain) NSDate * nextStateChangeDate;                               //@synthesize nextStateChangeDate=_nextStateChangeDate - In the implementation block
@property (assign) BOOL isRunning;                                                       //@synthesize isRunning=_isRunning - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SPMonitorsWrapperDelegate>)delegate;
-(void)setDelegate:(id<SPMonitorsWrapperDelegate>)arg1 ;
-(void)pause;
-(void)resume;
-(void)stop;
-(void)start;
-(BOOL)isRunning;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setIsRunning:(BOOL)arg1 ;
-(BOOL)isNetworkUp;
-(unsigned long long)powerState;
-(SPNetworkMonitor *)networkMonitor;
-(void)setNetworkMonitor:(SPNetworkMonitor *)arg1 ;
-(id)initWithBeaconManager:(id)arg1 delegateQueueu:(id)arg2 ;
-(NSDate *)lastStateChangeDate;
-(void)setLastStateChangeDate:(NSDate *)arg1 ;
-(NSDate *)nextStateChangeDate;
-(void)setNextStateChangeDate:(NSDate *)arg1 ;
@end

