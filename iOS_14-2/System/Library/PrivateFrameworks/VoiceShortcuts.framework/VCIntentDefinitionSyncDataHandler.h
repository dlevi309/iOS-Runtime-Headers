/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <VoiceShortcuts/VCSyncDataHandler.h>

@class VCDaemonXPCEventHandler;

@interface VCIntentDefinitionSyncDataHandler : VCSyncDataHandler {

	VCDaemonXPCEventHandler* _eventHandler;

}

@property (nonatomic,readonly) VCDaemonXPCEventHandler * eventHandler;              //@synthesize eventHandler=_eventHandler - In the implementation block
+(int)messageType;
-(VCDaemonXPCEventHandler *)eventHandler;
-(BOOL)markChangesAsSynced:(id)arg1 withSyncService:(id)arg2 metadata:(id)arg3 error:(id*)arg4 ;
-(void)installedApplicationsDidChange:(id)arg1 ;
-(BOOL)resetSyncStateForService:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyChanges:(id)arg1 fromSyncService:(id)arg2 error:(id*)arg3 ;
-(id)initWithEventHandler:(id)arg1 ;
-(BOOL)deleteSyncedData:(id*)arg1 ;
-(id)unsyncedChangesForSyncService:(id)arg1 metadata:(id*)arg2 error:(id*)arg3 ;
-(void)dealloc;
@end

