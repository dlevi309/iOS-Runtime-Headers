/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/

#import <libobjc.A.dylib/DESService.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class NSXPCConnection, DESDeviceIdentifierStore, DESBundleRegistry, NSObject, NSMutableArray, NSHashTable, NSString;

@interface DESServiceConnection : NSObject <DESService> {

	double _connectionStartTime;
	NSXPCConnection* _connection;
	DESDeviceIdentifierStore* _identifierStore;
	DESBundleRegistry* _bundleRegistry;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _consumedSandboxExtensions;
	NSHashTable* _evaluationSessions;
	BOOL _hasSentActivityShouldDeferEvent;
	NSObject*<OS_xpc_object> _activity;

}

@property (readonly) DESDeviceIdentifierStore * _identifierStore; 
@property (nonatomic,readonly) NSObject*<OS_xpc_object> activity;              //@synthesize activity=_activity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)recordSetWithRecipeType:(id)arg1 nativeRecords:(id)arg2 coreDuetEventsUUIDs:(id)arg3 error:(id*)arg4 ;
-(void)_releaseSandboxExtensions;
-(void)_runEvaluationForBundleId:(id)arg1 recipeEvaluation:(id)arg2 attachments:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)taskIsDeferred;
-(id)init;
-(void)runLiveEvaluationForBundleId:(id)arg1 baseURL:(id)arg2 localeIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSObject*<OS_xpc_object>)activity;
-(void)fetchInstalledBundlesIdsWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteSavedRecordForBundleId:(id)arg1 identfier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_prepareEvaluationSessionForBundleId:(id)arg1 baseURL:(id)arg2 localeIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)saveCoreDuetEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)runEvaluationForBundleId:(id)arg1 recipePath:(id)arg2 recordUUIDs:(id)arg3 attachments:(id)arg4 sandboxExtensions:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)sendActivityShouldDeferEvent;
-(BOOL)_consumeSandboxExtensions:(id)arg1 error:(id*)arg2 ;
-(DESDeviceIdentifierStore *)_identifierStore;
-(void)fetchSavedRecordInfoForRecordType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchCoreDuetEventsForBundleId:(id)arg1 deviceIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)runLiveEvaluationForAllBundlesWithBaseURL:(id)arg1 localeIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)wakeUpWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchSavedRecordInfoForBundleId:(id)arg1 deviceIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchRecordsForBundleId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveRecordForBundleId:(id)arg1 data:(id)arg2 recordInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setValue:(id)arg1 forInfoKey:(id)arg2 bundleID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deleteAllSavedRecordsForBundleId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithXPCConnection:(id)arg1 activity:(id)arg2 ;
-(void)postRecipeResultForBundleId:(id)arg1 baseURL:(id)arg2 result:(id)arg3 recipeUUID:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)fetchNativeRecordDataForRecordUUID:(id)arg1 bundleId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_hasRecordAccessToBundleId:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)_runLiveEvaluationForBundleId:(id)arg1 baseURL:(id)arg2 localeIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchTelemetryForBundleId:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

