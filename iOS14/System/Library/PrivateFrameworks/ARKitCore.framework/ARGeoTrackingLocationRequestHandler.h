/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, NSCondition, NSString;

@interface ARGeoTrackingLocationRequestHandler : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	NSCondition* _authorizationCondition;
	int _authorizationStatus;
	/*^block*/id _locationCompletionHandler;

}

@property (nonatomic,copy) id locationCompletionHandler;              //@synthesize locationCompletionHandler=_locationCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLocationManager:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)init;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(int)waitForAuthorizationStatus;
-(void)requestLocationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setLocationCompletionHandler:(id)arg1 ;
-(id)locationCompletionHandler;
@end

