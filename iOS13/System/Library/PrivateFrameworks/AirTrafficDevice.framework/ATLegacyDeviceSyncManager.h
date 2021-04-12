/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <AirTrafficDevice/AirTrafficDevice-Structs.h>
#import <AirTrafficDevice/ATDeviceSyncManager.h>
#import <libobjc.A.dylib/ATEnvironmentMonitorObserver.h>
#import <libobjc.A.dylib/ATSessionObserver.h>
#import <libobjc.A.dylib/ATLegacyAssetLinkProgressDelegate.h>

@protocol OS_dispatch_queue;
@class ATUserDefaults, ATClientController, ATDeviceDiskUsageProvider, NSObject, NSMutableArray, ATLegacyMessageLink, ATLegacyAssetLink, NSDate, NSMutableDictionary, NSString, ATAsset, ATSession, NSDictionary;

@interface ATLegacyDeviceSyncManager : ATDeviceSyncManager <ATEnvironmentMonitorObserver, ATSessionObserver, ATLegacyAssetLinkProgressDelegate> {

	ATUserDefaults* _defaults;
	ATClientController* _clientController;
	ATDeviceDiskUsageProvider* _diskUsageProvider;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _messageLinks;
	ATLegacyMessageLink* _currentMessageLink;
	ATLegacyAssetLink* _assetLink;
	NSMutableArray* _dataclasses;
	unsigned _grappaId;
	NSDate* _startTime;
	BOOL _localSyncRequestCanceled;
	BOOL _localSyncRequest;
	BOOL _automaticSync;
	/*^block*/id _clientProgressCallback;
	NSMutableDictionary* _dataclassTimers;
	unsigned _currentStage;
	NSString* _currentDataclass;
	NSString* _currentStatus;
	ATAsset* _currentAsset;
	double _currentSyncProgress;
	double _currentOverallProgress;
	CacheDeleteTokenRef _cacheDeleteToken;
	ATSession* _syncSession;
	NSDictionary* _currentSyncHostInfo;

}

@property (nonatomic,retain) ATSession * syncSession;                       //@synthesize syncSession=_syncSession - In the implementation block
@property (nonatomic,copy) NSDictionary * currentSyncHostInfo;              //@synthesize currentSyncHostInfo=_currentSyncHostInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)legacyDeviceSyncManager;
-(id)init;
-(void)_reset;
-(void)environmentMonitorDidChangePower:(id)arg1 ;
-(void)messageLinkWasOpened:(id)arg1 ;
-(void)messageLinkWasInitialized:(id)arg1 ;
-(void)messageLinkWasClosed:(id)arg1 ;
-(void)sessionWillBegin:(id)arg1 ;
-(void)session:(id)arg1 didUpdateSessionTask:(id)arg2 ;
-(void)session:(id)arg1 willBeginSessionTask:(id)arg2 ;
-(void)session:(id)arg1 didBeginSessionTask:(id)arg2 ;
-(void)sessionDidFinish:(id)arg1 ;
-(void)cancelSyncOnMessageLink:(id)arg1 ;
-(id)currentSyncState;
-(void)initiateSyncForLibrary:(id)arg1 onMessageLink:(id)arg2 ;
-(void)assetLink:(id)arg1 didUpdateOverallProgress:(double)arg2 ;
-(void)_sendSyncAllowed;
-(BOOL)_currentLinkIsWifiConnection;
-(void)_handleCapabilitiesMessage:(id)arg1 fromLink:(id)arg2 ;
-(void)_handleHostInfoMessage:(id)arg1 fromLink:(id)arg2 ;
-(void)_handleRequestingSyncMessage:(id)arg1 fromLink:(id)arg2 ;
-(void)_handleSyncFailedMessage:(id)arg1 fromLink:(id)arg2 ;
-(void)_handleFinishedSyncingMetadataMessage:(id)arg1 fromLink:(id)arg2 ;
-(void)_handleAssetMetricsMessage:(id)arg1 fromLink:(id)arg2 ;
-(void)_handleSyncStatusMessage:(id)arg1 fromLink:(id)arg2 ;
-(void)_sendInstalledAssets;
-(void)_sendDiskUsageForDataClasses:(id)arg1 updateFirst:(BOOL)arg2 ;
-(void)_reportLocalProgress;
-(void)setCurrentSyncHostInfo:(NSDictionary *)arg1 ;
-(id)_currentHostType;
-(void)_cancelExistingSyncSession;
-(void)_reconcileSyncWithMessage:(id)arg1 ;
-(ATSession *)syncSession;
-(void)setSyncSession:(ATSession *)arg1 ;
-(NSDictionary *)currentSyncHostInfo;
@end

