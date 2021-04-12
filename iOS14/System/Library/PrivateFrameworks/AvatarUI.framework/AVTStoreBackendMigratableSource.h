/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTStoreBackendMigratableSource <NSObject>
@required
-(BOOL)migrationNeeded;
-(id)createSourceBackend;
-(BOOL)finalizeMigration:(id*)arg1;
-(id)migratedRecordFromRecord:(id)arg1 index:(unsigned long long)arg2 totalCount:(unsigned long long)arg3;

@end

