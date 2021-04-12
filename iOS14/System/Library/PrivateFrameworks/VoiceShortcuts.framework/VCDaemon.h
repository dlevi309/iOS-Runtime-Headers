/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@class VCXPCServer, VCDaemonDatabaseProvider, VCDaemonXPCEventHandler, VCDaemonSyncDataEndpoint, VCCoreDuetListener, VCWatchSyncCoordinator, VCSpotlightSyncService, VCShareSheetWorkflowStatusUpdater, WFSiriWorkflowVocabularyUpdater, WFRemoteExecutionCoordinator, VCCKShortcutSyncCoordinator;

@interface VCDaemon : NSObject {

	VCXPCServer* _xpcServer;
	VCDaemonDatabaseProvider* _databaseProvider;
	VCDaemonXPCEventHandler* _xpcEventHandler;
	VCDaemonSyncDataEndpoint* _syncDataEndpoint;
	VCCoreDuetListener* _coreDuetListener;
	VCWatchSyncCoordinator* _watchSyncCoordinator;
	VCSpotlightSyncService* _spotlightLibrarySyncService;
	VCShareSheetWorkflowStatusUpdater* _shareSheetStatusUpdater;
	WFSiriWorkflowVocabularyUpdater* _vocabularyUpdater;
	WFRemoteExecutionCoordinator* _remoteExecutionCoordinator;
	VCCKShortcutSyncCoordinator* _shortcutSyncCoordinator;

}

@property (nonatomic,readonly) VCXPCServer * xpcServer;                                                //@synthesize xpcServer=_xpcServer - In the implementation block
@property (nonatomic,readonly) VCDaemonDatabaseProvider * databaseProvider;                            //@synthesize databaseProvider=_databaseProvider - In the implementation block
@property (nonatomic,readonly) VCDaemonXPCEventHandler * xpcEventHandler;                              //@synthesize xpcEventHandler=_xpcEventHandler - In the implementation block
@property (nonatomic,readonly) VCDaemonSyncDataEndpoint * syncDataEndpoint;                            //@synthesize syncDataEndpoint=_syncDataEndpoint - In the implementation block
@property (nonatomic,readonly) VCCoreDuetListener * coreDuetListener;                                  //@synthesize coreDuetListener=_coreDuetListener - In the implementation block
@property (nonatomic,readonly) VCWatchSyncCoordinator * watchSyncCoordinator;                          //@synthesize watchSyncCoordinator=_watchSyncCoordinator - In the implementation block
@property (nonatomic,readonly) VCSpotlightSyncService * spotlightLibrarySyncService;                   //@synthesize spotlightLibrarySyncService=_spotlightLibrarySyncService - In the implementation block
@property (nonatomic,retain) VCShareSheetWorkflowStatusUpdater * shareSheetStatusUpdater;              //@synthesize shareSheetStatusUpdater=_shareSheetStatusUpdater - In the implementation block
@property (nonatomic,retain) WFSiriWorkflowVocabularyUpdater * vocabularyUpdater;                      //@synthesize vocabularyUpdater=_vocabularyUpdater - In the implementation block
@property (nonatomic,retain) WFRemoteExecutionCoordinator * remoteExecutionCoordinator;                //@synthesize remoteExecutionCoordinator=_remoteExecutionCoordinator - In the implementation block
@property (nonatomic,retain) VCCKShortcutSyncCoordinator * shortcutSyncCoordinator;                    //@synthesize shortcutSyncCoordinator=_shortcutSyncCoordinator - In the implementation block
+(id)sharedDaemon;
-(VCXPCServer *)xpcServer;
-(VCWatchSyncCoordinator *)watchSyncCoordinator;
-(id)init;
-(VCCKShortcutSyncCoordinator *)shortcutSyncCoordinator;
-(void)applicationWasUnregistered:(id)arg1 ;
-(void)start;
-(VCDaemonDatabaseProvider *)databaseProvider;
-(VCCoreDuetListener *)coreDuetListener;
-(VCSpotlightSyncService *)spotlightLibrarySyncService;
-(void)startEventObservation;
-(VCDaemonXPCEventHandler *)xpcEventHandler;
-(void)setShortcutSyncCoordinator:(VCCKShortcutSyncCoordinator *)arg1 ;
-(void)setVocabularyUpdater:(WFSiriWorkflowVocabularyUpdater *)arg1 ;
-(void)setRemoteExecutionCoordinator:(WFRemoteExecutionCoordinator *)arg1 ;
-(WFSiriWorkflowVocabularyUpdater *)vocabularyUpdater;
-(void)setShareSheetStatusUpdater:(VCShareSheetWorkflowStatusUpdater *)arg1 ;
-(VCDaemonSyncDataEndpoint *)syncDataEndpoint;
-(WFRemoteExecutionCoordinator *)remoteExecutionCoordinator;
-(VCShareSheetWorkflowStatusUpdater *)shareSheetStatusUpdater;
@end

