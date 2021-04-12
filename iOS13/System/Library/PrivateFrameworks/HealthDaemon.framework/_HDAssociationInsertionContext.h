/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSUUID, HDProfile, HDSQLiteDatabase;

@interface _HDAssociationInsertionContext : NSObject {

	BOOL _enforceSameSource;
	BOOL _permitPendingAssociations;
	NSUUID* _parentUUID;
	HDProfile* _profile;
	HDSQLiteDatabase* _database;

}

@property (nonatomic,copy,readonly) NSUUID * parentUUID;                    //@synthesize parentUUID=_parentUUID - In the implementation block
@property (nonatomic,readonly) BOOL enforceSameSource;                      //@synthesize enforceSameSource=_enforceSameSource - In the implementation block
@property (nonatomic,readonly) BOOL permitPendingAssociations;              //@synthesize permitPendingAssociations=_permitPendingAssociations - In the implementation block
@property (nonatomic,readonly) HDProfile * profile;                         //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HDSQLiteDatabase * database;                 //@synthesize database=_database - In the implementation block
-(HDSQLiteDatabase *)database;
-(HDProfile *)profile;
-(NSUUID *)parentUUID;
-(id)initWithParentUUID:(id)arg1 enforceSameSource:(BOOL)arg2 permitPendingAssociations:(BOOL)arg3 profile:(id)arg4 database:(id)arg5 ;
-(BOOL)enforceSameSource;
-(BOOL)permitPendingAssociations;
@end

