/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <VoiceShortcuts/VCDatabaseSyncDataHandler.h>

@interface VCWorkflowSyncDataHandler : VCDatabaseSyncDataHandler
+(int)messageType;
-(id)initWithDatabase:(id)arg1 ;
-(id)unsyncedChangesForSyncService:(id)arg1 metadata:(id*)arg2 error:(id*)arg3 ;
-(BOOL)markChangesAsSynced:(id)arg1 withSyncService:(id)arg2 metadata:(id)arg3 error:(id*)arg4 ;
-(BOOL)resetSyncStateForService:(id)arg1 error:(id*)arg2 ;
@end

