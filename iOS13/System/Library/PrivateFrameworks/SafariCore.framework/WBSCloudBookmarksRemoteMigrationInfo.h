/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


@class NSString, NSDate;

@interface WBSCloudBookmarksRemoteMigrationInfo : NSObject {

	long long _migrationState;
	NSString* _migratorDeviceIdentifier;
	NSDate* _serverModificationDate;

}

@property (nonatomic,readonly) long long migrationState;                              //@synthesize migrationState=_migrationState - In the implementation block
@property (nonatomic,copy,readonly) NSString * migratorDeviceIdentifier;              //@synthesize migratorDeviceIdentifier=_migratorDeviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * serverModificationDate;                       //@synthesize serverModificationDate=_serverModificationDate - In the implementation block
-(id)init;
-(long long)migrationState;
-(id)initWithMigrationState:(long long)arg1 migratorDeviceIdentifier:(id)arg2 serverModificationDate:(id)arg3 ;
-(NSString *)migratorDeviceIdentifier;
-(NSDate *)serverModificationDate;
@end

