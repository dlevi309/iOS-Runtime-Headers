/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@interface MTLibraryMigrationUtil : NSObject
+(BOOL)isMomCompatible:(id)arg1 ;
+(BOOL)isNewInstall;
+(BOOL)createPersistentStoreForModel:(id)arg1 attemptMigration:(BOOL)arg2 ;
+(BOOL)needsCoreDataMigration;
+(BOOL)needsDataMigration;
+(BOOL)needsImageStoreMigration;
@end

