/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/

#import <libobjc.A.dylib/WLMigrationDataCoordinatorDelegate.h>
#import <libobjc.A.dylib/WLDataMigratorProtocol.h>

@class NSString;

@interface WLMigrator : NSObject <WLMigrationDataCoordinatorDelegate, WLDataMigratorProtocol> {

	NSString* _connectionKey;

}

@property (nonatomic,readonly) NSString * connectionKey;              //@synthesize connectionKey=_connectionKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_deviceType;
+(id)_systemVersion;
+(void)setStashDataLocally:(BOOL)arg1 ;
+(BOOL)stashDataLocally;
+(BOOL)_shouldContinueMigrationFromAnotherDevice;
+(unsigned long long)_bytesFreeOnDevice;
+(BOOL)_shouldTerminateMigrationBeforeImport;
+(id)_dataTypesAndSizesXMLDataFromMap:(id)arg1 ;
+(void)_parseDataTypesXMLData:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)_aggdStringForContentTypeToStatsMap:(id)arg1 aggregateStatistics:(id)arg2 metadata:(id)arg3 allowAllFields:(BOOL)arg4 ;
+(id)_unsupportedContentTypeAggdString;
+(id)_aggdStringForStatistics:(id)arg1 allowAllFields:(BOOL)arg2 confirmSelected:(BOOL)arg3 ;
+(id)_unselectedContentTypeAggdString;
+(unsigned long long)_bucketedUnsignedInteger:(unsigned long long)arg1 ;
+(void)_presentPromptForMigrableApps:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)databaseParentPathForMigrationDataCoordinator:(id)arg1 sqlController:(id)arg2 ;
-(id)downloadsParentPathForMigrationDataCoordinator:(id)arg1 ;
-(BOOL)migrationDataCoordinator:(id)arg1 shouldTerminateFetchWithError:(id)arg2 ;
-(void)_startMigrationWithSourceDevice:(id)arg1 usingRetryPolicies:(BOOL)arg2 delegate:(id)arg3 remoteDeviceDataSource:(id)arg4 dataCoordinatorDelegate:(id)arg5 didFinishMigrationContextSetupBlock:(/*^block*/id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_finishMigrationWithError:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_prepareMetadata:(id)arg1 usingRetryPolicies:(BOOL)arg2 allowContinuationFromAnotherDevice:(BOOL)arg3 ;
-(void)_deleteDownloadsPath:(id)arg1 ;
-(id)_fetchAccountsAndSummariesWithContext:(id)arg1 ;
-(id)_selectDataTypesWithContext:(id)arg1 ;
-(void)_setProgressTo:(double)arg1 context:(id)arg2 ;
-(void)_updateSourceWithProgress:(double)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_downloadDataWithContext:(id)arg1 ;
-(void)_reportTimeEstimatesWithContext:(id)arg1 ;
-(id)_importDataWithContext:(id)arg1 ;
-(void)_logMigratorAndAggregateStatisticsWithContext:(id)arg1 ;
-(BOOL)_shouldTerminateMigrationOnError;
-(void)_selectFromDataTypeToSizeMap:(id)arg1 device:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_shouldForceDownloadError;
-(void)_didFinishDownloadingSegmentOfSize:(unsigned long long)arg1 expectedSize:(unsigned long long)arg2 migratorEstimatesItemSizes:(BOOL)arg3 endDate:(id)arg4 context:(id)arg5 ;
-(double)_progressIncrementForImportedSummary:(id)arg1 summaries:(id)arg2 accounts:(id)arg3 migrators:(id)arg4 ;
-(void)_incrementProgressBy:(double)arg1 context:(id)arg2 ;
-(void)_cleanUpAfterFinalizeMigratableAppsWithSQLController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithConnectionKey:(id)arg1 ;
-(void)connectionDidEnd;
-(void)startMigrationWithSourceDevice:(id)arg1 usingRetryPolicies:(BOOL)arg2 delegate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)finalizeMigratableAppsWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)connectionKey;
@end

