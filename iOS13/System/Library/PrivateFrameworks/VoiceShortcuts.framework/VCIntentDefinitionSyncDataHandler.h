/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <VoiceShortcuts/VCSyncDataHandler.h>

@class VCDaemonXPCEventHandler;

@interface VCIntentDefinitionSyncDataHandler : VCSyncDataHandler {

	VCDaemonXPCEventHandler* _eventHandler;

}

@property (nonatomic,readonly) VCDaemonXPCEventHandler * eventHandler;              //@synthesize eventHandler=_eventHandler - In the implementation block
+(int)messageType;
+(id)definitionDirectoryURL;
+(id)syncDirectoryURLForBundleIdentifier:(id)arg1 ;
-(void)dealloc;
-(VCDaemonXPCEventHandler *)eventHandler;
-(void)installedApplicationsDidChange:(id)arg1 ;
-(id)initWithEventHandler:(id)arg1 ;
-(BOOL)applyChanges:(id)arg1 fromSyncService:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteSyncedData:(id*)arg1 ;
-(id)unsyncedChangesForSyncService:(id)arg1 metadata:(id*)arg2 error:(id*)arg3 ;
-(BOOL)markChangesAsSynced:(id)arg1 withSyncService:(id)arg2 metadata:(id)arg3 error:(id*)arg4 ;
-(BOOL)resetSyncStateForService:(id)arg1 error:(id*)arg2 ;
@end

