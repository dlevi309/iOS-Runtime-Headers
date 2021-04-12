/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/ATXLocationManagerGPS.h>

@protocol OS_dispatch_queue, ATXLocationManagerGPSDelegate;
@class CLLocation, CLLocationManager, NSObject, NSCondition, NSString;

@interface ATXLocationManagerGPSCoreLocation : NSObject <CLLocationManagerDelegate, ATXLocationManagerGPS> {

	CLLocationManager* _locationManager;
	NSObject*<OS_dispatch_queue> _clQueue;
	NSCondition* _updateCondition;
	BOOL _locationEnabled;
	BOOL _updatePending;
	id<ATXLocationManagerGPSDelegate> delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<ATXLocationManagerGPSDelegate> delegate; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) BOOL locationEnabled; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id<ATXLocationManagerGPSDelegate>)delegate;
-(void)setDelegate:(id<ATXLocationManagerGPSDelegate>)arg1 ;
-(id)_init;
-(CLLocation *)location;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(id)updateLocationWithTimeout:(double)arg1 ;
-(BOOL)locationEnabled;
@end

