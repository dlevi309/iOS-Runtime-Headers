/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)migrate;
-(void)migrateToPersistentHistoryIfNecessary;
-(id)initWithUploader:(id)arg1 uploadTracker:(id)arg2 managedObjectContext:(id)arg3 migratorContext:(id)arg4 ;
-(BOOL)checkForExistingMigrationMarker;
-(BOOL)readLastKnownChangeHubIndex:(unsigned long long*)arg1 ;
-(id)fetchChangeHubEventsSinceLastKnownIndex:(unsigned long long)arg1 ;
-(void)uploadEventResults:(id)arg1 ;
-(id)fetchAllPersistentHistoryTransactions;
-(void)updateSavedTokenFromPersistentHistoryResult:(id)arg1 ;
@end

