/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@interface WFCloudKitSyncSession : NSObject
+(void)initialize;
+(BOOL)zoneWasPurged;
+(void)setZoneWasPurged:(BOOL)arg1 ;
+(void)setIgnoresUserDeletedZoneErrors:(BOOL)arg1 ;
+(BOOL)needsDefaultShortcutUpdate;
+(void)setVoiceShortcutMigrationDidRun:(BOOL)arg1 ;
+(BOOL)voiceShortcutMigrationDidRun;
+(void)setDefaultShortcutsVersion:(long long)arg1 ;
+(long long)defaultShortcutsVersion;
+(long long)currentDefaultShortcutsVersion;
+(long long)lastSyncedFlagsHash;
+(void)setSyncEnabled:(BOOL)arg1 ;
+(long long)syncedFlagsHash;
+(void)fetchCloudKitSyncFlagsIfNecessaryWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)setLastSyncedFlagsHash:(long long)arg1 ;
+(BOOL)voiceShortcutMigrationDidSync;
+(BOOL)isSyncEnabled;
+(BOOL)ignoresUserDeletedZoneErrors;
+(void)setVoiceShortcutMigrationDidSync:(BOOL)arg1 ;
-(id)applyConflictResolution:(id)arg1 inDatabase:(id)arg2 ;
@end

