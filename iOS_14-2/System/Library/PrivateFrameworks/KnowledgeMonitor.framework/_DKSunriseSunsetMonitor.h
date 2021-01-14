/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/KnowledgeMonitor-Structs.h>
#import <KnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_source, OS_os_log;
@class NSObject, CLLocationManager, NSDictionary, NSString;

@interface _DKSunriseSunsetMonitor : _DKMonitor <CLLocationManagerDelegate> {

	BOOL _enabled;
	BOOL _awaitingLocationAfterDisabledAirplaneMode;
	int _authorizationStatus;
	NSObject*<OS_dispatch_source> _updateTimer;
	unsigned long long _updateInterval;
	CLLocationManager* _manager;
	NSDictionary* _previousDataDictionary;
	NSObject*<OS_os_log> _log;
	SCPreferencesRef _radioPrefs;

}

@property (assign,nonatomic) BOOL enabled;                                                //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> updateTimer;                   //@synthesize updateTimer=_updateTimer - In the implementation block
@property (assign,nonatomic) unsigned long long updateInterval;                           //@synthesize updateInterval=_updateInterval - In the implementation block
@property (nonatomic,retain) CLLocationManager * manager;                                 //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSDictionary * previousDataDictionary;                       //@synthesize previousDataDictionary=_previousDataDictionary - In the implementation block
@property (assign,nonatomic) BOOL awaitingLocationAfterDisabledAirplaneMode;              //@synthesize awaitingLocationAfterDisabledAirplaneMode=_awaitingLocationAfterDisabledAirplaneMode - In the implementation block
@property (assign,nonatomic) int authorizationStatus;                                     //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                    //@synthesize log=_log - In the implementation block
@property (assign) SCPreferencesRef radioPrefs;                                           //@synthesize radioPrefs=_radioPrefs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entitlements;
+(id)eventStream;
-(id)loadState;
-(SCPreferencesRef)radioPrefs;
-(void)saveState;
-(BOOL)enabled;
-(BOOL)isAirplaneModeEnabled;
-(unsigned long long)updateInterval;
-(void)setAuthorizationStatus:(int)arg1 ;
-(BOOL)isAirplaneModeEnabledWithPreferences:(SCPreferencesRef)arg1 ;
-(void)setUpdateInterval:(unsigned long long)arg1 ;
-(void)setRadioPrefs:(SCPreferencesRef)arg1 ;
-(NSDictionary *)previousDataDictionary;
-(BOOL)awaitingLocationAfterDisabledAirplaneMode;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)init;
-(NSObject*<OS_os_log>)log;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)start;
-(void)setManager:(CLLocationManager *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(int)authorizationStatus;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)stop;
-(void)deactivate;
-(void)unprotectedUpdateSunriseSunsetTime:(id)arg1 ;
-(CLLocationManager *)manager;
-(id)contextDictionaryWithGeoAlmanac:(id)arg1 authorizationStatus:(int)arg2 ;
-(NSObject*<OS_dispatch_source>)updateTimer;
-(void)setUpdateTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)currentSunriseSunsetTimes:(id)arg1 differsFromPreviousTimes:(id)arg2 byInterval:(double)arg3 ;
-(void)setAwaitingLocationAfterDisabledAirplaneMode:(BOOL)arg1 ;
-(void)respondToAirplaneModeStatusChanged;
-(void)respondToTimeChange:(id)arg1 ;
-(void)setPreviousDataDictionary:(NSDictionary *)arg1 ;
-(void)dealloc;
@end

