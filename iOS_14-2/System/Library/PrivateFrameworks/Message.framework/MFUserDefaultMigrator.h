/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@interface MFUserDefaultMigrator : NSObject
+(id)log;
+(id)oldKeysToNewKeysMap;
+(id)_keysToMigrateToSharedAppGroup;
+(void)migrateDefaultsFromOldKeysToNewKeys:(id)arg1 ;
+(void)_migrateExtPropertiesPlist;
+(id)currentDeviceIdentifer;
+(void)migratePropertyForOldKey:(id)arg1 newKey:(id)arg2 ;
+(id)mobileMailDefaultForKey:(id)arg1 ;
+(void)removeMobileMailDefaultForKey:(id)arg1 ;
+(BOOL)migratePreferencesToSharedAppGroup;
+(void)migrateDefaults:(id)arg1 ;
@end

