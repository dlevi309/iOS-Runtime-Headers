/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/


@interface MTLibraryMigrationUtil : NSObject
+(BOOL)needsDataMigration;
+(BOOL)isNewInstall;
+(BOOL)createPersistentStoreForModel:(id)arg1 attemptMigration:(BOOL)arg2 ;
+(BOOL)needsCoreDataMigration;
+(BOOL)needsImageStoreMigration;
+(BOOL)isMomCompatible:(id)arg1 ;
@end

