/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <CoreData/NSPersistentContainer.h>

@class NSPersistentStore, NSArray, NSString, NSSet, RCDatabaseMetadata, NSCloudKitMirroringDelegateOptions, NSPersistentHistoryToken, NSMutableArray, NSDate;

@interface RCPersistentContainer : NSPersistentContainer {

	NSPersistentStore* _localStore;
	NSPersistentStore* _cloudStore;
	NSArray* _cloudStores;
	NSString* _cloudStoreIdentifier;
	NSString* _transactionAuthor;
	NSSet* _relevantProperties;
	RCDatabaseMetadata* _metadata;
	NSCloudKitMirroringDelegateOptions* _mirroringOptions;
	NSPersistentHistoryToken* _currentHistoryToken;
	NSPersistentHistoryToken* _latestHistoryToken;
	NSMutableArray* _transactionsBuffer;
	NSArray* _contextsToNotify;
	NSDate* _changeNotificationDate;

}

@property (nonatomic,readonly) NSPersistentStore * localStore;                                     //@synthesize localStore=_localStore - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * cloudStore;                                     //@synthesize cloudStore=_cloudStore - In the implementation block
@property (nonatomic,readonly) RCDatabaseMetadata * metadata;                                      //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateOptions * mirroringOptions;              //@synthesize mirroringOptions=_mirroringOptions - In the implementation block
+(void)initialize;
+(id)newObjectModel;
+(id)sharedContainer;
+(id)mirroringContainer;
-(RCDatabaseMetadata *)metadata;
-(NSCloudKitMirroringDelegateOptions *)mirroringOptions;
-(NSPersistentStore *)localStore;
-(NSPersistentStore *)cloudStore;
-(id)_initWithMirroring:(BOOL)arg1 useXPCStore:(BOOL)arg2 ;
-(void)_migrateDatabaseIfNecessary;
-(void)_handleRemoteChangeNotification:(id)arg1 ;
-(id)_nextTransactionAfterToken:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)_isRelevantTransaction:(id)arg1 ;
-(void)_handleRemoteChangeNotificationOnMainQueue:(id)arg1 ;
-(id)newContextWithConcurrencyType:(unsigned long long)arg1 ;
-(id)_valueForDatabaseProperty:(id)arg1 context:(id)arg2 ;
-(id)_fetchLegacyRecordingsForMigrationWithContext:(id)arg1 ;
-(void)_deleteOrphanedEntityRevisionsWithContext:(id)arg1 ;
-(id)_cloudRecordingsInContext:(id)arg1 ;
-(id)_legacyRecordingWithUniqueID:(id)arg1 context:(id)arg2 ;
@end

