/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/

#import <libobjc.A.dylib/ENRegionMonitorDataSource.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol ENRegionMonitorSourceDelegate, OS_dispatch_queue;
@class NSObject, ENRegionVisit, CLLocationManager, RTRoutineManager, NSString;

@interface ENRegionMonitorCoreLocationDataSource : NSObject <ENRegionMonitorDataSource, CLLocationManagerDelegate> {

	NSObject*<ENRegionMonitorSourceDelegate> delegate;
	ENRegionVisit* _cachedRegionVisit;
	NSObject*<OS_dispatch_queue> _queue;
	CLLocationManager* _locationManager;
	RTRoutineManager* _routineManager;

}

@property (nonatomic,copy) ENRegionVisit * cachedRegionVisit;                                       //@synthesize cachedRegionVisit=_cachedRegionVisit - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                                   //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTRoutineManager * routineManager;                                     //@synthesize routineManager=_routineManager - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<ENRegionMonitorSourceDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setup;
-(void)_setup;
-(void)stopMonitoring;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(CLLocationManager *)locationManager;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(NSObject*<ENRegionMonitorSourceDelegate>)delegate;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)startMonitoring;
-(void)setDelegate:(NSObject*<ENRegionMonitorSourceDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)locationManager:(id)arg1 didVisit:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(RTRoutineManager *)routineManager;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
-(void)_processLocation:(id)arg1 ;
-(id)currentRegionVisit;
-(id)initWithDelegate:(id)arg1 routineManager:(id)arg2 ;
-(BOOL)updateRegionAllowed;
-(void)_updatedRegion;
-(void)_updateRegionVisit:(id)arg1 ;
-(void)processLocation:(id)arg1 locationsOfInterest:(id)arg2 ;
-(void)processLocation:(id)arg1 locationOfInterest:(id)arg2 ;
-(void)_processLocation:(id)arg1 locationOfInterest:(id)arg2 ;
-(void)updateRegionVisit:(id)arg1 ;
-(void)_processLocation:(id)arg1 locationsOfInterest:(id)arg2 ;
-(void)_processVisit:(id)arg1 ;
-(void)updateRegion;
-(ENRegionVisit *)cachedRegionVisit;
-(void)setCachedRegionVisit:(ENRegionVisit *)arg1 ;
@end

