/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_source;
@class RTRoutineManager, NSBundle, CLLocationManager, NSMutableDictionary, NSObject, NSArray, NSString;

@interface LocationStateRelay : NSObject <CLLocationManagerDelegate> {

	void* coreLocationDyLibHandle;
	void* coreRoutineDyLibHandle;
	RTRoutineManager* routineManager;
	NSBundle* mobileWiFiBundle;
	CLLocationManager* mobileWiFiLocationManager;
	Class CLLocationManagerClassRef;
	NSMutableDictionary* pendingLOIBlocks;
	NSObject*<OS_dispatch_source> locationRequestTimer;
	/*function pointer*/void* clCopyTechnologiesInUseFunc;
	BOOL _gpsInUse;
	NSArray* _allLOIs;

}

@property (retain) NSArray * allLOIs;                               //@synthesize allLOIs=_allLOIs - In the implementation block
@property (assign,nonatomic) BOOL gpsInUse;                         //@synthesize gpsInUse=_gpsInUse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(BOOL)loadCoreRoutine;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)init;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)unloadFrameworks;
-(void)setGpsInUse:(BOOL)arg1 ;
-(void)setAllLOIs:(NSArray *)arg1 ;
-(void)cleanUpPendingLOIBlocks;
-(void)fetchCurrentLocationLOIOnQueue:(id)arg1 reply:(/*^block*/id)arg2 ;
-(unsigned long long)addPendingLOIBlocks:(/*^block*/id)arg1 ;
-(void)fetchLOICountOnMainQueueWithReply:(/*^block*/id)arg1 ;
-(void)callPendingLOIBlocksWithCLLocation:(id)arg1 LOI:(id)arg2 andError:(id)arg3 ;
-(long long)preflightFrameworks;
-(void)getLocationTechnologyState;
-(BOOL)loadCoreLocation;
-(NSArray *)allLOIs;
-(BOOL)authorizedToUseCoreRoutine;
-(BOOL)gpsInUse;
-(void)showLocationArrow;
-(id)mobileWiFiLocationManager;
-(void)dealloc;
@end

