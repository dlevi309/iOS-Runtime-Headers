/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>
#import <libobjc.A.dylib/CSTrialAssetDownloadMonitorDelegate.h>

@class CSTrialAssetDownloadMonitor, NSString;

@interface CSAdBlockerAssetDownloadMonitor : CSEventMonitor <CSTrialAssetDownloadMonitorDelegate> {

	int _notifyToken;
	unsigned long long _lastUpdatedAssetType;
	CSTrialAssetDownloadMonitor* _monitor;

}

@property (nonatomic,retain) CSTrialAssetDownloadMonitor * monitor;              //@synthesize monitor=_monitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(CSTrialAssetDownloadMonitor *)monitor;
-(void)setMonitor:(CSTrialAssetDownloadMonitor *)arg1 ;
-(void)_notifyObserver:(id)arg1 ;
-(const char*)_notificationKey;
-(void)trialAssetDownloadMonitorDelegate:(id)arg1 didInstallNewAsset:(BOOL)arg2 assetType:(unsigned long long)arg3 ;
-(void)_didInstalledNewAdBlockerAsset;
@end

