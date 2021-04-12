/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(CLLocationManager *)locationManager;
-(CLGeocoder *)geocoder;
-(void)setGeocoder:(CLGeocoder *)arg1 ;
-(void)lookupPlaceAtLatitude:(double)arg1 longitude:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)requestAuthorizationIfNeeded;
-(void)setRequestedAuthorization:(BOOL)arg1 ;
-(BOOL)requestedAuthorization;
-(BOOL)canGetLocation;
@end

