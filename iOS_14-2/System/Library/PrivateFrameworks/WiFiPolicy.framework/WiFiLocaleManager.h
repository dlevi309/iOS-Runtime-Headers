/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <WiFiPolicy/WiFiPolicy-Structs.h>
#import <WiFiPolicy/WiFiLocationManagerDelegate.h>

@protocol WiFiLocaleManagerDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSObject, NSDateFormatter, WiFiLocationManager;

@interface WiFiLocaleManager : NSObject <WiFiLocationManagerDelegate> {

	CTServerConnectionRef _ctServerConnectionRef;
	BOOL _localeCheckSuspended;
	unsigned char _isWaitingForLocationUpdate;
	unsigned char _testModeEnabled;
	int _localeSource;
	int _testMcc;
	id<WiFiLocaleManagerDelegate> _delegate;
	NSString* _localeCountryCode;
	double _localeTimeout;
	double _localeLastUpdatedTime;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _localeTimer;
	NSDateFormatter* _dateFormatter;
	WiFiLocationManager* _locationManager;
	NSString* _testHost11d;
	NSString* _testPeer;
	NSString* _testTimeZoneCC;

}

@property (assign) BOOL localeCheckSuspended;                                            //@synthesize localeCheckSuspended=_localeCheckSuspended - In the implementation block
@property (retain) NSString * localeCountryCode;                                         //@synthesize localeCountryCode=_localeCountryCode - In the implementation block
@property (assign) int localeSource;                                                     //@synthesize localeSource=_localeSource - In the implementation block
@property (assign) double localeTimeout;                                                 //@synthesize localeTimeout=_localeTimeout - In the implementation block
@property (assign) double localeLastUpdatedTime;                                         //@synthesize localeLastUpdatedTime=_localeLastUpdatedTime - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> localeTimer;                            //@synthesize localeTimer=_localeTimer - In the implementation block
@property (retain) NSDateFormatter * dateFormatter;                                      //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (retain) WiFiLocationManager * locationManager;                                //@synthesize locationManager=_locationManager - In the implementation block
@property (assign) unsigned char isWaitingForLocationUpdate;                             //@synthesize isWaitingForLocationUpdate=_isWaitingForLocationUpdate - In the implementation block
@property (assign) unsigned char testModeEnabled;                                        //@synthesize testModeEnabled=_testModeEnabled - In the implementation block
@property (assign) int testMcc;                                                          //@synthesize testMcc=_testMcc - In the implementation block
@property (retain) NSString * testHost11d;                                               //@synthesize testHost11d=_testHost11d - In the implementation block
@property (retain) NSString * testPeer;                                                  //@synthesize testPeer=_testPeer - In the implementation block
@property (retain) NSString * testTimeZoneCC;                                            //@synthesize testTimeZoneCC=_testTimeZoneCC - In the implementation block
@property (assign,nonatomic,__weak) id<WiFiLocaleManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getStringOfLocaleSource:(int)arg1 ;
-(void)didUpdateLocations:(id)arg1 ;
-(void)setLocationManager:(WiFiLocationManager *)arg1 ;
-(WiFiLocationManager *)locationManager;
-(void)setLocaleSource:(int)arg1 ;
-(id)init;
-(id<WiFiLocaleManagerDelegate>)delegate;
-(NSDateFormatter *)dateFormatter;
-(int)localeSource;
-(void)setDelegate:(id<WiFiLocaleManagerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(int)testMcc;
-(void)didFailWithError:(id)arg1 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(unsigned char)testModeEnabled;
-(void)setTestModeEnabled:(unsigned char)arg1 ;
-(void)setLocaleCheckSuspended:(BOOL)arg1 ;
-(void)setLocaleCountryCode:(NSString *)arg1 ;
-(void)setLocaleLastUpdatedTime:(double)arg1 ;
-(void)setLocaleTimeout:(double)arg1 ;
-(void)setTestMcc:(int)arg1 ;
-(void)setTestHost11d:(NSString *)arg1 ;
-(void)setTestPeer:(NSString *)arg1 ;
-(void)setLocaleTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)localeTimer;
-(void)determineLocale:(unsigned char)arg1 ;
-(void)setIsWaitingForLocationUpdate:(unsigned char)arg1 ;
-(NSString *)localeCountryCode;
-(double)localeLastUpdatedTime;
-(BOOL)localeCheckSuspended;
-(void)setTestTimeZoneCC:(NSString *)arg1 ;
-(NSString *)testHost11d;
-(NSString *)testPeer;
-(double)localeTimeout;
-(BOOL)isDefaultCountryCode:(id)arg1 ;
-(id)getLocaleFromCompanion;
-(id)getLocaleFromMcc;
-(id)getLocaleFromLocation:(id)arg1 ;
-(id)getLocaleFromMultiple80211d;
-(id)getLocaleFromPeer;
-(id)getLocaleFromTimezone;
-(void)setCountryCode:(id)arg1 source:(int)arg2 ;
-(id)getLocaleUsingBoundingBoxes:(id)arg1 ;
-(id)getLocaleUsingReverseGeocoder:(id)arg1 ;
-(id)getRestrictedCountryCodeFromTimezone;
-(id)getRestrictedCountryCodeFromRegionInfo;
-(id)applySetCountryCodeExceptions:(id)arg1 ;
-(unsigned char)isWaitingForLocationUpdate;
-(unsigned char)getNetworkReachability;
-(void)didChangeAuthorizationStatus;
-(void)determineAndSetLocale:(unsigned char)arg1 ;
-(id)getLocaleCountryCode;
-(int)getLocaleSource;
-(double)getLocaleLastUpdatedTime;
-(BOOL)isLocaleCheckSuspended;
-(void)setLocaleTestParams:(id)arg1 ;
-(NSString *)testTimeZoneCC;
@end

