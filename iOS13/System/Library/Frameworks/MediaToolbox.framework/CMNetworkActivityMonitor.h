/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/


@protocol OS_dispatch_queue;
@class NSObject, CMNetworkActivityObserver;

@interface CMNetworkActivityMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _networkIsActive;
	CMNetworkActivityObserver* _cmObserver;
	long long _showingNetworkActivityCount;
	long long _monitoringActiveCount;

}

@property (setter=setCMObserver:,nonatomic,retain) CMNetworkActivityObserver * cmObserver;              //@synthesize cmObserver=_cmObserver - In the implementation block
@property (assign,nonatomic) long long showingNetworkActivityCount;                                     //@synthesize showingNetworkActivityCount=_showingNetworkActivityCount - In the implementation block
@property (assign,nonatomic) long long monitoringActiveCount;                                           //@synthesize monitoringActiveCount=_monitoringActiveCount - In the implementation block
@property (assign,nonatomic) BOOL networkIsActive;                                                      //@synthesize networkIsActive=_networkIsActive - In the implementation block
+(id)sharedActivityMonitor;
-(id)init;
-(void)dealloc;
-(void)setNetworkIsActive:(BOOL)arg1 ;
-(void)setCMObserver:(id)arg1 ;
-(long long)monitoringActiveCount;
-(void)setMonitoringActiveCount:(long long)arg1 ;
-(CMNetworkActivityObserver *)cmObserver;
-(void)beginMonitoring;
-(void)endMonitoring;
-(long long)showingNetworkActivityCount;
-(void)setShowingNetworkActivityCount:(long long)arg1 ;
-(BOOL)networkIsActive;
@end

