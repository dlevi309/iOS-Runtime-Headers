/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)sharedInstance;
-(id)_endpointInfoForLibrary:(id)arg1 ;
-(double)lastAuthenticationDialogResponseTime;
-(id)init;
-(BOOL)useNetServicesConnection;
-(void)setCurrentInstallDisposition:(id)arg1 ;
-(id)lastSyncTimeForLibrary:(id)arg1 dataClass:(id)arg2 ;
-(void)setVersion:(unsigned long long)arg1 forDataclass:(id)arg2 ;
-(id)getPreExistingStoreIdentifiers;
-(NSString *)libraryIdentifier;
-(NSArray *)dataClassesNeedingSync;
-(void)removeEndpointInfoForLibrary:(id)arg1 ;
-(BOOL)isDeviceLinkClient;
-(BOOL)fairPlayEnabled;
-(void)setPreExistingStoreIdentifiers:(id)arg1 ;
-(BOOL)watchProxyDownloadsDisabled;
-(BOOL)grappaEnabled;
-(BOOL)restoreBatchingEnabled;
-(NSString *)interfaceName;
-(void)removePendingSyncSettingForDataClass:(id)arg1 ;
-(void)setSyncState:(id)arg1 forLibrary:(id)arg2 dataClass:(id)arg3 ;
-(void)synchronize;
-(unsigned long long)versionForDataclass:(id)arg1 ;
-(void)updateLastSyncTimeForLibrary:(id)arg1 dataClass:(id)arg2 ;
-(BOOL)hasCompletedDataMigration;
-(void)setEndpointInfo:(id)arg1 ;
-(int)activeRestoreType;
-(id)getCurrentInstallDisposition;
-(BOOL)isSyncPendingForDataClass:(id)arg1 ;
-(void)_setEndpointInfo:(id)arg1 forLibrary:(id)arg2 ;
-(void)setPairingSyncCompletionTime:(double)arg1 ;
-(NSString *)serviceName;
-(void)setLastAuthenticationDialogResponseTime:(double)arg1 ;
-(id)endpointInfo;
-(void)setHasCompletedDataMigration:(BOOL)arg1 ;
-(id)syncStateForLibrary:(id)arg1 dataClass:(id)arg2 ;
-(NSString *)serviceType;
-(unsigned long long)restoreBatchSize;
-(void)setSyncPending:(BOOL)arg1 forDataClass:(id)arg2 ;
-(BOOL)useNewDownloadService;
-(id)hostInfoForLibrary:(id)arg1 ;
-(NSString *)serviceDomain;
-(double)pairingSyncCompletionTime;
-(void)setActiveRestoreType:(int)arg1 ;
-(void)setHostInfo:(id)arg1 forLibrary:(id)arg2 ;
@end

