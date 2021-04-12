/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, CLLocationManager, NSUserDefaults, NSXPCConnection, NSString;

@interface WLKLocationManager : NSObject <CLLocationManagerDelegate> {

	int _didChangeNotificationToken;
	NSDictionary* _lastKnownLocation;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _clQueue;
	/*^block*/id _locationUpdateBlock;
	CLLocationManager* _clLocationManager;
	NSUserDefaults* _userDefaults;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clQueue;                  //@synthesize clQueue=_clQueue - In the implementation block
@property (nonatomic,copy) id locationUpdateBlock;                                  //@synthesize locationUpdateBlock=_locationUpdateBlock - In the implementation block
@property (nonatomic,retain) CLLocationManager * clLocationManager;                 //@synthesize clLocationManager=_clLocationManager - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;                         //@synthesize userDefaults=_userDefaults - In the implementation block
@property (assign,nonatomic) int didChangeNotificationToken;                        //@synthesize didChangeNotificationToken=_didChangeNotificationToken - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                          //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSDictionary * lastKnownLocation;                    //@synthesize lastKnownLocation=_lastKnownLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultLocationManager;
-(id)init;
-(void)dealloc;
-(id)_connection;
-(void)_writeToDisk:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(NSUserDefaults *)userDefaults;
-(id)_dictionaryRepresentation;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(long long)authorizationStatus;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDictionary *)lastKnownLocation;
-(void)requestAuthorizationWithForcedPrompt:(BOOL)arg1 ;
-(void)updateLocationIfNeeded;
-(void)requestAuthorization;
-(void)_readFromDisk;
-(void)_locationAuthorizationStatus:(/*^block*/id)arg1 ;
-(BOOL)_locationServicesEnabled;
-(id)_copyLastKnownLocation;
-(BOOL)_isLastKnownLocationFresh:(id)arg1 ;
-(void)_requestActiveLocationChangeUpdates;
-(void)_requestRecentCLLocation:(/*^block*/id)arg1 ;
-(BOOL)_shouldLastKnownLocation:(id)arg1 beUpdatedTo:(id)arg2 ;
-(id)_dictionaryForCLLocation:(id)arg1 ;
-(void)_setLastKnownLocation:(id)arg1 ;
-(double)_getDistanceOfLastKnownLocationDictionary:(id)arg1 fromLocation:(id)arg2 ;
-(void)_requestCLLocationUpdates:(/*^block*/id)arg1 ;
-(BOOL)_isLastKnownLocation:(id)arg1 freshForMaxAge:(double)arg2 fromNewTimestamp:(double)arg3 ;
-(BOOL)_isLastKnownLocation:(id)arg1 significantlyOlderThanNewLocation:(id)arg2 ;
-(id)_createLocationObjFromLocationDictionary:(id)arg1 ;
-(void)setLocationUpdateBlock:(id)arg1 ;
-(id)_dictionaryOnDisk;
-(id)_dictionaryOnDisk:(BOOL)arg1 ;
-(long long)_statusForCLAuthorizationStatus:(int)arg1 ;
-(id)locationUpdateBlock;
-(NSObject*<OS_dispatch_queue>)clQueue;
-(void)setClQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CLLocationManager *)clLocationManager;
-(void)setClLocationManager:(CLLocationManager *)arg1 ;
-(int)didChangeNotificationToken;
-(void)setDidChangeNotificationToken:(int)arg1 ;
@end

