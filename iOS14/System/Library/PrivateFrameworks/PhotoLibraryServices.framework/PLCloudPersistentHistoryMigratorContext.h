/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLCloudPersistentHistoryMigratorContext
@required
-(id)readMigrationMarker;
-(void)saveTokenObject:(id)arg1;
-(void)setLocalVersion:(id)arg1;
-(id)readLocalVersion;
-(void)updateTransferCountsWithInsertedPhotoCount:(unsigned long long)arg1 insertedVideoCount:(unsigned long long)arg2;
-(void)setMigrationMarker:(id)arg1;
-(void)resetSyncDueToMigrationMarker;
-(void)setMigratedLocalVersion:(id)arg1;

@end

