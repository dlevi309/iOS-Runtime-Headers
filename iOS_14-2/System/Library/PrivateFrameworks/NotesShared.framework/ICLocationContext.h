/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, CLGeocoder, NSString;

@interface ICLocationContext : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	BOOL _requestedAuthorization;
	CLGeocoder* _geocoder;

}

@property (nonatomic,retain) CLGeocoder * geocoder;                              //@synthesize geocoder=_geocoder - In the implementation block
@property (nonatomic,readonly) CLLocationManager * locationManager; 
@property (assign,nonatomic) BOOL requestedAuthorization;                        //@synthesize requestedAuthorization=_requestedAuthorization - In the implementation block
@property (nonatomic,readonly) BOOL canGetLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedContext;
-(CLLocationManager *)locationManager;
-(void)requestAuthorizationIfNeeded;
-(void)setRequestedAuthorization:(BOOL)arg1 ;
-(BOOL)requestedAuthorization;
-(BOOL)canGetLocation;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)setGeocoder:(CLGeocoder *)arg1 ;
-(CLGeocoder *)geocoder;
-(void)lookupPlaceAtLatitude:(double)arg1 longitude:(double)arg2 handler:(/*^block*/id)arg3 ;
@end

