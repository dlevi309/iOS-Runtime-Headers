/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <libobjc.A.dylib/MLMediaLibraryServiceClientProtocol.h>

@protocol OS_dispatch_queue, MLMediaLibraryServiceProtocol;
@class NSObject, NSXPCConnection, NSMutableDictionary, NSString;

@interface MLMediaLibraryService : NSObject <MLMediaLibraryServiceClientProtocol> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _replyQueue;
	NSXPCConnection* _serviceConnection;
	id<MLMediaLibraryServiceProtocol> _serviceProxy;
	NSMutableDictionary* _progressBlocksByUUID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMediaLibraryService;
+(void)_setDaemonProcessInfo:(id)arg1 ;
-(void)checkIntegrityOfDatabaseAtPath:(id)arg1 repairFaults:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)recreateDatabaseAtPath:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)performDatabaseOperation:(unsigned long long)arg1 withAttributes:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)init;
-(void)performMaintenanceTasksForDatabaseAtPath:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getLanguageResourcesWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelImportOperation:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)endTransaction:(id)arg1 shouldCommit:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)lockDatabaseForReason:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)updateSpotlightIndexForBundleID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)mediaLibraryResourcesServiceListenerEndpointWithError:(id*)arg1 ;
-(void)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(void)importOperationWithIdentifier:(id)arg1 didUpdateWithProgress:(float)arg2 ;
-(void)performDiagnosticWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)unlockDatabaseWithCompletion:(/*^block*/id)arg1 ;
-(void)beginTransactionForDatabaseAtPath:(id)arg1 withPriorityLevel:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)serviceTerminatedTransactionWithIdentifier:(id)arg1 error:(id)arg2 ;
-(id)clientImportServiceListenerEndpointWithError:(id*)arg1 ;
-(void)updateSpotlightIndexMetadataForItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setOptions:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_serviceConnection;
-(BOOL)validateDatabaseAtPath:(id)arg1 error:(id*)arg2 ;
-(void)performImport:(id)arg1 fromSource:(unsigned long long)arg2 withProgressBlock:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)attemptDatabaseFileRecoveryAtPath:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

