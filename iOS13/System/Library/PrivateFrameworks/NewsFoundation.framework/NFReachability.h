/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@protocol OS_dispatch_queue, OS_nw_path_monitor, OS_nw_path;
@class NSObject;

@interface NFReachability : NSObject {

	long long _currentReachabilityStatus;
	NSObject*<OS_dispatch_queue> _observationQueue;
	NSObject*<OS_nw_path_monitor> _networkPathMonitor;
	NSObject*<OS_nw_path> _currentNetworkPath;

}

@property (assign) long long currentReachabilityStatus;                                     //@synthesize currentReachabilityStatus=_currentReachabilityStatus - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> observationQueue;                 //@synthesize observationQueue=_observationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_path_monitor> networkPathMonitor;              //@synthesize networkPathMonitor=_networkPathMonitor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_path> currentNetworkPath;                      //@synthesize currentNetworkPath=_currentNetworkPath - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(long long)currentReachabilityStatus;
-(NSObject*<OS_dispatch_queue>)observationQueue;
-(void)_updateCurrentNetworkPath:(id)arg1 ;
-(NSObject*<OS_nw_path>)currentNetworkPath;
-(void)setCurrentNetworkPath:(NSObject*<OS_nw_path>)arg1 ;
-(long long)_statusFromNetworkPath:(id)arg1 ;
-(void)setCurrentReachabilityStatus:(long long)arg1 ;
-(void)setObservationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_nw_path_monitor>)networkPathMonitor;
-(void)setNetworkPathMonitor:(NSObject*<OS_nw_path_monitor>)arg1 ;
@end

