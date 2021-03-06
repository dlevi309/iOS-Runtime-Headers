/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/ENRegionHistoryManagerDelegate.h>
#import <libobjc.A.dylib/ENRegionMonitorSourceDelegate.h>

@protocol ENRegionMonitorDelegate, OS_dispatch_queue;
@class ENRegionVisit, ENRegionTestDataSource, ENRegionMonitorTelephonyDataSource, ENRegionMonitorCoreLocationDataSource, NSObject, CLLocationManager, ENRegionHistoryManager, NSString;

@interface ENRegionMonitor : NSObject <CLLocationManagerDelegate, ENRegionHistoryManagerDelegate, ENRegionMonitorSourceDelegate> {

	BOOL _monitoringEnabled;
	unsigned long long _authorizationState;
	unsigned long long _exposureNotificationAuthorizationState;
	unsigned long long _significantLocationsAuthorizationState;
	unsigned long long _monitoringMode;
	ENRegionVisit* _currentRegionVisit;
	id<ENRegionMonitorDelegate> _delegate;
	ENRegionTestDataSource* _testRegionDataSource;
	ENRegionMonitorTelephonyDataSource* _telephonyDataSource;
	ENRegionMonitorCoreLocationDataSource* _coreLocationDataSource;
	NSObject*<OS_dispatch_queue> _regionMonitorQueue;
	CLLocationManager* _exposureNotificationLocationManager;
	CLLocationManager* _significantLocationsLocationManager;
	ENRegionHistoryManager* _regionHistoryManager;

}

