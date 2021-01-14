/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
*/

#import <libobjc.A.dylib/BUNetworkMonitoring.h>

@protocol OS_dispatch_queue, OS_nw_path_monitor, OS_nw_path;
@class NSObject, RadiosPreferences, NSString;

@interface BUNetworkMonitor : NSObject <BUNetworkMonitoring> {

	NSObject*<OS_dispatch_queue> _monitorQueue;
	NSObject*<OS_nw_path_monitor> _pathMonitor;
	NSObject*<OS_nw_path> _currentPath;
	RadiosPreferences* _radiosPreferences;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> monitorQueue;              //@synthesize monitorQueue=_monitorQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_path_monitor> pathMonitor;              //@synthesize pathMonitor=_pathMonitor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_path> currentPath;                      //@synthesize currentPath=_currentPath - In the implementation block
@property (nonatomic,retain) RadiosPreferences * radiosPreferences;                  //@synthesize radiosPreferences=_radiosPreferences - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isConnected;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)isAirplaneModeEnabled;
-(BOOL)hasWAPICapability;
-(void)start;
-(NSObject*<OS_nw_path>)currentPath;
-(void)setCurrentPath:(NSObject*<OS_nw_path>)arg1 ;
-(void)setPathMonitor:(NSObject*<OS_nw_path_monitor>)arg1 ;
-(NSObject*<OS_dispatch_queue>)monitorQueue;
-(void)stop;
-(void)setMonitorQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)hasCellularCapability;
-(void)setRadiosPreferences:(RadiosPreferences *)arg1 ;
-(NSObject*<OS_nw_path_monitor>)pathMonitor;
-(RadiosPreferences *)radiosPreferences;
-(BOOL)hasCellularConnection;
-(BOOL)hasWifiConnection;
@end

