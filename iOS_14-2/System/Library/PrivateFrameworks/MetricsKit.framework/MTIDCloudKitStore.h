/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <libobjc.A.dylib/MTIDCloudKitLocalDBDelegate.h>
#import <libobjc.A.dylib/MTIDSecretStore.h>

@protocol OS_dispatch_queue, OS_os_transaction;
@class NSString, MTPromise, MTIDCloudKitLocalDB, NSObject, NSMutableDictionary, MTIDCloudKitPromiseManager;

@interface MTIDCloudKitStore : NSObject <MTIDCloudKitLocalDBDelegate, MTIDSecretStore> {

	BOOL _entitled;
	NSString* _containerIdentifier;
	MTPromise* _syncEnginePromise;
	MTIDCloudKitLocalDB* _localDB;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _generatedDates;
	NSObject*<OS_os_transaction> _transaction;
	MTIDCloudKitPromiseManager* _promiseManager;

}

@property (nonatomic,retain) NSString * containerIdentifier;                           //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (assign) BOOL entitled;                                                      //@synthesize entitled=_entitled - In the implementation block
@property (nonatomic,retain) MTPromise * syncEnginePromise;                            //@synthesize syncEnginePromise=_syncEnginePromise - In the implementation block
@property (nonatomic,retain) MTIDCloudKitLocalDB * localDB;                            //@synthesize localDB=_localDB - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                 //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * generatedDates;                     //@synthesize generatedDates=_generatedDates - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction;                 //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) MTIDCloudKitPromiseManager * promiseManager;              //@synthesize promiseManager=_promiseManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recordZoneID;
+(void)setTransactionTimeout:(double)arg1 ;
+(double)transactionTimeout;
+(id)recordIDForScheme:(id)arg1 date:(id)arg2 ;
+(void)populateRecord:(id)arg1 withNewSecretForScheme:(id)arg2 date:(id)arg3 ;
+(id)secretFromRecord:(id)arg1 ;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)accountDidChange:(id)arg1 ;
-(void)_endTransaction;
-(NSObject*<OS_os_transaction>)transaction;
-(void)_beginTransaction;
-(BOOL)entitled;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(void)setEntitled:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(MTIDCloudKitLocalDB *)localDB;
-(id)container;
-(id)debugInfo;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)secretForScheme:(id)arg1 options:(id)arg2 ;
-(void)clearLocalData;
-(void)setLocalDB:(MTIDCloudKitLocalDB *)arg1 ;
-(void)setGeneratedDates:(NSMutableDictionary *)arg1 ;
-(id)startSyncEngine;
-(void)setPromiseManager:(MTIDCloudKitPromiseManager *)arg1 ;
-(void)updateUserRecordID:(id)arg1 ;
-(void)setSyncEnginePromise:(MTPromise *)arg1 ;
-(MTPromise *)syncEnginePromise;
-(void)_generateFutureSecretsForScheme:(id)arg1 ;
-(NSMutableDictionary *)generatedDates;
-(id)recordWithID:(id)arg1 updateRecordMaybe:(/*^block*/id)arg2 error:(id*)arg3 ;
-(MTIDCloudKitPromiseManager *)promiseManager;
-(id)promiseForRecordWithID:(id)arg1 timeout:(double)arg2 updateRecordMaybe:(/*^block*/id)arg3 ;
-(void)generateFutureSecretsForScheme:(id)arg1 ;
-(void)cloudKitLocalDB:(id)arg1 didChangeRecord:(id)arg2 ;
-(id)initWithContainerIdentifer:(id)arg1 ;
@end