@property (nonatomic,retain) ENRegionMonitorTelephonyDataSource * telephonyDataSource;                    //@synthesize telephonyDataSource=_telephonyDataSource - In the implementation block
@property (nonatomic,retain) ENRegionMonitorCoreLocationDataSource * coreLocationDataSource;              //@synthesize coreLocationDataSource=_coreLocationDataSource - In the implementation block
@property (nonatomic,retain) ENRegionTestDataSource * testRegionDataSource;                               //@synthesize testRegionDataSource=_testRegionDataSource - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> regionMonitorQueue;                             //@synthesize regionMonitorQueue=_regionMonitorQueue - In the implementation block
@property (assign,nonatomic) unsigned long long authorizationState;                                       //@synthesize authorizationState=_authorizationState - In the implementation block
@property (assign,nonatomic) unsigned long long exposureNotificationAuthorizationState;                   //@synthesize exposureNotificationAuthorizationState=_exposureNotificationAuthorizationState - In the implementation block
@property (assign,nonatomic) unsigned long long significantLocationsAuthorizationState;                   //@synthesize significantLocationsAuthorizationState=_significantLocationsAuthorizationState - In the implementation block
@property (assign,nonatomic) unsigned long long monitoringMode;                                           //@synthesize monitoringMode=_monitoringMode - In the implementation block
@property (nonatomic,copy) ENRegionVisit * currentRegionVisit;                                            //@synthesize currentRegionVisit=_currentRegionVisit - In the implementation block
@property (nonatomic,retain) CLLocationManager * exposureNotificationLocationManager;                     //@synthesize exposureNotificationLocationManager=_exposureNotificationLocationManager - In the implementation block
@property (nonatomic,retain) CLLocationManager * significantLocationsLocationManager;                     //@synthesize significantLocationsLocationManager=_significantLocationsLocationManager - In the implementation block
@property (assign,nonatomic) BOOL monitoringEnabled;                                                      //@synthesize monitoringEnabled=_monitoringEnabled - In the implementation block
@property (nonatomic,retain) ENRegionHistoryManager * regionHistoryManager;                               //@synthesize regionHistoryManager=_regionHistoryManager - In the implementation block
@property (assign,nonatomic,__weak) id<ENRegionMonitorDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)regionMonitorMonitoringModeToString:(unsigned long long)arg1 ;
+(id)regionMonitorAuthorizationStateToString:(unsigned long long)arg1 ;
+(unsigned long long)regionMonitorStateFromAuthorizationStatus:(int)arg1 ;
+(id)locationAuthorizationStatusToString:(int)arg1 ;
-(void)setConfigurationManager:(id)arg1 ;
-(void)setup;
-(void)_setup;
-(id)init;
-(id<ENRegionMonitorDelegate>)delegate;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(void)setDelegate:(id<ENRegionMonitorDelegate>)arg1 ;
-(void)_createLocationManager;
-(ENRegionVisit *)currentRegionVisit;
-(void)regionDataSource:(id)arg1 updatedWithVisit:(id)arg2 ;
-(id)getCurrentRegionVisitWithError:(id*)arg1 ;
-(BOOL)purgeAllRegionHistoryWithError:(id*)arg1 ;
-(void)resetRegionMonitor;
-(void)enableRegionMonitor;
-(void)updateRegionHistoryFileStatus;
-(void)disableRegionMonitor;
-(BOOL)purgeRegionsOlderThanDate:(id)arg1 error:(id*)arg2 ;
-(id)getAllRegionsWithError:(id*)arg1 ;
-(unsigned long long)getAuthorizationState;
-(ENRegionTestDataSource *)testRegionDataSource;
-(void)updateRegionMonitorMonitoringMode:(unsigned long long)arg1 ;
-(unsigned long long)getMonitoringMode;
-(id)getAllRegionVisitsWithError:(id*)arg1 ;
-(NSObject*<OS_dispatch_queue>)regionMonitorQueue;
-(void)_createCountryDataSource;
-(void)_createSubdivisionDataSource;
-(void)_updateRegionHistoryFileStatus;
-(ENRegionHistoryManager *)regionHistoryManager;
-(unsigned long long)authorizationState;
-(void)setMonitoringMode:(unsigned long long)arg1 ;
-(unsigned long long)monitoringMode;
-(void)_resetRegionMonitor;
-(void)setMonitoringEnabled:(BOOL)arg1 ;
-(void)_stopAllDataSources;
-(unsigned long long)exposureNotificationAuthorizationState;
-(unsigned long long)significantLocationsAuthorizationState;
-(BOOL)monitoringEnabled;
-(void)_createTestDataSource;
-(void)setCurrentRegionVisit:(ENRegionVisit *)arg1 ;
-(void)setTestRegionDataSource:(ENRegionTestDataSource *)arg1 ;
-(ENRegionMonitorTelephonyDataSource *)telephonyDataSource;
-(ENRegionMonitorCoreLocationDataSource *)coreLocationDataSource;
-(void)setTelephonyDataSource:(ENRegionMonitorTelephonyDataSource *)arg1 ;
-(void)setCoreLocationDataSource:(ENRegionMonitorCoreLocationDataSource *)arg1 ;
-(void)updateAuthorizationState;
-(void)setAuthorizationState:(unsigned long long)arg1 ;
-(void)_notifyDelegateOfCurrentRegion;
-(void)setExposureNotificationAuthorizationState:(unsigned long long)arg1 ;
-(void)setSignificantLocationsAuthorizationState:(unsigned long long)arg1 ;
-(CLLocationManager *)exposureNotificationLocationManager;
-(void)setExposureNotificationLocationManager:(CLLocationManager *)arg1 ;
-(CLLocationManager *)significantLocationsLocationManager;
-(void)setSignificantLocationsLocationManager:(CLLocationManager *)arg1 ;
-(void)_regionDataSource:(id)arg1 updatedWithVisit:(id)arg2 ;
-(BOOL)_purgeAllRegionHistoryWithError:(id*)arg1 ;
-(BOOL)_purgeRegionsOlderThanDate:(id)arg1 error:(id*)arg2 ;
-(id)_getAllRegionsWithError:(id*)arg1 ;
-(id)_getCurrentRegionVisitWithError:(id*)arg1 ;
-(id)_getAllRegionVisitsWithError:(id*)arg1 ;
-(void)currentRegionVisitDidChange:(id)arg1 ;
-(id)getCurrentRegionVisit;
-(void)setRegionMonitorQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRegionHistoryManager:(ENRegionHistoryManager *)arg1 ;
@end

