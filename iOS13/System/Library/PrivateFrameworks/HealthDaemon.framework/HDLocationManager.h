/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(void)setLocationManagerConfiguration:(id)arg1 ;
-(void)_mainQueue_takeLocationUpdatingAssertion;
-(void)_mainQueue_releaseLocationUpdatingAssertion;
-(void)_unitTest_didInvalidateAssertion:(id)arg1 ;
-(id)_mainQueue_newLocationManagerWithEffectiveBundle:(id)arg1 ;
-(id)takeLocationUpdatingAssertionForOwnerIdentifier:(id)arg1 ;
-(void)_unitTest_setLocationManagerConfiguration:(/*^block*/id)arg1 ;
-(id)_unitTest_locationManager;
-(id)locationManagerConfiguration;
-(id<HDLocationManagerUnitTestDelegate>)unitTestDelegate;
-(void)setUnitTestDelegate:(id<HDLocationManagerUnitTestDelegate>)arg1 ;
@end
