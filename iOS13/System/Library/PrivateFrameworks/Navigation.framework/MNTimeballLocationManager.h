/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CLInUseAssertion, CLLocationManager, GEOLocationShifter, NSMutableArray, CLLocation, NSString;

@interface MNTimeballLocationManager : NSObject <CLLocationManagerDelegate> {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	CLInUseAssertion* _inUseAssertion;
	CLLocationManager* _locationProvider;
	GEOLocationShifter* _locationShifter;
	NSMutableArray* _requests;

}

@property (nonatomic,readonly) CLLocation * lastLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setLocationProviderClass:(Class)arg1 ;
-(id)init;
-(void)dealloc;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(CLLocation *)lastLocation;
-(id)locationProvider;
-(void)_processPendingRequests;
-(void)getLocationWithAccuracy:(double)arg1 maxAttempts:(unsigned long long)arg2 timeoutInterval:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setupLocationProvider;
-(void)_addRequest:(id)arg1 ;
-(void)_requestTimedOut:(id)arg1 ;
-(void)_removeRequest:(id)arg1 ;
-(void)_processLocation:(id)arg1 ;
-(void)_processError:(id)arg1 ;
@end

