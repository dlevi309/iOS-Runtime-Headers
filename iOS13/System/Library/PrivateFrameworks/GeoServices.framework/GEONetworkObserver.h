/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sharedNetworkObserver;
-(id)init;
-(void)dealloc;
-(BOOL)isNetworkReachable;
-(void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)removeNetworkReachableObserver:(id)arg1 ;
-(BOOL)isCellConnection;
-(void)initializeIfNecessary;
-(void)_networkPathUpdated:(id)arg1 ;
-(void)_initializeNetworkMonitor;
-(BOOL)isNetworkConstrained;
@end

