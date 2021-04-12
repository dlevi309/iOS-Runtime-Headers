/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, CLLocation, CLLocationManager;

@interface ADLocationManager : NSObject <CLLocationManagerDelegate> {

	BOOL _isLocationInitialized;
	BOOL _isUpdatingLocation;
	int _authorizationStatus;
	NSString* _bundleID;
	NSString* _locality;
	NSString* _administrativeArea;
	NSString* _subAdministrativeArea;
	NSString* _ISOcountryCode;
	NSString* _postalCode;
	NSObject*<OS_dispatch_queue> _readWriteQueue;
	CLLocation* _previousLocation;
	CLLocationManager* _locationManager;
	double _requestedLocationAccuracy;

}

@property (assign,nonatomic) BOOL isLocationInitialized;                               //@synthesize isLocationInitialized=_isLocationInitialized - In the implementation block
@property (nonatomic,retain) NSString * locality;                                      //@synthesize locality=_locality - In the implementation block
@property (nonatomic,retain) NSString * administrativeArea;                            //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,retain) NSString * subAdministrativeArea;                         //@synthesize subAdministrativeArea=_subAdministrativeArea - In the implementation block
@property (nonatomic,retain) NSString * ISOcountryCode;                                //@synthesize ISOcountryCode=_ISOcountryCode - In the implementation block
@property (nonatomic,retain) NSString * postalCode;                                    //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> readWriteQueue;              //@synthesize readWriteQueue=_readWriteQueue - In the implementation block
@property (assign,nonatomic) int authorizationStatus;                                  //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (nonatomic,copy) CLLocation * previousLocation;                              //@synthesize previousLocation=_previousLocation - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                      //@synthesize locationManager=_locationManager - In the implementation block
@property (assign,nonatomic) BOOL isUpdatingLocation;                                  //@synthesize isUpdatingLocation=_isUpdatingLocation - In the implementation block
@property (assign,nonatomic) double requestedLocationAccuracy;                         //@synthesize requestedLocationAccuracy=_requestedLocationAccuracy - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                      //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)postalCode;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(int)authorizationStatus;
-(NSString *)subAdministrativeArea;
-(NSString *)locality;
-(NSString *)administrativeArea;
-(NSString *)ISOcountryCode;
-(void)setLocation:(id)arg1 ;
-(CLLocation *)previousLocation;
-(void)setPreviousLocation:(CLLocation *)arg1 ;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(void)setLocality:(NSString *)arg1 ;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(void)setPostalCode:(NSString *)arg1 ;
-(void)setAuthorizationStatus:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)readWriteQueue;
-(CLLocationManager *)locationManager;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(void)_createLocationManager;
-(void)setIsLocationInitialized:(BOOL)arg1 ;
-(void)_considerRefreshingLocation;
-(double)requestedLocationAccuracy;
-(void)_startUpdatingLocation;
-(void)_stopUpdatingLocation;
-(BOOL)isAdLocationServicesEnabled;
-(void)setISOcountryCode:(NSString *)arg1 ;
-(BOOL)isLocationBasedAdsEnabled;
-(BOOL)locationEnabledFor:(int)arg1 ;
-(BOOL)isUpdatingLocation;
-(BOOL)isLocationInitialized;
-(void)setIsUpdatingLocation:(BOOL)arg1 ;
-(void)setReadWriteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRequestedLocationAccuracy:(double)arg1 ;
@end

