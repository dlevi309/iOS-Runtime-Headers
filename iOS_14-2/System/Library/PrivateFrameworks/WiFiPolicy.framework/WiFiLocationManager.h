/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol WiFiLocationManagerDelegate, OS_dispatch_queue;
@class CLLocation, CLLocationManager, NSMutableArray, NSObject, NSString;

@interface WiFiLocationManager : NSObject <CLLocationManagerDelegate> {

	unsigned char _shouldMonitorVisits;
	unsigned char _isAuthorized;
	int _locationManagerState;
	id<WiFiLocationManagerDelegate> _delegate;
	CLLocation* _latestLocation;
	CLLocationManager* _clLocationManager;
	NSMutableArray* _clientsDataArray;
	NSMutableArray* _visitClientsDataArray;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) CLLocationManager * clLocationManager;                        //@synthesize clLocationManager=_clLocationManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientsDataArray;                            //@synthesize clientsDataArray=_clientsDataArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * visitClientsDataArray;                       //@synthesize visitClientsDataArray=_visitClientsDataArray - In the implementation block
@property (assign) int locationManagerState;                                               //@synthesize locationManagerState=_locationManagerState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (retain) CLLocation * latestLocation;                                            //@synthesize latestLocation=_latestLocation - In the implementation block
@property (assign) unsigned char isAuthorized;                                             //@synthesize isAuthorized=_isAuthorized - In the implementation block
@property (assign,nonatomic,__weak) id<WiFiLocationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned char shouldMonitorVisits;                            //@synthesize shouldMonitorVisits=_shouldMonitorVisits - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedWiFiLocationManager;
+(unsigned char)isLocationValid:(id)arg1 uptoSeconds:(double)arg2 isHighAccuracy:(unsigned char)arg3 ;
+(unsigned char)isLocationValid:(id)arg1 uptoSeconds:(double)arg2 requiredAccuracy:(double)arg3 ;
+(id)getStringOfCallbackType:(int)arg1 ;
+(id)getStringOfState:(int)arg1 ;
+(void)logLocation:(id)arg1 addPrefixString:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)init;
-(id<WiFiLocationManagerDelegate>)delegate;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)setDelegate:(id<WiFiLocationManagerDelegate>)arg1 ;
-(unsigned char)isAuthorized;
-(void)locationManager:(id)arg1 didVisit:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)setClLocationManager:(CLLocationManager *)arg1 ;
-(CLLocationManager *)clLocationManager;
-(void)setShouldMonitorVisits:(unsigned char)arg1 ;
-(void)registerVisitCallbackFunctionPtr:(/*function pointer*/void*)arg1 withContext:(void*)arg2 ;
-(CLLocation *)latestLocation;
-(void)requestLowAccuracyLocationUpdate;
-(void)setIsAuthorized:(unsigned char)arg1 ;
-(void)setLocationManagerState:(int)arg1 ;
-(void)setClientsDataArray:(NSMutableArray *)arg1 ;
-(void)setVisitClientsDataArray:(NSMutableArray *)arg1 ;
-(void)createCoreLocationObjects;
-(void)destroyCoreLocationObjects;
-(NSMutableArray *)clientsDataArray;
-(NSMutableArray *)visitClientsDataArray;
-(void)invokeClientsCallbackType:(int)arg1 withLocation:(id)arg2 withError:(id)arg3 ;
-(int)locationManagerState;
-(void)setCLLocationUpdateParams:(id)arg1 ;
-(void)requestLeechedAccuracyLocationUpdate;
-(void)locationRequestDidTimeOut;
-(void)setLatestLocation:(CLLocation *)arg1 ;
-(void)cancelLocationRequestTimeOut;
-(unsigned char)shouldMonitorVisits;
-(void)registerCallbackFunctionPtr:(/*function pointer*/void*)arg1 withContext:(void*)arg2 ;
-(void)requestHighAccuracyLocationUpdate;
-(void)stopQueryingLocation;
@end

