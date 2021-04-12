/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/ATXLocationManagerGPS.h>

@protocol OS_dispatch_queue, ATXLocationManagerGPSDelegate;
@class CLLocation, CLLocationManager, NSObject, NSCondition, NSMutableSet, CLRegion, NSString;

@interface ATXLocationManagerGPSCoreLocation : NSObject <CLLocationManagerDelegate, ATXLocationManagerGPS> {

	CLLocationManager* _locationManager;
	NSObject*<OS_dispatch_queue> _clQueue;
	NSCondition* _updateCondition;
	BOOL _locationEnabled;
	BOOL _preciseLocationEnabled;
	BOOL _updatePending;
	NSMutableSet* _locationBlocksToInvoke;
	NSCondition* _requestStateCondition;
	CLRegion* _regionRequested;
	long long _state;
	id<ATXLocationManagerGPSDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<ATXLocationManagerGPSDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) BOOL locationEnabled; 
@property (nonatomic,readonly) BOOL preciseLocationEnabled; 
+(id)sharedInstance;
-(void)stopMonitoringRegionWithIdentifier:(id)arg1 ;
-(BOOL)preciseLocationEnabled;
-(void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3 ;
-(long long)stateForRegion:(id)arg1 withTimeout:(double)arg2 ;
-(BOOL)locationEnabled;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2 ;
-(void)beginMonitoringRegion:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)init;
-(id<ATXLocationManagerGPSDelegate>)delegate;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(CLLocation *)location;
-(void)_startUpdateIfNeededWithPreciseLocation:(BOOL)arg1 ;
-(void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3 ;
-(void)setDelegate:(id<ATXLocationManagerGPSDelegate>)arg1 ;
-(id)_existingRegionWithIdentifierOnCLQueue:(id)arg1 ;
-(id)updateLocationWithTimeout:(double)arg1 requestPreciseLocation:(BOOL)arg2 ;
-(void)updateLocationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)locationManager:(id)arg1 didEnterRegion:(id)arg2 ;
-(void)_requestStateIfNeededForRegion:(id)arg1 ;
-(id)_init;
-(void)_updateConditionAndInvokeLocationBlocks:(id)arg1 error:(id)arg2 ;
-(void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2 ;
-(void)dealloc;
@end

