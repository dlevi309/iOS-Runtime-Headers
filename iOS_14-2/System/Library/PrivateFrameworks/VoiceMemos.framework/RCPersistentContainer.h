/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <CoreData/NSPersistentContainer.h>

@class NSPersistentStore, NSArray, NSString, NSSet, RCDatabaseMetadata, NSCloudKitMirroringDelegateOptions, NSPersistentHistoryToken, NSMutableArray, NSDate;

@interface RCPersistentContainer : NSPersistentContainer {

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

@property (nonatomic,readonly) NSPersistentStore * cloudStore;                                     //@synthesize cloudStore=_cloudStore - In the implementation block
@property (nonatomic,readonly) RCDatabaseMetadata * metadata;                                      //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateOptions * mirroringOptions;              //@synthesize mirroringOptions=_mirroringOptions - In the implementation block
+(void)initialize;
+(id)mirroringContainer;
+(id)newObjectModel;
+(id)sharedContainer;
-(id)_initWithMirroring:(BOOL)arg1 useXPCStore:(BOOL)arg2 ;
-(id)_fetchLegacyRecordingsForMigrationWithContext:(id)arg1 ;
-(id)_nextTransactionAfterToken:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)_isRelevantTransaction:(id)arg1 ;
-(id)newContextWithConcurrencyType:(unsigned long long)arg1 ;
-(void)_deleteOrphanedEntityRevisionsWithContext:(id)arg1 ;
-(void)_migrateDatabaseIfNecessary:(id)arg1 ;
-(void)_handleRemoteChangeNotificationOnMainQueue:(id)arg1 ;
-(void)_handleRemoteChangeNotification:(id)arg1 ;
-(NSPersistentStore *)cloudStore;
-(id)_valueForDatabaseProperty:(id)arg1 context:(id)arg2 ;
-(id)_legacyRecordingWithUniqueID:(id)arg1 context:(id)arg2 ;
-(NSCloudKitMirroringDelegateOptions *)mirroringOptions;
-(RCDatabaseMetadata *)metadata;
-(id)_cloudRecordingsInContext:(id)arg1 ;
@end

