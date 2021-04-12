/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@interface MFUserDefaultMigrator : NSObject
+(id)log;
+(void)migrateDefaults:(id)arg1 ;
+(id)oldKeysToNewKeysMap;
+(void)migrateDefaultsFromOldKeysToNewKeys:(id)arg1 ;
+(id)_keysToMigrateToSharedAppGroup;
+(void)_migrateExtPropertiesPlist;
+(id)currentDeviceIdentifer;
+(void)migratePropertyForOldKey:(id)arg1 newKey:(id)arg2 ;
+(id)mobileMailDefaultForKey:(id)arg1 ;
+(void)removeMobileMailDefaultForKey:(id)arg1 ;
+(BOOL)migratePreferencesToSharedAppGroup;
@end

