/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, CLInUseAssertion, CLLocation, NSString;

@interface WFLocator : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	CLInUseAssertion* _inUseAssertion;
	CLLocation* _bestEffortLocation;
	/*^block*/id _completionHandler;
	double _timeout;

}

@property (nonatomic,retain) CLLocationManager * locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) CLInUseAssertion * inUseAssertion;                //@synthesize inUseAssertion=_inUseAssertion - In the implementation block
@property (nonatomic,retain) CLLocation * bestEffortLocation;                  //@synthesize bestEffortLocation=_bestEffortLocation - In the implementation block
@property (nonatomic,copy) id completionHandler;                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) double timeout;                                   //@synthesize timeout=_timeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)determineLocationWithWorkflowEnvironment:(long long)arg1 completion:(/*^block*/id)arg2 ;
+(void)determineLocationWithWorkflowEnvironment:(long long)arg1 desiredAccuracy:(double)arg2 completion:(/*^block*/id)arg3 ;
+(void)determineLocationWithWorkflowEnvironment:(long long)arg1 desiredAccuracy:(double)arg2 timeout:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)startUpdatingLocation;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(CLLocationManager *)locationManager;
-(void)requestLocation;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)start;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(id)completionHandler;
-(void)dealloc;
-(void)setInUseAssertion:(CLInUseAssertion *)arg1 ;
-(CLInUseAssertion *)inUseAssertion;
-(id)initWithWorkflowEnvironment:(long long)arg1 ;
-(BOOL)useRequestLocation;
-(void)finishUpdatingLocation;
-(CLLocation *)bestEffortLocation;
-(void)setBestEffortLocation:(CLLocation *)arg1 ;
@end

