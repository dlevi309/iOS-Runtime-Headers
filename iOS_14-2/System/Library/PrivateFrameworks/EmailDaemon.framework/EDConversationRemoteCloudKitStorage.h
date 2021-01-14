/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>
#import <libobjc.A.dylib/EDConversationRemoteStorage.h>
#import <libobjc.A.dylib/EFLoggable.h>

@protocol EDConversationRemoteStorageDelegate;
@class EDCloudMirroringPersistentStore, NSFetchedResultsController, NSPersistentHistoryToken, EDTransactionService, NSString;

@interface EDConversationRemoteCloudKitStorage : NSObject <NSFetchedResultsControllerDelegate, EDConversationRemoteStorage, EFLoggable> {

	BOOL _initialized;
	EDCloudMirroringPersistentStore* _mirroringPersistentStore;
	id<EDConversationRemoteStorageDelegate> _delegate;
	NSFetchedResultsController* _fetchedResultsController;
	NSPersistentHistoryToken* _historyToken;
	EDTransactionService* _exportTransaction;
	EDTransactionService* _importTransaction;

}

@property (nonatomic,readonly) EDCloudMirroringPersistentStore * mirroringPersistentStore;              //@synthesize mirroringPersistentStore=_mirroringPersistentStore - In the implementation block
@property (assign,nonatomic,__weak) id<EDConversationRemoteStorageDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSFetchedResultsController * fetchedResultsController;                   //@synthesize fetchedResultsController=_fetchedResultsController - In the implementation block
@property (assign,getter=isInitialized,nonatomic) BOOL initialized;                                     //@synthesize initialized=_initialized - In the implementation block
@property (nonatomic,retain) NSPersistentHistoryToken * historyToken;                                   //@synthesize historyToken=_historyToken - In the implementation block
@property (nonatomic,retain) EDTransactionService * exportTransaction;                                  //@synthesize exportTransaction=_exportTransaction - In the implementation block
@property (nonatomic,retain) EDTransactionService * importTransaction;                                  //@synthesize importTransaction=_importTransaction - In the implementation block
@property (assign,getter=isMigratedFromKVSStorage,nonatomic) BOOL migratedFromKVSStorage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)cloudKitAPSTopics;
-(id)storageName;
-(void)removeDictionaryForKey:(id)arg1 ;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isInitialized;
-(id)dictionaryRepresentation;
-(void)refresh;
-(id)dictionaryForKey:(id)arg1 ;
-(void)_handleDidResetSyncDataNotification:(id)arg1 ;
-(id<EDConversationRemoteStorageDelegate>)delegate;
-(id)dictionaryForConversationInfo:(id)arg1 ;
-(void)_removeConversationInfoWithId:(id)arg1 managedObjectContext:(id)arg2 ;
-(EDTransactionService *)exportTransaction;
-(void)persistHistoryToken;
-(id)_conversationInfoWithObjectId:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)_controlInManagedObjectContext:(id)arg1 ;
-(EDCloudMirroringPersistentStore *)mirroringPersistentStore;
-(void)_handleDuplicationsForConversationUUIDs:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)enumerateChangeHistorySinceToken:(id)arg1 managedObjectContext:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<EDConversationRemoteStorageDelegate>)arg1 ;
-(void)_initialSetup;
-(NSFetchedResultsController *)fetchedResultsController;
-(BOOL)synchronize;
-(id)initWithDelegate:(id)arg1 ;
-(void)_removeConversationInfoWithObjectId:(id)arg1 save:(BOOL)arg2 managedObjectContext:(id)arg3 ;
-(void)_handleWillResetSyncDataNotification:(id)arg1 ;
-(void)_requestExportWithManagedObjectContext:(id)arg1 ;
-(void)_requestImportWithManagedObjectContext:(id)arg1 ;
-(id)_transactionHistorySinceToken:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 ;
-(void)_retrieveChangesSinceLastRequestInManagedObjectContext:(id)arg1 ;
-(void)_updateConversationInfo:(id)arg1 withAnotherConversationInfo:(id)arg2 ;
-(void)setImportTransaction:(EDTransactionService *)arg1 ;
-(void)_recoverHistoryToken;
-(void)setMigratedFromKVSStorage:(BOOL)arg1 ;
-(NSPersistentHistoryToken *)historyToken;
-(id)allConversationInfosInManagedObjectContext:(id)arg1 ;
-(void)_requestFirstSyncWithManagedObjectContext:(id)arg1 ;
-(void)setHistoryToken:(NSPersistentHistoryToken *)arg1 ;
-(void)setExportTransaction:(EDTransactionService *)arg1 ;
-(void)setInitialized:(BOOL)arg1 ;
-(BOOL)isMigratedFromKVSStorage;
-(id)_conversationInfoWithUUID:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)_conversationInfosWithUUID:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)_handlePushNotification:(id)arg1 ;
-(void)_addOrUpdateConversationInfo:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)entityForConversationDictionary:(id)arg1 key:(id)arg2 managedObjectContext:(id)arg3 ;
-(EDTransactionService *)importTransaction;
@end

