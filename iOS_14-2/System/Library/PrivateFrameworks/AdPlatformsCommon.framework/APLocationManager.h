/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CLPlacemark, CLLocationManager, CLLocation, NSString;

@interface APLocationManager : NSObject <CLLocationManagerDelegate> {

	NSObject*<OS_dispatch_queue> _locationQueue;
	BOOL _updatingPlacemark;
	BOOL _isLocationUpdating;
	BOOL _isLocationInitialized;
	int _callerStatus;
	CLPlacemark* _currentPlacemark;
	CLLocationManager* _clLocationManager;
	CLLocation* _location;
	CLLocation* _lastPlacemarkLocation;

}

@property (nonatomic,retain) CLLocationManager * clLocationManager;              //@synthesize clLocationManager=_clLocationManager - In the implementation block
@property (assign) BOOL updatingPlacemark;                                       //@synthesize updatingPlacemark=_updatingPlacemark - In the implementation block
@property (assign,nonatomic) BOOL isLocationUpdating;                            //@synthesize isLocationUpdating=_isLocationUpdating - In the implementation block
@property (assign,nonatomic) BOOL isLocationInitialized;                         //@synthesize isLocationInitialized=_isLocationInitialized - In the implementation block
@property (nonatomic,retain) CLLocation * location;                              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) int callerStatus;                                   //@synthesize callerStatus=_callerStatus - In the implementation block
@property (retain) CLPlacemark * currentPlacemark;                               //@synthesize currentPlacemark=_currentPlacemark - In the implementation block
@property (nonatomic,retain) CLLocation * lastPlacemarkLocation;                 //@synthesize lastPlacemarkLocation=_lastPlacemarkLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)locationEnabledFor:(int)arg1 ;
-(id)initForTesting;
-(BOOL)locationEnabled;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(CLPlacemark *)currentPlacemark;
-(void)setCurrentPlacemark:(CLPlacemark *)arg1 ;
-(id)init;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)start;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(CLLocation *)location;
-(void)stop;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)locationInfo;
-(void)setClLocationManager:(CLLocationManager *)arg1 ;
-(CLLocationManager *)clLocationManager;
-(void)setIsLocationInitialized:(BOOL)arg1 ;
-(int)callerStatus;
-(BOOL)isLocationInitialized;
-(BOOL)isLocationUpdating;
-(void)setIsLocationUpdating:(BOOL)arg1 ;
-(void)setLastPlacemarkLocation:(CLLocation *)arg1 ;
-(void)setUpdatingPlacemark:(BOOL)arg1 ;
-(void)setCallerStatus:(int)arg1 ;
-(void)updatePlacemark;
-(BOOL)updatingPlacemark;
-(CLLocation *)lastPlacemarkLocation;
@end

