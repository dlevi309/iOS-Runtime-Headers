/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(CLLocationManager *)locationManager;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(void)_finishLocationFixWithLocation:(id)arg1 ;
-(void)setInUseAssertion:(CLInUseAssertion *)arg1 ;
-(CLInUseAssertion *)inUseAssertion;
-(void)fetchLocationWithCompletion:(/*^block*/id)arg1 ;
-(void)setLocationFixTimeout:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)locationFixTimeout;
-(NSObject*<OS_dispatch_queue>)locationManagerQueue;
-(void)setLocationManagerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

