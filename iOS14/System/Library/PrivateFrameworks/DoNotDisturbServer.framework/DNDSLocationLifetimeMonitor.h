/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/DNDSLifetimeMonitor.h>

@protocol OS_dispatch_queue, DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate;
@class NSObject, CLLocationManager, CLRegion, NSArray, NSString;

@interface DNDSLocationLifetimeMonitor : NSObject <CLLocationManagerDelegate, DNDSLifetimeMonitor> {

	NSObject*<OS_dispatch_queue> _queue;
	CLLocationManager* _locationManager;
	CLRegion* _currentRegion;
	BOOL _regionEntered;
	BOOL _hasActiveLifetimes;
	NSArray* _activeLifetimeAssertionUUIDs;
	id<DNDSLifetimeMonitorDataSource> _dataSource;
	id<DNDSLifetimeMonitorDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * activeLifetimeAssertionUUIDs;                    //@synthesize activeLifetimeAssertionUUIDs=_activeLifetimeAssertionUUIDs - In the implementation block
@property (assign,nonatomic,__weak) id<DNDSLifetimeMonitorDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<DNDSLifetimeMonitorDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)_queue_sendExpiryEventForAllLocationAssertions;
-(id)init;
-(id<DNDSLifetimeMonitorDelegate>)delegate;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_queue_beginMonitoringCurrentLocation;
-(NSArray *)activeLifetimeAssertionUUIDs;
-(id<DNDSLifetimeMonitorDataSource>)dataSource;
-(void)_queue_stopMonitoringCurrentLocation;
-(void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3 ;
-(void)_queue_geofenceLocation:(id)arg1 ;
-(void)setDelegate:(id<DNDSLifetimeMonitorDelegate>)arg1 ;
-(void)setDataSource:(id<DNDSLifetimeMonitorDataSource>)arg1 ;
-(void)refreshMonitorForDate:(id)arg1 ;
-(void)_queue_refreshMonitor;
@end

