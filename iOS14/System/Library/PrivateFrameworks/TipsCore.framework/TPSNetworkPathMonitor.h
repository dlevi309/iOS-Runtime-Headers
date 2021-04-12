/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_nw_path_monitor, OS_nw_path;
@class NSMapTable, NSObject;

@interface TPSNetworkPathMonitor : NSObject {

	BOOL _networkReachable;
	BOOL _networkConstrained;
	BOOL _networkExpensive;
	BOOL _networkPathMonitorActive;
	BOOL _shouldNotify;
	NSMapTable* _observers;
	NSObject*<OS_dispatch_queue> _monitorQueue;
	NSObject*<OS_dispatch_source> _notifyTimer;
	NSObject*<OS_nw_path_monitor> _pathMonitor;
	NSObject*<OS_nw_path> _currentPath;

}

@property (assign,getter=isNetworkReachable,nonatomic) BOOL networkReachable;                  //@synthesize networkReachable=_networkReachable - In the implementation block
@property (assign,getter=isNetworkConstrained,nonatomic) BOOL networkConstrained;              //@synthesize networkConstrained=_networkConstrained - In the implementation block
@property (assign,getter=isNetworkExpensive,nonatomic) BOOL networkExpensive;                  //@synthesize networkExpensive=_networkExpensive - In the implementation block
@property (assign,nonatomic) BOOL networkPathMonitorActive;                                    //@synthesize networkPathMonitorActive=_networkPathMonitorActive - In the implementation block
@property (assign,nonatomic) BOOL shouldNotify;                                                //@synthesize shouldNotify=_shouldNotify - In the implementation block
@property (nonatomic,retain) NSMapTable * observers;                                           //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> monitorQueue;                        //@synthesize monitorQueue=_monitorQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> notifyTimer;                        //@synthesize notifyTimer=_notifyTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_path_monitor> pathMonitor;                        //@synthesize pathMonitor=_pathMonitor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_path> currentPath;                                //@synthesize currentPath=_currentPath - In the implementation block
+(id)sharedMonitor;
-(BOOL)isNetworkReachable;
-(BOOL)isNetworkConstrained;
-(NSMapTable *)observers;
-(id)init;
-(void)start;
-(NSObject*<OS_nw_path>)currentPath;
-(void)setCurrentPath:(NSObject*<OS_nw_path>)arg1 ;
-(void)setNetworkReachable:(BOOL)arg1 ;
-(void)setPathMonitor:(NSObject*<OS_nw_path_monitor>)arg1 ;
-(NSObject*<OS_dispatch_source>)notifyTimer;
-(void)setNotifyTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_queue>)monitorQueue;
-(void)setShouldNotify:(BOOL)arg1 ;
-(void)_initializeMonitorIfNeeded;
-(void)_uninitializeMonitor;
-(BOOL)networkPathMonitorActive;
-(void)stop;
-(void)_initializeMonitor;
-(void)setNetworkPathMonitorActive:(BOOL)arg1 ;
-(BOOL)shouldNotify;
-(void)_notifyObserversWithDelay:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_cancelPendingNotifications;
-(BOOL)isNetworkExpensive;
-(BOOL)usesCellularConnection;
-(BOOL)usesWifiConnection;
-(BOOL)isNetworkError:(id)arg1 ;
-(void)setNetworkConstrained:(BOOL)arg1 ;
-(void)setNetworkExpensive:(BOOL)arg1 ;
-(void)setMonitorQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)description;
-(void)setObservers:(NSMapTable *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSObject*<OS_nw_path_monitor>)pathMonitor;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)_networkPathUpdated:(id)arg1 ;
-(void)dealloc;
@end

