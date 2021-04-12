/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class ATConnection;

@interface SBModelessSyncController : NSObject {

	BOOL _isAppSyncing;
	BOOL _isSyncing;
	int _syncRegistrationToken;
	int _iCloudRestoreToken;
	BOOL _restoringFromICloud;
	BOOL _isAutoSyncing;
	BOOL _isWirelessSyncing;
	ATConnection* _airTrafficConnection;

}

@property (nonatomic,readonly) BOOL isAppSyncing;                       //@synthesize isAppSyncing=_isAppSyncing - In the implementation block
@property (nonatomic,readonly) BOOL isSyncing;                          //@synthesize isSyncing=_isSyncing - In the implementation block
@property (nonatomic,readonly) BOOL isRestoringFromICloud; 
@property (nonatomic,readonly) BOOL isAutoSyncing;                      //@synthesize isAutoSyncing=_isAutoSyncing - In the implementation block
@property (nonatomic,readonly) BOOL isWirelessSyncing;                  //@synthesize isWirelessSyncing=_isWirelessSyncing - In the implementation block
+(id)sharedInstance;
-(void)connectionWasInterrupted:(id)arg1 ;
-(BOOL)isWirelessSyncing;
-(BOOL)isAutoSyncing;
-(id)init;
-(void)_endObservingICloudRestoreStatus;
-(void)_updateIconsForStateChange;
-(BOOL)isRestoringFromICloud;
-(BOOL)isSyncing;
-(BOOL)isAppSyncing;
-(void)beginMonitoring;
-(void)_setAppSyncState:(BOOL)arg1 ;
-(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
-(void)gotLowBatteryWarning;
-(void)_iCloudStatusChanged;
-(void)setIsSyncing:(BOOL)arg1 ;
-(void)_beginObservingICloudRestoreStatus;
-(void)_appSyncStateChanged;
-(void)dealloc;
-(void)endMonitoring;
@end

