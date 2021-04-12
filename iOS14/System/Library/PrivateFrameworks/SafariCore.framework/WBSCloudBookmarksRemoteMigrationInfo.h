/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithMigrationState:(long long)arg1 migratorDeviceIdentifier:(id)arg2 serverModificationDate:(id)arg3 ;
-(NSString *)migratorDeviceIdentifier;
-(NSDate *)serverModificationDate;
-(long long)migrationState;
@end

