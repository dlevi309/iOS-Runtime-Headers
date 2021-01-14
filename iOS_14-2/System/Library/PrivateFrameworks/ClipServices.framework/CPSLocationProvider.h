/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class CLLocationManager, CPSPromise, NSObject, NSString;

@interface CPSLocationProvider : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	CPSPromise* _locationPromise;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _locationEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedProvider;
+(BOOL)locationServiceEnabled;
+(void)setLocationServiceEnabled:(BOOL)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)init;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(void)getCurrentLocationWithCompletion:(/*^block*/id)arg1 ;
-(void)confirmCurrentLocationInRegion:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

