/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTStoreBackendMigratableSource <NSObject>
@required
-(BOOL)migrationNeeded;
-(id)createSourceBackend;
-(BOOL)finalizeMigration:(id*)arg1;
-(id)migratedRecordFromRecord:(id)arg1 index:(unsigned long long)arg2 totalCount:(unsigned long long)arg3;

@end

