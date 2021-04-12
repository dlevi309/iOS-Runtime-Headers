/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(VCCompanionSyncService *)service;
-(VCDaemonXPCEventHandler *)eventHandler;
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg1 ;
-(void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2 ;
-(void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2 ;
-(id<VCSyncDataEndpoint>)syncDataEndpoint;
-(void)companionSyncService:(id)arg1 outgoingSyncSession:(id)arg2 didUpdateProgress:(double)arg3 ;
-(void)companionSyncService:(id)arg1 outgoingSyncSessionDidFinishSendingChanges:(id)arg2 ;
-(void)companionSyncService:(id)arg1 didFinishSyncSession:(id)arg2 withError:(id)arg3 ;
-(void)companionSyncService:(id)arg1 didRejectSessionWithError:(id)arg2 ;
-(BOOL)companionSyncServiceShouldStartSession:(id)arg1 ;
-(long long)companionSyncService:(id)arg1 typeForSession:(id)arg2 ;
-(void)requestSyncIfUnrestricted;
-(id)initWithSyncDataEndpoint:(id)arg1 eventHandler:(id)arg2 ;
-(void)startObservingWatchChangeNotifications;
-(void)stopObservingWatchChangeNotifications;
-(void)handleDeviceDidChangeVersionNotification;
-(void)handleDidUnpairNotification:(id)arg1 ;
-(PSYSyncCoordinator *)pairedSyncCoordinator;
-(NSMutableSet *)startedSessions;
@end

