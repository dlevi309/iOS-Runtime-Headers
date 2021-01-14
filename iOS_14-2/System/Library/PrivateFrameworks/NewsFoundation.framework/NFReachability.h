/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setObservationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setNetworkPathMonitor:(NSObject*<OS_nw_path_monitor>)arg1 ;
-(void)_updateCurrentNetworkPath:(id)arg1 ;
-(NSObject*<OS_nw_path>)currentNetworkPath;
-(void)setCurrentNetworkPath:(NSObject*<OS_nw_path>)arg1 ;
-(long long)_statusFromNetworkPath:(id)arg1 ;
-(NSObject*<OS_nw_path_monitor>)networkPathMonitor;
-(NSObject*<OS_dispatch_queue>)observationQueue;
-(long long)currentReachabilityStatus;
-(void)setCurrentReachabilityStatus:(long long)arg1 ;
-(void)dealloc;
@end

