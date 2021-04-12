/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>

@class RCPersistentContainer, RCDatabaseMetadata, NSPersistentStore, NSManagedObjectContext, NSEntityDescription, RCSavedRecordingsController, NSCloudKitMirroringRequestOptions, NSArray, NSSet, NSData, NSPersistentContainer, NSString;

@interface RCSavedRecordingsModel : NSObject <NSFetchedResultsControllerDelegate> {

	RCPersistentContainer* _container;
	RCDatabaseMetadata* _metadata;
	NSPersistentStore* _localStore;
	NSPersistentStore* _cloudStore;
	NSManagedObjectContext* _context;
	NSEntityDescription* _cloudRecordingEntity;
	RCSavedRecordingsController* _recordingsController;
	RCSavedRecordingsController* _availableRecordingsController;
	RCSavedRecordingsController* _deletedRecordingsController;
	NSCloudKitMirroringRequestOptions* _mirroringRequestOptions;
	BOOL _valid;
	BOOL _disableSaveNotifications;
	long long _isSavingDisabledCount;

}

@property (assign) BOOL valid;                                                                           //@synthesize valid=_valid - In the implementation block
@property (assign,nonatomic) long long isSavingDisabledCount;                                            //@synthesize isSavingDisabledCount=_isSavingDisabledCount - In the implementation block
@property (assign,nonatomic) BOOL disableSaveNotifications;                                              //@synthesize disableSaveNotifications=_disableSaveNotifications - In the implementation block
@property (nonatomic,readonly) NSArray * allRecordings; 
@property (nonatomic,readonly) NSSet * audioProperties; 
@property (nonatomic,readonly) RCSavedRecordingsController * recordingsController;                       //@synthesize recordingsController=_recordingsController - In the implementation block
@property (nonatomic,readonly) RCSavedRecordingsController * availableRecordingsController;              //@synthesize availableRecordingsController=_availableRecordingsController - In the implementation block
@property (nonatomic,readonly) NSData * currentChangeToken; 
@property (nonatomic,readonly) NSPersistentContainer * container; 
@property (nonatomic,readonly) NSArray * deletedRecordings; 
@property (nonatomic,readonly) RCSavedRecordingsController * deletedRecordingsController;                //@synthesize deletedRecordingsController=_deletedRecordingsController - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * recordings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)importRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)sharedModelForMainQueue;
+(id)standardPathForRecordingWithCreationDate:(id)arg1 uniqueID:(id)arg2 ;
+(id)_dateFormatterComponentFormatting;
+(id)savedRecordingsDirectory;
+(id)_copyFileIntoRecordingsDirectory:(id)arg1 ;
+(id)currentLocationBasedName;
+(void)_importImportableRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)determineImportabilityOfRecordingWithAudioURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)_insertRecordingWithImportableAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)sharedModelForQueue:(id)arg1 ;
+(id)standardURLForRecordingWithCreationDate:(id)arg1 ;
+(id)startStoreServers:(/*^block*/id)arg1 ;
+(BOOL)migrateDatabaseIfNecessary;
+(id)cloudMirroringModel;
+(id)newSyncModel;
+(id)newPrivateModel;
+(id)standardPathForRecording:(id)arg1 ;
+(id)creationDateFromStandardRecordingURL:(id)arg1 ;
+(id)_moveFileIntoRecordingsDirectory:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(NSPersistentContainer *)container;
-(id)context;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(BOOL)valid;
-(NSData *)currentChangeToken;
-(id)mirroringOptions;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)setValid:(BOOL)arg1 ;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForDatabaseProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2 ;
-(BOOL)deleteDatabaseProperty:(id)arg1 ;
-(NSSet *)audioProperties;
-(id)metadataValueForKey:(id)arg1 ;
-(id)cloudStore;
-(BOOL)saveIfNecessary:(id*)arg1 ;
-(id)_initWithContainer:(id)arg1 concurrencyType:(unsigned long long)arg2 ;
-(void)_scheduleAutomaticRecordingDeletions;
-(id)recordingWithID:(id)arg1 ;
-(NSArray *)recordings;
-(id)_recordingsWithUniqueID:(id)arg1 templateName:(id)arg2 ;
-(void)_enumerateRecordingsWithEntityDescription:(id)arg1 propertiesToFetch:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)enumerateChangeHistorySinceToken:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateFetchedRecordingTitles:(/*^block*/id)arg1 ;
-(id)_transactionHistorySinceToken:(id)arg1 ;
-(id)currentPersistentHistoryToken;
-(id)_allTitles;
-(id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 customTitleBase:(id)arg4 uniqueID:(id)arg5 ;
-(void)saveIfNecessary;
-(id)nextRecordingDefaultLabelWithCustomTitleBase:(id)arg1 ;
-(void)performWithSavingDisabled:(/*^block*/id)arg1 ;
-(void)eraseRecording:(id)arg1 ;
-(id)_labelPresetsForQuery:(id)arg1 ;
-(BOOL)__saveManagedObjectContext:(id*)arg1 ;
-(void)_synchronizeRecordingsMetadata;
-(void)_deliverSaveNotifications;
-(BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2 save:(BOOL)arg3 ;
-(void)enumerateExistingRecordingsWithBlock:(/*^block*/id)arg1 ;
-(id)recordingWithUniqueID:(id)arg1 ;
-(void)deleteRecording:(id)arg1 ;
-(void)_deleteRecordingsWithDurationLessThan:(double)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 customLabelBase:(id)arg4 ;
-(id)cloudRecordingEntity;
-(id)mirroringRequestOptions;
-(NSArray *)allRecordings;
-(id)recordingAtIndex:(unsigned long long)arg1 ;
-(id)indexPathForRecording:(id)arg1 ;
-(id)recordingWithURIRepresentation:(id)arg1 ;
-(id)recordingWithITunesPersistentID:(long long)arg1 ;
-(id)recordingWithPath:(id)arg1 ;
-(id)mostRecentRecording;
-(id)recordingsWithUniqueID:(id)arg1 ;
-(id)recordingsWithPredicate:(id)arg1 ;
-(id)enumerateExistingRecordingsSinceChangeToken:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)transactionForToken:(id)arg1 ;
-(void)setTitle:(id)arg1 ofRecording:(id)arg2 ;
-(void)restoreDeletedRecording:(id)arg1 ;
-(NSArray *)deletedRecordings;
-(void)eraseRecordingsDeletedBeforeDate:(id)arg1 ;
-(void)eraseAllDeleted;
-(id)duplicateRecording:(id)arg1 error:(id*)arg2 ;
-(void)mergeRecordings:(id)arg1 allTransactions:(id)arg2 ;
-(BOOL)hasExistingRecordingForAudioFile:(id)arg1 ;
-(id)recordingsForSpotlightSearch:(id)arg1 ;
-(void)finishSaveByUpdatingSearchableIndexWithChangeContext:(id)arg1 ;
-(void)performBlockAndWaitInTemporaryContext:(/*^block*/id)arg1 ;
-(BOOL)resetCloud:(/*^block*/id)arg1 ;
-(BOOL)exportToCloud:(/*^block*/id)arg1 ;
-(BOOL)importFromCloud:(/*^block*/id)arg1 ;
-(BOOL)fetchObjectsFromCloud:(id)arg1 entityToAttributesToFetch:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)fetchExportProgress:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)nextRecordingDefaultLabelWithCustomLabelBase:(id)arg1 ;
-(id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 ;
-(long long)isSavingDisabledCount;
-(void)setIsSavingDisabledCount:(long long)arg1 ;
-(BOOL)disableSaveNotifications;
-(void)setDisableSaveNotifications:(BOOL)arg1 ;
-(RCSavedRecordingsController *)recordingsController;
-(RCSavedRecordingsController *)availableRecordingsController;
-(RCSavedRecordingsController *)deletedRecordingsController;
@end

