/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IPTelephony.framework/Support/libIPTelephony.dylib
*/

#import <libIPTelephony.dylib/libIPTelephony.dylib-Structs.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, CLLocation, NSBundle, CLAssertion, NSString;

@interface E911LocationManager : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _manager;
	CLLocation* _location;
	CLLocation* _goodEnoughLocation;
	BOOL _locationRequested;
	BOOL _locationAvailable;
	BOOL _locationServiceDenied;
	BOOL _locationServiceAuthorized;
	NSBundle* _bundle;
	ImsE911Location* _delegate;
	unsigned _desiredIntegrity;
	double _desiredLocationAccuracy;
	CLAssertion* _locationServicesAssertion;

}

@property (copy) CLLocation * location;                                            //@synthesize location=_location - In the implementation block
@property (copy) CLLocation * goodEnoughLocation;                                  //@synthesize goodEnoughLocation=_goodEnoughLocation - In the implementation block
@property (assign,nonatomic) BOOL locationRequested;                               //@synthesize locationRequested=_locationRequested - In the implementation block
@property (assign,nonatomic) BOOL locationAvailable;                               //@synthesize locationAvailable=_locationAvailable - In the implementation block
@property (assign,nonatomic) BOOL locationServiceAuthorized;                       //@synthesize locationServiceAuthorized=_locationServiceAuthorized - In the implementation block
@property (assign) double desiredLocationAccuracy;                                 //@synthesize desiredLocationAccuracy=_desiredLocationAccuracy - In the implementation block
@property (assign) unsigned desiredIntegrity;                                      //@synthesize desiredIntegrity=_desiredIntegrity - In the implementation block
@property (assign,nonatomic) ImsE911Location* delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CLAssertion * locationServicesAssertion;              //@synthesize locationServicesAssertion=_locationServicesAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)init;
-(ImsE911Location*)delegate;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(CLLocation *)location;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setDelegate:(ImsE911Location*)arg1 ;
-(void)dealloc;
-(void)stopLocationUpdates;
-(BOOL)isLocationServiceEnabled;
-(BOOL)locationRequested;
-(void)setLocationRequested:(BOOL)arg1 ;
-(void)shouldUpdateLocation:(BOOL)arg1 ;
-(CLLocation *)goodEnoughLocation;
-(CLAssertion *)locationServicesAssertion;
-(void)setLocationServicesAssertion:(CLAssertion *)arg1 ;
-(void)setGoodEnoughLocation:(CLLocation *)arg1 ;
-(unsigned)desiredIntegrity;
-(double)desiredLocationAccuracy;
-(void)startLocationUpdates;
-(void)setLocationServiceAuthorized:(BOOL)arg1 ;
-(id)copyLastKnownLocation;
-(BOOL)isLocationServiceDenied;
-(BOOL)isLocationServiceAuthorized;
-(void)emergencyLocationServicesAssertion:(BOOL)arg1 ;
-(BOOL)locationServiceAuthorized;
-(BOOL)locationAvailable;
-(void)setLocationAvailable:(BOOL)arg1 ;
-(void)setDesiredLocationAccuracy:(double)arg1 ;
-(void)setDesiredIntegrity:(unsigned)arg1 ;
@end

