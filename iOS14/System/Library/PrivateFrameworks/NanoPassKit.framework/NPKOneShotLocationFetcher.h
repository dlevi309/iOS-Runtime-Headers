/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, CLLocationManager, CLInUseAssertion, NSString;

@interface NPKOneShotLocationFetcher : NSObject <CLLocationManagerDelegate> {

	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_source> _locationFixTimeout;
	CLLocationManager* _locationManager;
	CLInUseAssertion* _inUseAssertion;
	NSObject*<OS_dispatch_queue> _locationManagerQueue;

}

@property (nonatomic,copy) id completionHandler;                                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> locationFixTimeout;               //@synthesize locationFixTimeout=_locationFixTimeout - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                            //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) CLInUseAssertion * inUseAssertion;                              //@synthesize inUseAssertion=_inUseAssertion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> locationManagerQueue;              //@synthesize locationManagerQueue=_locationManagerQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(CLLocationManager *)locationManager;
-(void)_finishLocationFixWithLocation:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(id)completionHandler;
-(void)dealloc;
-(void)setInUseAssertion:(CLInUseAssertion *)arg1 ;
-(CLInUseAssertion *)inUseAssertion;
-(NSObject*<OS_dispatch_queue>)locationManagerQueue;
-(void)setLocationFixTimeout:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)locationFixTimeout;
-(void)fetchLocationWithCompletion:(/*^block*/id)arg1 ;
-(void)setLocationManagerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

