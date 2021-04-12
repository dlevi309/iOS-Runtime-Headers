/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLCloudPersistentHistoryMigratorContext;
@class PLCloudBatchUploader, PLCloudPhotoLibraryUploadTracker, NSManagedObjectContext;

@interface PLCloudPersistentHistoryMigrator : NSObject {

	PLCloudBatchUploader* _uploader;
	PLCloudPhotoLibraryUploadTracker* _uploadTracker;
	NSManagedObjectContext* _managedObjectContext;
	id<PLCloudPersistentHistoryMigratorContext> _migratorContext;

}
+(void)migrateToPersistentHistoryIfNecessaryWithUploader:(id)arg1 uploadTracker:(id)arg2 managedObjectContext:(id)arg3 migratorContext:(id)arg4 ;
-(id)initWithUploader:(id)arg1 uploadTracker:(id)arg2 managedObjectContext:(id)arg3 migratorContext:(id)arg4 ;
-(void)migrateToPersistentHistoryIfNecessary;
-(long long)migrate;
-(BOOL)checkForExistingMigrationMarker;
-(BOOL)readLastKnownChangeHubIndex:(unsigned long long*)arg1 ;
-(id)fetchChangeHubEventsSinceLastKnownIndex:(unsigned long long)arg1 ;
-(id)fetchAllPersistentHistoryTransactions;
-(void)uploadEventResults:(id)arg1 ;
-(void)updateSavedTokenFromPersistentHistoryResult:(id)arg1 ;
@end

