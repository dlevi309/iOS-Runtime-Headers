/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/PSYSyncCoordinatorDelegate.h>
#import <libobjc.A.dylib/VCCompanionSyncServiceDelegate.h>

@protocol VCSyncDataEndpoint, OS_dispatch_queue;
@class PSYSyncCoordinator, NSMutableSet, VCDaemonXPCEventHandler, NSObject, VCCompanionSyncService, NSString;

@interface VCWatchSyncCoordinator : NSObject <PSYSyncCoordinatorDelegate, VCCompanionSyncServiceDelegate> {

	PSYSyncCoordinator* _pairedSyncCoordinator;
	NSMutableSet* _startedSessions;
	id<VCSyncDataEndpoint> _syncDataEndpoint;
	VCDaemonXPCEventHandler* _eventHandler;
	NSObject*<OS_dispatch_queue> _queue;
	VCCompanionSyncService* _service;

}

@property (nonatomic,readonly) PSYSyncCoordinator * pairedSyncCoordinator;              //@synthesize pairedSyncCoordinator=_pairedSyncCoordinator - In the implementation block
@property (nonatomic,readonly) NSMutableSet * startedSessions;                          //@synthesize startedSessions=_startedSessions - In the implementation block
@property (nonatomic,readonly) id<VCSyncDataEndpoint> syncDataEndpoint;                 //@synthesize syncDataEndpoint=_syncDataEndpoint - In the implementation block
@property (nonatomic,readonly) VCDaemonXPCEventHandler * eventHandler;                  //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) VCCompanionSyncService * service;                        //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(VCDaemonXPCEventHandler *)eventHandler;
-(void)handleDidUnpairNotification:(id)arg1 ;
-(id)initWithSyncDataEndpoint:(id)arg1 eventHandler:(id)arg2 ;
-(NSMutableSet *)startedSessions;
-(BOOL)companionSyncServiceShouldStartSession:(id)arg1 ;
-(void)companionSyncService:(id)arg1 didRejectSessionWithError:(id)arg2 ;
-(void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2 ;
-(long long)companionSyncService:(id)arg1 typeForSession:(id)arg2 ;
-(PSYSyncCoordinator *)pairedSyncCoordinator;
-(void)companionSyncService:(id)arg1 didFinishSyncSession:(id)arg2 withError:(id)arg3 ;
-(void)handleDeviceDidChangeVersionNotification;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)companionSyncService:(id)arg1 outgoingSyncSessionDidFinishSendingChanges:(id)arg2 ;
-(id<VCSyncDataEndpoint>)syncDataEndpoint;
-(void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2 ;
-(void)stopObservingWatchChangeNotifications;
-(void)companionSyncService:(id)arg1 outgoingSyncSession:(id)arg2 didUpdateProgress:(double)arg3 ;
-(void)requestSyncIfUnrestricted;
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg1 ;
-(void)startObservingWatchChangeNotifications;
-(VCCompanionSyncService *)service;
-(void)dealloc;
@end

