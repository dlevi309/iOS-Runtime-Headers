/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDAssertionObserver.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol HDLocationManagerUnitTestDelegate;
@class HDAssertionManager, CLLocationManager, CLInUseAssertion, HKObserverSet, NSString;

@interface HDLocationManager : NSObject <HDAssertionObserver, CLLocationManagerDelegate> {

	HDAssertionManager* _assertionManager;
	CLLocationManager* _locationManager;
	CLInUseAssertion* _inUseAssertion;
	HKObserverSet* _observers;
	/*^block*/id _locationManagerConfiguration;
	id<HDLocationManagerUnitTestDelegate> _unitTestDelegate;

}

@property (nonatomic,copy) id locationManagerConfiguration;                                              //@synthesize locationManagerConfiguration=_locationManagerConfiguration - In the implementation block
@property (assign,nonatomic,__weak) id<HDLocationManagerUnitTestDelegate> unitTestDelegate;              //@synthesize unitTestDelegate=_unitTestDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)setUnitTestDelegate:(id<HDLocationManagerUnitTestDelegate>)arg1 ;
-(void)_mainQueue_releaseLocationUpdatingAssertion;
-(id<HDLocationManagerUnitTestDelegate>)unitTestDelegate;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)init;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(void)requestWhenInUseAuthorization;
-(void)_unitTest_setLocationManagerConfiguration:(/*^block*/id)arg1 ;
-(id)_unitTest_locationManager;
-(id)_mainQueue_newLocationManagerWithEffectiveBundle:(id)arg1 ;
-(id)locationManagerConfiguration;
-(void)removeObserver:(id)arg1 ;
-(void)_unitTest_didInvalidateAssertion:(id)arg1 ;
-(void)_mainQueue_takeLocationUpdatingAssertion;
-(void)_unitTest_didTakeAssertion:(id)arg1 ;
-(id)takeLocationUpdatingAssertionForOwnerIdentifier:(id)arg1 ;
-(void)setLocationManagerConfiguration:(id)arg1 ;
-(void)dealloc;
-(void)_mainQueue_updateLocationManager;
@end

