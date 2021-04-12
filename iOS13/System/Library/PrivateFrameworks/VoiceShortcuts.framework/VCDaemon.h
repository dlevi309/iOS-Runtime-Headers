/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@class VCXPCServer, VCDaemonDatabaseProvider, VCDaemonXPCEventHandler, VCDaemonSyncDataEndpoint, VCCoreDuetListener, VCWatchSyncCoordinator, VCSpotlightSyncService, VCCKNotificationCenter, VCShareSheetWorkflowStatusUpdater;

@interface VCDaemon : NSObject {

	VCXPCServer* _xpcServer;
	VCDaemonDatabaseProvider* _databaseProvider;
	VCDaemonXPCEventHandler* _xpcEventHandler;
	VCDaemonSyncDataEndpoint* _syncDataEndpoint;
	VCCoreDuetListener* _coreDuetListener;
	VCWatchSyncCoordinator* _watchSyncCoordinator;
	VCSpotlightSyncService* _spotlightLibrarySyncService;
	VCCKNotificationCenter* _cloudKitNotificationCenter;
	VCShareSheetWorkflowStatusUpdater* _shareSheetStatusUpdater;

}

@property (nonatomic,readonly) VCXPCServer * xpcServer;                                                //@synthesize xpcServer=_xpcServer - In the implementation block
@property (nonatomic,readonly) VCDaemonDatabaseProvider * databaseProvider;                            //@synthesize databaseProvider=_databaseProvider - In the implementation block
@property (nonatomic,readonly) VCDaemonXPCEventHandler * xpcEventHandler;                              //@synthesize xpcEventHandler=_xpcEventHandler - In the implementation block
@property (nonatomic,readonly) VCDaemonSyncDataEndpoint * syncDataEndpoint;                            //@synthesize syncDataEndpoint=_syncDataEndpoint - In the implementation block
@property (nonatomic,readonly) VCCoreDuetListener * coreDuetListener;                                  //@synthesize coreDuetListener=_coreDuetListener - In the implementation block
@property (nonatomic,readonly) VCWatchSyncCoordinator * watchSyncCoordinator;                          //@synthesize watchSyncCoordinator=_watchSyncCoordinator - In the implementation block
@property (nonatomic,readonly) VCSpotlightSyncService * spotlightLibrarySyncService;                   //@synthesize spotlightLibrarySyncService=_spotlightLibrarySyncService - In the implementation block
@property (nonatomic,retain) VCCKNotificationCenter * cloudKitNotificationCenter;                      //@synthesize cloudKitNotificationCenter=_cloudKitNotificationCenter - In the implementation block
@property (nonatomic,retain) VCShareSheetWorkflowStatusUpdater * shareSheetStatusUpdater;              //@synthesize shareSheetStatusUpdater=_shareSheetStatusUpdater - In the implementation block
+(id)sharedDaemon;
-(id)init;
-(void)start;
-(VCDaemonDatabaseProvider *)databaseProvider;
-(VCXPCServer *)xpcServer;
-(VCDaemonSyncDataEndpoint *)syncDataEndpoint;
-(VCCoreDuetListener *)coreDuetListener;
-(void)startEventObservation;
-(void)applicationWasUnregistered:(id)arg1 ;
-(void)assistantPreferencesDidChange;
-(VCDaemonXPCEventHandler *)xpcEventHandler;
-(VCWatchSyncCoordinator *)watchSyncCoordinator;
-(VCSpotlightSyncService *)spotlightLibrarySyncService;
-(VCCKNotificationCenter *)cloudKitNotificationCenter;
-(void)setCloudKitNotificationCenter:(VCCKNotificationCenter *)arg1 ;
-(VCShareSheetWorkflowStatusUpdater *)shareSheetStatusUpdater;
-(void)setShareSheetStatusUpdater:(VCShareSheetWorkflowStatusUpdater *)arg1 ;
@end

