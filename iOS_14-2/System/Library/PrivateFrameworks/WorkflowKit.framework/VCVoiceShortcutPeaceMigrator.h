/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class WFDatabase;

@interface VCVoiceShortcutPeaceMigrator : NSObject {

	WFDatabase* _database;

}

@property (nonatomic,readonly) WFDatabase * database;              //@synthesize database=_database - In the implementation block
+(void)migrateFromCloudKitIntoDatabaseIfNecessary:(id)arg1 ;
-(WFDatabase *)database;
-(id)initWithDatabase:(id)arg1 ;
-(BOOL)migrateWithError:(id*)arg1 ;
-(BOOL)migrateObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveRecord:(id)arg1 withIdentifier:(id)arg2 error:(id*)arg3 ;
@end

