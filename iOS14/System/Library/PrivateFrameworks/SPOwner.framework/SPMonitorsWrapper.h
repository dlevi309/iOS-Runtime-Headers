/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setIsRunning:(BOOL)arg1 ;
-(unsigned long long)powerState;
-(void)setNetworkMonitor:(SPNetworkMonitor *)arg1 ;
-(id<SPMonitorsWrapperDelegate>)delegate;
-(void)start;
-(void)pause;
-(SPNetworkMonitor *)networkMonitor;
-(void)stop;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<SPMonitorsWrapperDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setLastStateChangeDate:(NSDate *)arg1 ;
-(BOOL)isRunning;
-(NSDate *)lastStateChangeDate;
-(void)setNextStateChangeDate:(NSDate *)arg1 ;
-(id)initWithBeaconManager:(id)arg1 delegateQueueu:(id)arg2 ;
-(void)resume;
-(BOOL)isNetworkUp;
-(NSDate *)nextStateChangeDate;
@end

