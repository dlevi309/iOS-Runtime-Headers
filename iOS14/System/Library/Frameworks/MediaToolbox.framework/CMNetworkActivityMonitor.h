/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCMObserver:(id)arg1 ;
-(id)init;
-(void)setShowingNetworkActivityCount:(long long)arg1 ;
-(void)setNetworkIsActive:(BOOL)arg1 ;
-(CMNetworkActivityObserver *)cmObserver;
-(long long)showingNetworkActivityCount;
-(void)beginMonitoring;
-(long long)monitoringActiveCount;
-(void)setMonitoringActiveCount:(long long)arg1 ;
-(BOOL)networkIsActive;
-(void)dealloc;
-(void)endMonitoring;
@end

