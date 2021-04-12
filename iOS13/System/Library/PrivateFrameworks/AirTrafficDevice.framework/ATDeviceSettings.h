/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/


@protocol OS_dispatch_queue;
@class NSUserDefaults, NSObject, NSString, NSArray;

@interface ATDeviceSettings : NSObject {

	NSUserDefaults* _userDefaults;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) BOOL isDeviceLinkClient; 
@property (nonatomic,copy,readonly) NSString * libraryIdentifier; 
@property (nonatomic,copy,readonly) NSString * serviceName; 
@property (nonatomic,copy,readonly) NSString * serviceDomain; 
@property (nonatomic,copy,readonly) NSString * serviceType; 
@property (nonatomic,copy,readonly) NSString * interfaceName; 
@property (nonatomic,copy,readonly) NSArray * dataClassesNeedingSync; 
@property (nonatomic,readonly) double pairingSyncCompletionTime; 
@property (assign,nonatomic) double lastAuthenticationDialogResponseTime; 
@property (nonatomic,readonly) BOOL useNetServicesConnection; 
@property (nonatomic,readonly) BOOL fairPlayEnabled; 
@property (nonatomic,readonly) BOOL grappaEnabled; 
@property (nonatomic,readonly) BOOL restoreBatchingEnabled; 
@property (nonatomic,readonly) unsigned long long restoreBatchSize; 
@property (nonatomic,readonly) BOOL useNewDownloadService; 
@property (nonatomic,readonly) BOOL watchProxyDownloadsDisabled; 
@property (nonatomic,readonly) BOOL useNewRestoreService; 
+(id)sharedInstance;
-(id)init;
-(void)synchronize;
-(NSString *)serviceName;
-(NSString *)serviceType;
-(NSString *)interfaceName;
-(NSString *)serviceDomain;
-(void)setLastAuthenticationDialogResponseTime:(double)arg1 ;
-(double)lastAuthenticationDialogResponseTime;
-(id)endpointInfo;
-(id)hostInfoForLibrary:(id)arg1 ;
-(void)removeEndpointInfoForLibrary:(id)arg1 ;
-(void)setPairingSyncCompletionTime:(double)arg1 ;
-(void)setSyncPending:(BOOL)arg1 forDataClass:(id)arg2 ;
-(void)setHostInfo:(id)arg1 forLibrary:(id)arg2 ;
-(BOOL)grappaEnabled;
-(NSString *)libraryIdentifier;
-(BOOL)restoreBatchingEnabled;
-(unsigned long long)restoreBatchSize;
-(BOOL)useNewRestoreService;
-(BOOL)isSyncPendingForDataClass:(id)arg1 ;
-(id)syncStateForLibrary:(id)arg1 dataClass:(id)arg2 ;
-(double)pairingSyncCompletionTime;
-(BOOL)isDeviceLinkClient;
-(BOOL)useNetServicesConnection;
-(BOOL)useNewDownloadService;
-(int)activeRestoreType;
-(NSArray *)dataClassesNeedingSync;
-(void)setHasCompletedDataMigration:(BOOL)arg1 ;
-(BOOL)hasCompletedDataMigration;
-(void)setActiveRestoreType:(int)arg1 ;
-(void)setEndpointInfo:(id)arg1 ;
-(id)_endpointInfoForLibrary:(id)arg1 ;
-(void)_setEndpointInfo:(id)arg1 forLibrary:(id)arg2 ;
-(BOOL)fairPlayEnabled;
-(BOOL)watchProxyDownloadsDisabled;
-(void)setCurrentInstallDisposition:(id)arg1 ;
-(id)getCurrentInstallDisposition;
-(void)setPreExistingStoreIdentifiers:(id)arg1 ;
-(id)getPreExistingStoreIdentifiers;
-(void)setSyncState:(id)arg1 forLibrary:(id)arg2 dataClass:(id)arg3 ;
-(id)lastSyncTimeForLibrary:(id)arg1 dataClass:(id)arg2 ;
-(void)updateLastSyncTimeForLibrary:(id)arg1 dataClass:(id)arg2 ;
-(void)setVersion:(unsigned long long)arg1 forDataclass:(id)arg2 ;
-(unsigned long long)versionForDataclass:(id)arg1 ;
@end

