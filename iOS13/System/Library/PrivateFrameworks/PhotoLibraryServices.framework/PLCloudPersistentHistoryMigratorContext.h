/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLCloudPersistentHistoryMigratorContext
@required
-(id)readMigrationMarker;
-(void)setMigrationMarker:(id)arg1;
-(void)setMigratedLocalVersion:(id)arg1;
-(void)setLocalVersion:(id)arg1;
-(id)readLocalVersion;
-(void)resetSyncDueToMigrationMarker;
-(void)saveTokenObject:(id)arg1;
-(void)updateTransferCountsWithInsertedPhotoCount:(unsigned long long)arg1 insertedVideoCount:(unsigned long long)arg2;

@end

