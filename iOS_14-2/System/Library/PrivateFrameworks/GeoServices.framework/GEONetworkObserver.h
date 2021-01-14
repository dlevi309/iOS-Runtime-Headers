/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_queue, OS_nw_path_monitor, OS_nw_path;
@class NSObject;

@interface GEONetworkObserver : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_nw_path_monitor> _monitor;
	NSObject*<OS_nw_path> _currentPath;
	BOOL _initialized;
	BOOL _networkReachable;
	BOOL _networkConstrained;

}

@property (getter=isNetworkReachable,nonatomic,readonly) BOOL networkReachable; 
@property (getter=isNetworkConstrained,nonatomic,readonly) BOOL networkConstrained; 
@property (getter=isCellConnection,nonatomic,readonly) BOOL cellConnection; 
@property (getter=isWiFiConnection,nonatomic,readonly) BOOL wifiConnection; 
+(id)sharedNetworkObserver;
-(BOOL)isNetworkReachable;
-(BOOL)isNetworkConstrained;
-(id)init;
-(void)initializeIfNecessary;
-(void)_initializeNetworkMonitor;
-(BOOL)isWiFiConnection;
-(BOOL)_isConnectionType:(int)arg1 ;
-(BOOL)isCellConnection;
-(void)_networkPathUpdated:(id)arg1 ;
-(void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)dealloc;
-(void)removeNetworkReachableObserver:(id)arg1 ;
@end

